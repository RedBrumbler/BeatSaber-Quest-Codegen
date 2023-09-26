#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
template<typename TValue>
class IMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class StaticMemoryPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_1<TValue>;
}
// Type: Zenject::StaticMemoryPool`1
// Type: Zenject::StaticMemoryPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11046)), TypeDefinitionIndex(TypeDefinitionIndex(11047)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11046), inst: 152 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11047), inst: 2 })
// CS Name: Zenject.StaticMemoryPool`1
class CORDL_TYPE StaticMemoryPool_1<TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_1<TValue>
constexpr operator  Zenject::IMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_1", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_1(StaticMemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_1", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_1(StaticMemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_1(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_1& operator=(StaticMemoryPool_1&& o) noexcept = default;
  constexpr StaticMemoryPool_1& operator=(StaticMemoryPool_1 const& o) noexcept = default;
                


// Fields

 System::Action_1<TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_1<TValue> value) ;

constexpr System::Action_1<TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_1<TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: None }, CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit StaticMemoryPool_1(System::Action_1<TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod, int32_t initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_1<TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod, int32_t initialSize) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_1<TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_1, "Zenject", "StaticMemoryPool`1");
