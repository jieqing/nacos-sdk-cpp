// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nacos_grpc_service.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_nacos_5fgrpc_5fservice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_nacos_5fgrpc_5fservice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_nacos_5fgrpc_5fservice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_nacos_5fgrpc_5fservice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_nacos_5fgrpc_5fservice_2eproto;
class Metadata;
class MetadataDefaultTypeInternal;
extern MetadataDefaultTypeInternal _Metadata_default_instance_;
class Metadata_HeadersEntry_DoNotUse;
class Metadata_HeadersEntry_DoNotUseDefaultTypeInternal;
extern Metadata_HeadersEntry_DoNotUseDefaultTypeInternal _Metadata_HeadersEntry_DoNotUse_default_instance_;
class Payload;
class PayloadDefaultTypeInternal;
extern PayloadDefaultTypeInternal _Payload_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Metadata* Arena::CreateMaybeMessage<::Metadata>(Arena*);
template<> ::Metadata_HeadersEntry_DoNotUse* Arena::CreateMaybeMessage<::Metadata_HeadersEntry_DoNotUse>(Arena*);
template<> ::Payload* Arena::CreateMaybeMessage<::Payload>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Metadata_HeadersEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Metadata_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<Metadata_HeadersEntry_DoNotUse, 
    std::string, std::string,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> SuperType;
  Metadata_HeadersEntry_DoNotUse();
  explicit Metadata_HeadersEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const Metadata_HeadersEntry_DoNotUse& other);
  static const Metadata_HeadersEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const Metadata_HeadersEntry_DoNotUse*>(&_Metadata_HeadersEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "Metadata.HeadersEntry.key");
 }
  static bool ValidateValue(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "Metadata.HeadersEntry.value");
 }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_nacos_5fgrpc_5fservice_2eproto);
    return ::descriptor_table_nacos_5fgrpc_5fservice_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class Metadata PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Metadata) */ {
 public:
  inline Metadata() : Metadata(nullptr) {}
  virtual ~Metadata();

  Metadata(const Metadata& from);
  Metadata(Metadata&& from) noexcept
    : Metadata() {
    *this = ::std::move(from);
  }

  inline Metadata& operator=(const Metadata& from) {
    CopyFrom(from);
    return *this;
  }
  inline Metadata& operator=(Metadata&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Metadata& default_instance();

  static inline const Metadata* internal_default_instance() {
    return reinterpret_cast<const Metadata*>(
               &_Metadata_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Metadata& a, Metadata& b) {
    a.Swap(&b);
  }
  inline void Swap(Metadata* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Metadata* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Metadata* New() const final {
    return CreateMaybeMessage<Metadata>(nullptr);
  }

  Metadata* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Metadata>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Metadata& from);
  void MergeFrom(const Metadata& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Metadata* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Metadata";
  }
  protected:
  explicit Metadata(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_nacos_5fgrpc_5fservice_2eproto);
    return ::descriptor_table_nacos_5fgrpc_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kHeadersFieldNumber = 7,
    kTypeFieldNumber = 3,
    kClientIpFieldNumber = 8,
  };
  // map<string, string> headers = 7;
  int headers_size() const;
  private:
  int _internal_headers_size() const;
  public:
  void clear_headers();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      _internal_headers() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      _internal_mutable_headers();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
      headers() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
      mutable_headers();

  // string type = 3;
  void clear_type();
  const std::string& type() const;
  void set_type(const std::string& value);
  void set_type(std::string&& value);
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  std::string* mutable_type();
  std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // string clientIp = 8;
  void clear_clientip();
  const std::string& clientip() const;
  void set_clientip(const std::string& value);
  void set_clientip(std::string&& value);
  void set_clientip(const char* value);
  void set_clientip(const char* value, size_t size);
  std::string* mutable_clientip();
  std::string* release_clientip();
  void set_allocated_clientip(std::string* clientip);
  private:
  const std::string& _internal_clientip() const;
  void _internal_set_clientip(const std::string& value);
  std::string* _internal_mutable_clientip();
  public:

  // @@protoc_insertion_point(class_scope:Metadata)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      Metadata_HeadersEntry_DoNotUse,
      std::string, std::string,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING> headers_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientip_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_nacos_5fgrpc_5fservice_2eproto;
};
// -------------------------------------------------------------------

class Payload PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Payload) */ {
 public:
  inline Payload() : Payload(nullptr) {}
  virtual ~Payload();

  Payload(const Payload& from);
  Payload(Payload&& from) noexcept
    : Payload() {
    *this = ::std::move(from);
  }

