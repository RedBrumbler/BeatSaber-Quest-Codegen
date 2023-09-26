#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EChaperoneImportFlags;
}
// Type: OVR.OpenVR::EChaperoneImportFlags
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9423))
// CS Name: OVR.OpenVR.EChaperoneImportFlags
struct CORDL_TYPE EChaperoneImportFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EChaperoneImportFlags(int32_t value__) noexcept;


                    constexpr EChaperoneImportFlags(EChaperoneImportFlags const&) = default;
                    constexpr EChaperoneImportFlags(EChaperoneImportFlags&&) = default;
                    constexpr EChaperoneImportFlags& operator=(EChaperoneImportFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EChaperoneImportFlags& operator=(EChaperoneImportFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EChaperoneImportFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EChaperoneImportFlags_Unwrapped : int32_t {
__EChaperoneImport_BoundsOnly = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EChaperoneImportFlags_Unwrapped () const noexcept {
return std::bit_cast<__EChaperoneImportFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EChaperoneImport_BoundsOnly offset 0
static OVR::OpenVR::EChaperoneImportFlags const EChaperoneImport_BoundsOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EChaperoneImportFlags, "OVR.OpenVR", "EChaperoneImportFlags");
