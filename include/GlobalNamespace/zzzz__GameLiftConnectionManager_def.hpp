#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
class IAuthenticationTokenProvider;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class GameLiftClientConnectionRequestHandler;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
template<typename T>
class Action_1;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IConnection;
}
namespace GlobalNamespace {
class ICertificateValidator;
}
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IConnectionManager;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System {
class Action;
}
namespace BGNet::Core {
struct DeliveryMethod;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__GameLiftConnectionManager__ConnectionState;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
class GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams;
}
namespace GlobalNamespace {
class GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;
}
namespace GlobalNamespace {
class GlobalNamespace__GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81;
}
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12693))
// CS Name: GameLiftConnectionManager::ConnectionState
struct CORDL_TYPE GlobalNamespace__GameLiftConnectionManager__ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__ConnectionState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__GameLiftConnectionManager__ConnectionState(GlobalNamespace__GameLiftConnectionManager__ConnectionState const&) = default;
                    constexpr GlobalNamespace__GameLiftConnectionManager__ConnectionState(GlobalNamespace__GameLiftConnectionManager__ConnectionState&&) = default;
                    constexpr GlobalNamespace__GameLiftConnectionManager__ConnectionState& operator=(GlobalNamespace__GameLiftConnectionManager__ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameLiftConnectionManager__ConnectionState& operator=(GlobalNamespace__GameLiftConnectionManager__ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameLiftConnectionManager__ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameLiftConnectionManager__ConnectionState_Unwrapped : int32_t {
__Unconnected = 0,
__Connecting = 1,
__Connected = 2,
__Disconnecting = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameLiftConnectionManager__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameLiftConnectionManager__ConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unconnected offset 0
static GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState const Unconnected;

/// @brief Field Connecting offset 0
static GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState const Connecting;

/// @brief Field Connected offset 0
static GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState const Connected;

/// @brief Field Disconnecting offset 0
static GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState const Disconnecting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameLiftConnectionManagerParamsBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12694))
// CS Name: GameLiftConnectionManager::GameLiftConnectionManagerParamsBase
class CORDL_TYPE GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager>
constexpr operator  GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase& operator=(GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase&& o) noexcept = default;
  constexpr GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase& operator=(GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=__get_authenticationTokenProviderTask, put=__set_authenticationTokenProviderTask))  authenticationTokenProviderTask;

