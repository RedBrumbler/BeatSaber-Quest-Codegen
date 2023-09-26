#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusHMD;
}
// Type: Unity.XR.Oculus.Input::OculusHMD
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6426))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15262))
// CS Name: Unity.XR.Oculus.Input.OculusHMD
class CORDL_TYPE OculusHMD : public UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x260};

virtual ~OculusHMD() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: " const&", def_value: None }]
constexpr OculusHMD(OculusHMD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "&&", def_value: None }]
constexpr OculusHMD(OculusHMD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusHMD(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRHMD(ptr) {
}


  constexpr OculusHMD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusHMD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusHMD& operator=(OculusHMD&& o) noexcept = default;
  constexpr OculusHMD& operator=(OculusHMD const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__userPresence_k__BackingField, put=__set__userPresence_k__BackingField))  _userPresence_k__BackingField;

constexpr void __set__userPresence_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__userPresence_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__devicePosition_k__BackingField, put=__set__devicePosition_k__BackingField))  _devicePosition_k__BackingField;

constexpr void __set__devicePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__devicePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__deviceRotation_k__BackingField, put=__set__deviceRotation_k__BackingField))  _deviceRotation_k__BackingField;

constexpr void __set__deviceRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__deviceRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularVelocity_k__BackingField, put=__set__deviceAngularVelocity_k__BackingField))  _deviceAngularVelocity_k__BackingField;

constexpr void __set__deviceAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAcceleration_k__BackingField, put=__set__deviceAcceleration_k__BackingField))  _deviceAcceleration_k__BackingField;

constexpr void __set__deviceAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceAngularAcceleration_k__BackingField, put=__set__deviceAngularAcceleration_k__BackingField))  _deviceAngularAcceleration_k__BackingField;

constexpr void __set__deviceAngularAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceAngularAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField))  _leftEyePosition_k__BackingField;

constexpr void __set__leftEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField))  _leftEyeRotation_k__BackingField;

constexpr void __set__leftEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__leftEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyeAngularVelocity_k__BackingField, put=__set__leftEyeAngularVelocity_k__BackingField))  _leftEyeAngularVelocity_k__BackingField;

constexpr void __set__leftEyeAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyeAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyeAcceleration_k__BackingField, put=__set__leftEyeAcceleration_k__BackingField))  _leftEyeAcceleration_k__BackingField;

constexpr void __set__leftEyeAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyeAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyeAngularAcceleration_k__BackingField, put=__set__leftEyeAngularAcceleration_k__BackingField))  _leftEyeAngularAcceleration_k__BackingField;

constexpr void __set__leftEyeAngularAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyeAngularAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField))  _rightEyePosition_k__BackingField;

constexpr void __set__rightEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField))  _rightEyeRotation_k__BackingField;

constexpr void __set__rightEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__rightEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyeAngularVelocity_k__BackingField, put=__set__rightEyeAngularVelocity_k__BackingField))  _rightEyeAngularVelocity_k__BackingField;

constexpr void __set__rightEyeAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyeAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyeAcceleration_k__BackingField, put=__set__rightEyeAcceleration_k__BackingField))  _rightEyeAcceleration_k__BackingField;

constexpr void __set__rightEyeAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyeAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyeAngularAcceleration_k__BackingField, put=__set__rightEyeAngularAcceleration_k__BackingField))  _rightEyeAngularAcceleration_k__BackingField;

constexpr void __set__rightEyeAngularAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyeAngularAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyePosition_k__BackingField, put=__set__centerEyePosition_k__BackingField))  _centerEyePosition_k__BackingField;

constexpr void __set__centerEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__centerEyeRotation_k__BackingField, put=__set__centerEyeRotation_k__BackingField))  _centerEyeRotation_k__BackingField;

constexpr void __set__centerEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__centerEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyeAngularVelocity_k__BackingField, put=__set__centerEyeAngularVelocity_k__BackingField))  _centerEyeAngularVelocity_k__BackingField;

constexpr void __set__centerEyeAngularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyeAngularVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyeAcceleration_k__BackingField, put=__set__centerEyeAcceleration_k__BackingField))  _centerEyeAcceleration_k__BackingField;

constexpr void __set__centerEyeAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyeAcceleration_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__centerEyeAngularAcceleration_k__BackingField, put=__set__centerEyeAngularAcceleration_k__BackingField))  _centerEyeAngularAcceleration_k__BackingField;

constexpr void __set__centerEyeAngularAcceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__centerEyeAngularAcceleration_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_userPresence, put=set_userPresence))  userPresence;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_devicePosition, put=set_devicePosition))  devicePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_deviceRotation, put=set_deviceRotation))  deviceRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularVelocity, put=set_deviceAngularVelocity))  deviceAngularVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAcceleration, put=set_deviceAcceleration))  deviceAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceAngularAcceleration, put=set_deviceAngularAcceleration))  deviceAngularAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition))  leftEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation))  leftEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyeAngularVelocity, put=set_leftEyeAngularVelocity))  leftEyeAngularVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyeAcceleration, put=set_leftEyeAcceleration))  leftEyeAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyeAngularAcceleration, put=set_leftEyeAngularAcceleration))  leftEyeAngularAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition))  rightEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation))  rightEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyeAngularVelocity, put=set_rightEyeAngularVelocity))  rightEyeAngularVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyeAcceleration, put=set_rightEyeAcceleration))  rightEyeAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyeAngularAcceleration, put=set_rightEyeAngularAcceleration))  rightEyeAngularAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyePosition, put=set_centerEyePosition))  centerEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_centerEyeRotation, put=set_centerEyeRotation))  centerEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyeAngularVelocity, put=set_centerEyeAngularVelocity))  centerEyeAngularVelocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyeAcceleration, put=set_centerEyeAcceleration))  centerEyeAcceleration;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_centerEyeAngularAcceleration, put=set_centerEyeAngularAcceleration))  centerEyeAngularAcceleration;


