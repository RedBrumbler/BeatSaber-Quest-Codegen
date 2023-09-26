#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System::Net {
class IPAddress;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace GlobalNamespace {
class LiteNetLibConnectionManager;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class BasicConnectionRequestHandler;
}
namespace GlobalNamespace {
class LocalNetworkDiscoveryManager;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
struct GlobalNamespace__LocalNetworkPlayerModel___Start_d__41;
}
// Type: ::LocalNetworkPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4556))
// CS Name: LocalNetworkPlayerModel::LocalNetworkPlayer
class CORDL_TYPE GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INetworkPlayer
constexpr operator  GlobalNamespace::INetworkPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer(GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer(GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer& operator=(GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer&& o) noexcept = default;
  constexpr GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer& operator=(GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer const& o) noexcept = default;
                


// Fields

/// @brief Field kPeerBroadcastTimeout offset 0
static constexpr float_t  kPeerBroadcastTimeout{30};

/// @brief Field kConnectionTimeout offset 0
static constexpr float_t  kConnectionTimeout{5};

/// @brief Field kRequestTimeout offset 0
static constexpr float_t  kRequestTimeout{120};

 GlobalNamespace::LocalNetworkPlayerModel __declspec(property(get=__get__playerModel, put=__set__playerModel))  _playerModel;

constexpr void __set__playerModel(GlobalNamespace::LocalNetworkPlayerModel value) ;

constexpr GlobalNamespace::LocalNetworkPlayerModel __get__playerModel() const;

 ::StringW __declspec(property(get=__get__userId, put=__set__userId))  _userId;

constexpr void __set__userId(::StringW value) ;

constexpr ::StringW __get__userId() const;

 ::StringW __declspec(property(get=__get__userName, put=__set__userName))  _userName;

constexpr void __set__userName(::StringW value) ;

constexpr ::StringW __get__userName() const;

 System::Net::IPAddress __declspec(property(get=__get__ipAddress, put=__set__ipAddress))  _ipAddress;

constexpr void __set__ipAddress(System::Net::IPAddress value) ;

constexpr System::Net::IPAddress __get__ipAddress() const;

 bool __declspec(property(get=__get__isMe, put=__set__isMe))  _isMe;

constexpr void __set__isMe(bool value) ;

constexpr bool __get__isMe() const;

 bool __declspec(property(get=__get__isPartyOwner, put=__set__isPartyOwner))  _isPartyOwner;

constexpr void __set__isPartyOwner(bool value) ;

constexpr bool __get__isPartyOwner() const;

 float_t __declspec(property(get=__get__joinRequestTime, put=__set__joinRequestTime))  _joinRequestTime;

constexpr void __set__joinRequestTime(float_t value) ;

constexpr float_t __get__joinRequestTime() const;

 float_t __declspec(property(get=__get__inviteSentTime, put=__set__inviteSentTime))  _inviteSentTime;

constexpr void __set__inviteSentTime(float_t value) ;

constexpr float_t __get__inviteSentTime() const;

 bool __declspec(property(get=__get__isBlocked, put=__set__isBlocked))  _isBlocked;

constexpr void __set__isBlocked(bool value) ;

constexpr bool __get__isBlocked() const;

 bool __declspec(property(get=__get__hasBlockedMe, put=__set__hasBlockedMe))  _hasBlockedMe;

constexpr void __set__hasBlockedMe(bool value) ;

constexpr bool __get__hasBlockedMe() const;

 ::StringW __declspec(property(get=__get__secret, put=__set__secret))  _secret;

constexpr void __set__secret(::StringW value) ;

constexpr ::StringW __get__secret() const;

 int32_t __declspec(property(get=__get__multiplayerPort, put=__set__multiplayerPort))  _multiplayerPort;

constexpr void __set__multiplayerPort(int32_t value) ;

constexpr int32_t __get__multiplayerPort() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 float_t __declspec(property(get=__get__connectingStartTime, put=__set__connectingStartTime))  _connectingStartTime;

constexpr void __set__connectingStartTime(float_t value) ;

constexpr float_t __get__connectingStartTime() const;

 int32_t __declspec(property(get=__get__currentPartySize, put=__set__currentPartySize))  _currentPartySize;

constexpr void __set__currentPartySize(int32_t value) ;

constexpr int32_t __get__currentPartySize() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask, put=__set__selectionMask))  _selectionMask;

