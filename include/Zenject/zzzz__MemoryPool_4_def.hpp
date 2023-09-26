#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class IMemoryPool_4;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class IFactory_4;
}
namespace Zenject {
class IFactory;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class MemoryPool_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class MemoryPool_4<TParam1,TParam2,TParam3,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class MemoryPool_4<TParam1,TParam2,float_t,TValue>;
}
// Type: Zenject::MemoryPool`4
// Type: Zenject::MemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11002)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11010), inst: 2671 }), TypeDefinitionIndex(TypeDefinitionIndex(11010))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11002), inst: 5945 })
// CS Name: Zenject.MemoryPool`4
class CORDL_TYPE MemoryPool_4<TParam1,TParam2,TParam3,TValue> : public Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>
constexpr operator  Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>
constexpr operator  Zenject::IFactory_4<TParam1,TParam2,TParam3,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_4", modifiers: " const&", def_value: None }]
constexpr MemoryPool_4(MemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_4", modifiers: "&&", def_value: None }]
constexpr MemoryPool_4(MemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPool_4(void* ptr) noexcept : Zenject::MemoryPoolBase_1<TValue>(ptr) {
}


  constexpr MemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPool_4& operator=(MemoryPool_4&& o) noexcept = default;
  constexpr MemoryPool_4& operator=(MemoryPool_4 const& o) noexcept = default;
                


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TValue item) ;

/// @brief Method Zenject.IFactory<TParam1,TParam2,TParam3,TValue>.Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Zenject_IFactory_TParam1,TParam2,TParam3,TValue__Create(TParam1 p1, TParam2 p2, TParam3 p3) ;

// Ctor Parameters []
explicit MemoryPool_4() ;

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
// Type: Zenject::MemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11002)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11010), inst: 2671 }), TypeDefinitionIndex(TypeDefinitionIndex(11010))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11002), inst: 7485 })
// CS Name: Zenject.MemoryPool`4
class CORDL_TYPE MemoryPool_4<TParam1,TParam2,float_t,TValue> : public Zenject::MemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_4<TParam1,TParam2,float_t,TValue>
constexpr operator  Zenject::IMemoryPool_4<TParam1,TParam2,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to Zenject::IFactory_4<TParam1,TParam2,float_t,TValue>
constexpr operator  Zenject::IFactory_4<TParam1,TParam2,float_t,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IFactory
constexpr operator  Zenject::IFactory() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_4", modifiers: " const&", def_value: None }]
constexpr MemoryPool_4(MemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPool_4", modifiers: "&&", def_value: None }]
constexpr MemoryPool_4(MemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPool_4(void* ptr) noexcept : Zenject::MemoryPoolBase_1<TValue>(ptr) {
}


  constexpr MemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPool_4& operator=(MemoryPool_4&& o) noexcept = default;
  constexpr MemoryPool_4& operator=(MemoryPool_4 const& o) noexcept = default;
                


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 param1, TParam2 param2, float_t param3) ;

/// @brief Method Reinitialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Reinitialize(TParam1 p1, TParam2 p2, float_t p3, TValue item) ;

/// @brief Method Zenject.IFactory<TParam1,TParam2,TParam3,TValue>.Create addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Zenject_IFactory_TParam1,TParam2,TParam3,TValue__Create(TParam1 p1, TParam2 p2, float_t p3) ;

// Ctor Parameters []
explicit MemoryPool_4() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_4, "Zenject", "MemoryPool`4");
