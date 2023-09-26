#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace LiteNetLib {
class NetPeer;
}
namespace GlobalNamespace {
class IConnection;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace LiteNetLib {
class ConnectionRequest;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace GlobalNamespace {
class IPollable;
}
namespace System {
class Action;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
struct UnconnectedMessageType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace LiteNetLib {
struct DisconnectReason;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace LiteNetLib {
struct DisconnectInfo;
}
namespace LiteNetLib {
class NetPacketReader;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace LiteNetLib {
class NetManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib {
class INetEventListener;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LiteNetLibConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
struct GlobalNamespace__LiteNetLibConnectionManager__NetworkMode;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager__StartServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__LiteNetLibConnectionManager____c;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;
}
namespace GlobalNamespace {
struct GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;
}
// Type: ::NetworkMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12781))
// CS Name: LiteNetLibConnectionManager::NetworkMode
struct CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__NetworkMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__NetworkMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LiteNetLibConnectionManager__NetworkMode(GlobalNamespace__LiteNetLibConnectionManager__NetworkMode const&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__NetworkMode(GlobalNamespace__LiteNetLibConnectionManager__NetworkMode&&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__NetworkMode& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetworkMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__NetworkMode& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetworkMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__NetworkMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LiteNetLibConnectionManager__NetworkMode_Unwrapped : int32_t {
__None = 0,
__Client = 1,
__Server = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LiteNetLibConnectionManager__NetworkMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LiteNetLibConnectionManager__NetworkMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode const None;

/// @brief Field Client offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode const Client;

/// @brief Field Server offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode const Server;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12782))
// CS Name: LiteNetLibConnectionManager::ConnectionState
struct CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectionState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectionState(GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectionState(GlobalNamespace__LiteNetLibConnectionManager__ConnectionState&&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectionState& operator=(GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectionState& operator=(GlobalNamespace__LiteNetLibConnectionManager__ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LiteNetLibConnectionManager__ConnectionState_Unwrapped : int32_t {
__Unconnected = 0,
__Connecting = 1,
__Connected = 2,
__Disconnecting = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LiteNetLibConnectionManager__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LiteNetLibConnectionManager__ConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unconnected offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const Unconnected;

/// @brief Field Connecting offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const Connecting;

/// @brief Field Connected offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const Connected;

/// @brief Field Disconnecting offset 0
static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState const Disconnecting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LiteNetLibConnectionParamsBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12783))
// CS Name: LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager>
constexpr operator  GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::LiteNetLibConnectionManager>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase& operator=(GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase& operator=(GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IConnectionRequestHandler __declspec(property(get=__get_connectionRequestHandler, put=__set_connectionRequestHandler))  connectionRequestHandler;

constexpr void __set_connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value) ;

constexpr GlobalNamespace::IConnectionRequestHandler __get_connectionRequestHandler() const;

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;

 bool __declspec(property(get=__get_filterUnencryptedTraffic, put=__set_filterUnencryptedTraffic))  filterUnencryptedTraffic;

constexpr void __set_filterUnencryptedTraffic(bool value) ;

constexpr bool __get_filterUnencryptedTraffic() const;

 bool __declspec(property(get=__get_enableUnconnectedMessages, put=__set_enableUnconnectedMessages))  enableUnconnectedMessages;

constexpr void __set_enableUnconnectedMessages(bool value) ;

constexpr bool __get_enableUnconnectedMessages() const;

 bool __declspec(property(get=__get_enableBackgroundSentry, put=__set_enableBackgroundSentry))  enableBackgroundSentry;

constexpr void __set_enableBackgroundSentry(bool value) ;

constexpr bool __get_enableBackgroundSentry() const;

 bool __declspec(property(get=__get_enableStatistics, put=__set_enableStatistics))  enableStatistics;

constexpr void __set_enableStatistics(bool value) ;

constexpr bool __get_enableStatistics() const;

 int32_t __declspec(property(get=__get_disconnectTimeoutMs, put=__set_disconnectTimeoutMs))  disconnectTimeoutMs;

constexpr void __set_disconnectTimeoutMs(int32_t value) ;

constexpr int32_t __get_disconnectTimeoutMs() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase() ;

/// @brief Method .ctor addr 0xdc5464 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12784))
// CS Name: LiteNetLibConnectionManager::StartServerParams
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__StartServerParams : public GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__StartServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__StartServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams(GlobalNamespace__LiteNetLibConnectionManager__StartServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__StartServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams(GlobalNamespace__LiteNetLibConnectionManager__StartServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__StartServerParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__StartServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartServerParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__StartServerParams const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LiteNetLibConnectionManager__StartServerParams() ;

/// @brief Method .ctor addr 0xdc5474 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartClientParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12785))
// CS Name: LiteNetLibConnectionManager::StartClientParams
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__StartClientParams : public GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__StartClientParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__StartClientParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams(GlobalNamespace__LiteNetLibConnectionManager__StartClientParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams(GlobalNamespace__LiteNetLibConnectionManager__StartClientParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__StartClientParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__StartClientParams&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__StartClientParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__StartClientParams const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LiteNetLibConnectionManager__StartClientParams() ;

/// @brief Method .ctor addr 0xdc5484 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12786))
// CS Name: LiteNetLibConnectionManager::ConnectToServerParams
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams : public GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams(GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams(GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_userName, put=__set_userName))  userName;

constexpr void __set_userName(::StringW value) ;

constexpr ::StringW __get_userName() const;

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 ::StringW __declspec(property(get=__get_serverUserId, put=__set_serverUserId))  serverUserId;

constexpr void __set_serverUserId(::StringW value) ;

constexpr ::StringW __get_serverUserId() const;

 ::StringW __declspec(property(get=__get_serverUserName, put=__set_serverUserName))  serverUserName;

constexpr void __set_serverUserName(::StringW value) ;

constexpr ::StringW __get_serverUserName() const;

 bool __declspec(property(get=__get_serverIsConnectionOwner, put=__set_serverIsConnectionOwner))  serverIsConnectionOwner;

constexpr void __set_serverIsConnectionOwner(bool value) ;

constexpr bool __get_serverIsConnectionOwner() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams() ;

/// @brief Method .ctor addr 0xdc5494 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetPeerConnectionRequest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12787))
// CS Name: LiteNetLibConnectionManager::NetPeerConnectionRequest
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 bool __declspec(property(get=__get__isConnectionOwner, put=__set__isConnectionOwner))  _isConnectionOwner;

constexpr void __set__isConnectionOwner(bool value) ;

constexpr bool __get__isConnectionOwner() const;

 LiteNetLib::ConnectionRequest __declspec(property(get=__get__request, put=__set__request))  _request;

constexpr void __set__request(LiteNetLib::ConnectionRequest value) ;

constexpr LiteNetLib::ConnectionRequest __get__request() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 System::Net::IPEndPoint __declspec(property(get=get_endPoint))  endPoint;


// Methods

/// @brief Method get_userId addr 0xdc54ac size 0x8 virtual false final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0xdc54b4 size 0x8 virtual false final false
 ::StringW get_userName() ;

/// @brief Method get_isConnectionOwner addr 0xdc54bc size 0x8 virtual false final false
 bool get_isConnectionOwner() ;

/// @brief Method get_endPoint addr 0xdc54c4 size 0x1c virtual false final false
 System::Net::IPEndPoint get_endPoint() ;

// Ctor Parameters [CppParam { name: "request", ty: "LiteNetLib::ConnectionRequest", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest(LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method .ctor addr 0xdc54e0 size 0x44 virtual false final false
 void _ctor(LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method Accept addr 0xdc5524 size 0x1c virtual false final false
 LiteNetLib::NetPeer Accept() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetPeerConnection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12788))
// CS Name: LiteNetLibConnectionManager::NetPeerConnection
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnection
constexpr operator  GlobalNamespace::IConnection() const noexcept;

/// @brief Convert operator to System::IEquatable_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>
constexpr operator  System::IEquatable_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection& operator=(GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 bool __declspec(property(get=__get__isConnectionOwner, put=__set__isConnectionOwner))  _isConnectionOwner;

constexpr void __set__isConnectionOwner(bool value) ;

constexpr bool __get__isConnectionOwner() const;

 LiteNetLib::NetPeer __declspec(property(get=__get_netPeer, put=__set_netPeer))  netPeer;

constexpr void __set_netPeer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get_netPeer() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;


// Methods

/// @brief Method get_userId addr 0xdc5540 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0xdc5548 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isConnectionOwner addr 0xdc5550 size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

// Ctor Parameters [CppParam { name: "netPeer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isConnectionOwner", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection(LiteNetLib::NetPeer netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method .ctor addr 0xdc5558 size 0x44 virtual false final false
 void _ctor(LiteNetLib::NetPeer netPeer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method Send addr 0xdc559c size 0x88 virtual true final true
 void Send(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method Equals addr 0xdc5624 size 0x2c virtual true final true
 bool Equals(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection other) ;

/// @brief Method Equals addr 0xdc5650 size 0x118 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0xdc5768 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Disconnect addr 0xdc5788 size 0x1c virtual true final true
 void Disconnect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12789))
// CS Name: LiteNetLibConnectionManager::<>c
class CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__LiteNetLibConnectionManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager____c(GlobalNamespace__LiteNetLibConnectionManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LiteNetLibConnectionManager____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager____c(GlobalNamespace__LiteNetLibConnectionManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LiteNetLibConnectionManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LiteNetLibConnectionManager____c& operator=(GlobalNamespace__LiteNetLibConnectionManager____c&& o) noexcept = default;
  constexpr GlobalNamespace__LiteNetLibConnectionManager____c& operator=(GlobalNamespace__LiteNetLibConnectionManager____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c value) ;

static GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c __get___9() ;

static System::Predicate_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __declspec(property(get=__get___9__70_0, put=__set___9__70_0))  __9__70_0;

static void __set___9__70_0(System::Predicate_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value) ;

static System::Predicate_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __get___9__70_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LiteNetLibConnectionManager____c() ;

/// @brief Method .ctor addr 0xdc5808 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_hasConnectionOwner>b__70_0 addr 0xdc5810 size 0x18 virtual false final false
 bool _get_hasConnectionOwner_b__70_0(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<BackgroundDisconnectSentry>d__126
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12790))
// CS Name: LiteNetLibConnectionManager::<BackgroundDisconnectSentry>d__126
struct CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LiteNetLibConnectionManager", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::LiteNetLibConnectionManager __4__this, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126 const&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126&&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126& operator=(GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126& operator=(GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 GlobalNamespace::LiteNetLibConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LiteNetLibConnectionManager value) ;

constexpr GlobalNamespace::LiteNetLibConnectionManager __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdc5828 size 0x3a0 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdc5bc8 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<BackgroundShutdownSentry>d__127
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12791))
// CS Name: LiteNetLibConnectionManager::<BackgroundShutdownSentry>d__127
struct CORDL_TYPE GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LiteNetLibConnectionManager", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::LiteNetLibConnectionManager __4__this, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127 const&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127&&) = default;
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127& operator=(GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127& operator=(GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 GlobalNamespace::LiteNetLibConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LiteNetLibConnectionManager value) ;

constexpr GlobalNamespace::LiteNetLibConnectionManager __get___4__this() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdc5bd4 size 0x3a4 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdc5f78 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LiteNetLibConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12792))
// CS Name: LiteNetLibConnectionManager
class CORDL_TYPE LiteNetLibConnectionManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _BackgroundShutdownSentry_d__127 = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127;

using _BackgroundDisconnectSentry_d__126 = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126;

using __c = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c;

using NetPeerConnection = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection;

using NetPeerConnectionRequest = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest;

using ConnectToServerParams = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams;

using StartClientParams = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartClientParams;

using StartServerParams = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartServerParams;

using LiteNetLibConnectionParamsBase = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase;

using ConnectionState = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState;

using NetworkMode = GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode;

/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr operator  GlobalNamespace::IConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to LiteNetLib::INetEventListener
constexpr operator  LiteNetLib::INetEventListener() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~LiteNetLibConnectionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: " const&", def_value: None }]
constexpr LiteNetLibConnectionManager(LiteNetLibConnectionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLibConnectionManager", modifiers: "&&", def_value: None }]
constexpr LiteNetLibConnectionManager(LiteNetLibConnectionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLibConnectionManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLibConnectionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLibConnectionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLibConnectionManager& operator=(LiteNetLibConnectionManager&& o) noexcept = default;
  constexpr LiteNetLibConnectionManager& operator=(LiteNetLibConnectionManager const& o) noexcept = default;
                


// Fields

/// @brief Field kBackgroundDisconnectTimeout offset 0
static constexpr int64_t  kBackgroundDisconnectTimeout{1200000000};

/// @brief Field kBackgroundShutdownTimeout offset 0
static constexpr int64_t  kBackgroundShutdownTimeout{9000000000};

/// @brief Field kStatisticsUpdateInterval offset 0
static constexpr int64_t  kStatisticsUpdateInterval{300000000};

 ::ArrayW<uint8_t> __declspec(property(get=__get__unconnectedPacketHeader, put=__set__unconnectedPacketHeader))  _unconnectedPacketHeader;

constexpr void __set__unconnectedPacketHeader(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__unconnectedPacketHeader() const;

 LiteNetLib::NetManager __declspec(property(get=__get__netManager, put=__set__netManager))  _netManager;

constexpr void __set__netManager(LiteNetLib::NetManager value) ;

constexpr LiteNetLib::NetManager __get__netManager() const;

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=__get__encryptionLayer, put=__set__encryptionLayer))  _encryptionLayer;

constexpr void __set__encryptionLayer(GlobalNamespace::PacketEncryptionLayer value) ;

constexpr GlobalNamespace::PacketEncryptionLayer __get__encryptionLayer() const;

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __declspec(property(get=__get__connections, put=__set__connections))  _connections;

constexpr void __set__connections(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __get__connections() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __declspec(property(get=__get__pendingConnections, put=__set__pendingConnections))  _pendingConnections;

constexpr void __set__pendingConnections(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection> __get__pendingConnections() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest> __declspec(property(get=__get__pendingRequests, put=__set__pendingRequests))  _pendingRequests;

constexpr void __set__pendingRequests(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest> __get__pendingRequests() const;

 System::Collections::Generic::HashSet_1<System::Net::IPEndPoint> __declspec(property(get=__get__pendingReconnections, put=__set__pendingReconnections))  _pendingReconnections;

constexpr void __set__pendingReconnections(System::Collections::Generic::HashSet_1<System::Net::IPEndPoint> value) ;

constexpr System::Collections::Generic::HashSet_1<System::Net::IPEndPoint> __get__pendingReconnections() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 GlobalNamespace::IConnectionRequestHandler __declspec(property(get=__get__connectionRequestHandler, put=__set__connectionRequestHandler))  _connectionRequestHandler;

constexpr void __set__connectionRequestHandler(GlobalNamespace::IConnectionRequestHandler value) ;

constexpr GlobalNamespace::IConnectionRequestHandler __get__connectionRequestHandler() const;

 GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode __declspec(property(get=__get__mode, put=__set__mode))  _mode;

constexpr void __set__mode(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode value) ;

constexpr GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode __get__mode() const;

 GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState __declspec(property(get=__get__connectionState, put=__set__connectionState))  _connectionState;

constexpr void __set__connectionState(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState value) ;

constexpr GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState __get__connectionState() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__backgroundSentryDisconnectCts, put=__set__backgroundSentryDisconnectCts))  _backgroundSentryDisconnectCts;

constexpr void __set__backgroundSentryDisconnectCts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__backgroundSentryDisconnectCts() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__backgroundSentryShutdownCts, put=__set__backgroundSentryShutdownCts))  _backgroundSentryShutdownCts;

constexpr void __set__backgroundSentryShutdownCts(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__backgroundSentryShutdownCts() const;

 bool __declspec(property(get=__get__sentryDisconnected, put=__set__sentryDisconnected))  _sentryDisconnected;

constexpr void __set__sentryDisconnected(bool value) ;

constexpr bool __get__sentryDisconnected() const;

 bool __declspec(property(get=__get__sentryShutdown, put=__set__sentryShutdown))  _sentryShutdown;

constexpr void __set__sentryShutdown(bool value) ;

constexpr bool __get__sentryShutdown() const;

 int64_t __declspec(property(get=__get__lastPollUpdateTime, put=__set__lastPollUpdateTime))  _lastPollUpdateTime;

constexpr void __set__lastPollUpdateTime(int64_t value) ;

constexpr int64_t __get__lastPollUpdateTime() const;

 int64_t __declspec(property(get=__get__lastStatisticsUpdateTime, put=__set__lastStatisticsUpdateTime))  _lastStatisticsUpdateTime;

constexpr void __set__lastStatisticsUpdateTime(int64_t value) ;

constexpr int64_t __get__lastStatisticsUpdateTime() const;

 System::Action __declspec(property(get=__get_onInitializedEvent, put=__set_onInitializedEvent))  onInitializedEvent;

constexpr void __set_onInitializedEvent(System::Action value) ;

constexpr System::Action __get_onInitializedEvent() const;

 System::Action __declspec(property(get=__get_onConnectedEvent, put=__set_onConnectedEvent))  onConnectedEvent;

constexpr void __set_onConnectedEvent(System::Action value) ;

constexpr System::Action __get_onConnectedEvent() const;

 System::Action_1<GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_onDisconnectedEvent, put=__set_onDisconnectedEvent))  onDisconnectedEvent;

constexpr void __set_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_1<GlobalNamespace::DisconnectedReason> __get_onDisconnectedEvent() const;

 System::Action_1<GlobalNamespace::ConnectionFailedReason> __declspec(property(get=__get_onConnectionFailedEvent, put=__set_onConnectionFailedEvent))  onConnectionFailedEvent;

constexpr void __set_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> __get_onConnectionFailedEvent() const;

 System::Action_1<GlobalNamespace::IConnection> __declspec(property(get=__get_onConnectionConnectedEvent, put=__set_onConnectionConnectedEvent))  onConnectionConnectedEvent;

constexpr void __set_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

constexpr System::Action_1<GlobalNamespace::IConnection> __get_onConnectionConnectedEvent() const;

 System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_onConnectionDisconnectedEvent, put=__set_onConnectionDisconnectedEvent))  onConnectionDisconnectedEvent;

constexpr void __set_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> __get_onConnectionDisconnectedEvent() const;

 System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> __declspec(property(get=__get_onReceivedDataEvent, put=__set_onReceivedDataEvent))  onReceivedDataEvent;

constexpr void __set_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

constexpr System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> __get_onReceivedDataEvent() const;

 System::Action_2<System::Net::IPEndPoint,LiteNetLib::Utils::NetDataReader> __declspec(property(get=__get_onReceiveUnconnectedDataEvent, put=__set_onReceiveUnconnectedDataEvent))  onReceiveUnconnectedDataEvent;

constexpr void __set_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint,LiteNetLib::Utils::NetDataReader> value) ;

constexpr System::Action_2<System::Net::IPEndPoint,LiteNetLib::Utils::NetDataReader> __get_onReceiveUnconnectedDataEvent() const;

 GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate __declspec(property(get=__get_onStatisticsUpdatedEvent, put=__set_onStatisticsUpdatedEvent))  onStatisticsUpdatedEvent;

constexpr void __set_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate __get_onStatisticsUpdatedEvent() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_hasConnectionOwner))  hasConnectionOwner;

 bool __declspec(property(get=get_isServer))  isServer;

 bool __declspec(property(get=get_isClient))  isClient;

 bool __declspec(property(get=get_isDisposed))  isDisposed;

 int32_t __declspec(property(get=get_connectionCount))  connectionCount;

 GlobalNamespace::IConnectionRequestHandler __declspec(property(get=get_connectionRequestHandler))  connectionRequestHandler;

 int32_t __declspec(property(get=get_port))  port;

 ::ArrayW<uint8_t> __declspec(property(get=get_unconnectedPacketHeader))  unconnectedPacketHeader;

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=get_encryptionLayer))  encryptionLayer;


// Methods

/// @brief Method add_onInitializedEvent addr 0xdc1488 size 0x9c virtual true final true
 void add_onInitializedEvent(System::Action value) ;

/// @brief Method remove_onInitializedEvent addr 0xdc1524 size 0x9c virtual true final true
 void remove_onInitializedEvent(System::Action value) ;

/// @brief Method add_onConnectedEvent addr 0xdc15c0 size 0x9c virtual true final true
 void add_onConnectedEvent(System::Action value) ;

/// @brief Method remove_onConnectedEvent addr 0xdc165c size 0x9c virtual true final true
 void remove_onConnectedEvent(System::Action value) ;

/// @brief Method add_onDisconnectedEvent addr 0xdc16f8 size 0xb0 virtual true final true
 void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onDisconnectedEvent addr 0xdc17a8 size 0xb0 virtual true final true
 void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onConnectionFailedEvent addr 0xdc1858 size 0xb0 virtual true final true
 void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0xdc1908 size 0xb0 virtual true final true
 void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0xdc19b8 size 0xb0 virtual true final true
 void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0xdc1a68 size 0xb0 virtual true final true
 void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0xdc1b18 size 0xb0 virtual true final true
 void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0xdc1bc8 size 0xb0 virtual true final true
 void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onReceivedDataEvent addr 0xdc1c78 size 0xb0 virtual true final true
 void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method remove_onReceivedDataEvent addr 0xdc1d28 size 0xb0 virtual true final true
 void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method add_onReceiveUnconnectedDataEvent addr 0xdc1dd8 size 0xb0 virtual false final false
 void add_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint,LiteNetLib::Utils::NetDataReader> value) ;

/// @brief Method remove_onReceiveUnconnectedDataEvent addr 0xdc1e88 size 0xb0 virtual false final false
 void remove_onReceiveUnconnectedDataEvent(System::Action_2<System::Net::IPEndPoint,LiteNetLib::Utils::NetDataReader> value) ;

/// @brief Method add_onStatisticsUpdatedEvent addr 0xdc1f38 size 0x9c virtual false final false
 void add_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value) ;

/// @brief Method remove_onStatisticsUpdatedEvent addr 0xdc1fd4 size 0x9c virtual false final false
 void remove_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value) ;

/// @brief Method get_userId addr 0xdc2070 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0xdc2078 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isConnected addr 0xdc2080 size 0x10 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xdc2090 size 0x10 virtual true final true
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xdc20a0 size 0x10 virtual true final true
 bool get_isDisconnecting() ;

/// @brief Method get_isConnectionOwner addr 0xdc20b0 size 0x10 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_hasConnectionOwner addr 0xdc20c0 size 0x10c virtual false final false
 bool get_hasConnectionOwner() ;

/// @brief Method get_isServer addr 0xdc21cc size 0x10 virtual false final false
 bool get_isServer() ;

/// @brief Method get_isClient addr 0xdc21dc size 0x10 virtual false final false
 bool get_isClient() ;

/// @brief Method get_isDisposed addr 0xdc21ec size 0x10 virtual true final true
 bool get_isDisposed() ;

/// @brief Method get_connectionCount addr 0xdc21fc size 0x48 virtual true final true
 int32_t get_connectionCount() ;

/// @brief Method get_connectionRequestHandler addr 0xdc2244 size 0x8 virtual false final false
 GlobalNamespace::IConnectionRequestHandler get_connectionRequestHandler() ;

/// @brief Method get_port addr 0xdc224c size 0x1c virtual false final false
 int32_t get_port() ;

/// @brief Method get_unconnectedPacketHeader addr 0xdc2268 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_unconnectedPacketHeader() ;

/// @brief Method get_encryptionLayer addr 0xdc2270 size 0x8 virtual false final false
 GlobalNamespace::PacketEncryptionLayer get_encryptionLayer() ;

/// @brief Method NoDomainReloadInit addr 0xdc2278 size 0x88 virtual false final false
static void NoDomainReloadInit() ;

// Ctor Parameters []
explicit LiteNetLibConnectionManager() ;

/// @brief Method .ctor addr 0xdc2388 size 0xac virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
explicit LiteNetLibConnectionManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method .ctor addr 0xdc2434 size 0x200 virtual false final false
 void _ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method SendToAll addr 0xdc2634 size 0x8c virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendToAll addr 0xdc26d8 size 0xe8 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection) ;

/// @brief Method SendUnconnectedMessage addr 0xdc27c0 size 0x28 virtual false final false
 void SendUnconnectedMessage(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method PollUpdate addr 0xdc27e8 size 0xa0 virtual true final true
 void PollUpdate() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 bool Init(GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method ConnectToEndPoint addr 0xdc2b94 size 0xe8 virtual false final false
 void ConnectToEndPoint(::StringW userId, ::StringW userName, System::Net::IPEndPoint remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner) ;

/// @brief Method Dispose addr 0xdc2ea4 size 0x24 virtual true final true
 void Dispose() ;

/// @brief Method DisposeAsync addr 0xdc2f08 size 0x17c virtual true final true
 System::Threading::Tasks::Task DisposeAsync() ;

/// @brief Method DisposeInternal addr 0xdc2ec8 size 0x40 virtual false final false
 void DisposeInternal() ;

/// @brief Method Disconnect addr 0xdc3084 size 0x8 virtual true final true
 void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method DisconnectInternal addr 0xdc308c size 0xc4 virtual false final false
 void DisconnectInternal(GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method TryStartNetManager addr 0xdc3150 size 0x98 virtual false final false
 bool TryStartNetManager(int32_t port, bool enableBackgroundSentry) ;

/// @brief Method StartBackgroundSentry addr 0xdc31e8 size 0x260 virtual false final false
 void StartBackgroundSentry() ;

/// @brief Method CheckSentryState addr 0xdc2888 size 0x50 virtual false final false
 void CheckSentryState() ;

/// @brief Method UpdateStatistics addr 0xdc28d8 size 0x2bc virtual false final false
 void UpdateStatistics() ;

/// @brief Method GetConnection addr 0xdc3448 size 0x58 virtual true final true
 GlobalNamespace::IConnection GetConnection(int32_t index) ;

/// @brief Method IsConnectedToUser addr 0xdc34a0 size 0xb0 virtual false final false
 bool IsConnectedToUser(::StringW userId) ;

/// @brief Method HasConnectionToEndPoint addr 0xdc3550 size 0xb8 virtual false final false
 bool HasConnectionToEndPoint(System::Net::IPEndPoint endPoint) ;

/// @brief Method HasPendingConnectionToEndPoint addr 0xdc3608 size 0xb8 virtual false final false
 bool HasPendingConnectionToEndPoint(System::Net::IPEndPoint endPoint) ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerConnected addr 0xdc36c0 size 0x234 virtual true final true
 void LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer peer) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkError addr 0xdc38f4 size 0x1c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint endPoint, System::Net::Sockets::SocketError socketError) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkLatencyUpdate addr 0xdc3910 size 0x4 virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer peer, int32_t latencyMs) ;

/// @brief Method LiteNetLib.INetEventListener.OnConnectionRequest addr 0xdc3914 size 0x158 virtual true final true
 void LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest request) ;

