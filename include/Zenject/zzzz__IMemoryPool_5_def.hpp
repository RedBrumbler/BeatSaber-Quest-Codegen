#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
class IMemoryPool_5;
}
// Type: Zenject::IMemoryPool`5
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10994))
// CS Name: Zenject.IMemoryPool`5
class CORDL_TYPE IMemoryPool_5 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

~IMemoryPool_5() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMemoryPool_5(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_5, "Zenject", "IMemoryPool`5");
