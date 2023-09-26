#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PracticeViewController;
}
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class SinglePlayerLevelSelectionFlowCoordinator;
}
// Type: ::<>c__DisplayClass37_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5620))
// CS Name: SinglePlayerLevelSelectionFlowCoordinator::<>c__DisplayClass37_0
class CORDL_TYPE GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0(GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0(GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0& operator=(GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0&& o) noexcept = default;
  constexpr GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0& operator=(GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator value) ;

constexpr GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator __get___4__this() const;

 System::Action __declspec(property(get=__get_beforeSceneSwitchCallback, put=__set_beforeSceneSwitchCallback))  beforeSceneSwitchCallback;

constexpr void __set_beforeSceneSwitchCallback(System::Action value) ;

constexpr System::Action __get_beforeSceneSwitchCallback() const;

 bool __declspec(property(get=__get_practice, put=__set_practice))  practice;

constexpr void __set_practice(bool value) ;

constexpr bool __get_practice() const;

 System::Action __declspec(property(get=__get___9__1, put=__set___9__1))  __9__1;

constexpr void __set___9__1(System::Action value) ;

constexpr System::Action __get___9__1() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0() ;

/// @brief Method .ctor addr 0x217c940 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <StartLevelOrShow360Prompt>b__0 addr 0x217cb1c size 0x98 virtual false final false
 void _StartLevelOrShow360Prompt_b__0(int32_t _) ;

/// @brief Method <StartLevelOrShow360Prompt>b__1 addr 0x217cbb4 size 0x50 virtual false final false
 void _StartLevelOrShow360Prompt_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SinglePlayerLevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5621))
// CS Name: SinglePlayerLevelSelectionFlowCoordinator
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator : public GlobalNamespace::LevelSelectionFlowCoordinator {
public:
// Declarations
using __c__DisplayClass37_0 = GlobalNamespace::GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~SinglePlayerLevelSelectionFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SinglePlayerLevelSelectionFlowCoordinator(void* ptr) noexcept : GlobalNamespace::LevelSelectionFlowCoordinator(ptr) {
}


  constexpr SinglePlayerLevelSelectionFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SinglePlayerLevelSelectionFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SinglePlayerLevelSelectionFlowCoordinator& operator=(SinglePlayerLevelSelectionFlowCoordinator&& o) noexcept = default;
  constexpr SinglePlayerLevelSelectionFlowCoordinator& operator=(SinglePlayerLevelSelectionFlowCoordinator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__degree360BeatmapCharacteristic, put=__set__degree360BeatmapCharacteristic))  _degree360BeatmapCharacteristic;

constexpr void __set__degree360BeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__degree360BeatmapCharacteristic() const;

 GlobalNamespace::PracticeViewController __declspec(property(get=__get__practiceViewController, put=__set__practiceViewController))  _practiceViewController;

constexpr void __set__practiceViewController(GlobalNamespace::PracticeViewController value) ;

constexpr GlobalNamespace::PracticeViewController __get__practiceViewController() const;

 GlobalNamespace::GameplaySetupViewController __declspec(property(get=__get__gameplaySetupViewController, put=__set__gameplaySetupViewController))  _gameplaySetupViewController;

constexpr void __set__gameplaySetupViewController(GlobalNamespace::GameplaySetupViewController value) ;

constexpr GlobalNamespace::GameplaySetupViewController __get__gameplaySetupViewController() const;

 GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(GlobalNamespace::MenuTransitionsHelper value) ;

constexpr GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value) ;

constexpr GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController __declspec(property(get=__get__safeAreaFocusedSimpleDialogPromptViewController, put=__set__safeAreaFocusedSimpleDialogPromptViewController))  _safeAreaFocusedSimpleDialogPromptViewController;

constexpr void __set__safeAreaFocusedSimpleDialogPromptViewController(GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController __get__safeAreaFocusedSimpleDialogPromptViewController() const;

 System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value) ;

constexpr System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> __get_didFinishEvent() const;


// Properties

 ::StringW __declspec(property(get=get_gameMode))  gameMode;

 bool __declspec(property(get=get_isInPracticeView))  isInPracticeView;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSettings))  playerSettings;

 bool __declspec(property(get=get_enableCustomLevels))  enableCustomLevels;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;

 bool __declspec(property(get=get_hideGameplaySetup))  hideGameplaySetup;

 GlobalNamespace::LeaderboardViewController __declspec(property(get=get_leaderboardViewController))  leaderboardViewController;

 HMUI::ViewController __declspec(property(get=get_initialTopScreenViewController))  initialTopScreenViewController;

 HMUI::ViewController __declspec(property(get=get_initialLeftScreenViewController))  initialLeftScreenViewController;


