#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Type: UnityEngine.UIElements::StyleValueFunction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7392))
// CS Name: UnityEngine.UIElements.StyleValueFunction
struct CORDL_TYPE StyleValueFunction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueFunction(int32_t value__) noexcept;


                    constexpr StyleValueFunction(StyleValueFunction const&) = default;
                    constexpr StyleValueFunction(StyleValueFunction&&) = default;
                    constexpr StyleValueFunction& operator=(StyleValueFunction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StyleValueFunction& operator=(StyleValueFunction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StyleValueFunction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StyleValueFunction_Unwrapped : int32_t {
__Unknown = 0,
__Var = 1,
__Env = 2,
__LinearGradient = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleValueFunction_Unwrapped () const noexcept {
return std::bit_cast<__StyleValueFunction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::UIElements::StyleValueFunction const Unknown;

/// @brief Field Var offset 0
static UnityEngine::UIElements::StyleValueFunction const Var;

/// @brief Field Env offset 0
static UnityEngine::UIElements::StyleValueFunction const Env;

/// @brief Field LinearGradient offset 0
static UnityEngine::UIElements::StyleValueFunction const LinearGradient;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleValueFunction, "UnityEngine.UIElements", "StyleValueFunction");
