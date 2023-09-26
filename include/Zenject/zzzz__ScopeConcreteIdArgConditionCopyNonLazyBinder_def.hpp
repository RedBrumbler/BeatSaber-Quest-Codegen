#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ConcreteIdArgConditionCopyNonLazyBinder_def.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class ConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Type: Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10636))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10887))
// CS Name: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
class CORDL_TYPE ScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ConcreteIdArgConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScopeConcreteIdArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder(ScopeConcreteIdArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScopeConcreteIdArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder(ScopeConcreteIdArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScopeConcreteIdArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::ConcreteIdArgConditionCopyNonLazyBinder(ptr) {
}


  constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(ScopeConcreteIdArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr ScopeConcreteIdArgConditionCopyNonLazyBinder& operator=(ScopeConcreteIdArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit ScopeConcreteIdArgConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d93e1c size 0x8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method AsCached addr 0x2d93f20 size 0x20 virtual false final false
 Zenject::ConcreteIdArgConditionCopyNonLazyBinder AsCached() ;

/// @brief Method AsSingle addr 0x2d93f40 size 0x28 virtual false final false
 Zenject::ConcreteIdArgConditionCopyNonLazyBinder AsSingle() ;

/// @brief Method AsTransient addr 0x2d93f68 size 0x20 virtual false final false
 Zenject::ConcreteIdArgConditionCopyNonLazyBinder AsTransient() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder, "Zenject", "ScopeConcreteIdArgConditionCopyNonLazyBinder");
