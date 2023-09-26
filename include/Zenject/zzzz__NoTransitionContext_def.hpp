#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class NoTransitionInstaller;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class NoTransitionContext;
}
// Type: Zenject::NoTransitionContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11136))
// CS Name: Zenject.NoTransitionContext
class CORDL_TYPE NoTransitionContext : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NoTransitionContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: " const&", def_value: None }]
constexpr NoTransitionContext(NoTransitionContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionContext", modifiers: "&&", def_value: None }]
constexpr NoTransitionContext(NoTransitionContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionContext(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoTransitionContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionContext& operator=(NoTransitionContext&& o) noexcept = default;
  constexpr NoTransitionContext& operator=(NoTransitionContext const& o) noexcept = default;
                


// Fields

 Zenject::NoTransitionInstaller __declspec(property(get=__get__noScenesTransitionInstaller, put=__set__noScenesTransitionInstaller))  _noScenesTransitionInstaller;

constexpr void __set__noScenesTransitionInstaller(Zenject::NoTransitionInstaller value) ;

constexpr Zenject::NoTransitionInstaller __get__noScenesTransitionInstaller() const;


// Properties

 System::Action_1<Zenject::DiContainer> __declspec(property(get=get_installMethod))  installMethod;

 System::Action_1<Zenject::DiContainer> __declspec(property(get=get_postInstallMethod))  postInstallMethod;


// Methods

/// @brief Method get_installMethod addr 0x2dbd628 size 0x74 virtual false final false
 System::Action_1<Zenject::DiContainer> get_installMethod() ;

/// @brief Method get_postInstallMethod addr 0x2dbd69c size 0x74 virtual false final false
 System::Action_1<Zenject::DiContainer> get_postInstallMethod() ;

/// @brief Method Awake addr 0x2dbd710 size 0x78 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit NoTransitionContext() ;

/// @brief Method .ctor addr 0x2dbd788 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dbd790 size 0x178 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::NoTransitionContext);
DEFINE_IL2CPP_ARG_TYPE(Zenject::NoTransitionContext, "Zenject", "NoTransitionContext");
