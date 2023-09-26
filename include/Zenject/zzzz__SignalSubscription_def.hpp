#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
template<typename TParam1,typename TParam2>
class IPoolable_2;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class SignalDeclaration;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class Zenject__SignalSubscription__Pool;
}
// Type: Zenject::SignalSubscription
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10622))
// CS Name: Zenject.SignalSubscription
class CORDL_TYPE SignalSubscription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Pool = Zenject::Zenject__SignalSubscription__Pool;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to Zenject::IPoolable_2<System::Action_1<::bs_hook::Il2CppWrapperType>,Zenject::SignalDeclaration>
constexpr operator  Zenject::IPoolable_2<System::Action_1<::bs_hook::Il2CppWrapperType>,Zenject::SignalDeclaration>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SignalSubscription() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: " const&", def_value: None }]
constexpr SignalSubscription(SignalSubscription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: "&&", def_value: None }]
constexpr SignalSubscription(SignalSubscription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalSubscription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignalSubscription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalSubscription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalSubscription& operator=(SignalSubscription&& o) noexcept = default;
  constexpr SignalSubscription& operator=(SignalSubscription const& o) noexcept = default;
                


// Fields

 Zenject::Zenject__SignalSubscription__Pool __declspec(property(get=__get__pool, put=__set__pool))  _pool;

constexpr void __set__pool(Zenject::Zenject__SignalSubscription__Pool value) ;

constexpr Zenject::Zenject__SignalSubscription__Pool __get__pool() const;

 System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get__callback, put=__set__callback))  _callback;

constexpr void __set__callback(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Action_1<::bs_hook::Il2CppWrapperType> __get__callback() const;

 Zenject::SignalDeclaration __declspec(property(get=__get__declaration, put=__set__declaration))  _declaration;

constexpr void __set__declaration(Zenject::SignalDeclaration value) ;

constexpr Zenject::SignalDeclaration __get__declaration() const;

 Zenject::BindingId __declspec(property(get=__get__signalId, put=__set__signalId))  _signalId;

constexpr void __set__signalId(Zenject::BindingId value) ;

constexpr Zenject::BindingId __get__signalId() const;


// Properties

 Zenject::BindingId __declspec(property(get=get_SignalId))  SignalId;


// Methods

// Ctor Parameters [CppParam { name: "pool", ty: "Zenject::Zenject__SignalSubscription__Pool", modifiers: "", def_value: None }]
explicit SignalSubscription(Zenject::Zenject__SignalSubscription__Pool pool) ;

/// @brief Method .ctor addr 0x2d7c834 size 0x34 virtual false final false
 void _ctor(Zenject::Zenject__SignalSubscription__Pool pool) ;

/// @brief Method get_SignalId addr 0x2d7c878 size 0xc virtual false final false
 Zenject::BindingId get_SignalId() ;

/// @brief Method OnSpawned addr 0x2d7c884 size 0x44 virtual true final true
 void OnSpawned(System::Action_1<::bs_hook::Il2CppWrapperType> callback, Zenject::SignalDeclaration declaration) ;

/// @brief Method OnDespawned addr 0x2d7c8c8 size 0x2c virtual true final true
 void OnDespawned() ;

/// @brief Method SetDefaults addr 0x2d7c868 size 0x10 virtual false final false
 void SetDefaults() ;

/// @brief Method Dispose addr 0x2d7c8f4 size 0x9c virtual true final true
 void Dispose() ;

/// @brief Method OnDeclarationDespawned addr 0x2d7b81c size 0x8 virtual false final false
 void OnDeclarationDespawned() ;

/// @brief Method Invoke addr 0x2d7bd3c size 0x24 virtual false final false
 void Invoke(::bs_hook::Il2CppWrapperType signal) ;

/// @brief Method __zenCreate addr 0x2d7c990 size 0xd4 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7ca64 size 0x274 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::Pool
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 3386 }), TypeDefinitionIndex(TypeDefinitionIndex(10622)), TypeDefinitionIndex(TypeDefinitionIndex(10620)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(11028)), TypeDefinitionIndex(TypeDefinitionIndex(2323))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10621))
// CS Name: Zenject.SignalSubscription::Pool
class CORDL_TYPE Zenject__SignalSubscription__Pool : public Zenject::PoolableMemoryPool_3<System::Action_1<::bs_hook::Il2CppWrapperType>,Zenject::SignalDeclaration,Zenject::SignalSubscription> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Zenject__SignalSubscription__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalSubscription__Pool", modifiers: " const&", def_value: None }]
constexpr Zenject__SignalSubscription__Pool(Zenject__SignalSubscription__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Zenject__SignalSubscription__Pool", modifiers: "&&", def_value: None }]
constexpr Zenject__SignalSubscription__Pool(Zenject__SignalSubscription__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Zenject__SignalSubscription__Pool(void* ptr) noexcept : Zenject::PoolableMemoryPool_3<System::Action_1<::bs_hook::Il2CppWrapperType>,Zenject::SignalDeclaration,Zenject::SignalSubscription>(ptr) {
}


  constexpr Zenject__SignalSubscription__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Zenject__SignalSubscription__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Zenject__SignalSubscription__Pool& operator=(Zenject__SignalSubscription__Pool&& o) noexcept = default;
  constexpr Zenject__SignalSubscription__Pool& operator=(Zenject__SignalSubscription__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit Zenject__SignalSubscription__Pool() ;

/// @brief Method .ctor addr 0x2d7ccd8 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x2d7cd20 size 0x58 virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7cd78 size 0x1c0 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SignalSubscription);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalSubscription, "Zenject", "SignalSubscription");
NEED_NO_BOX(Zenject::Zenject__SignalSubscription__Pool);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__SignalSubscription__Pool, "Zenject", "SignalSubscription/Pool");
