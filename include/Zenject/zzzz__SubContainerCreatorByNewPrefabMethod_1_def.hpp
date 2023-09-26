#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System {
struct Int32Enum;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1>
class SubContainerCreatorByNewPrefabMethod_1;
}
namespace Zenject {
template<typename TParam1>
class Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1>
class SubContainerCreatorByNewPrefabMethod_1<TParam1>;
}
namespace Zenject {
template<>
class SubContainerCreatorByNewPrefabMethod_1<System::Int32Enum>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1>
class Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<TParam1>;
}
namespace Zenject {
template<>
class Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<System::Int32Enum>;
}
// Type: ::<>c__DisplayClass2_0
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`1
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11239))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11239), inst: 2 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1::<>c__DisplayClass2_0
class CORDL_TYPE Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<TParam1> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0&& o) noexcept = default;
  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1> value) ;

constexpr Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1> __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;


// Methods

// Ctor Parameters []
explicit Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _AddInstallers_b__0(Zenject::DiContainer subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11239))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11239), inst: 4831 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1::<>c__DisplayClass2_0
class CORDL_TYPE Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0", modifiers: " const&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0&& o) noexcept = default;
  constexpr Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0& operator=(Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0 const& o) noexcept = default;
                


// Fields

 Zenject::SubContainerCreatorByNewPrefabMethod_1<System::Int32Enum> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Zenject::SubContainerCreatorByNewPrefabMethod_1<System::Int32Enum> value) ;

constexpr Zenject::SubContainerCreatorByNewPrefabMethod_1<System::Int32Enum> __get___4__this() const;

 System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_args, put=__set_args))  args;

constexpr void __set_args(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

constexpr System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_args() const;


// Methods

// Ctor Parameters []
explicit Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _AddInstallers_b__0(Zenject::DiContainer subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11240)), TypeDefinitionIndex(TypeDefinitionIndex(11235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11240), inst: 2 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_1<TParam1> : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = Zenject::Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<TParam1>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewPrefabMethod_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabMethod_1(void* ptr) noexcept : Zenject::SubContainerCreatorByNewPrefabDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(SubContainerCreatorByNewPrefabMethod_1&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(SubContainerCreatorByNewPrefabMethod_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<Zenject::DiContainer,TParam1> __declspec(property(get=__get__installerMethod, put=__set__installerMethod))  _installerMethod;

constexpr void __set__installerMethod(System::Action_2<Zenject::DiContainer,TParam1> value) ;

constexpr System::Action_2<Zenject::DiContainer,TParam1> __get__installerMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "System::Action_2<Zenject::DiContainer,TParam1>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewPrefabMethod_1(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_2<Zenject::DiContainer,TParam1> installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`1
namespace Zenject {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11240)), TypeDefinitionIndex(TypeDefinitionIndex(11235))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11240), inst: 4831 })
// CS Name: Zenject.SubContainerCreatorByNewPrefabMethod`1
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_1<System::Int32Enum> : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = Zenject::Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0<System::Int32Enum>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SubContainerCreatorByNewPrefabMethod_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_1", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorByNewPrefabMethod_1(SubContainerCreatorByNewPrefabMethod_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorByNewPrefabMethod_1(void* ptr) noexcept : Zenject::SubContainerCreatorByNewPrefabDynamicContext(ptr) {
}


  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(SubContainerCreatorByNewPrefabMethod_1&& o) noexcept = default;
  constexpr SubContainerCreatorByNewPrefabMethod_1& operator=(SubContainerCreatorByNewPrefabMethod_1 const& o) noexcept = default;
                


// Fields

 System::Action_2<Zenject::DiContainer,System::Int32Enum> __declspec(property(get=__get__installerMethod, put=__set__installerMethod))  _installerMethod;

constexpr void __set__installerMethod(System::Action_2<Zenject::DiContainer,System::Int32Enum> value) ;

constexpr System::Action_2<Zenject::DiContainer,System::Int32Enum> __get__installerMethod() const;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "prefabProvider", ty: "Zenject::IPrefabProvider", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }, CppParam { name: "installerMethod", ty: "System::Action_2<Zenject::DiContainer,System::Int32Enum>", modifiers: "", def_value: None }]
explicit SubContainerCreatorByNewPrefabMethod_1(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::IPrefabProvider prefabProvider, Zenject::GameObjectCreationParameters gameObjectBindInfo, System::Action_2<Zenject::DiContainer,System::Int32Enum> installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::GameObjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewPrefabMethod_1, "Zenject", "SubContainerCreatorByNewPrefabMethod`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__SubContainerCreatorByNewPrefabMethod_1____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0");
