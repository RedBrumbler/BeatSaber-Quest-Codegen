#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Permissions;
}
// Type: HoudiniEngineUnity::HAPI_Permissions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9654))
// CS Name: HoudiniEngineUnity.HAPI_Permissions
struct CORDL_TYPE HAPI_Permissions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_Permissions(int32_t value__) noexcept;


                    constexpr HAPI_Permissions(HAPI_Permissions const&) = default;
                    constexpr HAPI_Permissions(HAPI_Permissions&&) = default;
                    constexpr HAPI_Permissions& operator=(HAPI_Permissions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Permissions& operator=(HAPI_Permissions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Permissions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_Permissions_Unwrapped : int32_t {
__HAPI_PERMISSIONS_NON_APPLICABLE = 0,
__HAPI_PERMISSIONS_READ_WRITE = 1,
__HAPI_PERMISSIONS_READ_ONLY = 2,
__HAPI_PERMISSIONS_WRITE_ONLY = 3,
__HAPI_PERMISSIONS_MAX = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_Permissions_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_Permissions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PERMISSIONS_NON_APPLICABLE offset 0
static HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_NON_APPLICABLE;

/// @brief Field HAPI_PERMISSIONS_READ_WRITE offset 0
static HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_READ_WRITE;

/// @brief Field HAPI_PERMISSIONS_READ_ONLY offset 0
static HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_READ_ONLY;

/// @brief Field HAPI_PERMISSIONS_WRITE_ONLY offset 0
static HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_WRITE_ONLY;

/// @brief Field HAPI_PERMISSIONS_MAX offset 0
static HoudiniEngineUnity::HAPI_Permissions const HAPI_PERMISSIONS_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Permissions, "HoudiniEngineUnity", "HAPI_Permissions");