constexpr void __set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration, put=__set__configuration))  _configuration;

constexpr void __set__configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration() const;

 float_t __declspec(property(get=__get__lastUpdateTime, put=__set__lastUpdateTime))  _lastUpdateTime;

constexpr void __set__lastUpdateTime(float_t value) ;

constexpr float_t __get__lastUpdateTime() const;

 bool __declspec(property(get=__get__allowedJoinToMyParty, put=__set__allowedJoinToMyParty))  _allowedJoinToMyParty;

constexpr void __set__allowedJoinToMyParty(bool value) ;

constexpr bool __get__allowedJoinToMyParty() const;

 bool __declspec(property(get=__get__requestedToJoinMyParty, put=__set__requestedToJoinMyParty))  _requestedToJoinMyParty;

constexpr void __set__requestedToJoinMyParty(bool value) ;

constexpr bool __get__requestedToJoinMyParty() const;

 bool __declspec(property(get=__get__invitedMeToJoinTheirParty, put=__set__invitedMeToJoinTheirParty))  _invitedMeToJoinTheirParty;

constexpr void __set__invitedMeToJoinTheirParty(bool value) ;

constexpr bool __get__invitedMeToJoinTheirParty() const;


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 System::Net::IPAddress __declspec(property(get=get_ipAddress))  ipAddress;

 bool __declspec(property(get=get_isMe))  isMe;

 bool __declspec(property(get=get_isPartyOwner))  isPartyOwner;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer))  connectedPlayer;

 bool __declspec(property(get=get_isBlocked))  isBlocked;

 bool __declspec(property(get=get_hasBlockedMe))  hasBlockedMe;

 ::StringW __declspec(property(get=get_secret))  secret;

 int32_t __declspec(property(get=get_multiplayerPort))  multiplayerPort;

 bool __declspec(property(get=get_isMyPartyOwner))  isMyPartyOwner;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_allowedJoinToMyParty))  allowedJoinToMyParty;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_wasConnecting))  wasConnecting;

 bool __declspec(property(get=get_isTimedOut))  isTimedOut;

 bool __declspec(property(get=get_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canInvite))  canInvite;

 bool __declspec(property(get=get_canKick))  canKick;

 bool __declspec(property(get=get_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock))  canUnblock;

 bool __declspec(property(get=get_isConnectable))  isConnectable;


// Methods

/// @brief Method get_userId addr 0x22416a8 size 0x8 virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x22416b0 size 0x8 virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_ipAddress addr 0x22416b8 size 0x8 virtual false final false
 System::Net::IPAddress get_ipAddress() ;

/// @brief Method get_isMe addr 0x22416c0 size 0x8 virtual true final true
 bool get_isMe() ;

/// @brief Method get_isPartyOwner addr 0x22416c8 size 0x8 virtual false final false
 bool get_isPartyOwner() ;

/// @brief Method get_currentPartySize addr 0x22416d0 size 0x8 virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method get_selectionMask addr 0x22416d8 size 0x14 virtual true final true
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_configuration addr 0x22416ec size 0x14 virtual true final true
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_connectedPlayer addr 0x2241700 size 0x8 virtual true final true
 GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method get_isBlocked addr 0x2241708 size 0x8 virtual false final false
 bool get_isBlocked() ;

/// @brief Method get_hasBlockedMe addr 0x2241710 size 0x8 virtual false final false
 bool get_hasBlockedMe() ;

/// @brief Method get_secret addr 0x2241718 size 0x8 virtual false final false
 ::StringW get_secret() ;

/// @brief Method get_multiplayerPort addr 0x2241720 size 0x8 virtual false final false
 int32_t get_multiplayerPort() ;

/// @brief Method get_isMyPartyOwner addr 0x22414c8 size 0x68 virtual true final true
 bool get_isMyPartyOwner() ;

/// @brief Method get_isConnected addr 0x2241728 size 0xb0 virtual false final false
 bool get_isConnected() ;

/// @brief Method get_allowedJoinToMyParty addr 0x22417d8 size 0x8 virtual false final false
 bool get_allowedJoinToMyParty() ;

/// @brief Method get_isConnecting addr 0x2241024 size 0x40 virtual false final false
 bool get_isConnecting() ;

