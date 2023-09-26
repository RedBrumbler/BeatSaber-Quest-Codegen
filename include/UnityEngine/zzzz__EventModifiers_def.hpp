#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct EventModifiers;
}
// Type: UnityEngine::EventModifiers
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14782))
// CS Name: UnityEngine.EventModifiers
struct CORDL_TYPE EventModifiers : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventModifiers(int32_t value__) noexcept;


                    constexpr EventModifiers(EventModifiers const&) = default;
                    constexpr EventModifiers(EventModifiers&&) = default;
                    constexpr EventModifiers& operator=(EventModifiers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventModifiers& operator=(EventModifiers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventModifiers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventModifiers_Unwrapped : int32_t {
__None = 0,
__Shift = 1,
__Control = 2,
__Alt = 4,
__Command = 8,
__Numeric = 16,
__CapsLock = 32,
__FunctionKey = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventModifiers_Unwrapped () const noexcept {
return std::bit_cast<__EventModifiers_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::EventModifiers const None;

/// @brief Field Shift offset 0
static UnityEngine::EventModifiers const Shift;

/// @brief Field Control offset 0
static UnityEngine::EventModifiers const Control;

/// @brief Field Alt offset 0
static UnityEngine::EventModifiers const Alt;

/// @brief Field Command offset 0
static UnityEngine::EventModifiers const Command;

/// @brief Field Numeric offset 0
static UnityEngine::EventModifiers const Numeric;

/// @brief Field CapsLock offset 0
static UnityEngine::EventModifiers const CapsLock;

/// @brief Field FunctionKey offset 0
static UnityEngine::EventModifiers const FunctionKey;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventModifiers, "UnityEngine", "EventModifiers");
