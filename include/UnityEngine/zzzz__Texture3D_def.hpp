#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture3D;
}
// Type: UnityEngine::Texture3D
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10036))
// CS Name: UnityEngine.Texture3D
class CORDL_TYPE Texture3D : public UnityEngine::Texture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Texture3D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: " const&", def_value: None }]
constexpr Texture3D(Texture3D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Texture3D", modifiers: "&&", def_value: None }]
constexpr Texture3D(Texture3D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Texture3D(void* ptr) noexcept : UnityEngine::Texture(ptr) {
}


  constexpr Texture3D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Texture3D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Texture3D& operator=(Texture3D&& o) noexcept = default;
  constexpr Texture3D& operator=(Texture3D const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isReadable))  isReadable;


// Methods

/// @brief Method get_isReadable addr 0x2b6d5c4 size 0x3c virtual true final false
 bool get_isReadable() ;

/// @brief Method Internal_CreateImpl addr 0x2b6d600 size 0x8c virtual false final false
static bool Internal_CreateImpl(UnityEngine::Texture3D mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method Internal_Create addr 0x2b6d68c size 0xe0 virtual false final false
static void Internal_Create(UnityEngine::Texture3D mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method ApplyImpl addr 0x2b6d76c size 0x54 virtual false final false
 void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable) ;

/// @brief Method SetPixels32 addr 0x2b6d7c0 size 0x54 virtual false final false
 void SetPixels32(::ArrayW<UnityEngine::Color32> colors, int32_t miplevel) ;

/// @brief Method SetPixels32 addr 0x2b6d814 size 0x48 virtual false final false
 void SetPixels32(::ArrayW<UnityEngine::Color32> colors) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6d85c size 0x54 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

/// @brief Method .ctor addr 0x2b6d8b0 size 0xa0 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::Experimental::Rendering::TextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6d950 size 0xec virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6da94 size 0x14c virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6dbe0 size 0x134 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, int32_t mipCount, ::cordl_internals::intptr_t nativeTex) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

/// @brief Method .ctor addr 0x2b6dd14 size 0x10 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textureFormat", ty: "UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nativeTex", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Texture3D(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method .ctor addr 0x2b6dd24 size 0x10 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::TextureFormat textureFormat, bool mipChain, ::cordl_internals::intptr_t nativeTex) ;

/// @brief Method Apply addr 0x2b6dd34 size 0x8c virtual false final false
 void Apply(bool updateMipmaps, bool makeNoLongerReadable) ;

/// @brief Method Apply addr 0x2b6ddc0 size 0xc virtual false final false
 void Apply() ;

/// @brief Method ValidateIsNotCrunched addr 0x2b6da3c size 0x58 virtual false final false
static void ValidateIsNotCrunched(UnityEngine::Experimental::Rendering::TextureCreationFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Texture3D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture3D, "UnityEngine", "Texture3D");
