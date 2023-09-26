#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionAssemblySelectionBinder;
}
namespace Zenject {
class Zenject__ConventionAssemblySelectionBinder____c;
}
namespace Zenject {
class Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10643))
// CS Name: Zenject.ConventionAssemblySelectionBinder::<>c
class CORDL_TYPE Zenject__ConventionAssemblySelectionBinder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__ConventionAssemblySelectionBinder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionAssemblySelectionBinder____c", modifiers: " const&", def_value: None }]
constexpr Zenject__ConventionAssemblySelectionBinder____c(Zenject__ConventionAssemblySelectionBinder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionAssemblySelectionBinder____c", modifiers: "&&", def_value: None }]
constexpr Zenject__ConventionAssemblySelectionBinder____c(Zenject__ConventionAssemblySelectionBinder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ConventionAssemblySelectionBinder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ConventionAssemblySelectionBinder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ConventionAssemblySelectionBinder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ConventionAssemblySelectionBinder____c& operator=(Zenject__ConventionAssemblySelectionBinder____c&& o) noexcept = default;
  constexpr Zenject__ConventionAssemblySelectionBinder____c& operator=(Zenject__ConventionAssemblySelectionBinder____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__ConventionAssemblySelectionBinder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__ConventionAssemblySelectionBinder____c value) ;

static Zenject::Zenject__ConventionAssemblySelectionBinder____c __get___9() ;

static System::Func_2<System::Type,System::Reflection::Assembly> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(System::Func_2<System::Type,System::Reflection::Assembly> value) ;

static System::Func_2<System::Type,System::Reflection::Assembly> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__ConventionAssemblySelectionBinder____c() ;

/// @brief Method .ctor addr 0x2d80f4c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FromAssembliesContaining>b__8_0 addr 0x2d80f54 size 0x24 virtual false final false
 System::Reflection::Assembly _FromAssembliesContaining_b__8_0(System::Type t) ;

/// @brief Method __zenCreate addr 0x2d80f78 size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d80fd4 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass12_0
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10644))
// CS Name: Zenject.ConventionAssemblySelectionBinder::<>c__DisplayClass12_0
class CORDL_TYPE Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0(Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0(Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0& operator=(Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0&& o) noexcept = default;
  constexpr Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0& operator=(Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly> __declspec(property(get=__get_assemblies, put=__set_assemblies))  assemblies;

constexpr void __set_assemblies(System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly> value) ;

constexpr System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly> __get_assemblies() const;


// Methods

// Ctor Parameters []
explicit Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x2d80e20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FromAssemblies>b__0 addr 0x2d81194 size 0x58 virtual false final false
 bool _FromAssemblies_b__0(System::Reflection::Assembly assembly) ;

/// @brief Method __zenCreate addr 0x2d811ec size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d81248 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ConventionAssemblySelectionBinder
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10645))
// CS Name: Zenject.ConventionAssemblySelectionBinder
class CORDL_TYPE ConventionAssemblySelectionBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass12_0 = Zenject::Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0;

using __c = Zenject::Zenject__ConventionAssemblySelectionBinder____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ConventionAssemblySelectionBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: " const&", def_value: None }]
constexpr ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: "&&", def_value: None }]
constexpr ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConventionAssemblySelectionBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConventionAssemblySelectionBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConventionAssemblySelectionBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConventionAssemblySelectionBinder& operator=(ConventionAssemblySelectionBinder&& o) noexcept = default;
  constexpr ConventionAssemblySelectionBinder& operator=(ConventionAssemblySelectionBinder const& o) noexcept = default;
                


// Fields

 Zenject::ConventionBindInfo __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField))  _BindInfo_k__BackingField;

constexpr void __set__BindInfo_k__BackingField(Zenject::ConventionBindInfo value) ;

constexpr Zenject::ConventionBindInfo __get__BindInfo_k__BackingField() const;


// Properties

 Zenject::ConventionBindInfo __declspec(property(get=get_BindInfo, put=set_BindInfo))  BindInfo;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::ConventionBindInfo", modifiers: "", def_value: None }]
explicit ConventionAssemblySelectionBinder(Zenject::ConventionBindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d80ab0 size 0x28 virtual false final false
 void _ctor(Zenject::ConventionBindInfo bindInfo) ;

/// @brief Method get_BindInfo addr 0x2d80ad8 size 0x8 virtual false final false
 Zenject::ConventionBindInfo get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x2d80ae0 size 0x8 virtual false final false
 void set_BindInfo(Zenject::ConventionBindInfo value) ;

/// @brief Method FromAllAssemblies addr 0x2d80ae8 size 0x4 virtual false final false
 void FromAllAssemblies() ;

/// @brief Method FromAssemblyContaining addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void FromAssemblyContaining() ;

/// @brief Method FromAssembliesContaining addr 0x2d80aec size 0x4 virtual false final false
 void FromAssembliesContaining(::ArrayW<System::Type> types) ;

/// @brief Method FromAssembliesContaining addr 0x2d80af0 size 0x128 virtual false final false
 void FromAssembliesContaining(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method FromThisAssembly addr 0x2d80cdc size 0xa0 virtual false final false
 void FromThisAssembly() ;

/// @brief Method FromAssembly addr 0x2d80d80 size 0xa0 virtual false final false
 void FromAssembly(System::Reflection::Assembly assembly) ;

/// @brief Method FromAssemblies addr 0x2d80d7c size 0x4 virtual false final false
 void FromAssemblies(::ArrayW<System::Reflection::Assembly> assemblies) ;

/// @brief Method FromAssemblies addr 0x2d80c18 size 0xc4 virtual false final false
 void FromAssemblies(System::Collections::Generic::IEnumerable_1<System::Reflection::Assembly> assemblies) ;

/// @brief Method FromAssembliesWhere addr 0x2d80ed0 size 0x18 virtual false final false
 void FromAssembliesWhere(System::Func_2<System::Reflection::Assembly,bool> predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ConventionAssemblySelectionBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionAssemblySelectionBinder, "Zenject", "ConventionAssemblySelectionBinder");
NEED_NO_BOX(Zenject::Zenject__ConventionAssemblySelectionBinder____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ConventionAssemblySelectionBinder____c, "Zenject", "ConventionAssemblySelectionBinder/<>c");
NEED_NO_BOX(Zenject::Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ConventionAssemblySelectionBinder____c__DisplayClass12_0, "Zenject", "ConventionAssemblySelectionBinder/<>c__DisplayClass12_0");
