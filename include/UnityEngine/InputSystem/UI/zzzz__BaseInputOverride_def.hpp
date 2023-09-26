#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInput_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
class BaseInputOverride;
}
// Type: UnityEngine.InputSystem.UI::BaseInputOverride
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13156))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6471))
// CS Name: UnityEngine.InputSystem.UI.BaseInputOverride
class CORDL_TYPE BaseInputOverride : public UnityEngine::EventSystems::BaseInput {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseInputOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: " const&", def_value: None }]
constexpr BaseInputOverride(BaseInputOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseInputOverride", modifiers: "&&", def_value: None }]
constexpr BaseInputOverride(BaseInputOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseInputOverride(void* ptr) noexcept : UnityEngine::EventSystems::BaseInput(ptr) {
}


  constexpr BaseInputOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseInputOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseInputOverride& operator=(BaseInputOverride&& o) noexcept = default;
  constexpr BaseInputOverride& operator=(BaseInputOverride const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__compositionString_k__BackingField, put=__set__compositionString_k__BackingField))  _compositionString_k__BackingField;

constexpr void __set__compositionString_k__BackingField(::StringW value) ;

constexpr ::StringW __get__compositionString_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_compositionString))  compositionString;


// Methods

/// @brief Method get_compositionString addr 0x296bf54 size 0x8 virtual true final false
 ::StringW get_compositionString() ;

// Ctor Parameters []
explicit BaseInputOverride() ;

/// @brief Method .ctor addr 0x296bf5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
NEED_NO_BOX(UnityEngine::InputSystem::UI::BaseInputOverride);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::BaseInputOverride, "UnityEngine.InputSystem.UI", "BaseInputOverride");
