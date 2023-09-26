#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class MagneticFieldSensor;
}
// Type: UnityEngine.InputSystem::MagneticFieldSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6382))
// CS Name: UnityEngine.InputSystem.MagneticFieldSensor
class CORDL_TYPE MagneticFieldSensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~MagneticFieldSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: " const&", def_value: None }]
constexpr MagneticFieldSensor(MagneticFieldSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MagneticFieldSensor", modifiers: "&&", def_value: None }]
constexpr MagneticFieldSensor(MagneticFieldSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MagneticFieldSensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr MagneticFieldSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MagneticFieldSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MagneticFieldSensor& operator=(MagneticFieldSensor&& o) noexcept = default;
  constexpr MagneticFieldSensor& operator=(MagneticFieldSensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__magneticField_k__BackingField, put=__set__magneticField_k__BackingField))  _magneticField_k__BackingField;

constexpr void __set__magneticField_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__magneticField_k__BackingField() const;

static UnityEngine::InputSystem::MagneticFieldSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::MagneticFieldSensor value) ;

static UnityEngine::InputSystem::MagneticFieldSensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_magneticField, put=set_magneticField))  magneticField;

static UnityEngine::InputSystem::MagneticFieldSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_magneticField addr 0x2946dec size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_magneticField() ;

/// @brief Method set_magneticField addr 0x2946df4 size 0x8 virtual false final false
 void set_magneticField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_current addr 0x2946dfc size 0x48 virtual false final false
static UnityEngine::InputSystem::MagneticFieldSensor get_current() ;

/// @brief Method set_current addr 0x2946e44 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::MagneticFieldSensor value) ;

/// @brief Method MakeCurrent addr 0x2946e90 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2946ee4 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2946f68 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit MagneticFieldSensor() ;

/// @brief Method .ctor addr 0x2946fe0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::MagneticFieldSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::MagneticFieldSensor, "UnityEngine.InputSystem", "MagneticFieldSensor");