constexpr void __set_authenticationTokenProviderTask(System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> __get_authenticationTokenProviderTask() const;

 BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __declspec(property(get=__get_gameLiftPlayerSessionProvider, put=__set_gameLiftPlayerSessionProvider))  gameLiftPlayerSessionProvider;

constexpr void __set_gameLiftPlayerSessionProvider(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider value) ;

constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __get_gameLiftPlayerSessionProvider() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_configuration() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase() ;

/// @brief Method .ctor addr 0xdbaad0 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectToServerParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12694))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12695))
// CS Name: GameLiftConnectionManager::ConnectToServerParams
class CORDL_TYPE GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams : public GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams(GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams(GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(ptr) {
}


  constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams&& o) noexcept = default;
  constexpr GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams& operator=(GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams() ;

/// @brief Method .ctor addr 0xdbab10 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StartClientParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12694))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12696))
// CS Name: GameLiftConnectionManager::StartClientParams
class CORDL_TYPE GlobalNamespace__GameLiftConnectionManager__StartClientParams : public GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__GameLiftConnectionManager__StartClientParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__StartClientParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams(GlobalNamespace__GameLiftConnectionManager__StartClientParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameLiftConnectionManager__StartClientParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams(GlobalNamespace__GameLiftConnectionManager__StartClientParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameLiftConnectionManager__StartClientParams(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase(ptr) {
}


  constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams& operator=(GlobalNamespace__GameLiftConnectionManager__StartClientParams&& o) noexcept = default;
  constexpr GlobalNamespace__GameLiftConnectionManager__StartClientParams& operator=(GlobalNamespace__GameLiftConnectionManager__StartClientParams const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameLiftConnectionManager__StartClientParams() ;

/// @brief Method .ctor addr 0xdbab3c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GameLiftConnectToServer>d__81
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12697))
// CS Name: GameLiftConnectionManager::<GameLiftConnectToServer>d__81
struct CORDL_TYPE GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::GameLiftConnectionManager", modifiers: "", def_value: None }, CppParam { name: "secret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "code", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::GameLiftConnectionManager __4__this, ::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> __u__2) noexcept;


                    constexpr GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81(GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81 const&) = default;
                    constexpr GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81(GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81&&) = default;
                    constexpr GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81& operator=(GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81& operator=(GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::GameLiftConnectionManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::GameLiftConnectionManager value) ;

constexpr GlobalNamespace::GameLiftConnectionManager __get___4__this() const;

 ::StringW __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(::StringW value) ;

constexpr ::StringW __get_secret() const;

 ::StringW __declspec(property(get=__get_code, put=__set_code))  code;

constexpr void __set_code(::StringW value) ;

constexpr ::StringW __get_code() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IAuthenticationTokenProvider> __get___u__1() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<BGNet::Core::GameLift::PlayerSessionInfo> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0xdbab68 size 0x60c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdbb174 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameLiftConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12698))
// CS Name: GameLiftConnectionManager
class CORDL_TYPE GameLiftConnectionManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GameLiftConnectToServer_d__81 = GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81;

using StartClientParams = GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams;

using ConnectToServerParams = GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams;

using GameLiftConnectionManagerParamsBase = GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase;

using ConnectionState = GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState;

/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr operator  GlobalNamespace::IConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~GameLiftConnectionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: " const&", def_value: None }]
constexpr GameLiftConnectionManager(GameLiftConnectionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftConnectionManager", modifiers: "&&", def_value: None }]
constexpr GameLiftConnectionManager(GameLiftConnectionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftConnectionManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameLiftConnectionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftConnectionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftConnectionManager& operator=(GameLiftConnectionManager&& o) noexcept = default;
  constexpr GameLiftConnectionManager& operator=(GameLiftConnectionManager const& o) noexcept = default;
                


// Fields

 BGNet::Core::ITimeProvider __declspec(property(get=__get__timeProvider, put=__set__timeProvider))  _timeProvider;

constexpr void __set__timeProvider(BGNet::Core::ITimeProvider value) ;

constexpr BGNet::Core::ITimeProvider __get__timeProvider() const;

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility() const;

 GlobalNamespace::IConnectionManager __declspec(property(get=__get__connectionManager, put=__set__connectionManager))  _connectionManager;

constexpr void __set__connectionManager(GlobalNamespace::IConnectionManager value) ;

constexpr GlobalNamespace::IConnectionManager __get__connectionManager() const;

 GlobalNamespace::ICertificateValidator __declspec(property(get=__get__certificateValidator, put=__set__certificateValidator))  _certificateValidator;

constexpr void __set__certificateValidator(GlobalNamespace::ICertificateValidator value) ;

constexpr GlobalNamespace::ICertificateValidator __get__certificateValidator() const;

 ::StringW __declspec(property(get=__get__code, put=__set__code))  _code;

constexpr void __set__code(::StringW value) ;

constexpr ::StringW __get__code() const;

 ::StringW __declspec(property(get=__get__secret, put=__set__secret))  _secret;

constexpr void __set__secret(::StringW value) ;

constexpr ::StringW __get__secret() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask, put=__set__selectionMask))  _selectionMask;

constexpr void __set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration, put=__set__configuration))  _configuration;

constexpr void __set__configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration() const;

 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState __declspec(property(get=__get__connectionState, put=__set__connectionState))  _connectionState;

constexpr void __set__connectionState(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState value) ;

constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState __get__connectionState() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__connectionCancellationTokenSource, put=__set__connectionCancellationTokenSource))  _connectionCancellationTokenSource;

constexpr void __set__connectionCancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__connectionCancellationTokenSource() const;

 System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> __declspec(property(get=__get__authenticationTokenProviderTask, put=__set__authenticationTokenProviderTask))  _authenticationTokenProviderTask;

constexpr void __set__authenticationTokenProviderTask(System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> value) ;

