#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerIntroAnimator;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class PrepareLevelCompletionResults;
}
namespace GlobalNamespace {
class BeatmapCallbacksUpdater;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerFacade;
}
// Type: ::MultiplayerLocalActivePlayerFacade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5255))
// CS Name: MultiplayerLocalActivePlayerFacade
class CORDL_TYPE MultiplayerLocalActivePlayerFacade : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory;

/// @brief Convert operator to GlobalNamespace::IMultiplayerLevelEndActionsPublisher
constexpr operator  GlobalNamespace::IMultiplayerLevelEndActionsPublisher() const noexcept;

/// @brief Convert operator to GlobalNamespace::IMultiplayerLevelEndActionsListener
constexpr operator  GlobalNamespace::IMultiplayerLevelEndActionsListener() const noexcept;

/// @brief Convert operator to GlobalNamespace::IStartSeekSongControllerProvider
constexpr operator  GlobalNamespace::IStartSeekSongControllerProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MultiplayerLocalActivePlayerFacade() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerFacade", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerFacade(MultiplayerLocalActivePlayerFacade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerFacade(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActivePlayerFacade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerFacade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerFacade& operator=(MultiplayerLocalActivePlayerFacade&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerFacade& operator=(MultiplayerLocalActivePlayerFacade const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__activeOnlyGameObjects, put=__set__activeOnlyGameObjects))  _activeOnlyGameObjects;

constexpr void __set__activeOnlyGameObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__activeOnlyGameObjects() const;

 UnityEngine::GameObject __declspec(property(get=__get__outroAnimator, put=__set__outroAnimator))  _outroAnimator;

constexpr void __set__outroAnimator(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__outroAnimator() const;

 GlobalNamespace::IStartSeekSongController __declspec(property(get=__get__songController, put=__set__songController))  _songController;

constexpr void __set__songController(GlobalNamespace::IStartSeekSongController value) ;

constexpr GlobalNamespace::IStartSeekSongController __get__songController() const;

 GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator __declspec(property(get=__get__introAnimator, put=__set__introAnimator))  _introAnimator;

constexpr void __set__introAnimator(GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator value) ;

constexpr GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator __get__introAnimator() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::PrepareLevelCompletionResults __declspec(property(get=__get__prepareLevelCompletionResults, put=__set__prepareLevelCompletionResults))  _prepareLevelCompletionResults;

constexpr void __set__prepareLevelCompletionResults(GlobalNamespace::PrepareLevelCompletionResults value) ;

constexpr GlobalNamespace::PrepareLevelCompletionResults __get__prepareLevelCompletionResults() const;

 GlobalNamespace::BeatmapCallbacksUpdater __declspec(property(get=__get__beatmapCallbacksUpdater, put=__set__beatmapCallbacksUpdater))  _beatmapCallbacksUpdater;

constexpr void __set__beatmapCallbacksUpdater(GlobalNamespace::BeatmapCallbacksUpdater value) ;

constexpr GlobalNamespace::BeatmapCallbacksUpdater __get__beatmapCallbacksUpdater() const;

 System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerDidFinishEvent, put=__set_playerDidFinishEvent))  playerDidFinishEvent;

constexpr void __set_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerDidFinishEvent() const;

 System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerNetworkDidFailedEvent, put=__set_playerNetworkDidFailedEvent))  playerNetworkDidFailedEvent;

constexpr void __set_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerNetworkDidFailedEvent() const;


// Properties

 GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator __declspec(property(get=get_introAnimator))  introAnimator;

 UnityEngine::GameObject __declspec(property(get=get_outroAnimator))  outroAnimator;

 GlobalNamespace::IStartSeekSongController __declspec(property(get=get_songController))  songController;

 GlobalNamespace::LevelCompletionResults __declspec(property(get=get_currentLocalPlayerLevelCompletionResult))  currentLocalPlayerLevelCompletionResult;


// Methods

/// @brief Method get_introAnimator addr 0x211c908 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator get_introAnimator() ;

/// @brief Method get_outroAnimator addr 0x211c910 size 0x8 virtual false final false
 UnityEngine::GameObject get_outroAnimator() ;

/// @brief Method get_songController addr 0x211c918 size 0x8 virtual true final true
 GlobalNamespace::IStartSeekSongController get_songController() ;

/// @brief Method get_currentLocalPlayerLevelCompletionResult addr 0x211c920 size 0x24 virtual false final false
 GlobalNamespace::LevelCompletionResults get_currentLocalPlayerLevelCompletionResult() ;

/// @brief Method add_playerDidFinishEvent addr 0x211c944 size 0xb0 virtual true final true
 void add_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerDidFinishEvent addr 0x211c9f4 size 0xb0 virtual true final true
 void remove_playerDidFinishEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method add_playerNetworkDidFailedEvent addr 0x211caa4 size 0xb0 virtual true final true
 void add_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerNetworkDidFailedEvent addr 0x211cb54 size 0xb0 virtual true final true
 void remove_playerNetworkDidFailedEvent(System::Action_1<GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method ReportPlayerDidFinish addr 0x211cc04 size 0x1c virtual true final true
 void ReportPlayerDidFinish(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method ReportPlayerNetworkDidFailed addr 0x211cc20 size 0x1c virtual true final true
 void ReportPlayerNetworkDidFailed(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method DisablePlayer addr 0x211cc3c size 0x64 virtual false final false
 void DisablePlayer() ;

/// @brief Method PauseSpawning addr 0x211cca0 size 0x1c virtual false final false
 void PauseSpawning() ;

/// @brief Method ResumeSpawning addr 0x211ccbc size 0x1c virtual false final false
 void ResumeSpawning() ;

/// @brief Method __ForceStopSong addr 0x211ccd8 size 0x34 virtual false final false
 void __ForceStopSong() ;

/// @brief Method __GetActiveOnlyGameObjects addr 0x211cd0c size 0x8 virtual false final false
 ::ArrayW<UnityEngine::GameObject> __GetActiveOnlyGameObjects() ;

// Ctor Parameters []
explicit MultiplayerLocalActivePlayerFacade() ;

/// @brief Method .ctor addr 0x211cd14 size 0x1008 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10966), inst: 3374 }), TypeDefinitionIndex(TypeDefinitionIndex(10966)), TypeDefinitionIndex(TypeDefinitionIndex(5255)), TypeDefinitionIndex(TypeDefinitionIndex(5332))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5254))
// CS Name: MultiplayerLocalActivePlayerFacade::Factory
class CORDL_TYPE GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::MultiplayerPlayerStartState,GlobalNamespace::MultiplayerLocalActivePlayerFacade> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory(GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory(GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory(void* ptr) noexcept : Zenject::PlaceholderFactory_2<GlobalNamespace::MultiplayerPlayerStartState,GlobalNamespace::MultiplayerLocalActivePlayerFacade>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory& operator=(GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory& operator=(GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory() ;

/// @brief Method .ctor addr 0x211dd1c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerFacade__Factory, "", "MultiplayerLocalActivePlayerFacade/Factory");
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalActivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerFacade, "", "MultiplayerLocalActivePlayerFacade");
