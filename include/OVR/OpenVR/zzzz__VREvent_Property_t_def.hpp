#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_Property_t;
}
// Type: OVR.OpenVR::VREvent_Property_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9487))
// CS Name: OVR.OpenVR.VREvent_Property_t
struct CORDL_TYPE VREvent_Property_t : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "container", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "prop", ty: "OVR::OpenVR::ETrackedDeviceProperty", modifiers: "", def_value: None }]
constexpr VREvent_Property_t(uint64_t container, OVR::OpenVR::ETrackedDeviceProperty prop) noexcept;


                    constexpr VREvent_Property_t(VREvent_Property_t const&) = default;
                    constexpr VREvent_Property_t(VREvent_Property_t&&) = default;
                    constexpr VREvent_Property_t& operator=(VREvent_Property_t const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VREvent_Property_t& operator=(VREvent_Property_t&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VREvent_Property_t(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_container, put=__set_container))  container;

constexpr void __set_container(uint64_t value) ;

constexpr uint64_t __get_container() const;

 OVR::OpenVR::ETrackedDeviceProperty __declspec(property(get=__get_prop, put=__set_prop))  prop;

constexpr void __set_prop(OVR::OpenVR::ETrackedDeviceProperty value) ;

constexpr OVR::OpenVR::ETrackedDeviceProperty __get_prop() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VREvent_Property_t, "OVR.OpenVR", "VREvent_Property_t");
