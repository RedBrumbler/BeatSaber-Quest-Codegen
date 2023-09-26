#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EVRTrackedCameraFrameLayout;
}
// Type: OVR.OpenVR::EVRTrackedCameraFrameLayout
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9413))
// CS Name: OVR.OpenVR.EVRTrackedCameraFrameLayout
struct CORDL_TYPE EVRTrackedCameraFrameLayout : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRTrackedCameraFrameLayout(int32_t value__) noexcept;


                    constexpr EVRTrackedCameraFrameLayout(EVRTrackedCameraFrameLayout const&) = default;
                    constexpr EVRTrackedCameraFrameLayout(EVRTrackedCameraFrameLayout&&) = default;
                    constexpr EVRTrackedCameraFrameLayout& operator=(EVRTrackedCameraFrameLayout const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRTrackedCameraFrameLayout& operator=(EVRTrackedCameraFrameLayout&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRTrackedCameraFrameLayout(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRTrackedCameraFrameLayout_Unwrapped : int32_t {
__Mono = 1,
__Stereo = 2,
__VerticalLayout = 16,
__HorizontalLayout = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRTrackedCameraFrameLayout_Unwrapped () const noexcept {
return std::bit_cast<__EVRTrackedCameraFrameLayout_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mono offset 0
static OVR::OpenVR::EVRTrackedCameraFrameLayout const Mono;

/// @brief Field Stereo offset 0
static OVR::OpenVR::EVRTrackedCameraFrameLayout const Stereo;

/// @brief Field VerticalLayout offset 0
static OVR::OpenVR::EVRTrackedCameraFrameLayout const VerticalLayout;

/// @brief Field HorizontalLayout offset 0
static OVR::OpenVR::EVRTrackedCameraFrameLayout const HorizontalLayout;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRTrackedCameraFrameLayout, "OVR.OpenVR", "EVRTrackedCameraFrameLayout");
