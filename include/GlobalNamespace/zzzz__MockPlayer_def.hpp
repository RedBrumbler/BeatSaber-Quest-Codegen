#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class AvatarPartsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayer;
}
// Type: ::MockPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5283))
// CS Name: MockPlayer
class CORDL_TYPE MockPlayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectedPlayer
constexpr operator  GlobalNamespace::IConnectedPlayer() const noexcept;

/// @brief Convert operator to GlobalNamespace::INetworkPlayer
constexpr operator  GlobalNamespace::INetworkPlayer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~MockPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: " const&", def_value: None }]
constexpr MockPlayer(MockPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayer", modifiers: "&&", def_value: None }]
constexpr MockPlayer(MockPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayer& operator=(MockPlayer&& o) noexcept = default;
  constexpr MockPlayer& operator=(MockPlayer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__isMe_k__BackingField, put=__set__isMe_k__BackingField))  _isMe_k__BackingField;

constexpr void __set__isMe_k__BackingField(bool value) ;

constexpr bool __get__isMe_k__BackingField() const;

 bool __declspec(property(get=__get__isConnected_k__BackingField, put=__set__isConnected_k__BackingField))  _isConnected_k__BackingField;

constexpr void __set__isConnected_k__BackingField(bool value) ;

constexpr bool __get__isConnected_k__BackingField() const;

 GlobalNamespace::MultiplayerAvatarData __declspec(property(get=__get__multiplayerAvatarData_k__BackingField, put=__set__multiplayerAvatarData_k__BackingField))  _multiplayerAvatarData_k__BackingField;

constexpr void __set__multiplayerAvatarData_k__BackingField(GlobalNamespace::MultiplayerAvatarData value) ;

constexpr GlobalNamespace::MultiplayerAvatarData __get__multiplayerAvatarData_k__BackingField() const;

 bool __declspec(property(get=__get__isConnectionOwner_k__BackingField, put=__set__isConnectionOwner_k__BackingField))  _isConnectionOwner_k__BackingField;

constexpr void __set__isConnectionOwner_k__BackingField(bool value) ;

constexpr bool __get__isConnectionOwner_k__BackingField() const;

 bool __declspec(property(get=__get__isKicked_k__BackingField, put=__set__isKicked_k__BackingField))  _isKicked_k__BackingField;

constexpr void __set__isKicked_k__BackingField(bool value) ;

constexpr bool __get__isKicked_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentPartySize_k__BackingField, put=__set__currentPartySize_k__BackingField))  _currentPartySize_k__BackingField;

constexpr void __set__currentPartySize_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentPartySize_k__BackingField() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask_k__BackingField, put=__set__selectionMask_k__BackingField))  _selectionMask_k__BackingField;

constexpr void __set__selectionMask_k__BackingField(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask_k__BackingField() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration_k__BackingField, put=__set__configuration_k__BackingField))  _configuration_k__BackingField;

