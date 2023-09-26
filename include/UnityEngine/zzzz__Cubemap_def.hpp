#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Forward declare root types
namespace UnityEngine {
class Cubemap;
}
// Type: UnityEngine::Cubemap
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10035))
// CS Name: UnityEngine.Cubemap
class CORDL_TYPE Cubemap : public UnityEngine::Texture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Cubemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: " const&", def_value: None }]
constexpr Cubemap(Cubemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cubemap", modifiers: "&&", def_value: None }]
constexpr Cubemap(Cubemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cubemap(void* ptr) noexcept : UnityEngine::Texture(ptr) {
}


  constexpr Cubemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cubemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cubemap& operator=(Cubemap&& o) noexcept = default;
  constexpr Cubemap& operator=(Cubemap const& o) noexcept = default;
                


// Properties

 UnityEngine::TextureFormat __declspec(property(get=get_format))  format;

 bool __declspec(property(get=get_isReadable))  isReadable;


// Methods

/// @brief Method get_format addr 0x2b6caac size 0x3c virtual false final false
 UnityEngine::TextureFormat get_format() ;

/// @brief Method Internal_CreateImpl addr 0x2b6cae8 size 0x74 virtual false final false
static bool Internal_CreateImpl(UnityEngine::Cubemap mono, int32_t ext, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method Internal_Create addr 0x2b6cb5c size 0xc8 virtual false final false
static void Internal_Create(UnityEngine::Cubemap mono, int32_t ext, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method get_isReadable addr 0x2b6cc24 size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method SmoothEdges addr 0x2b6cc60 size 0x44 virtual false final false
 void SmoothEdges(int32_t smoothRegionWidthInPixels) ;

/// @brief Method SmoothEdges addr 0x2b6cca4 size 0x40 virtual false final false
 void SmoothEdges() ;

/// @brief Method GetPixels addr 0x2b6cce4 size 0x54 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels(UnityEngine::CubemapFace face, int32_t miplevel) ;

/// @brief Method GetPixels addr 0x2b6cd38 size 0x48 virtual false final false
 ::ArrayW<UnityEngine::Color> GetPixels(UnityEngine::CubemapFace face) ;

/// @brief Method SetPixels addr 0x2b6cd80 size 0x5c virtual false final false
 void SetPixels(::ArrayW<UnityEngine::Color> colors, UnityEngine::CubemapFace face, int32_t miplevel) ;

/// @brief Method SetPixels addr 0x2b6cddc size 0x58 virtual false final false
 void SetPixels(::ArrayW<UnityEngine::Color> colors, UnityEngine::CubemapFace face) ;

/// @brief Method ValidateFormat addr 0x2b6ce34 size 0xd4 virtual false final false
 bool ValidateFormat(UnityEngine::TextureFormat format, int32_t width) ;

/// @brief Method ValidateFormat addr 0x2b6cf08 size 0x128 virtual false final false
 bool ValidateFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t width) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6d030 size 0x3c virtual false final false
 void _ctor(int32_t width, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6d06c size 0xe8 virtual false final false
 void _ctor(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::TextureFormat format, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6d154 size 0x78 virtual false final false
 void _ctor(int32_t width, UnityEngine::TextureFormat format, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6d2f4 size 0xdc virtual false final false
 void _ctor(int32_t width, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6d1cc size 0x128 virtual false final false
 void _ctor(int32_t width, UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6d428 size 0x10 virtual false final false
 void _ctor(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain, ::cordl_internals::intptr_t nativeTex) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }]
explicit Cubemap(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method .ctor addr 0x2b6d438 size 0x80 virtual false final false
 void _ctor(int32_t width, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method CreateExternalTexture addr 0x2b6d4b8 size 0x10c virtual false final false
static UnityEngine::Cubemap CreateExternalTexture(int32_t width, UnityEngine::TextureFormat format, bool mipmap, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method ValidateIsNotCrunched addr 0x2b6d3d0 size 0x58 virtual false final false
static void ValidateIsNotCrunched(UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Cubemap);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Cubemap, "UnityEngine", "Cubemap");
