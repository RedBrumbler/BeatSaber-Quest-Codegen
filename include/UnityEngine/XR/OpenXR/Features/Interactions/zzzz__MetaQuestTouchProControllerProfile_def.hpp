#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include <cstdint>
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MetaQuestTouchProControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController;
}
// Type: ::QuestProTouchController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6428))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14236))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchProControllerProfile::QuestProTouchController
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController : public UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x270};

virtual ~UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRControllerWithRumble(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController& operator=(UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__thumbstick_k__BackingField, put=__set__thumbstick_k__BackingField))  _thumbstick_k__BackingField;

constexpr void __set__thumbstick_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__thumbstick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__grip_k__BackingField, put=__set__grip_k__BackingField))  _grip_k__BackingField;

constexpr void __set__grip_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__grip_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__gripPressed_k__BackingField, put=__set__gripPressed_k__BackingField))  _gripPressed_k__BackingField;

constexpr void __set__gripPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__gripPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__menu_k__BackingField, put=__set__menu_k__BackingField))  _menu_k__BackingField;

constexpr void __set__menu_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__menu_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryButton_k__BackingField, put=__set__primaryButton_k__BackingField))  _primaryButton_k__BackingField;

constexpr void __set__primaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__primaryTouched_k__BackingField, put=__set__primaryTouched_k__BackingField))  _primaryTouched_k__BackingField;

constexpr void __set__primaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__primaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryButton_k__BackingField, put=__set__secondaryButton_k__BackingField))  _secondaryButton_k__BackingField;

constexpr void __set__secondaryButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondaryTouched_k__BackingField, put=__set__secondaryTouched_k__BackingField))  _secondaryTouched_k__BackingField;

constexpr void __set__secondaryTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__secondaryTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerPressed_k__BackingField, put=__set__triggerPressed_k__BackingField))  _triggerPressed_k__BackingField;

constexpr void __set__triggerPressed_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerPressed_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerTouched_k__BackingField, put=__set__triggerTouched_k__BackingField))  _triggerTouched_k__BackingField;

constexpr void __set__triggerTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickClicked_k__BackingField, put=__set__thumbstickClicked_k__BackingField))  _thumbstickClicked_k__BackingField;

constexpr void __set__thumbstickClicked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickClicked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbstickTouched_k__BackingField, put=__set__thumbstickTouched_k__BackingField))  _thumbstickTouched_k__BackingField;

constexpr void __set__thumbstickTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbstickTouched_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbrestTouched_k__BackingField, put=__set__thumbrestTouched_k__BackingField))  _thumbrestTouched_k__BackingField;

constexpr void __set__thumbrestTouched_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbrestTouched_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__devicePose_k__BackingField, put=__set__devicePose_k__BackingField))  _devicePose_k__BackingField;

constexpr void __set__devicePose_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__devicePose_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=__get__pointer_k__BackingField, put=__set__pointer_k__BackingField))  _pointer_k__BackingField;

constexpr void __set__pointer_k__BackingField(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::PoseControl __get__pointer_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__pointerPosition_k__BackingField, put=__set__pointerPosition_k__BackingField))  _pointerPosition_k__BackingField;

constexpr void __set__pointerPosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__pointerPosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__pointerRotation_k__BackingField, put=__set__pointerRotation_k__BackingField))  _pointerRotation_k__BackingField;

constexpr void __set__pointerRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__pointerRotation_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__haptic_k__BackingField, put=__set__haptic_k__BackingField))  _haptic_k__BackingField;

constexpr void __set__haptic_k__BackingField(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::HapticControl __get__haptic_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__thumbrestForce_k__BackingField, put=__set__thumbrestForce_k__BackingField))  _thumbrestForce_k__BackingField;

constexpr void __set__thumbrestForce_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__thumbrestForce_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__stylusForce_k__BackingField, put=__set__stylusForce_k__BackingField))  _stylusForce_k__BackingField;

constexpr void __set__stylusForce_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__stylusForce_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__triggerCurl_k__BackingField, put=__set__triggerCurl_k__BackingField))  _triggerCurl_k__BackingField;

constexpr void __set__triggerCurl_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__triggerCurl_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__triggerSlide_k__BackingField, put=__set__triggerSlide_k__BackingField))  _triggerSlide_k__BackingField;

constexpr void __set__triggerSlide_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__triggerSlide_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__triggerProximity_k__BackingField, put=__set__triggerProximity_k__BackingField))  _triggerProximity_k__BackingField;

constexpr void __set__triggerProximity_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__triggerProximity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thumbProximity_k__BackingField, put=__set__thumbProximity_k__BackingField))  _thumbProximity_k__BackingField;

