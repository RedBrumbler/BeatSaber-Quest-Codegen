#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class Zenject__SignalSubscription__Pool;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class Zenject__SignalDeclaration__Factory;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Zenject {
struct SignalMissingHandlerResponses;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class Zenject__ZenjectSettings__SignalSettings;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Type;
}
namespace Zenject {
struct SignalSubscriptionId;
}
namespace Zenject {
class ILateDisposable;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class ZenjectSettings;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Zenject {
template<typename TSignal>
class Zenject__SignalBus____c__DisplayClass25_0_1;
}
namespace Zenject {
template<typename TSignal>
class Zenject__SignalBus____c__DisplayClass27_0_1;
}
namespace Zenject {
class SignalBus;
}
namespace Zenject {
class Zenject__SignalBus____c;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class Zenject__SignalBus____c__DisplayClass25_0_1<TSignal>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TSignal>
class Zenject__SignalBus____c__DisplayClass27_0_1<TSignal>;
}
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10624))
// CS Name: Zenject.SignalBus::<>c
class CORDL_TYPE Zenject__SignalBus____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Zenject__SignalBus____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c", modifiers: " const&", def_value: None }]
constexpr Zenject__SignalBus____c(Zenject__SignalBus____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c", modifiers: "&&", def_value: None }]
constexpr Zenject__SignalBus____c(Zenject__SignalBus____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SignalBus____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SignalBus____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SignalBus____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SignalBus____c& operator=(Zenject__SignalBus____c&& o) noexcept = default;
  constexpr Zenject__SignalBus____c& operator=(Zenject__SignalBus____c const& o) noexcept = default;
                


// Fields

static Zenject::Zenject__SignalBus____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Zenject::Zenject__SignalBus____c value) ;

static Zenject::Zenject__SignalBus____c __get___9() ;

static System::Func_2<Zenject::SignalDeclaration,Zenject::BindingId> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<Zenject::SignalDeclaration,Zenject::BindingId> value) ;

static System::Func_2<Zenject::SignalDeclaration,Zenject::BindingId> __get___9__7_0() ;

static System::Func_2<Zenject::SignalDeclaration,Zenject::SignalDeclaration> __declspec(property(get=__get___9__7_1, put=__set___9__7_1))  __9__7_1;

static void __set___9__7_1(System::Func_2<Zenject::SignalDeclaration,Zenject::SignalDeclaration> value) ;

static System::Func_2<Zenject::SignalDeclaration,Zenject::SignalDeclaration> __get___9__7_1() ;

static System::Func_2<Zenject::SignalSubscription,::StringW> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(System::Func_2<Zenject::SignalSubscription,::StringW> value) ;

static System::Func_2<Zenject::SignalSubscription,::StringW> __get___9__12_0() ;


// Methods

// Ctor Parameters []
explicit Zenject__SignalBus____c() ;

/// @brief Method .ctor addr 0x2d7e810 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__7_0 addr 0x2d7e818 size 0x18 virtual false final false
 Zenject::BindingId __ctor_b__7_0(Zenject::SignalDeclaration x) ;

/// @brief Method <.ctor>b__7_1 addr 0x2d7e830 size 0x8 virtual false final false
 Zenject::SignalDeclaration __ctor_b__7_1(Zenject::SignalDeclaration x) ;

/// @brief Method <LateDispose>b__12_0 addr 0x2d7e838 size 0x34 virtual false final false
 ::StringW _LateDispose_b__12_0(Zenject::SignalSubscription x) ;

/// @brief Method __zenCreate addr 0x2d7e86c size 0x5c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7e8c8 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass25_0`1
// Type: ::<>c__DisplayClass27_0`1
// Type: Zenject::SignalBus
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10627))
// CS Name: Zenject.SignalBus
class CORDL_TYPE SignalBus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename TSignal>
using __c__DisplayClass27_0_1 = Zenject::Zenject__SignalBus____c__DisplayClass27_0_1<TSignal>;

template<typename TSignal>
using __c__DisplayClass25_0_1 = Zenject::Zenject__SignalBus____c__DisplayClass25_0_1<TSignal>;

using __c = Zenject::Zenject__SignalBus____c;

