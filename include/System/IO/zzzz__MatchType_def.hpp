#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::IO {
struct MatchType;
}
// Type: System.IO::MatchType
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3584))
// CS Name: System.IO.MatchType
struct CORDL_TYPE MatchType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchType(int32_t value__) noexcept;


                    constexpr MatchType(MatchType const&) = default;
                    constexpr MatchType(MatchType&&) = default;
                    constexpr MatchType& operator=(MatchType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchType& operator=(MatchType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MatchType_Unwrapped : int32_t {
__Simple = 0,
__Win32 = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchType_Unwrapped () const noexcept {
return std::bit_cast<__MatchType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Simple offset 0
static System::IO::MatchType const Simple;

/// @brief Field Win32 offset 0
static System::IO::MatchType const Win32;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
DEFINE_IL2CPP_ARG_TYPE(System::IO::MatchType, "System.IO", "MatchType");
