#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Video {
struct VideoSource;
}
// Type: UnityEngine.Video::VideoSource
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15935))
// CS Name: UnityEngine.Video.VideoSource
struct CORDL_TYPE VideoSource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoSource(int32_t value__) noexcept;


                    constexpr VideoSource(VideoSource const&) = default;
                    constexpr VideoSource(VideoSource&&) = default;
                    constexpr VideoSource& operator=(VideoSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoSource& operator=(VideoSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoSource_Unwrapped : int32_t {
__VideoClip = 0,
__Url = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoSource_Unwrapped () const noexcept {
return std::bit_cast<__VideoSource_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VideoClip offset 0
static UnityEngine::Video::VideoSource const VideoClip;

/// @brief Field Url offset 0
static UnityEngine::Video::VideoSource const Url;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Video::VideoSource, "UnityEngine.Video", "VideoSource");