/// @brief Method get_wasConnecting addr 0x22417e0 size 0x40 virtual false final false
 bool get_wasConnecting() ;

/// @brief Method get_isTimedOut addr 0x223f2a0 size 0x70 virtual false final false
 bool get_isTimedOut() ;

// Ctor Parameters [CppParam { name: "playerModel", ty: "GlobalNamespace::LocalNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ipAddress", ty: "System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "isMe", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer(GlobalNamespace::LocalNetworkPlayerModel playerModel, ::StringW userId, ::StringW userName, System::Net::IPAddress ipAddress, bool isMe) ;

/// @brief Method .ctor addr 0x223fb40 size 0x50 virtual false final false
 void _ctor(GlobalNamespace::LocalNetworkPlayerModel playerModel, ::StringW userId, ::StringW userName, System::Net::IPAddress ipAddress, bool isMe) ;

/// @brief Method get_isWaitingOnJoin addr 0x2241820 size 0x44 virtual true final true
 bool get_isWaitingOnJoin() ;

/// @brief Method get_canJoin addr 0x2241864 size 0xb0 virtual true final true
 bool get_canJoin() ;

/// @brief Method Join addr 0x2241914 size 0x4c virtual true final true
 void Join() ;

/// @brief Method get_requiresPassword addr 0x2241960 size 0x8 virtual true final true
 bool get_requiresPassword() ;

/// @brief Method Join addr 0x2241968 size 0x4 virtual true final true
 void Join(::StringW password) ;

/// @brief Method get_isWaitingOnInvite addr 0x224196c size 0x44 virtual true final true
 bool get_isWaitingOnInvite() ;

/// @brief Method get_canInvite addr 0x22419b0 size 0xac virtual true final true
 bool get_canInvite() ;

/// @brief Method Invite addr 0x2241a5c size 0x5c virtual true final true
 void Invite() ;

/// @brief Method get_canKick addr 0x2241ab8 size 0x3c virtual true final true
 bool get_canKick() ;

/// @brief Method Kick addr 0x2241af4 size 0x20 virtual true final true
 void Kick() ;

/// @brief Method get_canLeave addr 0x2241b14 size 0x4c virtual true final true
 bool get_canLeave() ;

/// @brief Method Leave addr 0x2241b60 size 0x24 virtual true final true
 void Leave() ;

/// @brief Method get_canBlock addr 0x2241b84 size 0x68 virtual true final true
 bool get_canBlock() ;

/// @brief Method Block addr 0x2241bec size 0xc virtual true final true
 void Block() ;

/// @brief Method get_canUnblock addr 0x2241bf8 size 0x8 virtual true final true
 bool get_canUnblock() ;

/// @brief Method Unblock addr 0x2241c00 size 0x8 virtual true final true
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x223fdcc size 0x3c virtual true final true
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x22406c8 size 0x5c virtual true final true
 void SendInviteResponse(bool accept) ;

/// @brief Method Update addr 0x223f7a8 size 0xec virtual false final false
 bool Update(bool isPartyOwner, int32_t currentPartySize, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method HasFailedToConnect addr 0x223f21c size 0x84 virtual false final false
 bool HasFailedToConnect() ;

/// @brief Method SetInvited addr 0x224068c size 0x3c virtual false final false
 void SetInvited(bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, int32_t multiplayerPort) ;

/// @brief Method SetJoinResponse addr 0x22402fc size 0x40 virtual false final false
 void SetJoinResponse(bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, int32_t multiplayerPort, bool blocked) ;

/// @brief Method SetInviteResponse addr 0x224087c size 0x2c virtual false final false
 void SetInviteResponse(bool accepted, bool blocked) ;

/// @brief Method SetJoinRequested addr 0x223fdc0 size 0xc virtual false final false
 void SetJoinRequested() ;

/// @brief Method SetConnected addr 0x2240f30 size 0x20 virtual false final false
 bool SetConnected(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method SetDisconnected addr 0x2241064 size 0x24 virtual false final false
 bool SetDisconnected() ;

/// @brief Method get_isConnectable addr 0x2241c5c size 0x3c virtual false final false
 bool get_isConnectable() ;

/// @brief Method Connect addr 0x2241c08 size 0x54 virtual false final false
 void Connect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CreatePartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4534))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4557))
