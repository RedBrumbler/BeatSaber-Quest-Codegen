#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class ManagedGameplayServerFiniteStateMachine;
}
// Type: ::ManagedGameplayServerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12727))
// CS Name: ManagedGameplayServerFiniteStateMachine
class CORDL_TYPE ManagedGameplayServerFiniteStateMachine : public GlobalNamespace::GameplayServerFiniteStateMachine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ManagedGameplayServerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManagedGameplayServerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr ManagedGameplayServerFiniteStateMachine(ManagedGameplayServerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManagedGameplayServerFiniteStateMachine(void* ptr) noexcept : GlobalNamespace::GameplayServerFiniteStateMachine(ptr) {
}


  constexpr ManagedGameplayServerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManagedGameplayServerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManagedGameplayServerFiniteStateMachine& operator=(ManagedGameplayServerFiniteStateMachine&& o) noexcept = default;
  constexpr ManagedGameplayServerFiniteStateMachine& operator=(ManagedGameplayServerFiniteStateMachine const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "initParams", ty: "GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams", modifiers: "", def_value: None }]
explicit ManagedGameplayServerFiniteStateMachine(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

/// @brief Method .ctor addr 0xdbe05c size 0x30 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ManagedGameplayServerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ManagedGameplayServerFiniteStateMachine, "", "ManagedGameplayServerFiniteStateMachine");