  inline Payload& operator=(const Payload& from) {
    CopyFrom(from);
    return *this;
  }
  inline Payload& operator=(Payload&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Payload& default_instance();

  static inline const Payload* internal_default_instance() {
    return reinterpret_cast<const Payload*>(
               &_Payload_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Payload& a, Payload& b) {
    a.Swap(&b);
  }
  inline void Swap(Payload* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Payload* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Payload* New() const final {
    return CreateMaybeMessage<Payload>(nullptr);
  }

  Payload* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Payload>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Payload& from);
  void MergeFrom(const Payload& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Payload* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Payload";
  }
  protected:
  explicit Payload(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_nacos_5fgrpc_5fservice_2eproto);
    return ::descriptor_table_nacos_5fgrpc_5fservice_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetadataFieldNumber = 2,
    kBodyFieldNumber = 3,
  };
  // .Metadata metadata = 2;
  bool has_metadata() const;
  private:
  bool _internal_has_metadata() const;
  public:
  void clear_metadata();
  const ::Metadata& metadata() const;
  ::Metadata* release_metadata();
  ::Metadata* mutable_metadata();
  void set_allocated_metadata(::Metadata* metadata);
  private:
  const ::Metadata& _internal_metadata() const;
  ::Metadata* _internal_mutable_metadata();
  public:
  void unsafe_arena_set_allocated_metadata(
      ::Metadata* metadata);
  ::Metadata* unsafe_arena_release_metadata();

  // .google.protobuf.Any body = 3;
  bool has_body() const;
  private:
  bool _internal_has_body() const;
  public:
  void clear_body();
  const PROTOBUF_NAMESPACE_ID::Any& body() const;
  PROTOBUF_NAMESPACE_ID::Any* release_body();
  PROTOBUF_NAMESPACE_ID::Any* mutable_body();
  void set_allocated_body(PROTOBUF_NAMESPACE_ID::Any* body);
  private:
  const PROTOBUF_NAMESPACE_ID::Any& _internal_body() const;
  PROTOBUF_NAMESPACE_ID::Any* _internal_mutable_body();
  public:
  void unsafe_arena_set_allocated_body(
      PROTOBUF_NAMESPACE_ID::Any* body);
  PROTOBUF_NAMESPACE_ID::Any* unsafe_arena_release_body();

  // @@protoc_insertion_point(class_scope:Payload)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::Metadata* metadata_;
  PROTOBUF_NAMESPACE_ID::Any* body_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_nacos_5fgrpc_5fservice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Metadata

// string type = 3;
inline void Metadata::clear_type() {
  type_.ClearToEmpty();
}
inline const std::string& Metadata::type() const {
  // @@protoc_insertion_point(field_get:Metadata.type)
  return _internal_type();
}
inline void Metadata::set_type(const std::string& value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:Metadata.type)
}
inline std::string* Metadata::mutable_type() {
  // @@protoc_insertion_point(field_mutable:Metadata.type)
  return _internal_mutable_type();
}
inline const std::string& Metadata::_internal_type() const {
  return type_.Get();
}
inline void Metadata::_internal_set_type(const std::string& value) {
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Metadata::set_type(std::string&& value) {
  
  type_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Metadata.type)
}
inline void Metadata::set_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Metadata.type)
}
inline void Metadata::set_type(const char* value,
    size_t size) {
  
  type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Metadata.type)
}
inline std::string* Metadata::_internal_mutable_type() {
  
  return type_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Metadata::release_type() {
  // @@protoc_insertion_point(field_release:Metadata.type)
  return type_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Metadata::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    
  } else {
    
  }
  type_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), type,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Metadata.type)
}

