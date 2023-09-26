#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Type: Oculus.Platform.Models::PurchaseList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13484)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13429), inst: 1149 }), TypeDefinitionIndex(TypeDefinitionIndex(13429))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13485))
// CS Name: Oculus.Platform.Models.PurchaseList
class CORDL_TYPE PurchaseList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Purchase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PurchaseList() = default;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: " const&", def_value: None }]
constexpr PurchaseList(PurchaseList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PurchaseList", modifiers: "&&", def_value: None }]
constexpr PurchaseList(PurchaseList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PurchaseList(void* ptr) noexcept : Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Purchase>(ptr) {
}


  constexpr PurchaseList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PurchaseList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PurchaseList& operator=(PurchaseList&& o) noexcept = default;
  constexpr PurchaseList& operator=(PurchaseList const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "a", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit PurchaseList(::cordl_internals::intptr_t a) ;

/// @brief Method .ctor addr 0x25d25c8 size 0x25c virtual false final false
 void _ctor(::cordl_internals::intptr_t a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::PurchaseList);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PurchaseList, "Oculus.Platform.Models", "PurchaseList");
