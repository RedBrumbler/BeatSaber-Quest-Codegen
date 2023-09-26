#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LIV::SDK::Unity {
struct TEXTURE_FORMAT;
}
// Type: LIV.SDK.Unity::TEXTURE_FORMAT
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15172))
// CS Name: LIV.SDK.Unity.TEXTURE_FORMAT
struct CORDL_TYPE TEXTURE_FORMAT : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TEXTURE_FORMAT(uint32_t value__) noexcept;


                    constexpr TEXTURE_FORMAT(TEXTURE_FORMAT const&) = default;
                    constexpr TEXTURE_FORMAT(TEXTURE_FORMAT&&) = default;
                    constexpr TEXTURE_FORMAT& operator=(TEXTURE_FORMAT const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TEXTURE_FORMAT& operator=(TEXTURE_FORMAT&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TEXTURE_FORMAT(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TEXTURE_FORMAT_Unwrapped : uint32_t {
__UNDEFINED = 0u,
__ARGB32 = 10u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TEXTURE_FORMAT_Unwrapped () const noexcept {
return std::bit_cast<__TEXTURE_FORMAT_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field UNDEFINED offset 0
static LIV::SDK::Unity::TEXTURE_FORMAT const UNDEFINED;

/// @brief Field ARGB32 offset 0
static LIV::SDK::Unity::TEXTURE_FORMAT const ARGB32;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::TEXTURE_FORMAT, "LIV.SDK.Unity", "TEXTURE_FORMAT");
