#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct UnityEngine__Texture2D__EXRFlags;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine {
class ImageConversion;
}
// Type: UnityEngine::ImageConversion
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16010))
// CS Name: UnityEngine.ImageConversion
class CORDL_TYPE ImageConversion : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ImageConversion() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: " const&", def_value: None }]
constexpr ImageConversion(ImageConversion const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageConversion", modifiers: "&&", def_value: None }]
constexpr ImageConversion(ImageConversion&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageConversion(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ImageConversion& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageConversion& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageConversion& operator=(ImageConversion&& o) noexcept = default;
  constexpr ImageConversion& operator=(ImageConversion const& o) noexcept = default;
                


// Methods

/// @brief Method EncodeToTGA addr 0x2bb4fe8 size 0x3c virtual false final false
static ::ArrayW<uint8_t> EncodeToTGA(UnityEngine::Texture2D tex) ;

/// @brief Method EncodeToPNG addr 0x2bb5024 size 0x3c virtual false final false
static ::ArrayW<uint8_t> EncodeToPNG(UnityEngine::Texture2D tex) ;

/// @brief Method EncodeToJPG addr 0x2bb5060 size 0x44 virtual false final false
static ::ArrayW<uint8_t> EncodeToJPG(UnityEngine::Texture2D tex, int32_t quality) ;

/// @brief Method EncodeToJPG addr 0x2bb50a4 size 0x40 virtual false final false
static ::ArrayW<uint8_t> EncodeToJPG(UnityEngine::Texture2D tex) ;

/// @brief Method EncodeToEXR addr 0x2bb50e4 size 0x44 virtual false final false
static ::ArrayW<uint8_t> EncodeToEXR(UnityEngine::Texture2D tex, UnityEngine::UnityEngine__Texture2D__EXRFlags flags) ;

/// @brief Method EncodeToEXR addr 0x2bb5128 size 0x40 virtual false final false
static ::ArrayW<uint8_t> EncodeToEXR(UnityEngine::Texture2D tex) ;

/// @brief Method LoadImage addr 0x2bb5168 size 0x54 virtual false final false
static bool LoadImage(UnityEngine::Texture2D tex, ::ArrayW<uint8_t> data, bool markNonReadable) ;

/// @brief Method LoadImage addr 0x2bb51bc size 0x48 virtual false final false
static bool LoadImage(UnityEngine::Texture2D tex, ::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ImageConversion, "UnityEngine", "ImageConversion");
