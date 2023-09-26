#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct LightShadows;
}
// Type: UnityEngine::LightShadows
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10065))
// CS Name: UnityEngine.LightShadows
struct CORDL_TYPE LightShadows : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightShadows(int32_t value__) noexcept;


                    constexpr LightShadows(LightShadows const&) = default;
                    constexpr LightShadows(LightShadows&&) = default;
                    constexpr LightShadows& operator=(LightShadows const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightShadows& operator=(LightShadows&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightShadows(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightShadows_Unwrapped : int32_t {
__None = 0,
__Hard = 1,
__Soft = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightShadows_Unwrapped () const noexcept {
return std::bit_cast<__LightShadows_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::LightShadows const None;

/// @brief Field Hard offset 0
static UnityEngine::LightShadows const Hard;

/// @brief Field Soft offset 0
static UnityEngine::LightShadows const Soft;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightShadows, "UnityEngine", "LightShadows");
