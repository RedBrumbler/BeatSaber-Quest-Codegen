#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
// Type: UnityEngine.Rendering::LightProbeUsage
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10304))
// CS Name: UnityEngine.Rendering.LightProbeUsage
struct CORDL_TYPE LightProbeUsage : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LightProbeUsage(int32_t value__) noexcept;


                    constexpr LightProbeUsage(LightProbeUsage const&) = default;
                    constexpr LightProbeUsage(LightProbeUsage&&) = default;
                    constexpr LightProbeUsage& operator=(LightProbeUsage const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LightProbeUsage& operator=(LightProbeUsage&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LightProbeUsage(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LightProbeUsage_Unwrapped : int32_t {
__Off = 0,
__BlendProbes = 1,
__UseProxyVolume = 2,
__CustomProvided = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LightProbeUsage_Unwrapped () const noexcept {
return std::bit_cast<__LightProbeUsage_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Off offset 0
static UnityEngine::Rendering::LightProbeUsage const Off;

/// @brief Field BlendProbes offset 0
static UnityEngine::Rendering::LightProbeUsage const BlendProbes;

/// @brief Field UseProxyVolume offset 0
static UnityEngine::Rendering::LightProbeUsage const UseProxyVolume;

/// @brief Field CustomProvided offset 0
static UnityEngine::Rendering::LightProbeUsage const CustomProvided;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::LightProbeUsage, "UnityEngine.Rendering", "LightProbeUsage");
