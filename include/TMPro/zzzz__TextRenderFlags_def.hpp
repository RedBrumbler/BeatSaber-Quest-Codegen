#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro {
struct TextRenderFlags;
}
// Type: TMPro::TextRenderFlags
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12393))
// CS Name: TMPro.TextRenderFlags
struct CORDL_TYPE TextRenderFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextRenderFlags(int32_t value__) noexcept;


                    constexpr TextRenderFlags(TextRenderFlags const&) = default;
                    constexpr TextRenderFlags(TextRenderFlags&&) = default;
                    constexpr TextRenderFlags& operator=(TextRenderFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextRenderFlags& operator=(TextRenderFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextRenderFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextRenderFlags_Unwrapped : int32_t {
__DontRender = 0,
__Render = 255,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextRenderFlags_Unwrapped () const noexcept {
return std::bit_cast<__TextRenderFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DontRender offset 0
static TMPro::TextRenderFlags const DontRender;

/// @brief Field Render offset 0
static TMPro::TextRenderFlags const Render;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextRenderFlags, "TMPro", "TextRenderFlags");