// Methods

/// @brief Method get_userPresence addr 0x2b145c0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_userPresence() ;

/// @brief Method set_userPresence addr 0x2b145c8 size 0x8 virtual false final false
 void set_userPresence(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2b145d0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2b145d8 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_isTracked addr 0x2b145e0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2b145e8 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_devicePosition addr 0x2b145f0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_devicePosition() ;

/// @brief Method set_devicePosition addr 0x2b145f8 size 0x8 virtual false final false
 void set_devicePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceRotation addr 0x2b14600 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_deviceRotation() ;

/// @brief Method set_deviceRotation addr 0x2b14608 size 0x8 virtual false final false
 void set_deviceRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_deviceAngularVelocity addr 0x2b14610 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularVelocity() ;

/// @brief Method set_deviceAngularVelocity addr 0x2b14618 size 0x8 virtual false final false
 void set_deviceAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAcceleration addr 0x2b14620 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAcceleration() ;

/// @brief Method set_deviceAcceleration addr 0x2b14628 size 0x8 virtual false final false
 void set_deviceAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_deviceAngularAcceleration addr 0x2b14630 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceAngularAcceleration() ;

/// @brief Method set_deviceAngularAcceleration addr 0x2b14638 size 0x8 virtual false final false
 void set_deviceAngularAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyePosition addr 0x2b14640 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2b14648 size 0x8 virtual false final false
 void set_leftEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeRotation addr 0x2b14650 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2b14658 size 0x8 virtual false final false
 void set_leftEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_leftEyeAngularVelocity addr 0x2b14660 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyeAngularVelocity() ;

/// @brief Method set_leftEyeAngularVelocity addr 0x2b14668 size 0x8 virtual false final false
 void set_leftEyeAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeAcceleration addr 0x2b14670 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyeAcceleration() ;

/// @brief Method set_leftEyeAcceleration addr 0x2b14678 size 0x8 virtual false final false
 void set_leftEyeAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeAngularAcceleration addr 0x2b14680 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyeAngularAcceleration() ;

/// @brief Method set_leftEyeAngularAcceleration addr 0x2b14688 size 0x8 virtual false final false
 void set_leftEyeAngularAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyePosition addr 0x2b14690 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2b14698 size 0x8 virtual false final false
 void set_rightEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeRotation addr 0x2b146a0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2b146a8 size 0x8 virtual false final false
 void set_rightEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_rightEyeAngularVelocity addr 0x2b146b0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyeAngularVelocity() ;

/// @brief Method set_rightEyeAngularVelocity addr 0x2b146b8 size 0x8 virtual false final false
 void set_rightEyeAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeAcceleration addr 0x2b146c0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyeAcceleration() ;

/// @brief Method set_rightEyeAcceleration addr 0x2b146c8 size 0x8 virtual false final false
 void set_rightEyeAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeAngularAcceleration addr 0x2b146d0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyeAngularAcceleration() ;

/// @brief Method set_rightEyeAngularAcceleration addr 0x2b146d8 size 0x8 virtual false final false
 void set_rightEyeAngularAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyePosition addr 0x2b146e0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_centerEyePosition() ;

/// @brief Method set_centerEyePosition addr 0x2b146e8 size 0x8 virtual false final false
 void set_centerEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeRotation addr 0x2b146f0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_centerEyeRotation() ;

/// @brief Method set_centerEyeRotation addr 0x2b146f8 size 0x8 virtual false final false
 void set_centerEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_centerEyeAngularVelocity addr 0x2b14700 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_centerEyeAngularVelocity() ;

/// @brief Method set_centerEyeAngularVelocity addr 0x2b14708 size 0x8 virtual false final false
 void set_centerEyeAngularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeAcceleration addr 0x2b14710 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_centerEyeAcceleration() ;

/// @brief Method set_centerEyeAcceleration addr 0x2b14718 size 0x8 virtual false final false
 void set_centerEyeAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_centerEyeAngularAcceleration addr 0x2b14720 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_centerEyeAngularAcceleration() ;

/// @brief Method set_centerEyeAngularAcceleration addr 0x2b14728 size 0x8 virtual false final false
 void set_centerEyeAngularAcceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x2b14730 size 0x440 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit OculusHMD() ;

/// @brief Method .ctor addr 0x2b14b70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus::Input
NEED_NO_BOX(Unity::XR::Oculus::Input::OculusHMD);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::Input::OculusHMD, "Unity.XR.Oculus.Input", "OculusHMD");
