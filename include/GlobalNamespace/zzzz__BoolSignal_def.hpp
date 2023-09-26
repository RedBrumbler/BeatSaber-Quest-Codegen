#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class BoolSignal;
}
// Type: ::BoolSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13900)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13900), inst: 99 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13895))
// CS Name: BoolSignal
class CORDL_TYPE BoolSignal : public GlobalNamespace::GenericSignal_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BoolSignal() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: " const&", def_value: None }]
constexpr BoolSignal(BoolSignal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoolSignal", modifiers: "&&", def_value: None }]
constexpr BoolSignal(BoolSignal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoolSignal(void* ptr) noexcept : GlobalNamespace::GenericSignal_1<bool>(ptr) {
}


  constexpr BoolSignal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoolSignal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoolSignal& operator=(BoolSignal&& o) noexcept = default;
  constexpr BoolSignal& operator=(BoolSignal const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit BoolSignal() ;

/// @brief Method .ctor addr 0x1fbe790 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BoolSignal);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSignal, "", "BoolSignal");
