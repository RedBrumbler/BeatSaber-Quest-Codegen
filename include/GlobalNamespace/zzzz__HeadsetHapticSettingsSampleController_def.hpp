#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadsetHapticSettingsSampleController;
}
// Type: ::HeadsetHapticSettingsSampleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5702))
// CS Name: HeadsetHapticSettingsSampleController
class CORDL_TYPE HeadsetHapticSettingsSampleController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HeadsetHapticSettingsSampleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: " const&", def_value: None }]
constexpr HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadsetHapticSettingsSampleController", modifiers: "&&", def_value: None }]
constexpr HeadsetHapticSettingsSampleController(HeadsetHapticSettingsSampleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeadsetHapticSettingsSampleController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HeadsetHapticSettingsSampleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeadsetHapticSettingsSampleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeadsetHapticSettingsSampleController& operator=(HeadsetHapticSettingsSampleController&& o) noexcept = default;
  constexpr HeadsetHapticSettingsSampleController& operator=(HeadsetHapticSettingsSampleController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FormattedFloatListSettingsController __declspec(property(get=__get__formattedFloatListSettingsController, put=__set__formattedFloatListSettingsController))  _formattedFloatListSettingsController;

constexpr void __set__formattedFloatListSettingsController(GlobalNamespace::FormattedFloatListSettingsController value) ;

constexpr GlobalNamespace::FormattedFloatListSettingsController __get__formattedFloatListSettingsController() const;

 float_t __declspec(property(get=__get__hapticSamplePlayDelay, put=__set__hapticSamplePlayDelay))  _hapticSamplePlayDelay;

constexpr void __set__hapticSamplePlayDelay(float_t value) ;

constexpr float_t __get__hapticSamplePlayDelay() const;

 float_t __declspec(property(get=__get__hapticSampleDuration, put=__set__hapticSampleDuration))  _hapticSampleDuration;

constexpr void __set__hapticSampleDuration(float_t value) ;

constexpr float_t __get__hapticSampleDuration() const;

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__headHapticPreset, put=__set__headHapticPreset))  _headHapticPreset;

constexpr void __set__headHapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__headHapticPreset() const;

 GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(GlobalNamespace::HapticFeedbackManager value) ;

constexpr GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;

 float_t __declspec(property(get=__get__nextHapticSamplePlayTime, put=__set__nextHapticSamplePlayTime))  _nextHapticSamplePlayTime;

constexpr void __set__nextHapticSamplePlayTime(float_t value) ;

constexpr float_t __get__nextHapticSamplePlayTime() const;

 float_t __declspec(property(get=__get__nextHapticSamplePlayTimeEnd, put=__set__nextHapticSamplePlayTimeEnd))  _nextHapticSamplePlayTimeEnd;

constexpr void __set__nextHapticSamplePlayTimeEnd(float_t value) ;

constexpr float_t __get__nextHapticSamplePlayTimeEnd() const;


// Methods

/// @brief Method Start addr 0x218aa38 size 0x98 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x218aad0 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x218aba0 size 0x68 virtual false final false
 void Update() ;

/// @brief Method HandleHapticSettingValueDidChange addr 0x218ac08 size 0x50 virtual false final false
 void HandleHapticSettingValueDidChange(GlobalNamespace::FormattedFloatListSettingsController controller, float_t newValue) ;

// Ctor Parameters []
explicit HeadsetHapticSettingsSampleController() ;

/// @brief Method .ctor addr 0x218ac58 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HeadsetHapticSettingsSampleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadsetHapticSettingsSampleController, "", "HeadsetHapticSettingsSampleController");