constexpr void __set__configuration_k__BackingField(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration_k__BackingField() const;

 bool __declspec(property(get=__get__isMyPartyOwner_k__BackingField, put=__set__isMyPartyOwner_k__BackingField))  _isMyPartyOwner_k__BackingField;

constexpr void __set__isMyPartyOwner_k__BackingField(bool value) ;

constexpr bool __get__isMyPartyOwner_k__BackingField() const;

 bool __declspec(property(get=__get__requiresPassword_k__BackingField, put=__set__requiresPassword_k__BackingField))  _requiresPassword_k__BackingField;

constexpr void __set__requiresPassword_k__BackingField(bool value) ;

constexpr bool __get__requiresPassword_k__BackingField() const;

 bool __declspec(property(get=__get__isWaitingOnJoin_k__BackingField, put=__set__isWaitingOnJoin_k__BackingField))  _isWaitingOnJoin_k__BackingField;

constexpr void __set__isWaitingOnJoin_k__BackingField(bool value) ;

constexpr bool __get__isWaitingOnJoin_k__BackingField() const;

 bool __declspec(property(get=__get__canInvite_k__BackingField, put=__set__canInvite_k__BackingField))  _canInvite_k__BackingField;

constexpr void __set__canInvite_k__BackingField(bool value) ;

constexpr bool __get__canInvite_k__BackingField() const;

 bool __declspec(property(get=__get__isWaitingOnInvite_k__BackingField, put=__set__isWaitingOnInvite_k__BackingField))  _isWaitingOnInvite_k__BackingField;

constexpr void __set__isWaitingOnInvite_k__BackingField(bool value) ;

constexpr bool __get__isWaitingOnInvite_k__BackingField() const;

 bool __declspec(property(get=__get__canKick_k__BackingField, put=__set__canKick_k__BackingField))  _canKick_k__BackingField;

constexpr void __set__canKick_k__BackingField(bool value) ;

constexpr bool __get__canKick_k__BackingField() const;

 bool __declspec(property(get=__get__canLeave_k__BackingField, put=__set__canLeave_k__BackingField))  _canLeave_k__BackingField;

constexpr void __set__canLeave_k__BackingField(bool value) ;

constexpr bool __get__canLeave_k__BackingField() const;

 bool __declspec(property(get=__get__canBlock_k__BackingField, put=__set__canBlock_k__BackingField))  _canBlock_k__BackingField;

constexpr void __set__canBlock_k__BackingField(bool value) ;

constexpr bool __get__canBlock_k__BackingField() const;

 bool __declspec(property(get=__get__canUnblock_k__BackingField, put=__set__canUnblock_k__BackingField))  _canUnblock_k__BackingField;

constexpr void __set__canUnblock_k__BackingField(bool value) ;

constexpr bool __get__canUnblock_k__BackingField() const;

 bool __declspec(property(get=__get__isReady, put=__set__isReady))  _isReady;

constexpr void __set__isReady(bool value) ;

constexpr bool __get__isReady() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__playerState, put=__set__playerState))  _playerState;

constexpr void __set__playerState(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__playerState() const;

 GlobalNamespace::MockPlayerSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(GlobalNamespace::MockPlayerSettings value) ;

constexpr GlobalNamespace::MockPlayerSettings __get__settings() const;

 GlobalNamespace::MockPlayerFiniteStateMachine __declspec(property(get=__get__fsm, put=__set__fsm))  _fsm;

constexpr void __set__fsm(GlobalNamespace::MockPlayerFiniteStateMachine value) ;

constexpr GlobalNamespace::MockPlayerFiniteStateMachine __get__fsm() const;

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;


// Properties

 bool __declspec(property(get=get_isReady, put=set_isReady))  isReady;

 bool __declspec(property(get=get_isMe))  isMe;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 int32_t __declspec(property(get=get_sortIndex))  sortIndex;

 bool __declspec(property(get=get_autoConnect))  autoConnect;

 bool __declspec(property(get=get_inactiveByDefault))  inactiveByDefault;

 bool __declspec(property(get=get_isConnected, put=set_isConnected))  isConnected;

 GlobalNamespace::MultiplayerAvatarData __declspec(property(get=get_multiplayerAvatarData, put=set_multiplayerAvatarData))  multiplayerAvatarData;

 bool __declspec(property(get=get_isConnectionOwner, put=set_isConnectionOwner))  isConnectionOwner;

 GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason))  disconnectedReason;

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 bool __declspec(property(get=get_hasValidLatency))  hasValidLatency;

 float_t __declspec(property(get=get_currentLatency))  currentLatency;

 bool __declspec(property(get=get_isKicked, put=set_isKicked))  isKicked;

 int32_t __declspec(property(get=get_currentPartySize, put=set_currentPartySize))  currentPartySize;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask, put=set_selectionMask))  selectionMask;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration, put=set_configuration))  configuration;

 bool __declspec(property(get=get_isMyPartyOwner, put=set_isMyPartyOwner))  isMyPartyOwner;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer))  connectedPlayer;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword, put=set_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnJoin, put=set_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canInvite, put=set_canInvite))  canInvite;

 bool __declspec(property(get=get_isWaitingOnInvite, put=set_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canKick, put=set_canKick))  canKick;

 bool __declspec(property(get=get_canLeave, put=set_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock, put=set_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock, put=set_canUnblock))  canUnblock;

 bool __declspec(property(get=get_isPlayer, put=set_isPlayer))  isPlayer;

 bool __declspec(property(get=get_isDedicatedServer, put=set_isDedicatedServer))  isDedicatedServer;

 bool __declspec(property(get=get_wantsToPlayNextLevel, put=set_wantsToPlayNextLevel))  wantsToPlayNextLevel;

 bool __declspec(property(get=get_wasActiveAtLevelStart, put=set_wasActiveAtLevelStart))  wasActiveAtLevelStart;

 bool __declspec(property(get=get_isActive, put=set_isActive))  isActive;

 bool __declspec(property(get=get_finishedLevel, put=set_finishedLevel))  finishedLevel;

 bool __declspec(property(get=get_isTerminating, put=set_isTerminating))  isTerminating;


