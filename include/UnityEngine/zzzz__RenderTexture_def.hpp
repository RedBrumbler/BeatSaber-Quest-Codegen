#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct VRTextureUsage;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Type: UnityEngine::RenderTexture
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10032))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10039))
// CS Name: UnityEngine.RenderTexture
class CORDL_TYPE RenderTexture : public UnityEngine::Texture {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RenderTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: " const&", def_value: None }]
constexpr RenderTexture(RenderTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None }]
constexpr RenderTexture(RenderTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderTexture(void* ptr) noexcept : UnityEngine::Texture(ptr) {
}


  constexpr RenderTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderTexture& operator=(RenderTexture&& o) noexcept = default;
  constexpr RenderTexture& operator=(RenderTexture const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;

 UnityEngine::Rendering::TextureDimension __declspec(property(put=set_dimension))  dimension;

 UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=get_graphicsFormat, put=set_graphicsFormat))  graphicsFormat;

 bool __declspec(property(put=set_useMipMap))  useMipMap;

 bool __declspec(property(get=get_sRGB))  sRGB;

 UnityEngine::VRTextureUsage __declspec(property(get=get_vrUsage))  vrUsage;

 UnityEngine::RenderTextureFormat __declspec(property(get=get_format))  format;

 UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(put=set_depthStencilFormat))  depthStencilFormat;

 int32_t __declspec(property(get=get_antiAliasing, put=set_antiAliasing))  antiAliasing;

static UnityEngine::RenderTexture __declspec(property(get=get_active, put=set_active))  active;

 UnityEngine::RenderBuffer __declspec(property(get=get_colorBuffer))  colorBuffer;

 UnityEngine::RenderBuffer __declspec(property(get=get_depthBuffer))  depthBuffer;

 UnityEngine::RenderTextureDescriptor __declspec(property(get=get_descriptor))  descriptor;


// Methods

/// @brief Method get_width addr 0x2b6ea1c size 0x3c virtual true final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2b6ea58 size 0x44 virtual true final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0x2b6ea9c size 0x3c virtual true final false
 int32_t get_height() ;

/// @brief Method set_height addr 0x2b6ead8 size 0x44 virtual true final false
 void set_height(int32_t value) ;

/// @brief Method set_dimension addr 0x2b6eb1c size 0x44 virtual true final false
 void set_dimension(UnityEngine::Rendering::TextureDimension value) ;

/// @brief Method get_graphicsFormat addr 0x2b6eb60 size 0x3c virtual false final false
 UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method set_graphicsFormat addr 0x2b6eb9c size 0x44 virtual false final false
 void set_graphicsFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

/// @brief Method set_useMipMap addr 0x2b6ebe0 size 0x44 virtual false final false
 void set_useMipMap(bool value) ;

/// @brief Method get_sRGB addr 0x2b6ec24 size 0x3c virtual false final false
 bool get_sRGB() ;

/// @brief Method get_vrUsage addr 0x2b6ec60 size 0x3c virtual false final false
 UnityEngine::VRTextureUsage get_vrUsage() ;

/// @brief Method get_format addr 0x2b6ec9c size 0x114 virtual false final false
 UnityEngine::RenderTextureFormat get_format() ;

