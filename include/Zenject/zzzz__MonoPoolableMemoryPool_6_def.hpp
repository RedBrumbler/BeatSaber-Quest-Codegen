#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_6_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class MonoPoolableMemoryPool_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
class MonoPoolableMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Type: Zenject::MonoPoolableMemoryPool`6
// Type: Zenject::MonoPoolableMemoryPool`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11022)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11004), inst: 3412 }), TypeDefinitionIndex(TypeDefinitionIndex(11004))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11022), inst: 5947 })
// CS Name: Zenject.MonoPoolableMemoryPool`6
class CORDL_TYPE MonoPoolableMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoPoolableMemoryPool_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_6", modifiers: " const&", def_value: None }]
constexpr MonoPoolableMemoryPool_6(MonoPoolableMemoryPool_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoPoolableMemoryPool_6", modifiers: "&&", def_value: None }]
constexpr MonoPoolableMemoryPool_6(MonoPoolableMemoryPool_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoPoolableMemoryPool_6(void* ptr) noexcept : Zenject::MemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>(ptr) {
}


  constexpr MonoPoolableMemoryPool_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoPoolableMemoryPool_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoPoolableMemoryPool_6& operator=(MonoPoolableMemoryPool_6&& o) noexcept = default;
  constexpr MonoPoolableMemoryPool_6& operator=(MonoPoolableMemoryPool_6 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originalParent() const;


// Methods

// Ctor Parameters []
explicit MonoPoolableMemoryPool_6() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCreated(TValue item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroyed(TValue item) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoPoolableMemoryPool_6, "Zenject", "MonoPoolableMemoryPool`6");
