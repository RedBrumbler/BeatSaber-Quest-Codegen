#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class SignalBus;
}
namespace System {
class Type;
}
namespace System {
struct Guid;
}
namespace Zenject {
class SignalBindingBindInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Zenject {
class SignalCallbackWithLookupWrapper;
}
// Type: Zenject::SignalCallbackWithLookupWrapper
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10609))
// CS Name: Zenject.SignalCallbackWithLookupWrapper
class CORDL_TYPE SignalCallbackWithLookupWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SignalCallbackWithLookupWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: " const&", def_value: None }]
constexpr SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalCallbackWithLookupWrapper", modifiers: "&&", def_value: None }]
constexpr SignalCallbackWithLookupWrapper(SignalCallbackWithLookupWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalCallbackWithLookupWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalCallbackWithLookupWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalCallbackWithLookupWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalCallbackWithLookupWrapper& operator=(SignalCallbackWithLookupWrapper&& o) noexcept = default;
  constexpr SignalCallbackWithLookupWrapper& operator=(SignalCallbackWithLookupWrapper const& o) noexcept = default;
                


// Fields

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 Zenject::SignalBus __declspec(property(get=__get__signalBus, put=__set__signalBus))  _signalBus;

constexpr void __set__signalBus(Zenject::SignalBus value) ;

constexpr Zenject::SignalBus __get__signalBus() const;

 System::Guid __declspec(property(get=__get__lookupId, put=__set__lookupId))  _lookupId;

constexpr void __set__lookupId(System::Guid value) ;

constexpr System::Guid __get__lookupId() const;

 System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get__methodGetter, put=__set__methodGetter))  _methodGetter;

constexpr void __set__methodGetter(System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>> __get__methodGetter() const;

 System::Type __declspec(property(get=__get__objectType, put=__set__objectType))  _objectType;

constexpr void __set__objectType(System::Type value) ;

constexpr System::Type __get__objectType() const;

 System::Type __declspec(property(get=__get__signalType, put=__set__signalType))  _signalType;

constexpr void __set__signalType(System::Type value) ;

constexpr System::Type __get__signalType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identifier() const;


// Methods

// Ctor Parameters [CppParam { name: "signalBindInfo", ty: "Zenject::SignalBindingBindInfo", modifiers: "", def_value: None }, CppParam { name: "objectType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "lookupId", ty: "System::Guid", modifiers: "", def_value: None }, CppParam { name: "methodGetter", ty: "System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>>", modifiers: "", def_value: None }, CppParam { name: "signalBus", ty: "Zenject::SignalBus", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit SignalCallbackWithLookupWrapper(Zenject::SignalBindingBindInfo signalBindInfo, System::Type objectType, System::Guid lookupId, System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>> methodGetter, Zenject::SignalBus signalBus, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d79d8c size 0xf8 virtual false final false
 void _ctor(Zenject::SignalBindingBindInfo signalBindInfo, System::Type objectType, System::Guid lookupId, System::Func_2<::bs_hook::Il2CppWrapperType,System::Action_1<::bs_hook::Il2CppWrapperType>> methodGetter, Zenject::SignalBus signalBus, Zenject::DiContainer container) ;

/// @brief Method OnSignalFired addr 0x2d79e8c size 0x1c8 virtual false final false
 void OnSignalFired(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method Dispose addr 0x2d7a054 size 0xa0 virtual true final true
 void Dispose() ;

/// @brief Method __zenCreate addr 0x2d7a0fc size 0x290 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7a38c size 0x544 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalCallbackWithLookupWrapper);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalCallbackWithLookupWrapper, "Zenject", "SignalCallbackWithLookupWrapper");
