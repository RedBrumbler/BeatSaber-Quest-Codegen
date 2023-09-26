#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::InteropServices {
struct CharSet;
}
// Type: System.Runtime.InteropServices::CharSet
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3297))
// CS Name: System.Runtime.InteropServices.CharSet
struct CORDL_TYPE CharSet : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CharSet(int32_t value__) noexcept;


                    constexpr CharSet(CharSet const&) = default;
                    constexpr CharSet(CharSet&&) = default;
                    constexpr CharSet& operator=(CharSet const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CharSet& operator=(CharSet&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CharSet(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CharSet_Unwrapped : int32_t {
__None = 1,
__Ansi = 2,
__Unicode = 3,
__Auto = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CharSet_Unwrapped () const noexcept {
return std::bit_cast<__CharSet_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Runtime::InteropServices::CharSet const None;

/// @brief Field Ansi offset 0
static System::Runtime::InteropServices::CharSet const Ansi;

/// @brief Field Unicode offset 0
static System::Runtime::InteropServices::CharSet const Unicode;

/// @brief Field Auto offset 0
static System::Runtime::InteropServices::CharSet const Auto;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::CharSet, "System.Runtime.InteropServices", "CharSet");
