#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class Factory_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class Factory_2<TParam1,TValue>;
}
// Type: Zenject::Factory`2
// Type: Zenject::Factory`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10966), inst: 3364 }), TypeDefinitionIndex(TypeDefinitionIndex(10967)), TypeDefinitionIndex(TypeDefinitionIndex(10966))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10967), inst: 80 })
// CS Name: Zenject.Factory`2
class CORDL_TYPE Factory_2<TParam1,TValue> : public Zenject::PlaceholderFactory_2<TParam1,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Factory_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_2", modifiers: " const&", def_value: None }]
constexpr Factory_2(Factory_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Factory_2", modifiers: "&&", def_value: None }]
constexpr Factory_2(Factory_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Factory_2(void* ptr) noexcept : Zenject::PlaceholderFactory_2<TParam1,TValue>(ptr) {
}


  constexpr Factory_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Factory_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Factory_2& operator=(Factory_2&& o) noexcept = default;
  constexpr Factory_2& operator=(Factory_2 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Factory_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_2, "Zenject", "Factory`2");
