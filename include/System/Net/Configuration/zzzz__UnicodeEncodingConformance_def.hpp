#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
// Type: System.Net.Configuration::UnicodeEncodingConformance
namespace System::Net::Configuration {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8184))
// CS Name: System.Net.Configuration.UnicodeEncodingConformance
struct CORDL_TYPE UnicodeEncodingConformance : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnicodeEncodingConformance(int32_t value__) noexcept;


                    constexpr UnicodeEncodingConformance(UnicodeEncodingConformance const&) = default;
                    constexpr UnicodeEncodingConformance(UnicodeEncodingConformance&&) = default;
                    constexpr UnicodeEncodingConformance& operator=(UnicodeEncodingConformance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnicodeEncodingConformance& operator=(UnicodeEncodingConformance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnicodeEncodingConformance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnicodeEncodingConformance_Unwrapped : int32_t {
__Auto = 0,
__Strict = 1,
__Compat = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnicodeEncodingConformance_Unwrapped () const noexcept {
return std::bit_cast<__UnicodeEncodingConformance_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Auto offset 0
static System::Net::Configuration::UnicodeEncodingConformance const Auto;

/// @brief Field Strict offset 0
static System::Net::Configuration::UnicodeEncodingConformance const Strict;

/// @brief Field Compat offset 0
static System::Net::Configuration::UnicodeEncodingConformance const Compat;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::UnicodeEncodingConformance, "System.Net.Configuration", "UnicodeEncodingConformance");
