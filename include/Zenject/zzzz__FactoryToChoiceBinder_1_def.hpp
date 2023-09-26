#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryFromBinder_1_def.hpp"
namespace Zenject {
class FactoryFromBinderUntyped;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryFromBinder_1;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryToChoiceBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_1<TContract>;
}
// Type: Zenject::FactoryToChoiceBinder`1
// Type: Zenject::FactoryToChoiceBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10809)), TypeDefinitionIndex(TypeDefinitionIndex(10677)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10677), inst: 1709 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10809), inst: 2 })
// CS Name: Zenject.FactoryToChoiceBinder`1
class CORDL_TYPE FactoryToChoiceBinder_1<TContract> : public Zenject::FactoryFromBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryToChoiceBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: " const&", def_value: None }]
constexpr FactoryToChoiceBinder_1(FactoryToChoiceBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_1", modifiers: "&&", def_value: None }]
constexpr FactoryToChoiceBinder_1(FactoryToChoiceBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryToChoiceBinder_1(void* ptr) noexcept : Zenject::FactoryFromBinder_1<TContract>(ptr) {
}


  constexpr FactoryToChoiceBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryToChoiceBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryToChoiceBinder_1& operator=(FactoryToChoiceBinder_1&& o) noexcept = default;
  constexpr FactoryToChoiceBinder_1& operator=(FactoryToChoiceBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryToChoiceBinder_1(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinder_1<TContract> ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryFromBinderUntyped To(System::Type concreteType) ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
 Zenject::FactoryFromBinder_1<TConcrete> To() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_1, "Zenject", "FactoryToChoiceBinder`1");
