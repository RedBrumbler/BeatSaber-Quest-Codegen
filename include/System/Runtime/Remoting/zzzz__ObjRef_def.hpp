#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting {
class IChannelInfo;
}
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ObjRef;
}
// Type: System.Runtime.Remoting::ObjRef
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3059))
// CS Name: System.Runtime.Remoting.ObjRef
class CORDL_TYPE ObjRef : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::IObjectReference
constexpr operator  System::Runtime::Serialization::IObjectReference() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ObjRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: " const&", def_value: None }]
constexpr ObjRef(ObjRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: "&&", def_value: None }]
constexpr ObjRef(ObjRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObjRef(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ObjRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObjRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObjRef& operator=(ObjRef&& o) noexcept = default;
  constexpr ObjRef& operator=(ObjRef const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::IChannelInfo __declspec(property(get=__get_channel_info, put=__set_channel_info))  channel_info;

constexpr void __set_channel_info(System::Runtime::Remoting::IChannelInfo value) ;

constexpr System::Runtime::Remoting::IChannelInfo __get_channel_info() const;

 ::StringW __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(::StringW value) ;

constexpr ::StringW __get_uri() const;

 System::Runtime::Remoting::IRemotingTypeInfo __declspec(property(get=__get_typeInfo, put=__set_typeInfo))  typeInfo;

constexpr void __set_typeInfo(System::Runtime::Remoting::IRemotingTypeInfo value) ;

constexpr System::Runtime::Remoting::IRemotingTypeInfo __get_typeInfo() const;

 System::Runtime::Remoting::IEnvoyInfo __declspec(property(get=__get_envoyInfo, put=__set_envoyInfo))  envoyInfo;

constexpr void __set_envoyInfo(System::Runtime::Remoting::IEnvoyInfo value) ;

constexpr System::Runtime::Remoting::IEnvoyInfo __get_envoyInfo() const;

 int32_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(int32_t value) ;

constexpr int32_t __get_flags() const;

 System::Type __declspec(property(get=__get__serverType, put=__set__serverType))  _serverType;

constexpr void __set__serverType(System::Type value) ;

constexpr System::Type __get__serverType() const;

static int32_t __declspec(property(get=__get_MarshalledObjectRef, put=__set_MarshalledObjectRef))  MarshalledObjectRef;

static void __set_MarshalledObjectRef(int32_t value) ;

static int32_t __get_MarshalledObjectRef() ;

static int32_t __declspec(property(get=__get_WellKnowObjectRef, put=__set_WellKnowObjectRef))  WellKnowObjectRef;

static void __set_WellKnowObjectRef(int32_t value) ;

static int32_t __get_WellKnowObjectRef() ;


// Properties

 bool __declspec(property(get=get_IsReferenceToWellKnow))  IsReferenceToWellKnow;

 System::Runtime::Remoting::IChannelInfo __declspec(property(get=get_ChannelInfo))  ChannelInfo;

 System::Runtime::Remoting::IEnvoyInfo __declspec(property(get=get_EnvoyInfo, put=set_EnvoyInfo))  EnvoyInfo;

 System::Runtime::Remoting::IRemotingTypeInfo __declspec(property(get=get_TypeInfo, put=set_TypeInfo))  TypeInfo;

 ::StringW __declspec(property(get=get_URI, put=set_URI))  URI;

 System::Type __declspec(property(get=get_ServerType))  ServerType;


// Methods

// Ctor Parameters []
explicit ObjRef() ;

/// @brief Method .ctor addr 0x23535ec size 0x1c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cinfo", ty: "System::Runtime::Remoting::IChannelInfo", modifiers: "", def_value: None }]
explicit ObjRef(::StringW uri, System::Runtime::Remoting::IChannelInfo cinfo) ;

/// @brief Method .ctor addr 0x2353664 size 0x2c virtual false final false
 void _ctor(::StringW uri, System::Runtime::Remoting::IChannelInfo cinfo) ;

/// @brief Method DeserializeInTheCurrentDomain addr 0x2353690 size 0x12c virtual false final false
 System::Runtime::Remoting::ObjRef DeserializeInTheCurrentDomain(int32_t domainId, ::ArrayW<uint8_t> tInfo) ;

/// @brief Method SerializeType addr 0x23537bc size 0x7c virtual false final false
 ::ArrayW<uint8_t> SerializeType() ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "remoteChannelData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit ObjRef(System::Type type, ::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData) ;

/// @brief Method .ctor addr 0x2353838 size 0x100 virtual false final false
 void _ctor(System::Type type, ::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit ObjRef(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2353938 size 0x534 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_IsReferenceToWellKnow addr 0x2353e6c size 0x68 virtual false final false
 bool get_IsReferenceToWellKnow() ;

/// @brief Method get_ChannelInfo addr 0x2353ed4 size 0x8 virtual true final false
 System::Runtime::Remoting::IChannelInfo get_ChannelInfo() ;

/// @brief Method get_EnvoyInfo addr 0x2353edc size 0x8 virtual true final false
 System::Runtime::Remoting::IEnvoyInfo get_EnvoyInfo() ;

/// @brief Method set_EnvoyInfo addr 0x2353ee4 size 0x8 virtual true final false
 void set_EnvoyInfo(System::Runtime::Remoting::IEnvoyInfo value) ;

/// @brief Method get_TypeInfo addr 0x2353eec size 0x8 virtual true final false
 System::Runtime::Remoting::IRemotingTypeInfo get_TypeInfo() ;

/// @brief Method set_TypeInfo addr 0x2353ef4 size 0x8 virtual true final false
 void set_TypeInfo(System::Runtime::Remoting::IRemotingTypeInfo value) ;

/// @brief Method get_URI addr 0x2353efc size 0x8 virtual true final false
 ::StringW get_URI() ;

/// @brief Method set_URI addr 0x2353f04 size 0x8 virtual true final false
 void set_URI(::StringW value) ;

/// @brief Method GetObjectData addr 0x2353f0c size 0x1d8 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetRealObject addr 0x23540e4 size 0xa4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetRealObject(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method UpdateChannelInfo addr 0x2353608 size 0x5c virtual false final false
 void UpdateChannelInfo() ;

/// @brief Method get_ServerType addr 0x23541e0 size 0x144 virtual false final false
 System::Type get_ServerType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ObjRef);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ObjRef, "System.Runtime.Remoting", "ObjRef");