// Methods

/// @brief Method get_isReady addr 0x2122df4 size 0x8 virtual false final false
 bool get_isReady() ;

/// @brief Method set_isReady addr 0x2122dfc size 0x34 virtual false final false
 void set_isReady(bool value) ;

/// @brief Method get_isMe addr 0x2122e30 size 0x8 virtual true final true
 bool get_isMe() ;

/// @brief Method get_userId addr 0x2122e38 size 0x1c virtual true final true
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x2122e54 size 0x1c virtual true final true
 ::StringW get_userName() ;

/// @brief Method get_sortIndex addr 0x2122e70 size 0x1c virtual true final true
 int32_t get_sortIndex() ;

/// @brief Method get_autoConnect addr 0x2122e8c size 0x1c virtual false final false
 bool get_autoConnect() ;

/// @brief Method get_inactiveByDefault addr 0x2122ea8 size 0x1c virtual false final false
 bool get_inactiveByDefault() ;

/// @brief Method get_isConnected addr 0x2122ec4 size 0x8 virtual true final true
 bool get_isConnected() ;

/// @brief Method set_isConnected addr 0x2122ecc size 0xc virtual false final false
 void set_isConnected(bool value) ;

/// @brief Method get_multiplayerAvatarData addr 0x2122ed8 size 0x10 virtual true final true
 GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData() ;

/// @brief Method set_multiplayerAvatarData addr 0x2122ee8 size 0x18 virtual false final false
 void set_multiplayerAvatarData(GlobalNamespace::MultiplayerAvatarData value) ;

/// @brief Method get_isConnectionOwner addr 0x2122f00 size 0x8 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method set_isConnectionOwner addr 0x2122f08 size 0xc virtual false final false
 void set_isConnectionOwner(bool value) ;

/// @brief Method get_disconnectedReason addr 0x2122f14 size 0x8 virtual true final true
 GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method get_offsetSyncTime addr 0x2122f1c size 0x4c virtual true final true
 float_t get_offsetSyncTime() ;

/// @brief Method get_hasValidLatency addr 0x2122f9c size 0x8 virtual true final true
 bool get_hasValidLatency() ;

/// @brief Method get_currentLatency addr 0x2122f68 size 0x34 virtual true final true
 float_t get_currentLatency() ;

/// @brief Method get_isKicked addr 0x2122fa4 size 0x8 virtual true final true
 bool get_isKicked() ;

/// @brief Method set_isKicked addr 0x2122fac size 0xc virtual false final false
 void set_isKicked(bool value) ;

