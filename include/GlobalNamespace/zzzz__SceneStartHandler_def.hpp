#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneStartHandler;
}
// Type: ::SceneStartHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12913))
// CS Name: SceneStartHandler
class CORDL_TYPE SceneStartHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SceneStartHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: " const&", def_value: None }]
constexpr SceneStartHandler(SceneStartHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneStartHandler", modifiers: "&&", def_value: None }]
constexpr SceneStartHandler(SceneStartHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneStartHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneStartHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneStartHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneStartHandler& operator=(SceneStartHandler&& o) noexcept = default;
  constexpr SceneStartHandler& operator=(SceneStartHandler const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playersAtGameStartModel, put=__set__playersAtGameStartModel))  _playersAtGameStartModel;

constexpr void __set__playersAtGameStartModel(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playersAtGameStartModel() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__readyPlayers, put=__set__readyPlayers))  _readyPlayers;

constexpr void __set__readyPlayers(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__readyPlayers() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> __declspec(property(get=__get__playersSpecificSettings, put=__set__playersSpecificSettings))  _playersSpecificSettings;

constexpr void __set__playersSpecificSettings(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> __get__playersSpecificSettings() const;

 bool __declspec(property(get=__get__started, put=__set__started))  _started;

constexpr void __set__started(bool value) ;

constexpr bool __get__started() const;

 ::StringW __declspec(property(get=__get__sessionGameId, put=__set__sessionGameId))  _sessionGameId;

constexpr void __set__sessionGameId(::StringW value) ;

constexpr ::StringW __get__sessionGameId() const;

 System::Action_1<::StringW> __declspec(property(get=__get_sceneSetupDidFinishEvent, put=__set_sceneSetupDidFinishEvent))  sceneSetupDidFinishEvent;

constexpr void __set_sceneSetupDidFinishEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_sceneSetupDidFinishEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_sceneSetupDidReceiveTooLateEvent, put=__set_sceneSetupDidReceiveTooLateEvent))  sceneSetupDidReceiveTooLateEvent;

constexpr void __set_sceneSetupDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_sceneSetupDidReceiveTooLateEvent() const;


// Methods

/// @brief Method add_sceneSetupDidFinishEvent addr 0xdd7400 size 0xb0 virtual false final false
 void add_sceneSetupDidFinishEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_sceneSetupDidFinishEvent addr 0xdd74b0 size 0xb0 virtual false final false
 void remove_sceneSetupDidFinishEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_sceneSetupDidReceiveTooLateEvent addr 0xdd7560 size 0xb0 virtual false final false
 void add_sceneSetupDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_sceneSetupDidReceiveTooLateEvent addr 0xdd7610 size 0xb0 virtual false final false
 void remove_sceneSetupDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "playersAtGameStartModel", ty: "GlobalNamespace::PlayersSpecificSettingsAtGameStartModel", modifiers: "", def_value: None }]
explicit SceneStartHandler(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel) ;

/// @brief Method .ctor addr 0xdd76c0 size 0xe8 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel) ;

/// @brief Method Dispose addr 0xdd77a8 size 0x364 virtual true final true
 void Dispose() ;

/// @brief Method GetSceneLoadStatus addr 0xdd7b0c size 0x6e4 virtual false final false
 void GetSceneLoadStatus() ;

/// @brief Method ForceStart addr 0xdd8564 size 0x6f0 virtual false final false
 void ForceStart() ;

/// @brief Method HandleSetGameplaySceneReady addr 0xdd8c54 size 0x3c8 virtual false final false
 void HandleSetGameplaySceneReady(::StringW userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettings) ;

/// @brief Method HandleGetGameplaySceneReady addr 0xdd901c size 0xb4 virtual false final false
 void HandleGetGameplaySceneReady(::StringW userId) ;

/// @brief Method HandleSetGameplaySceneSyncFinished addr 0xdd90d0 size 0x68 virtual false final false
 void HandleSetGameplaySceneSyncFinished(::StringW userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, ::StringW sessionId) ;

/// @brief Method HandleSetPlayerDidConnectLate addr 0xdd9138 size 0x2a0 virtual false final false
 void HandleSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, ::StringW sessionId) ;

/// @brief Method AddPlayerSpecificSettingsToDictionary addr 0xdd81f0 size 0x6c virtual false final false
 void AddPlayerSpecificSettingsToDictionary(GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable) ;

/// @brief Method CreatePlayersSpecificSettingsAtGameStartData addr 0xdd825c size 0x308 virtual false final false
 GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable CreatePlayersSpecificSettingsAtGameStartData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneStartHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartHandler, "", "SceneStartHandler");
