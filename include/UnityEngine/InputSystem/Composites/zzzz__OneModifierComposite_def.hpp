#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
class OneModifierComposite;
}
// Type: UnityEngine.InputSystem.Composites::OneModifierComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6291))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6819))
// CS Name: UnityEngine.InputSystem.Composites.OneModifierComposite
class CORDL_TYPE OneModifierComposite : public UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OneModifierComposite() = default;

// Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: " const&", def_value: None }]
constexpr OneModifierComposite(OneModifierComposite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OneModifierComposite", modifiers: "&&", def_value: None }]
constexpr OneModifierComposite(OneModifierComposite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OneModifierComposite(void* ptr) noexcept : UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr OneModifierComposite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OneModifierComposite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OneModifierComposite& operator=(OneModifierComposite&& o) noexcept = default;
  constexpr OneModifierComposite& operator=(OneModifierComposite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_modifier, put=__set_modifier))  modifier;

constexpr void __set_modifier(int32_t value) ;

constexpr int32_t __get_modifier() const;

 int32_t __declspec(property(get=__get_binding, put=__set_binding))  binding;

constexpr void __set_binding(int32_t value) ;

constexpr int32_t __get_binding() const;

 bool __declspec(property(get=__get_overrideModifiersNeedToBePressedFirst, put=__set_overrideModifiersNeedToBePressedFirst))  overrideModifiersNeedToBePressedFirst;

constexpr void __set_overrideModifiersNeedToBePressedFirst(bool value) ;

constexpr bool __get_overrideModifiersNeedToBePressedFirst() const;

 int32_t __declspec(property(get=__get_m_ValueSizeInBytes, put=__set_m_ValueSizeInBytes))  m_ValueSizeInBytes;

constexpr void __set_m_ValueSizeInBytes(int32_t value) ;

constexpr int32_t __get_m_ValueSizeInBytes() const;

 System::Type __declspec(property(get=__get_m_ValueType, put=__set_m_ValueType))  m_ValueType;

constexpr void __set_m_ValueType(System::Type value) ;

constexpr System::Type __get_m_ValueType() const;

 bool __declspec(property(get=__get_m_BindingIsButton, put=__set_m_BindingIsButton))  m_BindingIsButton;

constexpr void __set_m_BindingIsButton(bool value) ;

constexpr bool __get_m_BindingIsButton() const;


// Properties

 System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x28fb898 size 0x8 virtual true final false
 System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x28fb8a0 size 0x8 virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method EvaluateMagnitude addr 0x28fb8a8 size 0x40 virtual true final false
 float_t EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x28fb970 size 0x64 virtual true final false
 void ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ModifierIsPressed addr 0x28fb8e8 size 0x88 virtual false final false
 bool ModifierIsPressed(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method FinishSetup addr 0x28fb9d4 size 0xac virtual true final false
 void FinishSetup(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValueAsObject addr 0x28fbf54 size 0x50 virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method DetermineValueTypeAndSize addr 0x28fba80 size 0x4d4 virtual false final false
static void DetermineValueTypeAndSize(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context, int32_t part, ByRef<System::Type> valueType, ByRef<int32_t> valueSizeInBytes, ByRef<bool> isButton) ;

// Ctor Parameters []
explicit OneModifierComposite() ;

/// @brief Method .ctor addr 0x28fbfa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
NEED_NO_BOX(UnityEngine::InputSystem::Composites::OneModifierComposite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::OneModifierComposite, "UnityEngine.InputSystem.Composites", "OneModifierComposite");
