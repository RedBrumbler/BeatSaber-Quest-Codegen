#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EIOBufferMode;
}
// Type: OVR.OpenVR::EIOBufferMode
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9443))
// CS Name: OVR.OpenVR.EIOBufferMode
struct CORDL_TYPE EIOBufferMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EIOBufferMode(int32_t value__) noexcept;


                    constexpr EIOBufferMode(EIOBufferMode const&) = default;
                    constexpr EIOBufferMode(EIOBufferMode&&) = default;
                    constexpr EIOBufferMode& operator=(EIOBufferMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EIOBufferMode& operator=(EIOBufferMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EIOBufferMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EIOBufferMode_Unwrapped : int32_t {
__Read = 1,
__Write = 2,
__Create = 512,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EIOBufferMode_Unwrapped () const noexcept {
return std::bit_cast<__EIOBufferMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Read offset 0
static OVR::OpenVR::EIOBufferMode const Read;

/// @brief Field Write offset 0
static OVR::OpenVR::EIOBufferMode const Write;

/// @brief Field Create offset 0
static OVR::OpenVR::EIOBufferMode const Create;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EIOBufferMode, "OVR.OpenVR", "EIOBufferMode");
