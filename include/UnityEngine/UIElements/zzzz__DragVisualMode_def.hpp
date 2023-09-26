#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct DragVisualMode;
}
// Type: UnityEngine.UIElements::DragVisualMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7062))
// CS Name: UnityEngine.UIElements.DragVisualMode
struct CORDL_TYPE DragVisualMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DragVisualMode(int32_t value__) noexcept;


                    constexpr DragVisualMode(DragVisualMode const&) = default;
                    constexpr DragVisualMode(DragVisualMode&&) = default;
                    constexpr DragVisualMode& operator=(DragVisualMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DragVisualMode& operator=(DragVisualMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DragVisualMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DragVisualMode_Unwrapped : int32_t {
__None = 0,
__Copy = 1,
__Move = 2,
__Rejected = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DragVisualMode_Unwrapped () const noexcept {
return std::bit_cast<__DragVisualMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::DragVisualMode const None;

/// @brief Field Copy offset 0
static UnityEngine::UIElements::DragVisualMode const Copy;

/// @brief Field Move offset 0
static UnityEngine::UIElements::DragVisualMode const Move;

/// @brief Field Rejected offset 0
static UnityEngine::UIElements::DragVisualMode const Rejected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DragVisualMode, "UnityEngine.UIElements", "DragVisualMode");
