#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct TimeZoneInfoOptions;
}
// Type: System::TimeZoneInfoOptions
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2485))
// CS Name: System.TimeZoneInfoOptions
struct CORDL_TYPE TimeZoneInfoOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TimeZoneInfoOptions(int32_t value__) noexcept;


                    constexpr TimeZoneInfoOptions(TimeZoneInfoOptions const&) = default;
                    constexpr TimeZoneInfoOptions(TimeZoneInfoOptions&&) = default;
                    constexpr TimeZoneInfoOptions& operator=(TimeZoneInfoOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeZoneInfoOptions& operator=(TimeZoneInfoOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeZoneInfoOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TimeZoneInfoOptions_Unwrapped : int32_t {
__None = 1,
__NoThrowOnInvalidTime = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeZoneInfoOptions_Unwrapped () const noexcept {
return std::bit_cast<__TimeZoneInfoOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::TimeZoneInfoOptions const None;

/// @brief Field NoThrowOnInvalidTime offset 0
static System::TimeZoneInfoOptions const NoThrowOnInvalidTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TimeZoneInfoOptions, "System", "TimeZoneInfoOptions");
