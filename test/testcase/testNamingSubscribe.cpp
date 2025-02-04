#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "factory/NacosServiceFactory.h"
#include "ResourceGuard.h"
#include "naming/subscribe/EventListener.h"
#include "constant/PropertyKeyConst.h"
#include "DebugAssertion.h"
#include "src/log/Logger.h"

using namespace std;
using namespace nacos;

class MyServiceListener : public EventListener {
private:
    int num;
public:
    MyServiceListener(int num) {
        this->num = num;
    }

    void receiveNamingInfo(const ServiceInfo &serviceInfo){
        cout << "===================================" << endl;
        cout << "Watcher: " << num << endl;
        cout << "Watched service UPDATED: " << serviceInfo.toInstanceString() << endl;
        cout << "===================================" << endl;

    }
};

bool testListenService() {
    cout << "in function testListenService" << endl;
    Properties props;
    props[PropertyKeyConst::SERVER_ADDR] = "127.0.0.1:8848";
    props[PropertyKeyConst::LOCAL_IP] = "127.0.0.1";
    ADD_AUTH_INFO(props);
    ADD_SPAS_INFO(props);
    NacosServiceFactory *factory = new NacosServiceFactory(props);
    ResourceGuard <NacosServiceFactory> _guardFactory(factory);
    NamingService *n = factory->CreateNamingService();
    ResourceGuard <NamingService> _serviceFactory(n);

    n->subscribe("ss", new MyServiceListener(1));

    n->registerInstance("ss", "127.0.0.1", 33);
    n->registerInstance("ss", "127.0.0.1", 34);

    n->deregisterInstance("ss", "127.0.0.1", 33);
    n->deregisterInstance("ss", "127.0.0.1", 34);

    n->registerInstance("ss", "127.0.0.1", 33);
    n->registerInstance("ss", "127.0.0.1", 34);

    n->deregisterInstance("ss", "127.0.0.1", 33);
    n->deregisterInstance("ss", "127.0.0.1", 34);

    cout << "All instances Unregistered" << endl;

    return true;
}