// CS Name: LocalNetworkPlayerModel::CreatePartyConfig
class CORDL_TYPE GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig : public GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel>
constexpr operator  GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig(GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig(GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig(void* ptr) noexcept : GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(ptr) {
}


  constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig& operator=(GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig&& o) noexcept = default;
  constexpr GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig& operator=(GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig() ;

/// @brief Method .ctor addr 0x2241c98 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__41
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4558))
// CS Name: LocalNetworkPlayerModel::<Start>d__41
struct CORDL_TYPE GlobalNamespace__LocalNetworkPlayerModel___Start_d__41 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::LocalNetworkPlayerModel", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LocalNetworkPlayerModel___Start_d__41(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::LocalNetworkPlayerModel __4__this, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __u__1) noexcept;


                    constexpr GlobalNamespace__LocalNetworkPlayerModel___Start_d__41(GlobalNamespace__LocalNetworkPlayerModel___Start_d__41 const&) = default;
                    constexpr GlobalNamespace__LocalNetworkPlayerModel___Start_d__41(GlobalNamespace__LocalNetworkPlayerModel___Start_d__41&&) = default;
                    constexpr GlobalNamespace__LocalNetworkPlayerModel___Start_d__41& operator=(GlobalNamespace__LocalNetworkPlayerModel___Start_d__41 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LocalNetworkPlayerModel___Start_d__41& operator=(GlobalNamespace__LocalNetworkPlayerModel___Start_d__41&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalNetworkPlayerModel___Start_d__41(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 GlobalNamespace::LocalNetworkPlayerModel __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::LocalNetworkPlayerModel value) ;

constexpr GlobalNamespace::LocalNetworkPlayerModel __get___4__this() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2241ca0 size 0x6bc virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x224235c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4559))
// CS Name: LocalNetworkPlayerModel
class CORDL_TYPE LocalNetworkPlayerModel : public GlobalNamespace::BaseNetworkPlayerModel {
public:
// Declarations
using _Start_d__41 = GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel___Start_d__41;

using CreatePartyConfig = GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig;

using LocalNetworkPlayer = GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer;

/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr operator  GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf8};

virtual ~LocalNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr LocalNetworkPlayerModel(LocalNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr LocalNetworkPlayerModel(LocalNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalNetworkPlayerModel(void* ptr) noexcept : GlobalNamespace::BaseNetworkPlayerModel(ptr) {
}


  constexpr LocalNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalNetworkPlayerModel& operator=(LocalNetworkPlayerModel&& o) noexcept = default;
  constexpr LocalNetworkPlayerModel& operator=(LocalNetworkPlayerModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LocalNetworkDiscoveryManager __declspec(property(get=__get__discoveryManager, put=__set__discoveryManager))  _discoveryManager;

constexpr void __set__discoveryManager(GlobalNamespace::LocalNetworkDiscoveryManager value) ;

constexpr GlobalNamespace::LocalNetworkDiscoveryManager __get__discoveryManager() const;

 GlobalNamespace::IPlatformUserModel __declspec(property(get=__get__platformUserModel, put=__set__platformUserModel))  _platformUserModel;

constexpr void __set__platformUserModel(GlobalNamespace::IPlatformUserModel value) ;

constexpr GlobalNamespace::IPlatformUserModel __get__platformUserModel() const;

 GlobalNamespace::INetworkConfig __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::INetworkConfig value) ;

constexpr GlobalNamespace::INetworkConfig __get__networkConfig() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> __declspec(property(get=__get__partyPlayers, put=__set__partyPlayers))  _partyPlayers;

constexpr void __set__partyPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> __get__partyPlayers() const;

 System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> __declspec(property(get=__get__otherPlayers, put=__set__otherPlayers))  _otherPlayers;

constexpr void __set__otherPlayers(System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> __get__otherPlayers() const;

 GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer __declspec(property(get=__get__localPlayer, put=__set__localPlayer))  _localPlayer;

constexpr void __set__localPlayer(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer value) ;

constexpr GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer __get__localPlayer() const;

 bool __declspec(property(get=__get__networkingFailed, put=__set__networkingFailed))  _networkingFailed;

constexpr void __set__networkingFailed(bool value) ;

constexpr bool __get__networkingFailed() const;

 bool __declspec(property(get=__get__partyEnabled, put=__set__partyEnabled))  _partyEnabled;

constexpr void __set__partyEnabled(bool value) ;

constexpr bool __get__partyEnabled() const;

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=__get__partyManager, put=__set__partyManager))  _partyManager;

constexpr void __set__partyManager(GlobalNamespace::INetworkPlayerModel value) ;

constexpr GlobalNamespace::INetworkPlayerModel __get__partyManager() const;

 GlobalNamespace::BasicConnectionRequestHandler __declspec(property(get=__get__connectionRequestHandler, put=__set__connectionRequestHandler))  _connectionRequestHandler;

constexpr void __set__connectionRequestHandler(GlobalNamespace::BasicConnectionRequestHandler value) ;

constexpr GlobalNamespace::BasicConnectionRequestHandler __get__connectionRequestHandler() const;

 System::Action_1<int32_t> __declspec(property(get=__get_partySizeChangedEvent, put=__set_partySizeChangedEvent))  partySizeChangedEvent;

constexpr void __set_partySizeChangedEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_partySizeChangedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_partyChangedEvent, put=__set_partyChangedEvent))  partyChangedEvent;