/// @brief Method get_currentPartySize addr 0x2122fb8 size 0x8 virtual true final true
 int32_t get_currentPartySize() ;

/// @brief Method set_currentPartySize addr 0x2122fc0 size 0x8 virtual false final false
 void set_currentPartySize(int32_t value) ;

/// @brief Method get_selectionMask addr 0x2122fc8 size 0x14 virtual true final true
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method set_selectionMask addr 0x2122fdc size 0x14 virtual false final false
 void set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

/// @brief Method get_configuration addr 0x2122ff0 size 0x14 virtual true final true
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method set_configuration addr 0x2123004 size 0x14 virtual false final false
 void set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

/// @brief Method get_isMyPartyOwner addr 0x2123018 size 0x8 virtual true final true
 bool get_isMyPartyOwner() ;

/// @brief Method set_isMyPartyOwner addr 0x2123020 size 0xc virtual false final false
 void set_isMyPartyOwner(bool value) ;

/// @brief Method get_connectedPlayer addr 0x212302c size 0x4 virtual true final true
 GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method get_canJoin addr 0x2123030 size 0x8 virtual true final false
 bool get_canJoin() ;

/// @brief Method get_requiresPassword addr 0x2123038 size 0x8 virtual true final true
 bool get_requiresPassword() ;

/// @brief Method set_requiresPassword addr 0x2123040 size 0xc virtual false final false
 void set_requiresPassword(bool value) ;

/// @brief Method get_isWaitingOnJoin addr 0x212304c size 0x8 virtual true final true
 bool get_isWaitingOnJoin() ;

/// @brief Method set_isWaitingOnJoin addr 0x2123054 size 0xc virtual false final false
 void set_isWaitingOnJoin(bool value) ;

/// @brief Method get_canInvite addr 0x2123060 size 0x8 virtual true final true
 bool get_canInvite() ;

/// @brief Method set_canInvite addr 0x2123068 size 0xc virtual false final false
 void set_canInvite(bool value) ;

/// @brief Method get_isWaitingOnInvite addr 0x2123074 size 0x8 virtual true final true
 bool get_isWaitingOnInvite() ;

/// @brief Method set_isWaitingOnInvite addr 0x212307c size 0xc virtual false final false
 void set_isWaitingOnInvite(bool value) ;

/// @brief Method get_canKick addr 0x2123088 size 0x8 virtual true final true
 bool get_canKick() ;

/// @brief Method set_canKick addr 0x2123090 size 0xc virtual false final false
 void set_canKick(bool value) ;

/// @brief Method get_canLeave addr 0x212309c size 0x8 virtual true final true
 bool get_canLeave() ;

/// @brief Method set_canLeave addr 0x21230a4 size 0xc virtual false final false
 void set_canLeave(bool value) ;

/// @brief Method get_canBlock addr 0x21230b0 size 0x8 virtual true final true
 bool get_canBlock() ;

/// @brief Method set_canBlock addr 0x21230b8 size 0xc virtual false final false
 void set_canBlock(bool value) ;

/// @brief Method get_canUnblock addr 0x21230c4 size 0x8 virtual true final true
 bool get_canUnblock() ;

/// @brief Method set_canUnblock addr 0x21230cc size 0xc virtual false final false
 void set_canUnblock(bool value) ;

/// @brief Method get_isPlayer addr 0x21230d8 size 0x48 virtual false final false
 bool get_isPlayer() ;

/// @brief Method set_isPlayer addr 0x2123178 size 0x58 virtual false final false
 void set_isPlayer(bool value) ;

/// @brief Method get_isDedicatedServer addr 0x2123264 size 0x48 virtual false final false
 bool get_isDedicatedServer() ;

/// @brief Method set_isDedicatedServer addr 0x21232ac size 0x58 virtual false final false
 void set_isDedicatedServer(bool value) ;

/// @brief Method get_wantsToPlayNextLevel addr 0x2123304 size 0x48 virtual false final false
 bool get_wantsToPlayNextLevel() ;

