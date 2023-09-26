#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct DetailRenderMode;
}
// Type: UnityEngine::DetailRenderMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15465))
// CS Name: UnityEngine.DetailRenderMode
struct CORDL_TYPE DetailRenderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DetailRenderMode(int32_t value__) noexcept;


                    constexpr DetailRenderMode(DetailRenderMode const&) = default;
                    constexpr DetailRenderMode(DetailRenderMode&&) = default;
                    constexpr DetailRenderMode& operator=(DetailRenderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DetailRenderMode& operator=(DetailRenderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DetailRenderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DetailRenderMode_Unwrapped : int32_t {
__GrassBillboard = 0,
__VertexLit = 1,
__Grass = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DetailRenderMode_Unwrapped () const noexcept {
return std::bit_cast<__DetailRenderMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GrassBillboard offset 0
static UnityEngine::DetailRenderMode const GrassBillboard;

/// @brief Field VertexLit offset 0
static UnityEngine::DetailRenderMode const VertexLit;

/// @brief Field Grass offset 0
static UnityEngine::DetailRenderMode const Grass;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DetailRenderMode, "UnityEngine", "DetailRenderMode");
