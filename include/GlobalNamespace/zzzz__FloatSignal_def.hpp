#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class FloatSignal;
}
// Type: ::FloatSignal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13900)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13900), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13898))
// CS Name: FloatSignal
class CORDL_TYPE FloatSignal : public GlobalNamespace::GenericSignal_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FloatSignal() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSignal", modifiers: " const&", def_value: None }]
constexpr FloatSignal(FloatSignal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloatSignal", modifiers: "&&", def_value: None }]
constexpr FloatSignal(FloatSignal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloatSignal(void* ptr) noexcept : GlobalNamespace::GenericSignal_1<float_t>(ptr) {
}


  constexpr FloatSignal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloatSignal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloatSignal& operator=(FloatSignal&& o) noexcept = default;
  constexpr FloatSignal& operator=(FloatSignal const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FloatSignal() ;

/// @brief Method .ctor addr 0x1fbe868 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FloatSignal);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSignal, "", "FloatSignal");