// Methods

/// @brief Method get_gameMode addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_gameMode() ;

/// @brief Method get_isInPracticeView addr 0x217bc6c size 0x74 virtual false final false
 bool get_isInPracticeView() ;

/// @brief Method get_playerSettings addr 0x217bce0 size 0x1c virtual false final false
 GlobalNamespace::PlayerSpecificSettings get_playerSettings() ;

/// @brief Method get_enableCustomLevels addr 0x217bcfc size 0x1c virtual true final false
 bool get_enableCustomLevels() ;

/// @brief Method get_gameplayModifiers addr 0x217bd18 size 0x1c virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method get_hideGameplaySetup addr 0x217bd34 size 0x8 virtual true final false
 bool get_hideGameplaySetup() ;

/// @brief Method get_leaderboardViewController addr 0x217bd3c size 0x8 virtual true final false
 GlobalNamespace::LeaderboardViewController get_leaderboardViewController() ;

/// @brief Method get_initialTopScreenViewController addr 0x217bd44 size 0x8 virtual true final false
 HMUI::ViewController get_initialTopScreenViewController() ;

/// @brief Method get_initialLeftScreenViewController addr 0x217bd4c size 0x30 virtual true final false
 HMUI::ViewController get_initialLeftScreenViewController() ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate addr 0x217bd7c size 0x4 virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate addr 0x217bd80 size 0x4 virtual true final false
 void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish addr 0x217bd84 size 0x4 virtual true final false
 void ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults levelCompletionResults, GlobalNamespace::IReadonlyBeatmapData transformedBeatmapData, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, GlobalNamespace::GameplayModifiers gameplayModifiers, bool practice) ;

/// @brief Method add_didFinishEvent addr 0x217bd88 size 0xb4 virtual false final false
 void add_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value) ;

/// @brief Method remove_didFinishEvent addr 0x217be3c size 0xb4 virtual false final false
 void remove_didFinishEvent(System::Action_1<GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value) ;

/// @brief Method LevelSelectionFlowCoordinatorDidActivate addr 0x217bef0 size 0xbc virtual true final true
 void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method LevelSelectionFlowCoordinatorDidDeactivate addr 0x217bfac size 0xb4 virtual true final true
 void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange addr 0x217c060 size 0x25c virtual true final false
 void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method ActionButtonWasPressed addr 0x217c2bc size 0xc virtual true final false
 void ActionButtonWasPressed() ;

/// @brief Method PracticeButtonWasPressed addr 0x217c66c size 0x254 virtual true final false
 void PracticeButtonWasPressed() ;

/// @brief Method SelectionDidChange addr 0x217c8c0 size 0x80 virtual true final false
 void SelectionDidChange(GlobalNamespace::IBeatmapLevelPack pack, GlobalNamespace::IDifficultyBeatmap beatmap) ;

/// @brief Method StartLevelOrShow360Prompt addr 0x217c2c8 size 0x3a4 virtual false final false
 void StartLevelOrShow360Prompt(System::Action beforeSceneSwitchCallback, bool practice) ;

/// @brief Method StartLevel addr 0x217af48 size 0x2a4 virtual false final false
 void StartLevel(System::Action beforeSceneSwitchCallback, bool practice) ;

/// @brief Method HandlePracticeViewControllerDidPressPlayButton addr 0x217c948 size 0xc virtual false final false
 void HandlePracticeViewControllerDidPressPlayButton() ;

/// @brief Method HandleStandardLevelDidFinish addr 0x217c954 size 0x80 virtual false final false
 void HandleStandardLevelDidFinish(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelScenesTransitionSetupData, GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

/// @brief Method BackButtonWasPressed addr 0x217c9d4 size 0x94 virtual true final false
 void BackButtonWasPressed(HMUI::ViewController topViewController) ;

/// @brief Method SetupGameplaySetupViewController addr 0x217a928 size 0x30 virtual false final false
 void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings) ;

/// @brief Method HandleBasicLevelCompletionResults addr 0x217acf0 size 0x24 virtual false final false
 bool HandleBasicLevelCompletionResults(GlobalNamespace::LevelCompletionResults levelCompletionResults, bool practice) ;

/// @brief Method DismissPracticeViewController addr 0x217ca68 size 0xb4 virtual false final false
 void DismissPracticeViewController(System::Action finishedCallback, bool immediately) ;

// Ctor Parameters []
explicit SinglePlayerLevelSelectionFlowCoordinator() ;

/// @brief Method .ctor addr 0x217b1f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0");
NEED_NO_BOX(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, "", "SinglePlayerLevelSelectionFlowCoordinator");
