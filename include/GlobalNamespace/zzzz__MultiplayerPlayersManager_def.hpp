#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
// Type: ::<SwitchLocalPlayerToInactiveCoroutine>d__51
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5330))
// CS Name: MultiplayerPlayersManager::<SwitchLocalPlayerToInactiveCoroutine>d__51
class CORDL_TYPE GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51& operator=(GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51& operator=(GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr GlobalNamespace::MultiplayerPlayersManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2137bc4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2137ce4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2137ce8 size 0x3cc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21380b4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21380bc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21380fc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerPlayersManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5331))
// CS Name: MultiplayerPlayersManager
class CORDL_TYPE MultiplayerPlayersManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _SwitchLocalPlayerToInactiveCoroutine_d__51 = GlobalNamespace::GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51;

/// @brief Convert operator to GlobalNamespace::IMultiplayerLevelEndActionsPublisher
constexpr operator  GlobalNamespace::IMultiplayerLevelEndActionsPublisher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe0};

virtual ~MultiplayerPlayersManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerPlayersManager(MultiplayerPlayersManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerPlayersManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerPlayersManager(MultiplayerPlayersManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerPlayersManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerPlayersManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerPlayersManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerPlayersManager& operator=(MultiplayerPlayersManager&& o) noexcept = default;
  constexpr MultiplayerPlayersManager& operator=(MultiplayerPlayersManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerLocalActivePlayerFacade __declspec(property(get=__get__activeLocalPlayerControllerPrefab, put=__set__activeLocalPlayerControllerPrefab))  _activeLocalPlayerControllerPrefab;

constexpr void __set__activeLocalPlayerControllerPrefab(GlobalNamespace::MultiplayerLocalActivePlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade __get__activeLocalPlayerControllerPrefab() const;

 GlobalNamespace::MultiplayerLocalActivePlayerFacade __declspec(property(get=__get__activeLocalPlayerDuelControllerPrefab, put=__set__activeLocalPlayerDuelControllerPrefab))  _activeLocalPlayerDuelControllerPrefab;

constexpr void __set__activeLocalPlayerDuelControllerPrefab(GlobalNamespace::MultiplayerLocalActivePlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade __get__activeLocalPlayerDuelControllerPrefab() const;

 GlobalNamespace::MultiplayerLocalInactivePlayerFacade __declspec(property(get=__get__inactiveLocalPlayerControllerPrefab, put=__set__inactiveLocalPlayerControllerPrefab))  _inactiveLocalPlayerControllerPrefab;

constexpr void __set__inactiveLocalPlayerControllerPrefab(GlobalNamespace::MultiplayerLocalInactivePlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerLocalInactivePlayerFacade __get__inactiveLocalPlayerControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerFacade __declspec(property(get=__get__connectedPlayerControllerPrefab, put=__set__connectedPlayerControllerPrefab))  _connectedPlayerControllerPrefab;

constexpr void __set__connectedPlayerControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerFacade __get__connectedPlayerControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerFacade __declspec(property(get=__get__connectedPlayerDuelControllerPrefab, put=__set__connectedPlayerDuelControllerPrefab))  _connectedPlayerDuelControllerPrefab;

constexpr void __set__connectedPlayerDuelControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerFacade __get__connectedPlayerDuelControllerPrefab() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::BeatmapObjectSpawnCenter __declspec(property(get=__get__beatmapObjectSpawnCenter, put=__set__beatmapObjectSpawnCenter))  _beatmapObjectSpawnCenter;

constexpr void __set__beatmapObjectSpawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value) ;

constexpr GlobalNamespace::BeatmapObjectSpawnCenter __get__beatmapObjectSpawnCenter() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOutController, put=__set__fadeInOutController))  _fadeInOutController;

constexpr void __set__fadeInOutController(GlobalNamespace::FadeInOutController value) ;

constexpr GlobalNamespace::FadeInOutController __get__fadeInOutController() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 bool __declspec(property(get=__get__playerSpawningFinished_k__BackingField, put=__set__playerSpawningFinished_k__BackingField))  _playerSpawningFinished_k__BackingField;

constexpr void __set__playerSpawningFinished_k__BackingField(bool value) ;

constexpr bool __get__playerSpawningFinished_k__BackingField() const;

 System::Action __declspec(property(get=__get_playerSpawningDidFinishEvent, put=__set_playerSpawningDidFinishEvent))  playerSpawningDidFinishEvent;

constexpr void __set_playerSpawningDidFinishEvent(System::Action value) ;

constexpr System::Action __get_playerSpawningDidFinishEvent() const;

 System::Action __declspec(property(get=__get_didSwitchPlayerToInactiveEvent, put=__set_didSwitchPlayerToInactiveEvent))  didSwitchPlayerToInactiveEvent;

constexpr void __set_didSwitchPlayerToInactiveEvent(System::Action value) ;

constexpr System::Action __get_didSwitchPlayerToInactiveEvent() const;

 System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerDidFinishEvent, put=__set_playerDidFinishEvent))  playerDidFinishEvent;

constexpr void __set_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerDidFinishEvent() const;

 System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerNetworkDidFailedEvent, put=__set_playerNetworkDidFailedEvent))  playerNetworkDidFailedEvent;