/// @brief Method LiteNetLib.INetEventListener.OnPeerDisconnected addr 0xdc3b78 size 0x58 virtual true final true
 void LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer peer, LiteNetLib::DisconnectInfo disconnectInfo) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceive addr 0xdc3dc0 size 0xc8 virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer peer, LiteNetLib::NetPacketReader reader, LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected addr 0xdc3f5c size 0x3c virtual true final true
 void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint remoteEndPoint, LiteNetLib::NetPacketReader reader, LiteNetLib::UnconnectedMessageType messageType) ;

/// @brief Method GetConnection addr 0xdc3e88 size 0xc4 virtual false final false
 GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection GetConnection(LiteNetLib::NetPeer peer) ;

/// @brief Method AcceptAllPendingRequests addr 0xdc3f98 size 0xe8 virtual false final false
 void AcceptAllPendingRequests() ;

/// @brief Method TryAccept addr 0xdc3a6c size 0x54 virtual false final false
 void TryAccept(LiteNetLib::ConnectionRequest request, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method CreatePendingConnection addr 0xdc2d74 size 0x130 virtual false final false
 void CreatePendingConnection(LiteNetLib::NetPeer peer, ::StringW userId, ::StringW userName, bool isConnectionOwner) ;

/// @brief Method RemoveConnection addr 0xdc3bd0 size 0x1f0 virtual false final false
 void RemoveConnection(LiteNetLib::NetPeer netPeer, LiteNetLib::DisconnectReason reason) ;

/// @brief Method TryDisconnect addr 0xdc3ac0 size 0xb8 virtual false final false
 void TryDisconnect(LiteNetLib::DisconnectReason reason) ;

/// @brief Method ToDisconnectedReason addr 0xdc4080 size 0x38 virtual false final false
 GlobalNamespace::DisconnectedReason ToDisconnectedReason(LiteNetLib::DisconnectReason disconnectReason) ;

/// @brief Method ToConnectionFailedReason addr 0xdc40b8 size 0x14 virtual false final false
 GlobalNamespace::ConnectionFailedReason ToConnectionFailedReason(LiteNetLib::DisconnectReason disconnectReason) ;

/// @brief Method GetConnectionMessage addr 0xdc2c7c size 0xf8 virtual false final false
 LiteNetLib::Utils::NetDataWriter GetConnectionMessage() ;

/// @brief Method BackgroundDisconnectSentry addr 0xdc40cc size 0xcc virtual false final false
 System::Threading::Tasks::Task BackgroundDisconnectSentry() ;

/// @brief Method BackgroundShutdownSentry addr 0xdc4198 size 0xcc virtual false final false
 System::Threading::Tasks::Task BackgroundShutdownSentry() ;

/// @brief Method ToLiteNetDeliveryMethod addr 0xdc26c0 size 0x18 virtual false final false
static LiteNetLib::DeliveryMethod ToLiteNetDeliveryMethod(BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method FromLiteNetDeliveryMethod addr 0xdc3f4c size 0x10 virtual false final false
static BGNet::Core::DeliveryMethod FromLiteNetDeliveryMethod(LiteNetLib::DeliveryMethod deliveryMethod) ;

/// @brief Method Log addr 0xdc4264 size 0x8c virtual false final false
 void Log(::StringW msg) ;

/// @brief Method LogError addr 0xdc42f0 size 0x8c virtual false final false
 void LogError(::StringW msg) ;

/// @brief Method GetLogFormatConnection addr 0xdc437c size 0x70 virtual false final false
static ::StringW GetLogFormatConnection(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection netPeerConnection) ;

/// @brief Method GetLogFormatUserInfo addr 0xdc43ec size 0x5c virtual false final false
static ::StringW GetLogFormatUserInfo(::StringW userName, ::StringW userId, System::Net::IPEndPoint ipEndPoint) ;

/// @brief Method <DisposeAsync>b__98_0 addr 0xdc4448 size 0x101c virtual false final false
 void _DisposeAsync_b__98_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectionState, "", "LiteNetLibConnectionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetworkMode, "", "LiteNetLibConnectionManager/NetworkMode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__ConnectToServerParams, "", "LiteNetLibConnectionManager/ConnectToServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__LiteNetLibConnectionParamsBase, "", "LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnection, "", "LiteNetLibConnectionManager/NetPeerConnection");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__NetPeerConnectionRequest, "", "LiteNetLibConnectionManager/NetPeerConnectionRequest");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartClientParams, "", "LiteNetLibConnectionManager/StartClientParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager__StartServerParams, "", "LiteNetLibConnectionManager/StartServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager____c, "", "LiteNetLibConnectionManager/<>c");
NEED_NO_BOX(GlobalNamespace::LiteNetLibConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager, "", "LiteNetLibConnectionManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager___BackgroundDisconnectSentry_d__126, "", "LiteNetLibConnectionManager/<BackgroundDisconnectSentry>d__126");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LiteNetLibConnectionManager___BackgroundShutdownSentry_d__127, "", "LiteNetLibConnectionManager/<BackgroundShutdownSentry>d__127");
