#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFType;
}
// Type: ::OVRGLTFType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8487))
// CS Name: OVRGLTFType
struct CORDL_TYPE OVRGLTFType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OVRGLTFType(int32_t value__) noexcept;


                    constexpr OVRGLTFType(OVRGLTFType const&) = default;
                    constexpr OVRGLTFType(OVRGLTFType&&) = default;
                    constexpr OVRGLTFType& operator=(OVRGLTFType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRGLTFType& operator=(OVRGLTFType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OVRGLTFType_Unwrapped : int32_t {
__NONE = 0,
__SCALAR = 1,
__VEC2 = 2,
__VEC3 = 3,
__VEC4 = 4,
__MAT4 = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRGLTFType_Unwrapped () const noexcept {
return std::bit_cast<__OVRGLTFType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NONE offset 0
static GlobalNamespace::OVRGLTFType const NONE;

/// @brief Field SCALAR offset 0
static GlobalNamespace::OVRGLTFType const SCALAR;

/// @brief Field VEC2 offset 0
static GlobalNamespace::OVRGLTFType const VEC2;

/// @brief Field VEC3 offset 0
static GlobalNamespace::OVRGLTFType const VEC3;

/// @brief Field VEC4 offset 0
static GlobalNamespace::OVRGLTFType const VEC4;

/// @brief Field MAT4 offset 0
static GlobalNamespace::OVRGLTFType const MAT4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGLTFType, "", "OVRGLTFType");
