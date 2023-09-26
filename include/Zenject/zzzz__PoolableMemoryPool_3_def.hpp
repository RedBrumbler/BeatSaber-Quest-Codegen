#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_3_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class PoolableMemoryPool_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class PoolableMemoryPool_3<TParam1,TParam2,TValue>;
}
// Type: Zenject::PoolableMemoryPool`3
// Type: Zenject::PoolableMemoryPool`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11001)), TypeDefinitionIndex(TypeDefinitionIndex(11028)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11001), inst: 3384 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11028), inst: 5162 })
// CS Name: Zenject.PoolableMemoryPool`3
class CORDL_TYPE PoolableMemoryPool_3<TParam1,TParam2,TValue> : public Zenject::MemoryPool_3<TParam1,TParam2,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PoolableMemoryPool_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_3", modifiers: " const&", def_value: None }]
constexpr PoolableMemoryPool_3(PoolableMemoryPool_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPool_3", modifiers: "&&", def_value: None }]
constexpr PoolableMemoryPool_3(PoolableMemoryPool_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PoolableMemoryPool_3(void* ptr) noexcept : Zenject::MemoryPool_3<TParam1,TParam2,TValue>(ptr) {
}


  constexpr PoolableMemoryPool_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PoolableMemoryPool_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PoolableMemoryPool_3& operator=(PoolableMemoryPool_3&& o) noexcept = default;
  constexpr PoolableMemoryPool_3& operator=(PoolableMemoryPool_3 const& o) noexcept = default;
                


// Methods

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, TValue item) ;

// Ctor Parameters []
explicit PoolableMemoryPool_3() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_3, "Zenject", "PoolableMemoryPool`3");
