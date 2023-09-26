#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_ScreenshotProgress_t;
}
// Type: OVR.OpenVR::VREvent_ScreenshotProgress_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9483))
// CS Name: OVR.OpenVR.VREvent_ScreenshotProgress_t
struct CORDL_TYPE VREvent_ScreenshotProgress_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
constexpr VREvent_ScreenshotProgress_t(float_t progress) noexcept;


                    constexpr VREvent_ScreenshotProgress_t(VREvent_ScreenshotProgress_t const&) = default;
                    constexpr VREvent_ScreenshotProgress_t(VREvent_ScreenshotProgress_t&&) = default;
                    constexpr VREvent_ScreenshotProgress_t& operator=(VREvent_ScreenshotProgress_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_ScreenshotProgress_t& operator=(VREvent_ScreenshotProgress_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_ScreenshotProgress_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_progress, put=__set_progress))  progress;

constexpr void __set_progress(float_t value) ;

constexpr float_t __get_progress() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_ScreenshotProgress_t, "OVR.OpenVR", "VREvent_ScreenshotProgress_t");