constexpr void __set__thumbProximity_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__thumbProximity_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__hapticTrigger_k__BackingField, put=__set__hapticTrigger_k__BackingField))  _hapticTrigger_k__BackingField;

constexpr void __set__hapticTrigger_k__BackingField(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::HapticControl __get__hapticTrigger_k__BackingField() const;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=__get__hapticThumb_k__BackingField, put=__set__hapticThumb_k__BackingField))  _hapticThumb_k__BackingField;

constexpr void __set__hapticThumb_k__BackingField(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

constexpr UnityEngine::XR::OpenXR::Input::HapticControl __get__hapticThumb_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_thumbstick, put=set_thumbstick))  thumbstick;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_grip, put=set_grip))  grip;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_gripPressed, put=set_gripPressed))  gripPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_menu, put=set_menu))  menu;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryButton, put=set_primaryButton))  primaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_primaryTouched, put=set_primaryTouched))  primaryTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryButton, put=set_secondaryButton))  secondaryButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondaryTouched, put=set_secondaryTouched))  secondaryTouched;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerPressed, put=set_triggerPressed))  triggerPressed;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerTouched, put=set_triggerTouched))  triggerTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickClicked, put=set_thumbstickClicked))  thumbstickClicked;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbstickTouched, put=set_thumbstickTouched))  thumbstickTouched;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbrestTouched, put=set_thumbrestTouched))  thumbrestTouched;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_devicePose, put=set_devicePose))  devicePose;

 UnityEngine::XR::OpenXR::Input::PoseControl __declspec(property(get=get_pointer, put=set_pointer))  pointer;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_pointerPosition, put=set_pointerPosition))  pointerPosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_pointerRotation, put=set_pointerRotation))  pointerRotation;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_haptic, put=set_haptic))  haptic;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_thumbrestForce, put=set_thumbrestForce))  thumbrestForce;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_stylusForce, put=set_stylusForce))  stylusForce;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_triggerCurl, put=set_triggerCurl))  triggerCurl;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_triggerSlide, put=set_triggerSlide))  triggerSlide;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_triggerProximity, put=set_triggerProximity))  triggerProximity;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thumbProximity, put=set_thumbProximity))  thumbProximity;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_hapticTrigger, put=set_hapticTrigger))  hapticTrigger;

 UnityEngine::XR::OpenXR::Input::HapticControl __declspec(property(get=get_hapticThumb, put=set_hapticThumb))  hapticThumb;


// Methods

/// @brief Method get_thumbstick addr 0x2b2ada8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_thumbstick() ;

