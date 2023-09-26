#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadInObstacleHapticEffect;
}
// Type: ::HeadInObstacleHapticEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4981))
// CS Name: HeadInObstacleHapticEffect
class CORDL_TYPE HeadInObstacleHapticEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~HeadInObstacleHapticEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: " const&", def_value: None }]
constexpr HeadInObstacleHapticEffect(HeadInObstacleHapticEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadInObstacleHapticEffect", modifiers: "&&", def_value: None }]
constexpr HeadInObstacleHapticEffect(HeadInObstacleHapticEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeadInObstacleHapticEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HeadInObstacleHapticEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeadInObstacleHapticEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeadInObstacleHapticEffect& operator=(HeadInObstacleHapticEffect&& o) noexcept = default;
  constexpr HeadInObstacleHapticEffect& operator=(HeadInObstacleHapticEffect const& o) noexcept = default;
                


// Fields

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__headHapticPreset, put=__set__headHapticPreset))  _headHapticPreset;

constexpr void __set__headHapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__headHapticPreset() const;

 float_t __declspec(property(get=__get__minimalHapticDuration, put=__set__minimalHapticDuration))  _minimalHapticDuration;

constexpr void __set__minimalHapticDuration(float_t value) ;

constexpr float_t __get__minimalHapticDuration() const;

 GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(GlobalNamespace::HapticFeedbackManager value) ;

constexpr GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 GlobalNamespace::GameplayLevelSceneTransitionEvents __declspec(property(get=__get__gameplayLevelSceneTransitionEvents, put=__set__gameplayLevelSceneTransitionEvents))  _gameplayLevelSceneTransitionEvents;

constexpr void __set__gameplayLevelSceneTransitionEvents(GlobalNamespace::GameplayLevelSceneTransitionEvents value) ;

constexpr GlobalNamespace::GameplayLevelSceneTransitionEvents __get__gameplayLevelSceneTransitionEvents() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 bool __declspec(property(get=__get__isGamePaused, put=__set__isGamePaused))  _isGamePaused;

constexpr void __set__isGamePaused(bool value) ;

constexpr bool __get__isGamePaused() const;

 bool __declspec(property(get=__get__isLevelFinished, put=__set__isLevelFinished))  _isLevelFinished;

constexpr void __set__isLevelFinished(bool value) ;

constexpr bool __get__isLevelFinished() const;

/// @brief Field kInvalidTime offset 0
static constexpr float_t  kInvalidTime{-1};

 float_t __declspec(property(get=__get__minimumTimeUntilHapticEnd, put=__set__minimumTimeUntilHapticEnd))  _minimumTimeUntilHapticEnd;

constexpr void __set__minimumTimeUntilHapticEnd(float_t value) ;

constexpr float_t __get__minimumTimeUntilHapticEnd() const;

 bool __declspec(property(get=__get__wasHeadInWallLastFrame, put=__set__wasHeadInWallLastFrame))  _wasHeadInWallLastFrame;

constexpr void __set__wasHeadInWallLastFrame(bool value) ;

constexpr bool __get__wasHeadInWallLastFrame() const;


// Methods

/// @brief Method Start addr 0x228b980 size 0x20c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x228bb8c size 0x1f0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x228bd7c size 0x88 virtual false final false
 void Update() ;

/// @brief Method HandleAnyGameplayLevelDidFinish addr 0x228be04 size 0x14 virtual false final false
 void HandleAnyGameplayLevelDidFinish() ;

/// @brief Method HandleDidResumeEvent addr 0x228be18 size 0x28 virtual false final false
 void HandleDidResumeEvent() ;

/// @brief Method HandleDidPauseEvent addr 0x228be40 size 0x14 virtual false final false
 void HandleDidPauseEvent() ;

// Ctor Parameters []
explicit HeadInObstacleHapticEffect() ;

/// @brief Method .ctor addr 0x228be54 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HeadInObstacleHapticEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadInObstacleHapticEffect, "", "HeadInObstacleHapticEffect");
