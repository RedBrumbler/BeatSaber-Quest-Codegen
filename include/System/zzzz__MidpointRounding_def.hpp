#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System {
struct MidpointRounding;
}
// Type: System::MidpointRounding
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2440))
// CS Name: System.MidpointRounding
struct CORDL_TYPE MidpointRounding : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MidpointRounding(int32_t value__) noexcept;


                    constexpr MidpointRounding(MidpointRounding const&) = default;
                    constexpr MidpointRounding(MidpointRounding&&) = default;
                    constexpr MidpointRounding& operator=(MidpointRounding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MidpointRounding& operator=(MidpointRounding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MidpointRounding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MidpointRounding_Unwrapped : int32_t {
__ToEven = 0,
__AwayFromZero = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MidpointRounding_Unwrapped () const noexcept {
return std::bit_cast<__MidpointRounding_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ToEven offset 0
static System::MidpointRounding const ToEven;

/// @brief Field AwayFromZero offset 0
static System::MidpointRounding const AwayFromZero;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::MidpointRounding, "System", "MidpointRounding");
