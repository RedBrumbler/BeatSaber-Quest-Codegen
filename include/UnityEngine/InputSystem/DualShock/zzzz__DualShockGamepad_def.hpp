#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
namespace UnityEngine::InputSystem::DualShock {
class IDualShockHaptics;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Haptics {
class IDualMotorRumble;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::InputSystem::Haptics {
class IHaptics;
}
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class DualShockGamepad;
}
// Type: UnityEngine.InputSystem.DualShock::DualShockGamepad
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6339))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6525))
// CS Name: UnityEngine.InputSystem.DualShock.DualShockGamepad
class CORDL_TYPE DualShockGamepad : public UnityEngine::InputSystem::Gamepad {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::DualShock::IDualShockHaptics
constexpr operator  UnityEngine::InputSystem::DualShock::IDualShockHaptics() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IDualMotorRumble
constexpr operator  UnityEngine::InputSystem::Haptics::IDualMotorRumble() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::Haptics::IHaptics
constexpr operator  UnityEngine::InputSystem::Haptics::IHaptics() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x220};

virtual ~DualShockGamepad() = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: " const&", def_value: None }]
constexpr DualShockGamepad(DualShockGamepad const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShockGamepad", modifiers: "&&", def_value: None }]
constexpr DualShockGamepad(DualShockGamepad&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DualShockGamepad(void* ptr) noexcept : UnityEngine::InputSystem::Gamepad(ptr) {
}


  constexpr DualShockGamepad& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DualShockGamepad& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DualShockGamepad& operator=(DualShockGamepad&& o) noexcept = default;
  constexpr DualShockGamepad& operator=(DualShockGamepad const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__touchpadButton_k__BackingField, put=__set__touchpadButton_k__BackingField))  _touchpadButton_k__BackingField;

constexpr void __set__touchpadButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__touchpadButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__optionsButton_k__BackingField, put=__set__optionsButton_k__BackingField))  _optionsButton_k__BackingField;

constexpr void __set__optionsButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__optionsButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__shareButton_k__BackingField, put=__set__shareButton_k__BackingField))  _shareButton_k__BackingField;

constexpr void __set__shareButton_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__shareButton_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__L1_k__BackingField, put=__set__L1_k__BackingField))  _L1_k__BackingField;

constexpr void __set__L1_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__L1_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__R1_k__BackingField, put=__set__R1_k__BackingField))  _R1_k__BackingField;

constexpr void __set__R1_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__R1_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__L2_k__BackingField, put=__set__L2_k__BackingField))  _L2_k__BackingField;

constexpr void __set__L2_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__L2_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__R2_k__BackingField, put=__set__R2_k__BackingField))  _R2_k__BackingField;

constexpr void __set__R2_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__R2_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__L3_k__BackingField, put=__set__L3_k__BackingField))  _L3_k__BackingField;

constexpr void __set__L3_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__L3_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__R3_k__BackingField, put=__set__R3_k__BackingField))  _R3_k__BackingField;

constexpr void __set__R3_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__R3_k__BackingField() const;

static UnityEngine::InputSystem::DualShock::DualShockGamepad __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::DualShock::DualShockGamepad value) ;

static UnityEngine::InputSystem::DualShock::DualShockGamepad __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_touchpadButton, put=set_touchpadButton))  touchpadButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_optionsButton, put=set_optionsButton))  optionsButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_shareButton, put=set_shareButton))  shareButton;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_L1, put=set_L1))  L1;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_R1, put=set_R1))  R1;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_L2, put=set_L2))  L2;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_R2, put=set_R2))  R2;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_L3, put=set_L3))  L3;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_R3, put=set_R3))  R3;

static UnityEngine::InputSystem::DualShock::DualShockGamepad __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_touchpadButton addr 0x2982eb4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_touchpadButton() ;

/// @brief Method set_touchpadButton addr 0x2982ebc size 0x8 virtual false final false
 void set_touchpadButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_optionsButton addr 0x2982ec4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_optionsButton() ;

/// @brief Method set_optionsButton addr 0x2982ecc size 0x8 virtual false final false
 void set_optionsButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_shareButton addr 0x2982ed4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_shareButton() ;

/// @brief Method set_shareButton addr 0x2982edc size 0x8 virtual false final false
 void set_shareButton(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_L1 addr 0x2982ee4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_L1() ;

/// @brief Method set_L1 addr 0x2982eec size 0x8 virtual false final false
 void set_L1(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_R1 addr 0x2982ef4 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_R1() ;

/// @brief Method set_R1 addr 0x2982efc size 0x8 virtual false final false
 void set_R1(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_L2 addr 0x2982f04 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_L2() ;

/// @brief Method set_L2 addr 0x2982f0c size 0x8 virtual false final false
 void set_L2(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_R2 addr 0x2982f14 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_R2() ;

/// @brief Method set_R2 addr 0x2982f1c size 0x8 virtual false final false
 void set_R2(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_L3 addr 0x2982f24 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_L3() ;

/// @brief Method set_L3 addr 0x2982f2c size 0x8 virtual false final false
 void set_L3(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_R3 addr 0x2982f34 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_R3() ;

/// @brief Method set_R3 addr 0x2982f3c size 0x8 virtual false final false
 void set_R3(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_current addr 0x2982f44 size 0x48 virtual false final false
static UnityEngine::InputSystem::DualShock::DualShockGamepad get_current() ;

/// @brief Method set_current addr 0x2982f8c size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::DualShock::DualShockGamepad value) ;

/// @brief Method MakeCurrent addr 0x2982fd8 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x298302c size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29830b0 size 0x98 virtual true final false
 void FinishSetup() ;

/// @brief Method SetLightBarColor addr 0x2983148 size 0x4 virtual true final false
 void SetLightBarColor(UnityEngine::Color color) ;

// Ctor Parameters []
explicit DualShockGamepad() ;

/// @brief Method .ctor addr 0x298314c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::DualShock
NEED_NO_BOX(UnityEngine::InputSystem::DualShock::DualShockGamepad);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::DualShock::DualShockGamepad, "UnityEngine.InputSystem.DualShock", "DualShockGamepad");
