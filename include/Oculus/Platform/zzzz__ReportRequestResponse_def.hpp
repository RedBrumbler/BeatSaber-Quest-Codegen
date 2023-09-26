#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct ReportRequestResponse;
}
// Type: Oculus.Platform::ReportRequestResponse
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13365))
// CS Name: Oculus.Platform.ReportRequestResponse
struct CORDL_TYPE ReportRequestResponse : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReportRequestResponse(int32_t value__) noexcept;


                    constexpr ReportRequestResponse(ReportRequestResponse const&) = default;
                    constexpr ReportRequestResponse(ReportRequestResponse&&) = default;
                    constexpr ReportRequestResponse& operator=(ReportRequestResponse const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReportRequestResponse& operator=(ReportRequestResponse&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReportRequestResponse(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReportRequestResponse_Unwrapped : int32_t {
__Unknown = 0,
__Handled = 1,
__Unhandled = 2,
__Unavailable = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReportRequestResponse_Unwrapped () const noexcept {
return std::bit_cast<__ReportRequestResponse_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::ReportRequestResponse const Unknown;

/// @brief Field Handled offset 0
static Oculus::Platform::ReportRequestResponse const Handled;

/// @brief Field Unhandled offset 0
static Oculus::Platform::ReportRequestResponse const Unhandled;

/// @brief Field Unavailable offset 0
static Oculus::Platform::ReportRequestResponse const Unavailable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ReportRequestResponse, "Oculus.Platform", "ReportRequestResponse");