constexpr System::Threading::Tasks::Task_1<GlobalNamespace::IAuthenticationTokenProvider> __get__authenticationTokenProviderTask() const;

 BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __declspec(property(get=__get__gameLiftPlayerSessionProvider, put=__set__gameLiftPlayerSessionProvider))  _gameLiftPlayerSessionProvider;

constexpr void __set__gameLiftPlayerSessionProvider(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider value) ;

constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __get__gameLiftPlayerSessionProvider() const;

 GlobalNamespace::GameLiftClientConnectionRequestHandler __declspec(property(get=__get__connectionRequestHandler, put=__set__connectionRequestHandler))  _connectionRequestHandler;

constexpr void __set__connectionRequestHandler(GlobalNamespace::GameLiftClientConnectionRequestHandler value) ;

constexpr GlobalNamespace::GameLiftClientConnectionRequestHandler __get__connectionRequestHandler() const;

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


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 int32_t __declspec(property(get=get_connectionCount))  connectionCount;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_isDisposed))  isDisposed;

 ::StringW __declspec(property(get=get_playerSessionId))  playerSessionId;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 ::StringW __declspec(property(get=get_code))  code;

 ::StringW __declspec(property(get=get_secret))  secret;


// Methods

/// @brief Method add_onInitializedEvent addr 0xdb8abc size 0x9c virtual true final true
 void add_onInitializedEvent(System::Action value) ;

/// @brief Method remove_onInitializedEvent addr 0xdb8b58 size 0x9c virtual true final true
 void remove_onInitializedEvent(System::Action value) ;

/// @brief Method add_onConnectedEvent addr 0xdb8bf4 size 0x9c virtual true final true
 void add_onConnectedEvent(System::Action value) ;

/// @brief Method remove_onConnectedEvent addr 0xdb8c90 size 0x9c virtual true final true
 void remove_onConnectedEvent(System::Action value) ;

/// @brief Method add_onDisconnectedEvent addr 0xdb8d2c size 0xb0 virtual true final true
 void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onDisconnectedEvent addr 0xdb8ddc size 0xb0 virtual true final true
 void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onConnectionFailedEvent addr 0xdb8e8c size 0xb0 virtual true final true
 void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_onConnectionFailedEvent addr 0xdb8f3c size 0xb0 virtual true final true
 void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_onConnectionConnectedEvent addr 0xdb8fec size 0xb0 virtual true final true
 void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method remove_onConnectionConnectedEvent addr 0xdb909c size 0xb0 virtual true final true
 void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection> value) ;

/// @brief Method add_onConnectionDisconnectedEvent addr 0xdb914c size 0xb0 virtual true final true
 void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_onConnectionDisconnectedEvent addr 0xdb91fc size 0xb0 virtual true final true
 void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection,GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_onReceivedDataEvent addr 0xdb92ac size 0xb0 virtual true final true
 void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method remove_onReceivedDataEvent addr 0xdb935c size 0xb0 virtual true final true
 void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection,LiteNetLib::Utils::NetDataReader,BGNet::Core::DeliveryMethod> value) ;

/// @brief Method get_userId addr 0xdb940c size 0xec virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0xdb94f8 size 0xec virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_isConnected addr 0xdb95e4 size 0x10 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xdb95f4 size 0x10 virtual true final true
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xdb9604 size 0x10 virtual true final true
 bool get_isDisconnecting() ;

/// @brief Method get_connectionCount addr 0xdb9614 size 0xa4 virtual true final true
 int32_t get_connectionCount() ;

/// @brief Method get_isConnectionOwner addr 0xdb96b8 size 0xa4 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_isDisposed addr 0xdb975c size 0xa4 virtual true final true
 bool get_isDisposed() ;

/// @brief Method get_playerSessionId addr 0xdb9800 size 0x1c virtual false final false
 ::StringW get_playerSessionId() ;

/// @brief Method get_selectionMask addr 0xdb981c size 0x14 virtual false final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0xdb9830 size 0x14 virtual false final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_code addr 0xdb9844 size 0x8 virtual false final false
 ::StringW get_code() ;

/// @brief Method get_secret addr 0xdb984c size 0x8 virtual false final false
 ::StringW get_secret() ;

