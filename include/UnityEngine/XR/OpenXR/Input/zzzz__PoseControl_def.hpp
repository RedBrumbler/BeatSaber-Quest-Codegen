#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__Pose_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::XR::OpenXR::Input {
struct Pose;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Type: UnityEngine.XR.OpenXR.Input::PoseControl
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6318)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6318), inst: 3761 }), TypeDefinitionIndex(TypeDefinitionIndex(14217))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14218))
// CS Name: UnityEngine.XR.OpenXR.Input.PoseControl
class CORDL_TYPE PoseControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::XR::OpenXR::Input::Pose> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~PoseControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: " const&", def_value: None }]
constexpr PoseControl(PoseControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoseControl", modifiers: "&&", def_value: None }]
constexpr PoseControl(PoseControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoseControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::XR::OpenXR::Input::Pose>(ptr) {
}


  constexpr PoseControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoseControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoseControl& operator=(PoseControl&& o) noexcept = default;
  constexpr PoseControl& operator=(PoseControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__isTracked_k__BackingField, put=__set__isTracked_k__BackingField))  _isTracked_k__BackingField;

constexpr void __set__isTracked_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__isTracked_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__trackingState_k__BackingField, put=__set__trackingState_k__BackingField))  _trackingState_k__BackingField;

constexpr void __set__trackingState_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__trackingState_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__position_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__rotation_k__BackingField, put=__set__rotation_k__BackingField))  _rotation_k__BackingField;

constexpr void __set__rotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__rotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__velocity_k__BackingField, put=__set__velocity_k__BackingField))  _velocity_k__BackingField;

constexpr void __set__velocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__velocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__angularVelocity_k__BackingField, put=__set__angularVelocity_k__BackingField))  _angularVelocity_k__BackingField;

constexpr void __set__angularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__angularVelocity_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_isTracked, put=set_isTracked))  isTracked;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_trackingState, put=set_trackingState))  trackingState;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_velocity, put=set_velocity))  velocity;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_angularVelocity, put=set_angularVelocity))  angularVelocity;


// Methods

/// @brief Method get_isTracked addr 0x2b21c60 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_isTracked() ;

/// @brief Method set_isTracked addr 0x2b21c68 size 0x8 virtual false final false
 void set_isTracked(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_trackingState addr 0x2b21c70 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_trackingState() ;

/// @brief Method set_trackingState addr 0x2b21c78 size 0x8 virtual false final false
 void set_trackingState(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_position addr 0x2b21c80 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_position() ;

/// @brief Method set_position addr 0x2b21c88 size 0x8 virtual false final false
 void set_position(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rotation addr 0x2b21c90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_rotation() ;

/// @brief Method set_rotation addr 0x2b21c98 size 0x8 virtual false final false
 void set_rotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_velocity addr 0x2b21ca0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_velocity() ;

/// @brief Method set_velocity addr 0x2b21ca8 size 0x8 virtual false final false
 void set_velocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_angularVelocity addr 0x2b21cb0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_angularVelocity() ;

/// @brief Method set_angularVelocity addr 0x2b21cb8 size 0x8 virtual false final false
 void set_angularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

// Ctor Parameters []
explicit PoseControl() ;

/// @brief Method .ctor addr 0x2b21cc0 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x2b21d08 size 0x194 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2b21e9c size 0x174 virtual true final false
 UnityEngine::XR::OpenXR::Input::Pose ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2b22010 size 0x124 virtual true final false
 void WriteValueIntoState(UnityEngine::XR::OpenXR::Input::Pose value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Input
NEED_NO_BOX(UnityEngine::XR::OpenXR::Input::PoseControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Input::PoseControl, "UnityEngine.XR.OpenXR.Input", "PoseControl");
