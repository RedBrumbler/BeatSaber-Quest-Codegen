#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TCreatedType>
class UxmlFactory_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TCreatedType>
class UxmlFactory_1<TCreatedType>;
}
// Type: UnityEngine.UIElements::UxmlFactory`1
// Type: UnityEngine.UIElements::UxmlFactory`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TCreatedType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6840)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7108), inst: 5088 }), TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7109))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7109), inst: 2 })
// CS Name: UnityEngine.UIElements.UxmlFactory`1
class CORDL_TYPE UxmlFactory_1<TCreatedType> : public UnityEngine::UIElements::UxmlFactory_2<TCreatedType,UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UxmlFactory_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: " const&", def_value: None }]
constexpr UxmlFactory_1(UxmlFactory_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UxmlFactory_1", modifiers: "&&", def_value: None }]
constexpr UxmlFactory_1(UxmlFactory_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UxmlFactory_1(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<TCreatedType,UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits>(ptr) {
}


  constexpr UxmlFactory_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UxmlFactory_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UxmlFactory_1& operator=(UxmlFactory_1&& o) noexcept = default;
  constexpr UxmlFactory_1& operator=(UxmlFactory_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UxmlFactory_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::UxmlFactory_1, "UnityEngine.UIElements", "UxmlFactory`1");
