#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TValue>
class IMemoryPool_3;
}
// Type: Zenject::IMemoryPool`3
namespace Zenject {
// cpp template
template<typename TParam1,typename TParam2,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10992))
// CS Name: Zenject.IMemoryPool`3
class CORDL_TYPE IMemoryPool_3 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

~IMemoryPool_3() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMemoryPool_3(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Spawn(TParam1 param1, TParam2 param2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_3, "Zenject", "IMemoryPool`3");