constexpr void __set_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_partyChangedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_joinRequestedEvent, put=__set_joinRequestedEvent))  joinRequestedEvent;

constexpr void __set_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayer> __get_joinRequestedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_inviteRequestedEvent, put=__set_inviteRequestedEvent))  inviteRequestedEvent;

constexpr void __set_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayer> __get_inviteRequestedEvent() const;


// Properties

 bool __declspec(property(get=get_canInvitePlayers))  canInvitePlayers;

 bool __declspec(property(get=get_hasConnectedPeers))  hasConnectedPeers;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 bool __declspec(property(get=get_discoveryEnabled, put=set_discoveryEnabled))  discoveryEnabled;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_otherPlayers))  otherPlayers;

 bool __declspec(property(get=get_hasNetworkingFailed))  hasNetworkingFailed;

 GlobalNamespace::LiteNetLibConnectionManager __declspec(property(get=get_liteNetLibConnectionManager))  liteNetLibConnectionManager;


// Methods

/// @brief Method get_canInvitePlayers addr 0x223e90c size 0x90 virtual false final false
 bool get_canInvitePlayers() ;

/// @brief Method get_hasConnectedPeers addr 0x223e99c size 0x50 virtual false final false
 bool get_hasConnectedPeers() ;

/// @brief Method get_currentPartySize addr 0x223e9ec size 0x48 virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method get_discoveryEnabled addr 0x223ea34 size 0x1c virtual true final false
 bool get_discoveryEnabled() ;

/// @brief Method set_discoveryEnabled addr 0x223ea50 size 0x20 virtual true final false
 void set_discoveryEnabled(bool value) ;

/// @brief Method add_partySizeChangedEvent addr 0x223ea70 size 0xb0 virtual true final false
 void add_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x223eb20 size 0xb0 virtual true final false
 void remove_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_partyChangedEvent addr 0x223ebd0 size 0xb0 virtual true final false
 void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x223ec80 size 0xb0 virtual true final false
 void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_joinRequestedEvent addr 0x223ed30 size 0xb0 virtual true final false
 void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinRequestedEvent addr 0x223ede0 size 0xb0 virtual true final false
 void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x223ee90 size 0xb0 virtual true final false
 void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x223ef40 size 0xb0 virtual true final false
 void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x223eff0 size 0x1c virtual true final false
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_otherPlayers addr 0x223f00c size 0x10 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_otherPlayers() ;

/// @brief Method get_hasNetworkingFailed addr 0x223f01c size 0x8 virtual true final false
 bool get_hasNetworkingFailed() ;

/// @brief Method get_liteNetLibConnectionManager addr 0x223f024 size 0x58 virtual false final false
 GlobalNamespace::LiteNetLibConnectionManager get_liteNetLibConnectionManager() ;

/// @brief Method Start addr 0x223f07c size 0x94 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x223f110 size 0x10c virtual true final false
 void Update() ;

/// @brief Method OnDestroy addr 0x223f404 size 0x24c virtual true final false
 void OnDestroy() ;

/// @brief Method GetPartyPlayers addr 0x223f650 size 0x8 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GetPartyPlayers() ;