/// @brief Method set_wantsToPlayNextLevel addr 0x212334c size 0x58 virtual false final false
 void set_wantsToPlayNextLevel(bool value) ;

/// @brief Method get_wasActiveAtLevelStart addr 0x21233a4 size 0x48 virtual false final false
 bool get_wasActiveAtLevelStart() ;

/// @brief Method set_wasActiveAtLevelStart addr 0x21233ec size 0x58 virtual false final false
 void set_wasActiveAtLevelStart(bool value) ;

/// @brief Method get_isActive addr 0x2123444 size 0x48 virtual false final false
 bool get_isActive() ;

/// @brief Method set_isActive addr 0x212348c size 0x58 virtual false final false
 void set_isActive(bool value) ;

/// @brief Method get_finishedLevel addr 0x21234e4 size 0x48 virtual false final false
 bool get_finishedLevel() ;

/// @brief Method set_finishedLevel addr 0x212352c size 0x58 virtual false final false
 void set_finishedLevel(bool value) ;

/// @brief Method get_isTerminating addr 0x2123584 size 0x48 virtual false final false
 bool get_isTerminating() ;

/// @brief Method set_isTerminating addr 0x21235cc size 0x58 virtual false final false
 void set_isTerminating(bool value) ;

// Ctor Parameters [CppParam { name: "settings", ty: "GlobalNamespace::MockPlayerSettings", modifiers: "", def_value: None }, CppParam { name: "isLocalPlayer", ty: "bool", modifiers: "", def_value: None }]
explicit MockPlayer(GlobalNamespace::MockPlayerSettings settings, bool isLocalPlayer) ;

/// @brief Method .ctor addr 0x2123624 size 0xb8 virtual false final false
 void _ctor(GlobalNamespace::MockPlayerSettings settings, bool isLocalPlayer) ;

/// @brief Method Tick addr 0x21236dc size 0x14 virtual false final false
 void Tick() ;

/// @brief Method SetState addr 0x21231d0 size 0x94 virtual false final false
 bool SetState(::StringW state, bool value) ;

/// @brief Method HasState addr 0x2123120 size 0x58 virtual true final true
 bool HasState(::StringW state) ;

/// @brief Method Connect addr 0x21236f0 size 0x1b20 virtual true final false
 void Connect(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::AvatarPartsModel avatarPartsModel, GlobalNamespace::BeatmapLevelsModel beatmapLevelsModel, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager) ;

/// @brief Method Disconnect addr 0x21257e4 size 0x28 virtual true final false
 void Disconnect() ;

/// @brief Method Unblock addr 0x212580c size 0x40 virtual true final true
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x212584c size 0x40 virtual true final true
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x212588c size 0x40 virtual true final true
 void SendInviteResponse(bool accept) ;

/// @brief Method Block addr 0x21258cc size 0x40 virtual true final true
 void Block() ;

/// @brief Method Leave addr 0x212590c size 0x4 virtual true final true
 void Leave() ;

/// @brief Method Kick addr 0x2125910 size 0x40 virtual true final true
 void Kick() ;

/// @brief Method Invite addr 0x2125950 size 0x40 virtual true final true
 void Invite() ;

/// @brief Method Join addr 0x2125990 size 0x40 virtual true final false
 void Join(::StringW password) ;

/// @brief Method Join addr 0x21259d0 size 0x40 virtual true final false
 void Join() ;

/// @brief Method SimulateFail addr 0x2125a10 size 0x40 virtual false final false
 void SimulateFail() ;

/// @brief Method SimulateGiveUp addr 0x2125a50 size 0x3c virtual false final false
 void SimulateGiveUp() ;

/// @brief Method SimulateReturnToMainMenu addr 0x2125a8c size 0xa4 virtual false final false
 void SimulateReturnToMainMenu() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayer, "", "MockPlayer");
