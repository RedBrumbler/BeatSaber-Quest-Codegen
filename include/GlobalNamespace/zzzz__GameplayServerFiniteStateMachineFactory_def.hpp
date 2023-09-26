#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__GameplayServerFiniteStateMachine__InitParams;
}
namespace GlobalNamespace {
class GameplayServerFiniteStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayServerFiniteStateMachineFactory;
}
// Type: ::GameplayServerFiniteStateMachineFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12724))
// CS Name: GameplayServerFiniteStateMachineFactory
class CORDL_TYPE GameplayServerFiniteStateMachineFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GameplayServerFiniteStateMachineFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: " const&", def_value: None }]
constexpr GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayServerFiniteStateMachineFactory", modifiers: "&&", def_value: None }]
constexpr GameplayServerFiniteStateMachineFactory(GameplayServerFiniteStateMachineFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayServerFiniteStateMachineFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayServerFiniteStateMachineFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayServerFiniteStateMachineFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayServerFiniteStateMachineFactory& operator=(GameplayServerFiniteStateMachineFactory&& o) noexcept = default;
  constexpr GameplayServerFiniteStateMachineFactory& operator=(GameplayServerFiniteStateMachineFactory const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0xdbdeb0 size 0x1ac virtual false final false
static GlobalNamespace::GameplayServerFiniteStateMachine Create(GlobalNamespace::GlobalNamespace__GameplayServerFiniteStateMachine__InitParams initParams) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayServerFiniteStateMachineFactory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFiniteStateMachineFactory, "", "GameplayServerFiniteStateMachineFactory");
