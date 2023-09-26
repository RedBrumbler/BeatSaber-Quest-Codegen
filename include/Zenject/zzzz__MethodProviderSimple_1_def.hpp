#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class IProvider;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template<typename TReturn>
class MethodProviderSimple_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TReturn>
class MethodProviderSimple_1<TReturn>;
}
// Type: Zenject::MethodProviderSimple`1
// Type: Zenject::MethodProviderSimple`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TReturn>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11170))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11170), inst: 2 })
// CS Name: Zenject.MethodProviderSimple`1
class CORDL_TYPE MethodProviderSimple_1<TReturn> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MethodProviderSimple_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderSimple_1", modifiers: " const&", def_value: None }]
constexpr MethodProviderSimple_1(MethodProviderSimple_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodProviderSimple_1", modifiers: "&&", def_value: None }]
constexpr MethodProviderSimple_1(MethodProviderSimple_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodProviderSimple_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MethodProviderSimple_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodProviderSimple_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodProviderSimple_1& operator=(MethodProviderSimple_1&& o) noexcept = default;
  constexpr MethodProviderSimple_1& operator=(MethodProviderSimple_1 const& o) noexcept = default;
                


// Fields

 System::Func_1<TReturn> __declspec(property(get=__get__method, put=__set__method))  _method;

constexpr void __set__method(System::Func_1<TReturn> value) ;

constexpr System::Func_1<TReturn> __get__method() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "System::Func_1<TReturn>", modifiers: "", def_value: None }]
explicit MethodProviderSimple_1(System::Func_1<TReturn> method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_1<TReturn> method) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MethodProviderSimple_1, "Zenject", "MethodProviderSimple`1");
