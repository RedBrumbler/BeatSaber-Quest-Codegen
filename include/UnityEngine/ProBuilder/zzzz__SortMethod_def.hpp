#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct SortMethod;
}
// Type: UnityEngine.ProBuilder::SortMethod
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12123))
// CS Name: UnityEngine.ProBuilder.SortMethod
struct CORDL_TYPE SortMethod : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SortMethod(int32_t value__) noexcept;


                    constexpr SortMethod(SortMethod const&) = default;
                    constexpr SortMethod(SortMethod&&) = default;
                    constexpr SortMethod& operator=(SortMethod const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SortMethod& operator=(SortMethod&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SortMethod(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SortMethod_Unwrapped : int32_t {
__Clockwise = 0,
__CounterClockwise = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SortMethod_Unwrapped () const noexcept {
return std::bit_cast<__SortMethod_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Clockwise offset 0
static UnityEngine::ProBuilder::SortMethod const Clockwise;

/// @brief Field CounterClockwise offset 0
static UnityEngine::ProBuilder::SortMethod const CounterClockwise;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SortMethod, "UnityEngine.ProBuilder", "SortMethod");
