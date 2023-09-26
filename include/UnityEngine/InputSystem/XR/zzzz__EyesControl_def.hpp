#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__Eyes_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::XR {
struct Eyes;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class EyesControl;
}
// Type: UnityEngine.InputSystem.XR::EyesControl
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6318)), TypeDefinitionIndex(TypeDefinitionIndex(6440)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6318), inst: 3759 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6442))
// CS Name: UnityEngine.InputSystem.XR.EyesControl
class CORDL_TYPE EyesControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::XR::Eyes> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~EyesControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "EyesControl", modifiers: " const&", def_value: None }]
constexpr EyesControl(EyesControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EyesControl", modifiers: "&&", def_value: None }]
constexpr EyesControl(EyesControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EyesControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::XR::Eyes>(ptr) {
}


  constexpr EyesControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EyesControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EyesControl& operator=(EyesControl&& o) noexcept = default;
  constexpr EyesControl& operator=(EyesControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__leftEyePosition_k__BackingField, put=__set__leftEyePosition_k__BackingField))  _leftEyePosition_k__BackingField;

constexpr void __set__leftEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__leftEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__leftEyeRotation_k__BackingField, put=__set__leftEyeRotation_k__BackingField))  _leftEyeRotation_k__BackingField;

constexpr void __set__leftEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__leftEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__rightEyePosition_k__BackingField, put=__set__rightEyePosition_k__BackingField))  _rightEyePosition_k__BackingField;

constexpr void __set__rightEyePosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__rightEyePosition_k__BackingField() const;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__rightEyeRotation_k__BackingField, put=__set__rightEyeRotation_k__BackingField))  _rightEyeRotation_k__BackingField;

constexpr void __set__rightEyeRotation_k__BackingField(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr UnityEngine::InputSystem::Controls::QuaternionControl __get__rightEyeRotation_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__fixationPoint_k__BackingField, put=__set__fixationPoint_k__BackingField))  _fixationPoint_k__BackingField;

constexpr void __set__fixationPoint_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__fixationPoint_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__leftEyeOpenAmount_k__BackingField, put=__set__leftEyeOpenAmount_k__BackingField))  _leftEyeOpenAmount_k__BackingField;

constexpr void __set__leftEyeOpenAmount_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__leftEyeOpenAmount_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__rightEyeOpenAmount_k__BackingField, put=__set__rightEyeOpenAmount_k__BackingField))  _rightEyeOpenAmount_k__BackingField;

constexpr void __set__rightEyeOpenAmount_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__rightEyeOpenAmount_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_leftEyePosition, put=set_leftEyePosition))  leftEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_leftEyeRotation, put=set_leftEyeRotation))  leftEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_rightEyePosition, put=set_rightEyePosition))  rightEyePosition;

 UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_rightEyeRotation, put=set_rightEyeRotation))  rightEyeRotation;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_fixationPoint, put=set_fixationPoint))  fixationPoint;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_leftEyeOpenAmount, put=set_leftEyeOpenAmount))  leftEyeOpenAmount;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_rightEyeOpenAmount, put=set_rightEyeOpenAmount))  rightEyeOpenAmount;


// Methods

/// @brief Method get_leftEyePosition addr 0x2965eec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_leftEyePosition() ;

/// @brief Method set_leftEyePosition addr 0x2965ef4 size 0x8 virtual false final false
 void set_leftEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeRotation addr 0x2965efc size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_leftEyeRotation() ;

/// @brief Method set_leftEyeRotation addr 0x2965f04 size 0x8 virtual false final false
 void set_leftEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_rightEyePosition addr 0x2965f0c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_rightEyePosition() ;

/// @brief Method set_rightEyePosition addr 0x2965f14 size 0x8 virtual false final false
 void set_rightEyePosition(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_rightEyeRotation addr 0x2965f1c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::QuaternionControl get_rightEyeRotation() ;

/// @brief Method set_rightEyeRotation addr 0x2965f24 size 0x8 virtual false final false
 void set_rightEyeRotation(UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_fixationPoint addr 0x2965f2c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_fixationPoint() ;

/// @brief Method set_fixationPoint addr 0x2965f34 size 0x8 virtual false final false
 void set_fixationPoint(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_leftEyeOpenAmount addr 0x2965f3c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_leftEyeOpenAmount() ;

/// @brief Method set_leftEyeOpenAmount addr 0x2965f44 size 0x8 virtual false final false
 void set_leftEyeOpenAmount(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_rightEyeOpenAmount addr 0x2965f4c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_rightEyeOpenAmount() ;

/// @brief Method set_rightEyeOpenAmount addr 0x2965f54 size 0x8 virtual false final false
 void set_rightEyeOpenAmount(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method FinishSetup addr 0x2965f5c size 0x1a8 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2966104 size 0x1b8 virtual true final false
 UnityEngine::InputSystem::XR::Eyes ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x29662bc size 0x114 virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::XR::Eyes value, void* statePtr) ;

// Ctor Parameters []
explicit EyesControl() ;

/// @brief Method .ctor addr 0x29663d0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::XR
NEED_NO_BOX(UnityEngine::InputSystem::XR::EyesControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::XR::EyesControl, "UnityEngine.InputSystem.XR", "EyesControl");
