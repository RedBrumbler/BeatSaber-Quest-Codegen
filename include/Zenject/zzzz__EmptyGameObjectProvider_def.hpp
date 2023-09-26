#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System {
class Type;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class EmptyGameObjectProvider;
}
// Type: Zenject::EmptyGameObjectProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11152))
// CS Name: Zenject.EmptyGameObjectProvider
class CORDL_TYPE EmptyGameObjectProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EmptyGameObjectProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: " const&", def_value: None }]
constexpr EmptyGameObjectProvider(EmptyGameObjectProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: "&&", def_value: None }]
constexpr EmptyGameObjectProvider(EmptyGameObjectProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyGameObjectProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyGameObjectProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyGameObjectProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyGameObjectProvider& operator=(EmptyGameObjectProvider&& o) noexcept = default;
  constexpr EmptyGameObjectProvider& operator=(EmptyGameObjectProvider const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 Zenject::GameObjectCreationParameters __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo))  _gameObjectBindInfo;

constexpr void __set__gameObjectBindInfo(Zenject::GameObjectCreationParameters value) ;

constexpr Zenject::GameObjectCreationParameters __get__gameObjectBindInfo() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

// Ctor Parameters [CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "gameObjectBindInfo", ty: "Zenject::GameObjectCreationParameters", modifiers: "", def_value: None }]
explicit EmptyGameObjectProvider(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2dc0244 size 0x2c virtual false final false
 void _ctor(Zenject::DiContainer container, Zenject::GameObjectCreationParameters gameObjectBindInfo) ;

/// @brief Method get_IsCached addr 0x2dc0270 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2dc0278 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2dc0280 size 0x6c virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2dc02ec size 0x108 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::EmptyGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::EmptyGameObjectProvider, "Zenject", "EmptyGameObjectProvider");
