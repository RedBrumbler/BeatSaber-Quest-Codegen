#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IFactory;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class IFactory_4;
}
// Forward declare root types
namespace Zenject {
template<typename P1,typename P2,typename T>
class PrefabFactory_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type P1,::cordl_internals::il2cpp_reference_type P2,::cordl_internals::il2cpp_reference_type T>
class PrefabFactory_3<P1,P2,T>;
}
// Type: Zenject::PrefabFactory`3
// Type: Zenject::PrefabFactory`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type P1,::cordl_internals::il2cpp_reference_type P2,::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11063))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11063), inst: 5162 })
// CS Name: Zenject.PrefabFactory`3
class CORDL_TYPE PrefabFactory_3<P1,P2,T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IFactory_4<UnityEngine::Object,P1,P2,T>
constexpr operator  Zenject::IFactory_4<UnityEngine::Object,P1,P2,T>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PrefabFactory_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: " const&", def_value: None }]
constexpr PrefabFactory_3(PrefabFactory_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabFactory_3", modifiers: "&&", def_value: None }]
constexpr PrefabFactory_3(PrefabFactory_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabFactory_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabFactory_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabFactory_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabFactory_3& operator=(PrefabFactory_3&& o) noexcept = default;
  constexpr PrefabFactory_3& operator=(PrefabFactory_3 const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 T Create(UnityEngine::Object prefab, P1 param, P2 param2) ;

// Ctor Parameters []
explicit PrefabFactory_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenFieldSetter0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenFieldSetter0(::bs_hook::Il2CppWrapperType P_0, ::bs_hook::Il2CppWrapperType P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
