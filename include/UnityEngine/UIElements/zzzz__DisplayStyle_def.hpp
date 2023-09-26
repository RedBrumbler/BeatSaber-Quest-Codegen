#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
// Type: UnityEngine.UIElements::DisplayStyle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7003))
// CS Name: UnityEngine.UIElements.DisplayStyle
struct CORDL_TYPE DisplayStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisplayStyle(int32_t value__) noexcept;


                    constexpr DisplayStyle(DisplayStyle const&) = default;
                    constexpr DisplayStyle(DisplayStyle&&) = default;
                    constexpr DisplayStyle& operator=(DisplayStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisplayStyle& operator=(DisplayStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisplayStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DisplayStyle_Unwrapped : int32_t {
__Flex = 0,
__None = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisplayStyle_Unwrapped () const noexcept {
return std::bit_cast<__DisplayStyle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Flex offset 0
static UnityEngine::UIElements::DisplayStyle const Flex;

/// @brief Field None offset 0
static UnityEngine::UIElements::DisplayStyle const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DisplayStyle, "UnityEngine.UIElements", "DisplayStyle");
