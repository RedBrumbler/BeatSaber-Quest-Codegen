#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class DoubleSO;
}
// Type: ::DoubleSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13923), inst: 2602 }), TypeDefinitionIndex(TypeDefinitionIndex(13923))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13917))
// CS Name: DoubleSO
class CORDL_TYPE DoubleSO : public GlobalNamespace::ObservableVariableSO_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DoubleSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleSO", modifiers: " const&", def_value: None }]
constexpr DoubleSO(DoubleSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleSO", modifiers: "&&", def_value: None }]
constexpr DoubleSO(DoubleSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoubleSO(void* ptr) noexcept : GlobalNamespace::ObservableVariableSO_1<double_t>(ptr) {
}


  constexpr DoubleSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoubleSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoubleSO& operator=(DoubleSO&& o) noexcept = default;
  constexpr DoubleSO& operator=(DoubleSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DoubleSO() ;

/// @brief Method .ctor addr 0x1fbf410 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DoubleSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DoubleSO, "", "DoubleSO");