constexpr void __set_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerNetworkDidFailedEvent() const;

 GlobalNamespace::MultiplayerLocalActivePlayerFacade __declspec(property(get=__get__activeLocalPlayerFacade, put=__set__activeLocalPlayerFacade))  _activeLocalPlayerFacade;

constexpr void __set__activeLocalPlayerFacade(GlobalNamespace::MultiplayerLocalActivePlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade __get__activeLocalPlayerFacade() const;

 GlobalNamespace::MultiplayerLocalInactivePlayerFacade __declspec(property(get=__get__inactiveLocalPlayerFacade, put=__set__inactiveLocalPlayerFacade))  _inactiveLocalPlayerFacade;

constexpr void __set__inactiveLocalPlayerFacade(GlobalNamespace::MultiplayerLocalInactivePlayerFacade value) ;

constexpr GlobalNamespace::MultiplayerLocalInactivePlayerFacade __get__inactiveLocalPlayerFacade() const;

 GlobalNamespace::IMultiplayerLevelEndActionsPublisher __declspec(property(get=__get__currentEventsPublisher, put=__set__currentEventsPublisher))  _currentEventsPublisher;

constexpr void __set__currentEventsPublisher(GlobalNamespace::IMultiplayerLevelEndActionsPublisher value) ;

constexpr GlobalNamespace::IMultiplayerLevelEndActionsPublisher __get__currentEventsPublisher() const;

 GlobalNamespace::IStartSeekSongControllerProvider __declspec(property(get=__get__currentStartSeekSongControllerProvider, put=__set__currentStartSeekSongControllerProvider))  _currentStartSeekSongControllerProvider;

constexpr void __set__currentStartSeekSongControllerProvider(GlobalNamespace::IStartSeekSongControllerProvider value) ;

constexpr GlobalNamespace::IStartSeekSongControllerProvider __get__currentStartSeekSongControllerProvider() const;

 GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory __declspec(property(get=__get__activeLocalPlayerFactory, put=__set__activeLocalPlayerFactory))  _activeLocalPlayerFactory;

constexpr void __set__activeLocalPlayerFactory(GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory __get__activeLocalPlayerFactory() const;

 GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory __declspec(property(get=__get__inactiveLocalPlayerFactory, put=__set__inactiveLocalPlayerFactory))  _inactiveLocalPlayerFactory;

constexpr void __set__inactiveLocalPlayerFactory(GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory __get__inactiveLocalPlayerFactory() const;

 GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory __declspec(property(get=__get__connectedPlayerFactory, put=__set__connectedPlayerFactory))  _connectedPlayerFactory;

constexpr void __set__connectedPlayerFactory(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory __get__connectedPlayerFactory() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerConnectedPlayerFacade> __declspec(property(get=__get__connectedPlayerControllersMap, put=__set__connectedPlayerControllersMap))  _connectedPlayerControllersMap;

constexpr void __set__connectedPlayerControllersMap(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerConnectedPlayerFacade> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerConnectedPlayerFacade> __get__connectedPlayerControllersMap() const;

 System::Collections::Generic::Dictionary_2<::StringW,float_t> __declspec(property(get=__get__connectedPlayerCenterFacingRotationsMap, put=__set__connectedPlayerCenterFacingRotationsMap))  _connectedPlayerCenterFacingRotationsMap;

constexpr void __set__connectedPlayerCenterFacingRotationsMap(System::Collections::Generic::Dictionary_2<::StringW,float_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,float_t> __get__connectedPlayerCenterFacingRotationsMap() const;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__allActiveAtGameStartPlayers, put=__set__allActiveAtGameStartPlayers))  _allActiveAtGameStartPlayers;

constexpr void __set__allActiveAtGameStartPlayers(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __get__allActiveAtGameStartPlayers() const;


// Properties

 bool __declspec(property(get=get_playerSpawningFinished, put=set_playerSpawningFinished))  playerSpawningFinished;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_allActiveAtGameStartPlayers))  allActiveAtGameStartPlayers;

 GlobalNamespace::IStartSeekSongControllerProvider __declspec(property(get=get_localPlayerStartSeekSongController))  localPlayerStartSeekSongController;

 GlobalNamespace::MultiplayerLocalActivePlayerFacade __declspec(property(get=get_activeLocalPlayerFacade))  activeLocalPlayerFacade;

 GlobalNamespace::MultiplayerLocalInactivePlayerFacade __declspec(property(get=get_inactivePlayerFacade))  inactivePlayerFacade;

 UnityEngine::Transform __declspec(property(get=get_localPlayerTransform))  localPlayerTransform;


// Methods

/// @brief Method get_playerSpawningFinished addr 0x21375a8 size 0x8 virtual false final false
 bool get_playerSpawningFinished() ;

/// @brief Method set_playerSpawningFinished addr 0x21375b0 size 0xc virtual false final false
 void set_playerSpawningFinished(bool value) ;

/// @brief Method get_allActiveAtGameStartPlayers addr 0x21375bc size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> get_allActiveAtGameStartPlayers() ;

/// @brief Method get_localPlayerStartSeekSongController addr 0x21375c4 size 0x8 virtual false final false
 GlobalNamespace::IStartSeekSongControllerProvider get_localPlayerStartSeekSongController() ;

/// @brief Method get_activeLocalPlayerFacade addr 0x21375cc size 0x8 virtual false final false
 GlobalNamespace::MultiplayerLocalActivePlayerFacade get_activeLocalPlayerFacade() ;

/// @brief Method get_inactivePlayerFacade addr 0x21375d4 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerLocalInactivePlayerFacade get_inactivePlayerFacade() ;

/// @brief Method get_localPlayerTransform addr 0x2132fa4 size 0x80 virtual false final false
 UnityEngine::Transform get_localPlayerTransform() ;

/// @brief Method add_playerSpawningDidFinishEvent addr 0x2134098 size 0x9c virtual false final false
 void add_playerSpawningDidFinishEvent(System::Action value) ;

/// @brief Method remove_playerSpawningDidFinishEvent addr 0x21349a8 size 0x9c virtual false final false
 void remove_playerSpawningDidFinishEvent(System::Action value) ;

/// @brief Method add_didSwitchPlayerToInactiveEvent addr 0x212db94 size 0x9c virtual false final false
 void add_didSwitchPlayerToInactiveEvent(System::Action value) ;

/// @brief Method remove_didSwitchPlayerToInactiveEvent addr 0x2129f6c size 0x9c virtual false final false
 void remove_didSwitchPlayerToInactiveEvent(System::Action value) ;

/// @brief Method add_playerDidFinishEvent addr 0x21375dc size 0xb0 virtual true final true
 void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerDidFinishEvent addr 0x213768c size 0xb0 virtual true final true
 void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method add_playerNetworkDidFailedEvent addr 0x213773c size 0xb0 virtual true final true
 void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerNetworkDidFailedEvent addr 0x21377ec size 0xb0 virtual true final true
 void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method SpawnPlayers addr 0x212d224 size 0x970 virtual false final false
 void SpawnPlayers(GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> allActiveAtGameStartPlayers) ;

/// @brief Method TryGetConnectedPlayerController addr 0x212c4a8 size 0x68 virtual false final false
 bool TryGetConnectedPlayerController(::StringW userId, ByRef<GlobalNamespace::MultiplayerConnectedPlayerFacade> connectedPlayerController) ;

/// @brief Method TryGetConnectedCenterFacingRotation addr 0x2137ad4 size 0x68 virtual false final false
 bool TryGetConnectedCenterFacingRotation(::StringW userId, ByRef<float_t> centerFacingRotation) ;

/// @brief Method SwitchLocalPlayerToInactive addr 0x2137b3c size 0x20 virtual false final false
 void SwitchLocalPlayerToInactive() ;

/// @brief Method ReportLocalPlayerNetworkDidFailed addr 0x212aca4 size 0x1c virtual false final false
 void ReportLocalPlayerNetworkDidFailed(GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

/// @brief Method SwitchLocalPlayerToInactiveCoroutine addr 0x2137b5c size 0x68 virtual false final false
 System::Collections::IEnumerator SwitchLocalPlayerToInactiveCoroutine() ;

/// @brief Method BindPlayerFactories addr 0x213789c size 0x238 virtual false final false
 void BindPlayerFactories(GlobalNamespace::MultiplayerPlayerLayout layout) ;

/// @brief Method HandlePlayerDidFinish addr 0x2137bec size 0x1c virtual false final false
 void HandlePlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

/// @brief Method HandlePlayerNetworkDidFailed addr 0x2137c08 size 0x1c virtual false final false
 void HandlePlayerNetworkDidFailed(GlobalNamespace::MultiplayerLevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit MultiplayerPlayersManager() ;

/// @brief Method .ctor addr 0x2137c24 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerPlayersManager___SwitchLocalPlayerToInactiveCoroutine_d__51, "", "MultiplayerPlayersManager/<SwitchLocalPlayerToInactiveCoroutine>d__51");
NEED_NO_BOX(GlobalNamespace::MultiplayerPlayersManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayersManager, "", "MultiplayerPlayersManager");