// string clientIp = 8;
inline void Metadata::clear_clientip() {
  clientip_.ClearToEmpty();
}
inline const std::string& Metadata::clientip() const {
  // @@protoc_insertion_point(field_get:Metadata.clientIp)
  return _internal_clientip();
}
inline void Metadata::set_clientip(const std::string& value) {
  _internal_set_clientip(value);
  // @@protoc_insertion_point(field_set:Metadata.clientIp)
}
inline std::string* Metadata::mutable_clientip() {
  // @@protoc_insertion_point(field_mutable:Metadata.clientIp)
  return _internal_mutable_clientip();
}
inline const std::string& Metadata::_internal_clientip() const {
  return clientip_.Get();
}
inline void Metadata::_internal_set_clientip(const std::string& value) {
  
  clientip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Metadata::set_clientip(std::string&& value) {
  
  clientip_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Metadata.clientIp)
}
inline void Metadata::set_clientip(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  clientip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Metadata.clientIp)
}
inline void Metadata::set_clientip(const char* value,
    size_t size) {
  
  clientip_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Metadata.clientIp)
}
inline std::string* Metadata::_internal_mutable_clientip() {
  
  return clientip_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Metadata::release_clientip() {
  // @@protoc_insertion_point(field_release:Metadata.clientIp)
  return clientip_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Metadata::set_allocated_clientip(std::string* clientip) {
  if (clientip != nullptr) {
    
  } else {
    
  }
  clientip_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientip,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Metadata.clientIp)
}

// map<string, string> headers = 7;
inline int Metadata::_internal_headers_size() const {
  return headers_.size();
}
inline int Metadata::headers_size() const {
  return _internal_headers_size();
}
inline void Metadata::clear_headers() {
  headers_.Clear();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
Metadata::_internal_headers() const {
  return headers_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >&
Metadata::headers() const {
  // @@protoc_insertion_point(field_map:Metadata.headers)
  return _internal_headers();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
Metadata::_internal_mutable_headers() {
  return headers_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >*
Metadata::mutable_headers() {
  // @@protoc_insertion_point(field_mutable_map:Metadata.headers)
  return _internal_mutable_headers();
}

// -------------------------------------------------------------------

// Payload

// .Metadata metadata = 2;
inline bool Payload::_internal_has_metadata() const {
  return this != internal_default_instance() && metadata_ != nullptr;
}
inline bool Payload::has_metadata() const {
  return _internal_has_metadata();
}
inline void Payload::clear_metadata() {
  if (GetArena() == nullptr && metadata_ != nullptr) {
    delete metadata_;
  }
  metadata_ = nullptr;
}
inline const ::Metadata& Payload::_internal_metadata() const {
  const ::Metadata* p = metadata_;
  return p != nullptr ? *p : reinterpret_cast<const ::Metadata&>(
      ::_Metadata_default_instance_);
}
inline const ::Metadata& Payload::metadata() const {
  // @@protoc_insertion_point(field_get:Payload.metadata)
  return _internal_metadata();
}
inline void Payload::unsafe_arena_set_allocated_metadata(
    ::Metadata* metadata) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(metadata_);
  }
  metadata_ = metadata;
  if (metadata) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Payload.metadata)
}
inline ::Metadata* Payload::release_metadata() {
  
  ::Metadata* temp = metadata_;
  metadata_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::Metadata* Payload::unsafe_arena_release_metadata() {
  // @@protoc_insertion_point(field_release:Payload.metadata)
  
  ::Metadata* temp = metadata_;
  metadata_ = nullptr;
  return temp;
}
inline ::Metadata* Payload::_internal_mutable_metadata() {
  
  if (metadata_ == nullptr) {
    auto* p = CreateMaybeMessage<::Metadata>(GetArena());
    metadata_ = p;
  }
  return metadata_;
}
inline ::Metadata* Payload::mutable_metadata() {
  // @@protoc_insertion_point(field_mutable:Payload.metadata)
  return _internal_mutable_metadata();
}
inline void Payload::set_allocated_metadata(::Metadata* metadata) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete metadata_;
  }
  if (metadata) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(metadata);
    if (message_arena != submessage_arena) {
      metadata = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, metadata, submessage_arena);
    }
    
  } else {
    
  }
  metadata_ = metadata;
  // @@protoc_insertion_point(field_set_allocated:Payload.metadata)
}

// .google.protobuf.Any body = 3;
inline bool Payload::_internal_has_body() const {
  return this != internal_default_instance() && body_ != nullptr;
}
inline bool Payload::has_body() const {
  return _internal_has_body();
}
inline const PROTOBUF_NAMESPACE_ID::Any& Payload::_internal_body() const {
  const PROTOBUF_NAMESPACE_ID::Any* p = body_;
  return p != nullptr ? *p : reinterpret_cast<const PROTOBUF_NAMESPACE_ID::Any&>(
      PROTOBUF_NAMESPACE_ID::_Any_default_instance_);
}
inline const PROTOBUF_NAMESPACE_ID::Any& Payload::body() const {
  // @@protoc_insertion_point(field_get:Payload.body)
  return _internal_body();
}
inline void Payload::unsafe_arena_set_allocated_body(
    PROTOBUF_NAMESPACE_ID::Any* body) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(body_);
  }
  body_ = body;
  if (body) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Payload.body)
}
inline PROTOBUF_NAMESPACE_ID::Any* Payload::release_body() {
  
  PROTOBUF_NAMESPACE_ID::Any* temp = body_;
  body_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Payload::unsafe_arena_release_body() {
  // @@protoc_insertion_point(field_release:Payload.body)
  
  PROTOBUF_NAMESPACE_ID::Any* temp = body_;
  body_ = nullptr;
  return temp;
}
inline PROTOBUF_NAMESPACE_ID::Any* Payload::_internal_mutable_body() {
  
  if (body_ == nullptr) {
    auto* p = CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::Any>(GetArena());
    body_ = p;
  }
  return body_;
}
inline PROTOBUF_NAMESPACE_ID::Any* Payload::mutable_body() {
  // @@protoc_insertion_point(field_mutable:Payload.body)
  return _internal_mutable_body();
}
inline void Payload::set_allocated_body(PROTOBUF_NAMESPACE_ID::Any* body) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(body_);
  }
  if (body) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(body)->GetArena();
    if (message_arena != submessage_arena) {
      body = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, body, submessage_arena);
    }
    
  } else {
    
  }
  body_ = body;
  // @@protoc_insertion_point(field_set_allocated:Payload.body)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_nacos_5fgrpc_5fservice_2eproto
