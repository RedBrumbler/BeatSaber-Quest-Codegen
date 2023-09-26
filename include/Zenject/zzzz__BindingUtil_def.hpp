#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
struct InvalidBindResponses;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class BindingUtil;
}
// Type: Zenject::BindingUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10913))
// CS Name: Zenject.BindingUtil
class CORDL_TYPE BindingUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BindingUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: " const&", def_value: None }]
constexpr BindingUtil(BindingUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "&&", def_value: None }]
constexpr BindingUtil(BindingUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindingUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindingUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindingUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindingUtil& operator=(BindingUtil&& o) noexcept = default;
  constexpr BindingUtil& operator=(BindingUtil const& o) noexcept = default;
                


// Methods

/// @brief Method AssertIsValidPrefab addr 0x2d949b0 size 0x5c virtual false final false
static void AssertIsValidPrefab(UnityEngine::Object prefab) ;

/// @brief Method AssertIsValidGameObject addr 0x2d98398 size 0x5c virtual false final false
static void AssertIsValidGameObject(UnityEngine::GameObject gameObject) ;

/// @brief Method AssertIsNotComponent addr 0x2d983f4 size 0x2c0 virtual false final false
static void AssertIsNotComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsNotComponent() ;

/// @brief Method AssertIsNotComponent addr 0x2d986b4 size 0xe0 virtual false final false
static void AssertIsNotComponent(System::Type type) ;

/// @brief Method AssertDerivesFromUnityObject addr 0x2d98794 size 0x2c0 virtual false final false
static void AssertDerivesFromUnityObject(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertDerivesFromUnityObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertDerivesFromUnityObject() ;

/// @brief Method AssertDerivesFromUnityObject addr 0x2d98a54 size 0x94 virtual false final false
static void AssertDerivesFromUnityObject(System::Type type) ;

/// @brief Method AssertTypesAreNotComponents addr 0x2d98ae8 size 0x2c0 virtual false final false
static void AssertTypesAreNotComponents(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsValidResourcePath addr 0x2d94f90 size 0x5c virtual false final false
static void AssertIsValidResourcePath(::StringW resourcePath) ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x2d98da8 size 0x2c0 virtual false final false
static void AssertIsInterfaceOrScriptableObject(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsInterfaceOrScriptableObject() ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x2d99068 size 0x104 virtual false final false
static void AssertIsInterfaceOrScriptableObject(System::Type type) ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x2d9916c size 0x2c0 virtual false final false
static void AssertIsInterfaceOrComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsInterfaceOrComponent() ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x2d9942c size 0x104 virtual false final false
static void AssertIsInterfaceOrComponent(System::Type type) ;

/// @brief Method AssertIsComponent addr 0x2d99530 size 0x2c0 virtual false final false
static void AssertIsComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsComponent() ;

/// @brief Method AssertIsComponent addr 0x2d997f0 size 0xdc virtual false final false
static void AssertIsComponent(System::Type type) ;

/// @brief Method AssertTypesAreNotAbstract addr 0x2d998cc size 0x2c0 virtual false final false
static void AssertTypesAreNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotAbstract addr 0x2d99c10 size 0x2c0 virtual false final false
static void AssertIsNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotAbstract addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsNotAbstract() ;

/// @brief Method AssertIsNotAbstract addr 0x2d99b8c size 0x84 virtual false final false
static void AssertIsNotAbstract(System::Type type) ;

/// @brief Method AssertIsDerivedFromType addr 0x2d99ed0 size 0x144 virtual false final false
static void AssertIsDerivedFromType(System::Type concreteType, System::Type parentType) ;

/// @brief Method AssertConcreteTypeListIsNotEmpty addr 0x2d9a014 size 0x78 virtual false final false
static void AssertConcreteTypeListIsNotEmpty(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d9a08c size 0xa4 virtual false final false
static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes, Zenject::InvalidBindResponses invalidBindResponse) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d9a130 size 0x2d4 virtual false final false
static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d9a404 size 0x2d8 virtual false final false
static void AssertIsDerivedFromTypes(System::Type concreteType, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertInstanceDerivesFromOrEqual addr 0x2d9a6dc size 0x2e4 virtual false final false
static void AssertInstanceDerivesFromOrEqual(::bs_hook::Il2CppWrapperType instance, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertInstanceDerivesFromOrEqual addr 0x2d9a9c0 size 0xe4 virtual false final false
static void AssertInstanceDerivesFromOrEqual(::bs_hook::Il2CppWrapperType instance, System::Type baseType) ;

/// @brief Method CreateCachedProvider addr 0x2d9aaa4 size 0x10c virtual false final false
static Zenject::IProvider CreateCachedProvider(Zenject::IProvider creator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingUtil, "Zenject", "BindingUtil");
