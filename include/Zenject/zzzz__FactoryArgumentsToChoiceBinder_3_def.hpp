#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_3_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace System {
struct Int32Enum;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryToChoiceBinder_3;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TContract>
class FactoryArgumentsToChoiceBinder_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_3<TParam1,System::Int32Enum,TContract>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
class FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract>;
}
// Type: Zenject::FactoryArgumentsToChoiceBinder`3
// Type: Zenject::FactoryArgumentsToChoiceBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10812)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10812), inst: 1829 }), TypeDefinitionIndex(TypeDefinitionIndex(10667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 5162 })
// CS Name: Zenject.FactoryArgumentsToChoiceBinder`3
class CORDL_TYPE FactoryArgumentsToChoiceBinder_3<TParam1,TParam2,TContract> : public Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryArgumentsToChoiceBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_3(FactoryArgumentsToChoiceBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_3(FactoryArgumentsToChoiceBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryArgumentsToChoiceBinder_3(void* ptr) noexcept : Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract>(ptr) {
}


  constexpr FactoryArgumentsToChoiceBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_3& operator=(FactoryArgumentsToChoiceBinder_3&& o) noexcept = default;
  constexpr FactoryArgumentsToChoiceBinder_3& operator=(FactoryArgumentsToChoiceBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryArgumentsToChoiceBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(T param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_3<TParam1,TParam2,TContract> WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactoryArgumentsToChoiceBinder`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10812)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10812), inst: 1829 }), TypeDefinitionIndex(TypeDefinitionIndex(10667))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10667), inst: 5963 })
// CS Name: Zenject.FactoryArgumentsToChoiceBinder`3
class CORDL_TYPE FactoryArgumentsToChoiceBinder_3<TParam1,System::Int32Enum,TContract> : public Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~FactoryArgumentsToChoiceBinder_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_3", modifiers: " const&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_3(FactoryArgumentsToChoiceBinder_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FactoryArgumentsToChoiceBinder_3", modifiers: "&&", def_value: None }]
constexpr FactoryArgumentsToChoiceBinder_3(FactoryArgumentsToChoiceBinder_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FactoryArgumentsToChoiceBinder_3(void* ptr) noexcept : Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract>(ptr) {
}


  constexpr FactoryArgumentsToChoiceBinder_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FactoryArgumentsToChoiceBinder_3& operator=(FactoryArgumentsToChoiceBinder_3&& o) noexcept = default;
  constexpr FactoryArgumentsToChoiceBinder_3& operator=(FactoryArgumentsToChoiceBinder_3 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }]
explicit FactoryArgumentsToChoiceBinder_3(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(T param) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TFactoryParam1,typename TFactoryParam2,typename TFactoryParam3,typename TFactoryParam4,typename TFactoryParam5,typename TFactoryParam6>
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(TFactoryParam1 param1, TFactoryParam2 param2, TFactoryParam3 param3, TFactoryParam4 param4, TFactoryParam5 param5, TFactoryParam6 param6) ;

/// @brief Method WithFactoryArguments addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithFactoryArgumentsExplicit addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryToChoiceBinder_3<TParam1,System::Int32Enum,TContract> WithFactoryArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryArgumentsToChoiceBinder_3, "Zenject", "FactoryArgumentsToChoiceBinder`3");