/// @brief Method set_depthStencilFormat addr 0x2b6ee28 size 0x44 virtual false final false
 void set_depthStencilFormat(UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

/// @brief Method get_antiAliasing addr 0x2b6ee6c size 0x3c virtual false final false
 int32_t get_antiAliasing() ;

/// @brief Method set_antiAliasing addr 0x2b6eea8 size 0x44 virtual false final false
 void set_antiAliasing(int32_t value) ;

/// @brief Method GetActive addr 0x2b6eeec size 0x28 virtual false final false
static UnityEngine::RenderTexture GetActive() ;

/// @brief Method SetActive addr 0x2b6ef14 size 0x3c virtual false final false
static void SetActive(UnityEngine::RenderTexture rt) ;

/// @brief Method get_active addr 0x2b6ef50 size 0x28 virtual false final false
static UnityEngine::RenderTexture get_active() ;

/// @brief Method set_active addr 0x2b6ef78 size 0x3c virtual false final false
static void set_active(UnityEngine::RenderTexture value) ;

/// @brief Method GetColorBuffer addr 0x2b6efb4 size 0x54 virtual false final false
 UnityEngine::RenderBuffer GetColorBuffer() ;

/// @brief Method GetDepthBuffer addr 0x2b6f04c size 0x54 virtual false final false
 UnityEngine::RenderBuffer GetDepthBuffer() ;

/// @brief Method SetMipMapCount addr 0x2b6f0e4 size 0x44 virtual false final false
 void SetMipMapCount(int32_t count) ;

/// @brief Method get_colorBuffer addr 0x2b6f128 size 0x4 virtual false final false
 UnityEngine::RenderBuffer get_colorBuffer() ;

/// @brief Method get_depthBuffer addr 0x2b6f12c size 0x4 virtual false final false
 UnityEngine::RenderBuffer get_depthBuffer() ;

/// @brief Method DiscardContents addr 0x2b6f130 size 0x54 virtual false final false
 void DiscardContents(bool discardColor, bool discardDepth) ;

/// @brief Method DiscardContents addr 0x2b6f184 size 0x44 virtual false final false
 void DiscardContents() ;

/// @brief Method Create addr 0x2b6f1c8 size 0x3c virtual false final false
 bool Create() ;

/// @brief Method Release addr 0x2b6f204 size 0x3c virtual false final false
 void Release() ;

/// @brief Method IsCreated addr 0x2b6f240 size 0x3c virtual false final false
 bool IsCreated() ;

/// @brief Method SetSRGBReadWrite addr 0x2b6f27c size 0x44 virtual false final false
 void SetSRGBReadWrite(bool srgb) ;

/// @brief Method Internal_Create addr 0x2b6f2c0 size 0x3c virtual false final false
static void Internal_Create(UnityEngine::RenderTexture rt) ;

/// @brief Method SetRenderTextureDescriptor addr 0x2b6f2fc size 0x44 virtual false final false
 void SetRenderTextureDescriptor(UnityEngine::RenderTextureDescriptor desc) ;

/// @brief Method GetDescriptor addr 0x2b6edb0 size 0x78 virtual false final false
 UnityEngine::RenderTextureDescriptor GetDescriptor() ;

/// @brief Method GetTemporary_Internal addr 0x2b6f3c8 size 0x3c virtual false final false
static UnityEngine::RenderTexture GetTemporary_Internal(UnityEngine::RenderTextureDescriptor desc) ;

/// @brief Method ReleaseTemporary addr 0x2b6f440 size 0x3c virtual false final false
static void ReleaseTemporary(UnityEngine::RenderTexture temp) ;

// Ctor Parameters []
explicit RenderTexture() ;

/// @brief Method .ctor addr 0x2b6f47c size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "desc", ty: "UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }]
explicit RenderTexture(UnityEngine::RenderTextureDescriptor desc) ;

/// @brief Method .ctor addr 0x2b6f4d0 size 0xf8 virtual false final false
 void _ctor(UnityEngine::RenderTextureDescriptor desc) ;

// Ctor Parameters [CppParam { name: "textureToCopy", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }]
explicit RenderTexture(UnityEngine::RenderTexture textureToCopy) ;

/// @brief Method .ctor addr 0x2b6fa18 size 0x16c virtual false final false
 void _ctor(UnityEngine::RenderTexture textureToCopy) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::DefaultFormat", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format) ;

/// @brief Method .ctor addr 0x2b6fc14 size 0x4c virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::DefaultFormat format) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method .ctor addr 0x2b6fc60 size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6fcf0 size 0x200 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "colorFormat", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "depthStencilFormat", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b6ff74 size 0x204 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "colorFormat", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "depthStencilFormat", ty: "UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) ;

/// @brief Method .ctor addr 0x2b70178 size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::RenderTextureFormat", modifiers: "", def_value: None }, CppParam { name: "readWrite", ty: "UnityEngine::RenderTextureReadWrite", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) ;

/// @brief Method .ctor addr 0x2b70208 size 0xa8 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::RenderTextureFormat", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format) ;

/// @brief Method .ctor addr 0x2b7048c size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth) ;

/// @brief Method .ctor addr 0x2b705bc size 0x8 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth) ;

// Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "UnityEngine::RenderTextureFormat", modifiers: "", def_value: None }, CppParam { name: "mipCount", ty: "int32_t", modifiers: "", def_value: None }]
explicit RenderTexture(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b7051c size 0xa0 virtual false final false
 void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, int32_t mipCount) ;

/// @brief Method Initialize addr 0x2b702b0 size 0x1dc virtual false final false
 void Initialize(int32_t width, int32_t height, int32_t depth, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite, int32_t mipCount) ;

/// @brief Method GetDepthStencilFormatLegacy addr 0x2b6fef0 size 0x84 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t depthBits, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat) ;

/// @brief Method get_descriptor addr 0x2b6fb84 size 0x90 virtual false final false
 UnityEngine::RenderTextureDescriptor get_descriptor() ;

/// @brief Method ValidateRenderTextureDesc addr 0x2b6f5c8 size 0x450 virtual false final false
static void ValidateRenderTextureDesc(UnityEngine::RenderTextureDescriptor desc) ;

/// @brief Method GetCompatibleFormat addr 0x2b705c4 size 0x160 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine::RenderTextureFormat renderTextureFormat, UnityEngine::RenderTextureReadWrite readWrite) ;

/// @brief Method GetTemporary addr 0x2b7072c size 0x80 virtual false final false
static UnityEngine::RenderTexture GetTemporary(UnityEngine::RenderTextureDescriptor desc) ;

/// @brief Method GetTemporaryImpl addr 0x2b707c8 size 0xb8 virtual false final false
static UnityEngine::RenderTexture GetTemporaryImpl(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t antiAliasing, UnityEngine::RenderTextureMemoryless memorylessMode, UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale) ;

/// @brief Method GetTemporary addr 0x2b70958 size 0x64 virtual false final false
static UnityEngine::RenderTexture GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing) ;

