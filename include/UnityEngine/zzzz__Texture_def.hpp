#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Type: UnityEngine::Texture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10032))
// CS Name: UnityEngine.Texture
class CORDL_TYPE Texture : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Texture() = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: " const&", def_value: None }]
constexpr Texture(Texture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
constexpr Texture(Texture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Texture(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Texture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Texture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Texture& operator=(Texture&& o) noexcept = default;
  constexpr Texture& operator=(Texture const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_GenerateAllMips, put=__set_GenerateAllMips))  GenerateAllMips;

static void __set_GenerateAllMips(int32_t value) ;

static int32_t __get_GenerateAllMips() ;


// Properties

 int32_t __declspec(property(get=get_mipmapCount))  mipmapCount;

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;

 UnityEngine::Rendering::TextureDimension __declspec(property(put=set_dimension))  dimension;

 bool __declspec(property(get=get_isReadable))  isReadable;

 UnityEngine::TextureWrapMode __declspec(property(get=get_wrapMode, put=set_wrapMode))  wrapMode;

 UnityEngine::FilterMode __declspec(property(get=get_filterMode, put=set_filterMode))  filterMode;

 int32_t __declspec(property(get=get_anisoLevel, put=set_anisoLevel))  anisoLevel;

 float_t __declspec(property(put=set_mipMapBias))  mipMapBias;

 UnityEngine::Vector2 __declspec(property(get=get_texelSize))  texelSize;

 UnityEngine::ColorSpace __declspec(property(get=get_activeTextureColorSpace))  activeTextureColorSpace;


// Methods

// Ctor Parameters []
explicit Texture() ;

/// @brief Method .ctor addr 0x2b69470 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method get_mipmapCount addr 0x2b694c8 size 0x3c virtual false final false
 int32_t get_mipmapCount() ;

/// @brief Method GetDataWidth addr 0x2b69504 size 0x3c virtual false final false
 int32_t GetDataWidth() ;

/// @brief Method GetDataHeight addr 0x2b69540 size 0x3c virtual false final false
 int32_t GetDataHeight() ;

/// @brief Method get_width addr 0x2b6957c size 0x3c virtual true final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2b695b8 size 0x40 virtual true final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0x2b695f8 size 0x3c virtual true final false
 int32_t get_height() ;

/// @brief Method set_height addr 0x2b69634 size 0x40 virtual true final false
 void set_height(int32_t value) ;

/// @brief Method set_dimension addr 0x2b69674 size 0x40 virtual true final false
 void set_dimension(UnityEngine::Rendering::TextureDimension value) ;

/// @brief Method get_isReadable addr 0x2b696b4 size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method get_wrapMode addr 0x2b696f0 size 0x3c virtual false final false
 UnityEngine::TextureWrapMode get_wrapMode() ;

/// @brief Method set_wrapMode addr 0x2b6972c size 0x44 virtual false final false
 void set_wrapMode(UnityEngine::TextureWrapMode value) ;

/// @brief Method get_filterMode addr 0x2b69770 size 0x3c virtual false final false
 UnityEngine::FilterMode get_filterMode() ;

/// @brief Method set_filterMode addr 0x2b697ac size 0x44 virtual false final false
 void set_filterMode(UnityEngine::FilterMode value) ;

/// @brief Method get_anisoLevel addr 0x2b697f0 size 0x3c virtual false final false
 int32_t get_anisoLevel() ;

/// @brief Method set_anisoLevel addr 0x2b6982c size 0x44 virtual false final false
 void set_anisoLevel(int32_t value) ;

/// @brief Method set_mipMapBias addr 0x2b69870 size 0x4c virtual false final false
 void set_mipMapBias(float_t value) ;

/// @brief Method get_texelSize addr 0x2b698bc size 0x4c virtual false final false
 UnityEngine::Vector2 get_texelSize() ;

/// @brief Method GetNativeTexturePtr addr 0x2b6994c size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetNativeTexturePtr() ;

/// @brief Method Internal_GetActiveTextureColorSpace addr 0x2b69988 size 0x3c virtual false final false
 int32_t Internal_GetActiveTextureColorSpace() ;

/// @brief Method get_activeTextureColorSpace addr 0x2b699c4 size 0x48 virtual false final false
 UnityEngine::ColorSpace get_activeTextureColorSpace() ;

/// @brief Method GetPixelDataSize addr 0x2b69a0c size 0x54 virtual false final false
 uint64_t GetPixelDataSize(int32_t mipLevel, int32_t element) ;

/// @brief Method GetPixelDataOffset addr 0x2b69a60 size 0x54 virtual false final false
 uint64_t GetPixelDataOffset(int32_t mipLevel, int32_t element) ;

/// @brief Method ValidateFormat addr 0x2b69ab4 size 0x1b8 virtual false final false
 bool ValidateFormat(UnityEngine::TextureFormat format) ;

/// @brief Method ValidateFormat addr 0x2b69c6c size 0x1b0 virtual false final false
 bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::FormatUsage usage) ;

/// @brief Method CreateNonReadableException addr 0x2b69e1c size 0xa4 virtual false final false
 UnityEngine::UnityException CreateNonReadableException(UnityEngine::Texture t) ;

/// @brief Method CreateNativeArrayLengthOverflowException addr 0x2b69ec0 size 0x74 virtual false final false
 UnityEngine::UnityException CreateNativeArrayLengthOverflowException() ;

/// @brief Method get_texelSize_Injected addr 0x2b69908 size 0x44 virtual false final false
 void get_texelSize_Injected(ByRef<UnityEngine::Vector2> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture, "UnityEngine", "Texture");
