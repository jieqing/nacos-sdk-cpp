#include <stdlib.h>
#include "server/ServerListManager.h"
#include "PropertyKeyConst.h"
#include "Parameters.h"
#include "Debug.h"
#include "json/JSON.h"

using namespace std;

void ServerListManager::initParams()
{
	contentPath = DEFAULT_CONTEXT_PATH;
}

void ServerListManager::initSrvListWithAddress(NacosString &address)
{
	//If the address doesn't contain port, add 8848 as the default port for it
	if (address.find(':') == std::string::npos)
	{
		//TODO:dynamically read default port, don't use hard-coded value
		serverList.push_back( address + ":8848");
	}
	else
	{
		serverList.push_back(address);
	}
}


ServerListManager::ServerListManager(std::list<NacosString> &fixed)
{
	initParams();
	for (std::list<NacosString>::iterator it = fixed.begin(); it != fixed.end(); it++)
	{
		initSrvListWithAddress(*it);
	}
}

NacosString ServerListManager::getCurrentServerAddr()
{
	//TODO:Currently we just choose a server randomly,
	//later we should sort it according to the java client and use cache
	size_t max_serv_slot = serverList.size();
	srand(time(NULL));
	int to_skip = rand() % max_serv_slot;
	std::list<NacosString>::iterator it = serverList.begin();
	for (int skipper = 0; skipper < to_skip; skipper++)
	{
		it++;
	}
	
	return *it;
}

ServerListManager::ServerListManager(Properties &props) throw(NacosException)
{
	initParams();
	serverList.clear();
	//TODO:endpoint is not implemented
	if (props.count(PropertyKeyConst::SERVER_ADDR) <= 0)
	{
		throw NacosException(NacosException::CLIENT_INVALID_PARAM, "endpoint is blank");
	}
	
	NacosString server_addr = props[PropertyKeyConst::SERVER_ADDR];
	size_t start_pos = 0;
	size_t cur_pos = 0;
	cur_pos = server_addr.find(',', start_pos);
	
	//break the string with ',' separator
	while (cur_pos != std::string::npos)
	{
		NacosString cur_addr = server_addr.substr(start_pos, cur_pos - start_pos);
		initSrvListWithAddress(cur_addr);
		start_pos = cur_pos + 1;
		cur_pos = server_addr.find(',', start_pos);
	}
	
	//deal with the last string
	NacosString last_addr = server_addr.substr(start_pos);
	initSrvListWithAddress(last_addr);
}

std::map<NacosString, NacosServerInfo> ServerListManager::getServerList()
{
    NacosString url = getCurrentServerAddr() + "/" + DEFAULT_CONTEXT_PATH + "/" + PROTOCOL_VERSION + "/" + GET_SERVERS_PATH;

    std::list<NacosString> headers;
    std::list<NacosString> paramValues;


    size_t maxSvrSlot = serverList.size();
    if (maxSvrSlot == 0)
    {
        throw NacosException(0, "failed to get nacos servers, raison: no server(s) available");
    }
    log_debug("nr_servers:%d\n", maxSvrSlot);
    srand(time(NULL));
    size_t selectedServer = rand() % maxSvrSlot;
    log_debug("selected_server:%d\n", selectedServer);

    NacosString errmsg;
    for (size_t i = 0; i < serverList.size(); i++)
    {
        NacosString server = ParamUtils::getNthElem(serverList, selectedServer);
        log_debug("Trying to access server:%s\n", server.c_str());
        try
        {
            HttpResult serverRes = httpCli->httpGet(url, headers, paramValues, NULLSTR, 3000);//TODO:readTimeout to a constant
            return JSON::Json2NacosServerInfo(serverRes.content);
        }
        catch (NacosException &e)
        {
            errmsg = e.what();
            log_error("request %s failed.\n", server.c_str());
        }
        catch (exception &e)
        {
            errmsg = e.what();
            log_error("request %s failed.\n", server.c_str());
        }

        selectedServer = (selectedServer + 1) % serverList.size();
    }

    throw NacosException(0, "failed to get nacos servers after all servers(" + ParamUtils::Implode(serverList) + ") tried: "
                            + errmsg);
}

std::map<NacosString, NacosServerInfo> ServerListManager::__debug()
{
    return getServerList();
}