/// @brief Method GetTemporary addr 0x2b709bc size 0x58 virtual false final false
static UnityEngine::RenderTexture GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) ;

/// @brief Method GetTemporary addr 0x2b70a14 size 0x58 virtual false final false
static UnityEngine::RenderTexture GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::RenderTextureFormat format) ;

/// @brief Method GetTemporary addr 0x2b70a6c size 0x54 virtual false final false
static UnityEngine::RenderTexture GetTemporary(int32_t width, int32_t height) ;

/// @brief Method GetColorBuffer_Injected addr 0x2b6f008 size 0x44 virtual false final false
 void GetColorBuffer_Injected(ByRef<UnityEngine::RenderBuffer> ret) ;

/// @brief Method GetDepthBuffer_Injected addr 0x2b6f0a0 size 0x44 virtual false final false
 void GetDepthBuffer_Injected(ByRef<UnityEngine::RenderBuffer> ret) ;

/// @brief Method SetRenderTextureDescriptor_Injected addr 0x2b6f340 size 0x44 virtual false final false
 void SetRenderTextureDescriptor_Injected(ByRef<UnityEngine::RenderTextureDescriptor> desc) ;

/// @brief Method GetDescriptor_Injected addr 0x2b6f384 size 0x44 virtual false final false
 void GetDescriptor_Injected(ByRef<UnityEngine::RenderTextureDescriptor> ret) ;

/// @brief Method GetTemporary_Internal_Injected addr 0x2b6f404 size 0x3c virtual false final false
static UnityEngine::RenderTexture GetTemporary_Internal_Injected(ByRef<UnityEngine::RenderTextureDescriptor> desc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RenderTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTexture, "UnityEngine", "RenderTexture");
