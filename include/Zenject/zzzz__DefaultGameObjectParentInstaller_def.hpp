#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__Installer_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Zenject {
class DefaultGameObjectParentInstaller;
}
namespace Zenject {
class Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;
}
// Type: ::DefaultParentObjectDestroyer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11308))
// CS Name: Zenject.DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer
class CORDL_TYPE Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: " const&", def_value: None }]
constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer", modifiers: "&&", def_value: None }]
constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer& operator=(Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer&& o) noexcept = default;
  constexpr Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer& operator=(Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__gameObject() const;


// Methods

// Ctor Parameters [CppParam { name: "gameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }]
explicit Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer(UnityEngine::GameObject gameObject) ;

/// @brief Method .ctor addr 0x2dd617c size 0x28 virtual false final false
 void _ctor(UnityEngine::GameObject gameObject) ;

/// @brief Method Dispose addr 0x2dd61a4 size 0x5c virtual true final true
 void Dispose() ;

/// @brief Method __zenCreate addr 0x2dd6200 size 0xac virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd62ac size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::DefaultGameObjectParentInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11093), inst: 3776 }), TypeDefinitionIndex(TypeDefinitionIndex(11093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11309))
// CS Name: Zenject.DefaultGameObjectParentInstaller
class CORDL_TYPE DefaultGameObjectParentInstaller : public Zenject::Installer_2<::StringW,Zenject::DefaultGameObjectParentInstaller> {
public:
// Declarations
using DefaultParentObjectDestroyer = Zenject::Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DefaultGameObjectParentInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: " const&", def_value: None }]
constexpr DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGameObjectParentInstaller", modifiers: "&&", def_value: None }]
constexpr DefaultGameObjectParentInstaller(DefaultGameObjectParentInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultGameObjectParentInstaller(void* ptr) noexcept : Zenject::Installer_2<::StringW,Zenject::DefaultGameObjectParentInstaller>(ptr) {
}


  constexpr DefaultGameObjectParentInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultGameObjectParentInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultGameObjectParentInstaller& operator=(DefaultGameObjectParentInstaller&& o) noexcept = default;
  constexpr DefaultGameObjectParentInstaller& operator=(DefaultGameObjectParentInstaller const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit DefaultGameObjectParentInstaller(::StringW name) ;

/// @brief Method .ctor addr 0x2dd5cbc size 0x5c virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method InstallBindings addr 0x2dd5d18 size 0x148 virtual true final false
 void InstallBindings() ;

/// @brief Method __zenCreate addr 0x2dd5e60 size 0xa8 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2dd5f08 size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::DefaultGameObjectParentInstaller);
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultGameObjectParentInstaller, "Zenject", "DefaultGameObjectParentInstaller");
NEED_NO_BOX(Zenject::Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__DefaultGameObjectParentInstaller__DefaultParentObjectDestroyer, "Zenject", "DefaultGameObjectParentInstaller/DefaultParentObjectDestroyer");