/// @brief Method SendToAll addr 0xdb9854 size 0xbc virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method SendToAll addr 0xdb9910 size 0xc4 virtual true final true
 void SendToAll(LiteNetLib::Utils::NetDataWriter writer, BGNet::Core::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection excludingConnection) ;

/// @brief Method PollUpdate addr 0xdb99d4 size 0xa0 virtual true final true
 void PollUpdate() ;

// Ctor Parameters []
explicit GameLiftConnectionManager() ;

/// @brief Method .ctor addr 0xdb9a74 size 0x118 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }, CppParam { name: "connectionManager", ty: "GlobalNamespace::IConnectionManager", modifiers: "", def_value: None }, CppParam { name: "certificateValidator", ty: "GlobalNamespace::ICertificateValidator", modifiers: "", def_value: None }]
explicit GameLiftConnectionManager(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager, GlobalNamespace::ICertificateValidator certificateValidator) ;

/// @brief Method .ctor addr 0xdb9c38 size 0x4b0 virtual false final false
 void _ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility, GlobalNamespace::IConnectionManager connectionManager, GlobalNamespace::ICertificateValidator certificateValidator) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 bool Init(GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method DisposeAsync addr 0xdba0e8 size 0xa4 virtual true final true
 System::Threading::Tasks::Task DisposeAsync() ;

/// @brief Method Dispose addr 0xdba18c size 0xa0 virtual true final true
 void Dispose() ;

/// @brief Method Disconnect addr 0xdba22c size 0x8 virtual true final true
 void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method DisconnectInternal addr 0xdba498 size 0xc virtual false final false
 void DisconnectInternal(GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method DisconnectInternal addr 0xdba234 size 0x264 virtual false final false
 void DisconnectInternal(GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method GetConnection addr 0xdba4a4 size 0xac virtual true final true
 GlobalNamespace::IConnection GetConnection(int32_t index) ;

/// @brief Method HandleConnected addr 0xdba550 size 0x30 virtual false final false
 void HandleConnected() ;

/// @brief Method HandleConnectionConnected addr 0xdba580 size 0x1c virtual false final false
 void HandleConnectionConnected(GlobalNamespace::IConnection connection) ;

/// @brief Method HandleConnectionDisconnected addr 0xdba59c size 0x1c virtual false final false
 void HandleConnectionDisconnected(GlobalNamespace::IConnection connection, GlobalNamespace::DisconnectedReason reason) ;

/// @brief Method HandleConnectionFailed addr 0xdba5b8 size 0xc virtual false final false
 void HandleConnectionFailed(GlobalNamespace::ConnectionFailedReason failedReason) ;

/// @brief Method HandleReceivedData addr 0xdba5c4 size 0x1c virtual false final false
 void HandleReceivedData(GlobalNamespace::IConnection connection, LiteNetLib::Utils::NetDataReader reader, BGNet::Core::DeliveryMethod deliveryMethod) ;

/// @brief Method GameLiftConnectToServer addr 0xdba5e0 size 0xb8 virtual false final false
 void GameLiftConnectToServer(::StringW secret, ::StringW code, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method HandleConnectToServerSuccess addr 0xdba698 size 0x3c4 virtual false final false
 void HandleConnectToServerSuccess(::StringW playerSessionId, ::StringW hostName, int32_t port, ::StringW gameSessionId, ::StringW secret, ::StringW code, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method GetPublicServers addr 0xdbaa6c size 0x64 virtual false final false
 void GetPublicServers(System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>> onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason> onFailure, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, int32_t offset, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectionState, "", "GameLiftConnectionManager/ConnectionState");
NEED_NO_BOX(GlobalNamespace::GameLiftConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameLiftConnectionManager, "", "GameLiftConnectionManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams, "", "GameLiftConnectionManager/ConnectToServerParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__GameLiftConnectionManagerParamsBase, "", "GameLiftConnectionManager/GameLiftConnectionManagerParamsBase");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams, "", "GameLiftConnectionManager/StartClientParams");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager___GameLiftConnectToServer_d__81, "", "GameLiftConnectionManager/<GameLiftConnectToServer>d__81");