/// @brief Method GetOtherPlayers addr 0x223f658 size 0x8 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GetOtherPlayers() ;

/// @brief Method TryGetPlayer addr 0x223f660 size 0x12c virtual false final false
 bool TryGetPlayer(::StringW userId, ByRef<GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer> player) ;

/// @brief Method GetPlayer addr 0x223f78c size 0x1c virtual false final false
 GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer GetPlayer(::StringW userId) ;

/// @brief Method RefreshLocalPlayer addr 0x223f310 size 0xf4 virtual false final false
 void RefreshLocalPlayer(bool forcePlayersChanged) ;

/// @brief Method HandlePeerUpdate addr 0x223f904 size 0x23c virtual false final false
 void HandlePeerUpdate(::StringW userId, System::Net::IPAddress ipAddress, ::StringW encryptedUserName, int32_t currentPartySize, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method SendJoinRequest addr 0x223fb90 size 0x6c virtual false final false
 void SendJoinRequest(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player) ;

/// @brief Method HandleJoinRequest addr 0x223fbfc size 0x1c4 virtual false final false
 void HandleJoinRequest(::StringW userId, System::Net::IPAddress ipAddress, ::StringW encryptedUserName) ;

/// @brief Method SendJoinResponse addr 0x223fe08 size 0x1fc virtual false final false
 void SendJoinResponse(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player, bool allowJoin) ;

/// @brief Method HandleJoinResponse addr 0x224018c size 0x170 virtual false final false
 void HandleJoinResponse(::StringW id, ::StringW secret, int32_t multiplayerPort, bool blocked, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method SendInviteRequest addr 0x224033c size 0x164 virtual false final false
 void SendInviteRequest(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player) ;

/// @brief Method HandleInviteRequest addr 0x22404a0 size 0x1ec virtual false final false
 void HandleInviteRequest(::StringW userId, System::Net::IPAddress ipAddress, ::StringW encryptedUserName, ::StringW secret, int32_t multiplayerPort, bool isPartyOwner, GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

/// @brief Method SendInviteResponse addr 0x2240724 size 0xa8 virtual false final false
 void SendInviteResponse(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player, bool acceptInvite) ;

/// @brief Method HandleInviteResponse addr 0x22407cc size 0xb0 virtual false final false
 void HandleInviteResponse(::StringW userId, bool accepted, bool blocked) ;

/// @brief Method ConnectToPeer addr 0x22408a8 size 0x1b8 virtual false final false
 bool ConnectToPeer(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player) ;

/// @brief Method PlayerConnected addr 0x2240a60 size 0x4d0 virtual true final false
 void PlayerConnected(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method ConnectionFailed addr 0x2240f50 size 0xd4 virtual true final false
 void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method PlayerDisconnected addr 0x2241088 size 0x3b8 virtual true final false
 void PlayerDisconnected(GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method DisconnectPeer addr 0x2241440 size 0x88 virtual false final false
 void DisconnectPeer(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer player) ;

/// @brief Method HandlePlayersChanged addr 0x223f894 size 0x70 virtual false final false
 void HandlePlayersChanged() ;

/// @brief Method PartySizeChanged addr 0x2241530 size 0x3c virtual true final false
 void PartySizeChanged(int32_t currentPartySize) ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 bool CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> createConfig) ;

/// @brief Method DestroyPartyConnection addr 0x224156c size 0x64 virtual true final false
 void DestroyPartyConnection() ;

/// @brief Method ConnectedPlayerManagerChanged addr 0x22415d0 size 0x8 virtual true final false
 void ConnectedPlayerManagerChanged() ;

/// @brief Method TryStartServer addr 0x2240004 size 0x188 virtual false final false
 bool TryStartServer() ;

// Ctor Parameters []
explicit LocalNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x22415d8 size 0xd0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__CreatePartyConfig, "", "LocalNetworkPlayerModel/CreatePartyConfig");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel__LocalNetworkPlayer, "", "LocalNetworkPlayerModel/LocalNetworkPlayer");
NEED_NO_BOX(GlobalNamespace::LocalNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkPlayerModel, "", "LocalNetworkPlayerModel");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalNetworkPlayerModel___Start_d__41, "", "LocalNetworkPlayerModel/<Start>d__41");