/// @brief Convert operator to Zenject::ILateDisposable
constexpr operator  Zenject::ILateDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SignalBus() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBus", modifiers: " const&", def_value: None }]
constexpr SignalBus(SignalBus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalBus", modifiers: "&&", def_value: None }]
constexpr SignalBus(SignalBus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalBus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalBus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalBus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalBus& operator=(SignalBus&& o) noexcept = default;
  constexpr SignalBus& operator=(SignalBus const& o) noexcept = default;
                


// Fields

 Zenject::Zenject__SignalSubscription__Pool __declspec(property(get=__get__subscriptionPool, put=__set__subscriptionPool))  _subscriptionPool;

constexpr void __set__subscriptionPool(Zenject::Zenject__SignalSubscription__Pool value) ;

constexpr Zenject::Zenject__SignalSubscription__Pool __get__subscriptionPool() const;

 System::Collections::Generic::Dictionary_2<Zenject::BindingId,Zenject::SignalDeclaration> __declspec(property(get=__get__localDeclarationMap, put=__set__localDeclarationMap))  _localDeclarationMap;

constexpr void __set__localDeclarationMap(System::Collections::Generic::Dictionary_2<Zenject::BindingId,Zenject::SignalDeclaration> value) ;

constexpr System::Collections::Generic::Dictionary_2<Zenject::BindingId,Zenject::SignalDeclaration> __get__localDeclarationMap() const;

 Zenject::SignalBus __declspec(property(get=__get__parentBus, put=__set__parentBus))  _parentBus;

constexpr void __set__parentBus(Zenject::SignalBus value) ;

constexpr Zenject::SignalBus __get__parentBus() const;

 System::Collections::Generic::Dictionary_2<Zenject::SignalSubscriptionId,Zenject::SignalSubscription> __declspec(property(get=__get__subscriptionMap, put=__set__subscriptionMap))  _subscriptionMap;

constexpr void __set__subscriptionMap(System::Collections::Generic::Dictionary_2<Zenject::SignalSubscriptionId,Zenject::SignalSubscription> value) ;

constexpr System::Collections::Generic::Dictionary_2<Zenject::SignalSubscriptionId,Zenject::SignalSubscription> __get__subscriptionMap() const;

 Zenject::Zenject__ZenjectSettings__SignalSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(Zenject::Zenject__ZenjectSettings__SignalSettings value) ;

constexpr Zenject::Zenject__ZenjectSettings__SignalSettings __get__settings() const;

 Zenject::Zenject__SignalDeclaration__Factory __declspec(property(get=__get__signalDeclarationFactory, put=__set__signalDeclarationFactory))  _signalDeclarationFactory;

constexpr void __set__signalDeclarationFactory(Zenject::Zenject__SignalDeclaration__Factory value) ;

constexpr Zenject::Zenject__SignalDeclaration__Factory __get__signalDeclarationFactory() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;


// Properties

 Zenject::SignalBus __declspec(property(get=get_ParentBus))  ParentBus;

 int32_t __declspec(property(get=get_NumSubscribers))  NumSubscribers;


// Methods

// Ctor Parameters [CppParam { name: "signalDeclarations", ty: "System::Collections::Generic::List_1<Zenject::SignalDeclaration>", modifiers: "", def_value: None }, CppParam { name: "parentBus", ty: "Zenject::SignalBus", modifiers: "", def_value: None }, CppParam { name: "zenjectSettings", ty: "Zenject::ZenjectSettings", modifiers: "", def_value: None }, CppParam { name: "subscriptionPool", ty: "Zenject::Zenject__SignalSubscription__Pool", modifiers: "", def_value: None }, CppParam { name: "signalDeclarationFactory", ty: "Zenject::Zenject__SignalDeclaration__Factory", modifiers: "", def_value: None }, CppParam { name: "container", ty: "Zenject::DiContainer", modifiers: "", def_value: None }]
explicit SignalBus(System::Collections::Generic::List_1<Zenject::SignalDeclaration> signalDeclarations, Zenject::SignalBus parentBus, Zenject::ZenjectSettings zenjectSettings, Zenject::Zenject__SignalSubscription__Pool subscriptionPool, Zenject::Zenject__SignalDeclaration__Factory signalDeclarationFactory, Zenject::DiContainer container) ;

/// @brief Method .ctor addr 0x2d7d144 size 0x280 virtual false final false
 void _ctor(System::Collections::Generic::List_1<Zenject::SignalDeclaration> signalDeclarations, Zenject::SignalBus parentBus, Zenject::ZenjectSettings zenjectSettings, Zenject::Zenject__SignalSubscription__Pool subscriptionPool, Zenject::Zenject__SignalDeclaration__Factory signalDeclarationFactory, Zenject::DiContainer container) ;

/// @brief Method get_ParentBus addr 0x2d7d3c4 size 0x8 virtual false final false
 Zenject::SignalBus get_ParentBus() ;

/// @brief Method get_NumSubscribers addr 0x2d7d3cc size 0x50 virtual false final false
 int32_t get_NumSubscribers() ;

/// @brief Method LateDispose addr 0x2d7d41c size 0x450 virtual true final true
 void LateDispose() ;

/// @brief Method FireId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void FireId(::bs_hook::Il2CppWrapperType identifier, TSignal signal) ;

/// @brief Method Fire addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Fire(TSignal signal) ;

/// @brief Method FireId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void FireId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method Fire addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Fire() ;

/// @brief Method FireId addr 0x2d7d86c size 0x50 virtual false final false
 void FireId(::bs_hook::Il2CppWrapperType identifier, ::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method Fire addr 0x2d7d900 size 0xc virtual false final false
 void Fire(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method TryFireId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryFireId(::bs_hook::Il2CppWrapperType identifier, TSignal signal) ;

/// @brief Method TryFire addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryFire(TSignal signal) ;

/// @brief Method TryFireId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryFireId(::bs_hook::Il2CppWrapperType identifier) ;

/// @brief Method TryFire addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryFire() ;

/// @brief Method TryFireId addr 0x2d7d90c size 0x5c virtual false final false
 void TryFireId(::bs_hook::Il2CppWrapperType identifier, ::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method TryFire addr 0x2d7d968 size 0xc virtual false final false
 void TryFire(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method SubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void SubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action callback) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Subscribe(System::Action callback) ;

/// @brief Method SubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void SubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action_1<TSignal> callback) ;

/// @brief Method Subscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Subscribe(System::Action_1<TSignal> callback) ;

/// @brief Method SubscribeId addr 0x2d79e84 size 0x8 virtual false final false
 void SubscribeId(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method Subscribe addr 0x2d7d9c8 size 0x10 virtual false final false
 void Subscribe(System::Type signalType, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method UnsubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void UnsubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action callback) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Unsubscribe(System::Action callback) ;

/// @brief Method UnsubscribeId addr 0x2d7d9d8 size 0x8 virtual false final false
 void UnsubscribeId(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Action callback) ;

/// @brief Method Unsubscribe addr 0x2d7da34 size 0x10 virtual false final false
 void Unsubscribe(System::Type signalType, System::Action callback) ;

/// @brief Method UnsubscribeId addr 0x2d7a0f4 size 0x8 virtual false final false
 void UnsubscribeId(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method Unsubscribe addr 0x2d7da44 size 0x10 virtual false final false
 void Unsubscribe(System::Type signalType, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method UnsubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void UnsubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action_1<TSignal> callback) ;

/// @brief Method Unsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void Unsubscribe(System::Action_1<TSignal> callback) ;

/// @brief Method TryUnsubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryUnsubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action callback) ;

/// @brief Method TryUnsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryUnsubscribe(System::Action callback) ;

/// @brief Method TryUnsubscribeId addr 0x2d7da54 size 0x8 virtual false final false
 void TryUnsubscribeId(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Action callback) ;

/// @brief Method TryUnsubscribe addr 0x2d7da5c size 0x10 virtual false final false
 void TryUnsubscribe(System::Type signalType, System::Action callback) ;

/// @brief Method TryUnsubscribeId addr 0x2d7da6c size 0x8 virtual false final false
 void TryUnsubscribeId(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method TryUnsubscribe addr 0x2d7da74 size 0x10 virtual false final false
 void TryUnsubscribe(System::Type signalType, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method TryUnsubscribeId addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryUnsubscribeId(::bs_hook::Il2CppWrapperType identifier, System::Action_1<TSignal> callback) ;

/// @brief Method TryUnsubscribe addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TSignal>
 void TryUnsubscribe(System::Action_1<TSignal> callback) ;

/// @brief Method UnsubscribeInternal addr 0x2d7d9e0 size 0x54 virtual false final false
 void UnsubscribeInternal(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, ::bs_hook::Il2CppWrapperType token, bool throwIfMissing) ;

/// @brief Method UnsubscribeInternal addr 0x2d7da84 size 0x24 virtual false final false
 void UnsubscribeInternal(Zenject::BindingId signalId, ::bs_hook::Il2CppWrapperType token, bool throwIfMissing) ;

/// @brief Method UnsubscribeInternal addr 0x2d7daa8 size 0x118 virtual false final false
 void UnsubscribeInternal(Zenject::SignalSubscriptionId id, bool throwIfMissing) ;

/// @brief Method SubscribeInternal addr 0x2d7d974 size 0x54 virtual false final false
 void SubscribeInternal(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, ::bs_hook::Il2CppWrapperType token, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method SubscribeInternal addr 0x2d7dbc0 size 0x24 virtual false final false
 void SubscribeInternal(Zenject::BindingId signalId, ::bs_hook::Il2CppWrapperType token, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method SubscribeInternal addr 0x2d7dbe4 size 0x140 virtual false final false
 void SubscribeInternal(Zenject::SignalSubscriptionId id, System::Action_1<::bs_hook::Il2CppWrapperType> callback) ;

/// @brief Method DeclareSignal addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DeclareSignal(::bs_hook::Il2CppWrapperType identifier, System::Nullable_1<Zenject::SignalMissingHandlerResponses> missingHandlerResponse, System::Nullable_1<bool> forceAsync, System::Nullable_1<int32_t> asyncTickPriority) ;

/// @brief Method DeclareSignal addr 0x2d7de5c size 0x198 virtual false final false
 void DeclareSignal(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, System::Nullable_1<Zenject::SignalMissingHandlerResponses> missingHandlerResponse, System::Nullable_1<bool> forceAsync, System::Nullable_1<int32_t> asyncTickPriority) ;

/// @brief Method GetDeclaration addr 0x2d7d8bc size 0x44 virtual false final false
 Zenject::SignalDeclaration GetDeclaration(System::Type signalType, ::bs_hook::Il2CppWrapperType identifier, bool requireDeclaration) ;

/// @brief Method GetDeclaration addr 0x2d7dd24 size 0x138 virtual false final false
 Zenject::SignalDeclaration GetDeclaration(Zenject::BindingId signalId, bool requireDeclaration) ;

/// @brief Method __zenCreate addr 0x2d7dff4 size 0x288 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7e27c size 0x530 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass25_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10625))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10625), inst: 2 })
// CS Name: Zenject.SignalBus::<>c__DisplayClass25_0`1
class CORDL_TYPE Zenject__SignalBus____c__DisplayClass25_0_1<TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SignalBus____c__DisplayClass25_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c__DisplayClass25_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__SignalBus____c__DisplayClass25_0_1(Zenject__SignalBus____c__DisplayClass25_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c__DisplayClass25_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__SignalBus____c__DisplayClass25_0_1(Zenject__SignalBus____c__DisplayClass25_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SignalBus____c__DisplayClass25_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SignalBus____c__DisplayClass25_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SignalBus____c__DisplayClass25_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SignalBus____c__DisplayClass25_0_1& operator=(Zenject__SignalBus____c__DisplayClass25_0_1&& o) noexcept = default;
  constexpr Zenject__SignalBus____c__DisplayClass25_0_1& operator=(Zenject__SignalBus____c__DisplayClass25_0_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action value) ;

constexpr System::Action __get_callback() const;


// Methods

// Ctor Parameters []
explicit Zenject__SignalBus____c__DisplayClass25_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <SubscribeId>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _SubscribeId_b__0(::bs_hook::Il2CppWrapperType args) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass27_0`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSignal>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10626))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10626), inst: 2 })
// CS Name: Zenject.SignalBus::<>c__DisplayClass27_0`1
class CORDL_TYPE Zenject__SignalBus____c__DisplayClass27_0_1<TSignal> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Zenject__SignalBus____c__DisplayClass27_0_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c__DisplayClass27_0_1", modifiers: " const&", def_value: None }]
constexpr Zenject__SignalBus____c__DisplayClass27_0_1(Zenject__SignalBus____c__DisplayClass27_0_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalBus____c__DisplayClass27_0_1", modifiers: "&&", def_value: None }]
constexpr Zenject__SignalBus____c__DisplayClass27_0_1(Zenject__SignalBus____c__DisplayClass27_0_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SignalBus____c__DisplayClass27_0_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Zenject__SignalBus____c__DisplayClass27_0_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SignalBus____c__DisplayClass27_0_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SignalBus____c__DisplayClass27_0_1& operator=(Zenject__SignalBus____c__DisplayClass27_0_1&& o) noexcept = default;
  constexpr Zenject__SignalBus____c__DisplayClass27_0_1& operator=(Zenject__SignalBus____c__DisplayClass27_0_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<TSignal> __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action_1<TSignal> value) ;

constexpr System::Action_1<TSignal> __get_callback() const;


// Methods

// Ctor Parameters []
explicit Zenject__SignalBus____c__DisplayClass27_0_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <SubscribeId>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
 void _SubscribeId_b__0(::bs_hook::Il2CppWrapperType args) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__SignalBus____c__DisplayClass25_0_1, "Zenject", "SignalBus/<>c__DisplayClass25_0`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Zenject__SignalBus____c__DisplayClass27_0_1, "Zenject", "SignalBus/<>c__DisplayClass27_0`1");
NEED_NO_BOX(Zenject::SignalBus);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalBus, "Zenject", "SignalBus");
NEED_NO_BOX(Zenject::Zenject__SignalBus____c);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SignalBus____c, "Zenject", "SignalBus/<>c");
