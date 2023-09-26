#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Product_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class ProductList;
}
// Type: Oculus.Platform.Models::ProductList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13482)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1148 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13483))
// CS Name: Oculus.Platform.Models.ProductList
class CORDL_TYPE ProductList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Product> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ProductList() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductList", modifiers: " const&", def_value: None }]
constexpr ProductList(ProductList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProductList", modifiers: "&&", def_value: None }]
constexpr ProductList(ProductList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProductList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Product>(ptr) {
}


  constexpr ProductList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProductList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProductList& operator=(ProductList&& o) noexcept = default;
  constexpr ProductList& operator=(ProductList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ProductList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25d22a4 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::ProductList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::ProductList, "Oculus.Platform.Models", "ProductList");