/// @brief Method set_thumbstick addr 0x2b2adb0 size 0x8 virtual false final false
 void set_thumbstick(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_grip addr 0x2b2adb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_grip() ;

/// @brief Method set_grip addr 0x2b2adc0 size 0x8 virtual false final false
 void set_grip(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_gripPressed addr 0x2b2adc8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_gripPressed() ;

/// @brief Method set_gripPressed addr 0x2b2add0 size 0x8 virtual false final false
 void set_gripPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_menu addr 0x2b2add8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_menu() ;

/// @brief Method set_menu addr 0x2b2ade0 size 0x8 virtual false final false
 void set_menu(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryButton addr 0x2b2ade8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryButton() ;

/// @brief Method set_primaryButton addr 0x2b2adf0 size 0x8 virtual false final false
 void set_primaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_primaryTouched addr 0x2b2adf8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_primaryTouched() ;

/// @brief Method set_primaryTouched addr 0x2b2ae00 size 0x8 virtual false final false
 void set_primaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryButton addr 0x2b2ae08 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryButton() ;

/// @brief Method set_secondaryButton addr 0x2b2ae10 size 0x8 virtual false final false
 void set_secondaryButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondaryTouched addr 0x2b2ae18 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_secondaryTouched() ;

/// @brief Method set_secondaryTouched addr 0x2b2ae20 size 0x8 virtual false final false
 void set_secondaryTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trigger addr 0x2b2ae28 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_trigger() ;

/// @brief Method set_trigger addr 0x2b2ae30 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerPressed addr 0x2b2ae38 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerPressed() ;

/// @brief Method set_triggerPressed addr 0x2b2ae40 size 0x8 virtual false final false
 void set_triggerPressed(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_triggerTouched addr 0x2b2ae48 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerTouched() ;

/// @brief Method set_triggerTouched addr 0x2b2ae50 size 0x8 virtual false final false
 void set_triggerTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickClicked addr 0x2b2ae58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickClicked() ;

/// @brief Method set_thumbstickClicked addr 0x2b2ae60 size 0x8 virtual false final false
 void set_thumbstickClicked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbstickTouched addr 0x2b2ae68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbstickTouched() ;

/// @brief Method set_thumbstickTouched addr 0x2b2ae70 size 0x8 virtual false final false
 void set_thumbstickTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbrestTouched addr 0x2b2ae78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbrestTouched() ;

/// @brief Method set_thumbrestTouched addr 0x2b2ae80 size 0x8 virtual false final false
 void set_thumbrestTouched(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePose addr 0x2b2ae88 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_devicePose() ;

/// @brief Method set_devicePose addr 0x2b2ae90 size 0x8 virtual false final false
 void set_devicePose(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_pointer addr 0x2b2ae98 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::PoseControl get_pointer() ;

/// @brief Method set_pointer addr 0x2b2aea0 size 0x8 virtual false final false
 void set_pointer(UnityEngine::XR::OpenXR::Input::PoseControl value) ;

/// @brief Method get_isTracked addr 0x2b2aea8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2b2aeb0 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2b2aeb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2b2aec0 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_devicePosition addr 0x2b2aec8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2b2aed0 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2b2aed8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2b2aee0 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_pointerPosition addr 0x2b2aee8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_pointerPosition() ;

/// @brief Method set_pointerPosition addr 0x2b2aef0 size 0x8 virtual false final false
 void set_pointerPosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_pointerRotation addr 0x2b2aef8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_pointerRotation() ;

/// @brief Method set_pointerRotation addr 0x2b2af00 size 0x8 virtual false final false
 void set_pointerRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_haptic addr 0x2b2af08 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_haptic() ;

/// @brief Method set_haptic addr 0x2b2af10 size 0x8 virtual false final false
 void set_haptic(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method get_thumbrestForce addr 0x2b2af18 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_thumbrestForce() ;

/// @brief Method set_thumbrestForce addr 0x2b2af20 size 0x8 virtual false final false
 void set_thumbrestForce(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_stylusForce addr 0x2b2af28 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_stylusForce() ;

/// @brief Method set_stylusForce addr 0x2b2af30 size 0x8 virtual false final false
 void set_stylusForce(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerCurl addr 0x2b2af38 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_triggerCurl() ;

/// @brief Method set_triggerCurl addr 0x2b2af40 size 0x8 virtual false final false
 void set_triggerCurl(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerSlide addr 0x2b2af48 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_triggerSlide() ;

/// @brief Method set_triggerSlide addr 0x2b2af50 size 0x8 virtual false final false
 void set_triggerSlide(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_triggerProximity addr 0x2b2af58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_triggerProximity() ;

/// @brief Method set_triggerProximity addr 0x2b2af60 size 0x8 virtual false final false
 void set_triggerProximity(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thumbProximity addr 0x2b2af68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_thumbProximity() ;

/// @brief Method set_thumbProximity addr 0x2b2af70 size 0x8 virtual false final false
 void set_thumbProximity(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_hapticTrigger addr 0x2b2af78 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_hapticTrigger() ;

/// @brief Method set_hapticTrigger addr 0x2b2af80 size 0x8 virtual false final false
 void set_hapticTrigger(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method get_hapticThumb addr 0x2b2af88 size 0x8 virtual false final false
 UnityEngine::XR::OpenXR::Input::HapticControl get_hapticThumb() ;

/// @brief Method set_hapticThumb addr 0x2b2af90 size 0x8 virtual false final false
 void set_hapticThumb(UnityEngine::XR::OpenXR::Input::HapticControl value) ;

/// @brief Method FinishSetup addr 0x2b2af98 size 0x5d8 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController() ;

/// @brief Method .ctor addr 0x2b2b570 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MetaQuestTouchProControllerProfile
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14228))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14237))
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.MetaQuestTouchProControllerProfile
class CORDL_TYPE MetaQuestTouchProControllerProfile : public UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
// Declarations
using QuestProTouchController = UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MetaQuestTouchProControllerProfile() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchProControllerProfile", modifiers: " const&", def_value: None }]
constexpr MetaQuestTouchProControllerProfile(MetaQuestTouchProControllerProfile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestTouchProControllerProfile", modifiers: "&&", def_value: None }]
constexpr MetaQuestTouchProControllerProfile(MetaQuestTouchProControllerProfile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaQuestTouchProControllerProfile(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature(ptr) {
}


  constexpr MetaQuestTouchProControllerProfile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaQuestTouchProControllerProfile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaQuestTouchProControllerProfile& operator=(MetaQuestTouchProControllerProfile&& o) noexcept = default;
  constexpr MetaQuestTouchProControllerProfile& operator=(MetaQuestTouchProControllerProfile const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.input.metaquestpro"};

/// @brief Field profile offset 0
static constexpr ::ConstString  profile{u"/interaction_profiles/facebook/touch_controller_pro"};

/// @brief Field buttonX offset 0
static constexpr ::ConstString  buttonX{u"/input/x/click"};

/// @brief Field buttonXTouch offset 0
static constexpr ::ConstString  buttonXTouch{u"/input/x/touch"};

/// @brief Field buttonY offset 0
static constexpr ::ConstString  buttonY{u"/input/y/click"};

/// @brief Field buttonYTouch offset 0
static constexpr ::ConstString  buttonYTouch{u"/input/y/touch"};

/// @brief Field menu offset 0
static constexpr ::ConstString  menu{u"/input/menu/click"};

/// @brief Field buttonA offset 0
static constexpr ::ConstString  buttonA{u"/input/a/click"};

/// @brief Field buttonATouch offset 0
static constexpr ::ConstString  buttonATouch{u"/input/a/touch"};

/// @brief Field buttonB offset 0
static constexpr ::ConstString  buttonB{u"/input/b/click"};

/// @brief Field buttonBTouch offset 0
static constexpr ::ConstString  buttonBTouch{u"/input/b/touch"};

/// @brief Field system offset 0
static constexpr ::ConstString  system{u"/input/system/click"};

/// @brief Field squeeze offset 0
static constexpr ::ConstString  squeeze{u"/input/squeeze/value"};

/// @brief Field trigger offset 0
static constexpr ::ConstString  trigger{u"/input/trigger/value"};

/// @brief Field triggerTouch offset 0
static constexpr ::ConstString  triggerTouch{u"/input/trigger/touch"};

/// @brief Field thumbstick offset 0
static constexpr ::ConstString  thumbstick{u"/input/thumbstick"};

/// @brief Field thumbstickClick offset 0
static constexpr ::ConstString  thumbstickClick{u"/input/thumbstick/click"};

/// @brief Field thumbstickTouch offset 0
static constexpr ::ConstString  thumbstickTouch{u"/input/thumbstick/touch"};

/// @brief Field thumbrest offset 0
static constexpr ::ConstString  thumbrest{u"/input/thumbrest/touch"};

/// @brief Field grip offset 0
static constexpr ::ConstString  grip{u"/input/grip/pose"};

/// @brief Field aim offset 0
static constexpr ::ConstString  aim{u"/input/aim/pose"};

/// @brief Field haptic offset 0
static constexpr ::ConstString  haptic{u"/output/haptic"};

/// @brief Field thumbrestForce offset 0
static constexpr ::ConstString  thumbrestForce{u"/input/thumbrest/force"};

/// @brief Field stylusForce offset 0
static constexpr ::ConstString  stylusForce{u"/input/stylus_fb/force"};

/// @brief Field triggerCurl offset 0
static constexpr ::ConstString  triggerCurl{u"/input/trigger/curl_fb"};

/// @brief Field triggerSlide offset 0
static constexpr ::ConstString  triggerSlide{u"/input/trigger/slide_fb"};

/// @brief Field triggerProximity offset 0
static constexpr ::ConstString  triggerProximity{u"/input/trigger/proximity_fb"};

/// @brief Field thumbProximity offset 0
static constexpr ::ConstString  thumbProximity{u"/input/thumb_fb/proximity_fb"};

/// @brief Field hapticTrigger offset 0
static constexpr ::ConstString  hapticTrigger{u"/output/trigger_haptic_fb"};

/// @brief Field hapticThumb offset 0
static constexpr ::ConstString  hapticThumb{u"/output/thumb_haptic_fb"};

/// @brief Field kDeviceLocalizedName offset 0
static constexpr ::ConstString  kDeviceLocalizedName{u"Meta Quest Pro Touch Controller OpenXR"};


// Methods

/// @brief Method OnInstanceCreate addr 0x2b26b3c size 0x6c virtual true final false
 bool OnInstanceCreate(uint64_t instance) ;

/// @brief Method RegisterDeviceLayout addr 0x2b26ba8 size 0x140 virtual true final false
 void RegisterDeviceLayout() ;

/// @brief Method UnregisterDeviceLayout addr 0x2b26ce8 size 0x68 virtual true final false
 void UnregisterDeviceLayout() ;

/// @brief Method RegisterActionMapsWithRuntime addr 0x2b26d50 size 0x4050 virtual true final false
 void RegisterActionMapsWithRuntime() ;

// Ctor Parameters []
explicit MetaQuestTouchProControllerProfile() ;

/// @brief Method .ctor addr 0x2b2ada0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::MetaQuestTouchProControllerProfile, "UnityEngine.XR.OpenXR.Features.Interactions", "MetaQuestTouchProControllerProfile");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Interactions::UnityEngine__XR__OpenXR__Features__Interactions__MetaQuestTouchProControllerProfile__QuestProTouchController, "UnityEngine.XR.OpenXR.Features.Interactions", "MetaQuestTouchProControllerProfile/QuestProTouchController");
