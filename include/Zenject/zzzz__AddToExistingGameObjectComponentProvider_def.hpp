#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class AddToExistingGameObjectComponentProvider;
}
// Type: Zenject::AddToExistingGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11146))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11143))
// CS Name: Zenject.AddToExistingGameObjectComponentProvider
class CORDL_TYPE AddToExistingGameObjectComponentProvider : public Zenject::AddToGameObjectComponentProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AddToExistingGameObjectComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: " const&", def_value: None }]
constexpr AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "&&", def_value: None }]
constexpr AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AddToExistingGameObjectComponentProvider(void* ptr) noexcept : Zenject::AddToGameObjectComponentProviderBase(ptr) {
}


  constexpr AddToExistingGameObjectComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AddToExistingGameObjectComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AddToExistingGameObjectComponentProvider& operator=(AddToExistingGameObjectComponentProvider&& o) noexcept = default;
  constexpr AddToExistingGameObjectComponentProvider& operator=(AddToExistingGameObjectComponentProvider const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__gameObject() const;


// Properties

 bool __declspec(property(get=get_ShouldToggleActive))  ShouldToggleActive;


// Methods

// Ctor Parameters [CppParam { name: "gameObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "componentType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "extraArguments", ty: "System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>", modifiers: "", def_value: None }, CppParam { name: "concreteIdentifier", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "instantiateCallback", ty: "System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }]
explicit AddToExistingGameObjectComponentProvider(UnityEngine::GameObject gameObject, Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method .ctor addr 0x2dbeee0 size 0x38 virtual false final false
 void _ctor(UnityEngine::GameObject gameObject, Zenject::DiContainer container, System::Type componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArguments, ::bs_hook::Il2CppWrapperType concreteIdentifier, System::Action_2<Zenject::InjectContext,::bs_hook::Il2CppWrapperType> instantiateCallback) ;

/// @brief Method get_ShouldToggleActive addr 0x2dbeff8 size 0x8 virtual true final false
 bool get_ShouldToggleActive() ;

/// @brief Method GetGameObject addr 0x2dbf000 size 0x8 virtual true final false
 UnityEngine::GameObject GetGameObject(Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::AddToExistingGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToExistingGameObjectComponentProvider, "Zenject", "AddToExistingGameObjectComponentProvider");
