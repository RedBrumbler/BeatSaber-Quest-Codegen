#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Type: UnityEngine::Graphics
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10043))
// CS Name: UnityEngine.Graphics
class CORDL_TYPE Graphics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Graphics() = default;

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: " const&", def_value: None }]
constexpr Graphics(Graphics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None }]
constexpr Graphics(Graphics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Graphics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Graphics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Graphics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Graphics& operator=(Graphics&& o) noexcept = default;
  constexpr Graphics& operator=(Graphics const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_kMaxDrawMeshInstanceCount, put=__set_kMaxDrawMeshInstanceCount))  kMaxDrawMeshInstanceCount;

static void __set_kMaxDrawMeshInstanceCount(int32_t value) ;

static int32_t __get_kMaxDrawMeshInstanceCount() ;


// Properties

static UnityEngine::Rendering::GraphicsTier __declspec(property(get=get_activeTier, put=set_activeTier))  activeTier;


// Methods

/// @brief Method DrawMeshInstanced addr 0x2b70bc4 size 0xd0 virtual false final false
static void DrawMeshInstanced(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Material material, ::ArrayW<UnityEngine::Matrix4x4> matrices, int32_t count, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer) ;

/// @brief Method SetRenderTarget addr 0x2b71134 size 0x60 virtual false final false
static void SetRenderTarget(UnityEngine::RenderTexture rt) ;

/// @brief Method SetRenderTarget addr 0x2b71210 size 0x70 virtual false final false
static void SetRenderTarget(UnityEngine::RenderTexture rt, int32_t mipLevel, UnityEngine::CubemapFace face) ;

/// @brief Method SetRenderTargetImpl addr 0x2b71280 size 0x9c virtual false final false
static void SetRenderTargetImpl(UnityEngine::RenderBuffer colorBuffer, UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, UnityEngine::CubemapFace face, int32_t depthSlice) ;

/// @brief Method SetRenderTargetImpl addr 0x2b713c4 size 0x124 virtual false final false
static void SetRenderTargetImpl(UnityEngine::RenderTexture rt, int32_t mipLevel, UnityEngine::CubemapFace face, int32_t depthSlice) ;

/// @brief Method SetRenderTarget addr 0x2b71194 size 0x7c virtual false final false
static void SetRenderTarget(UnityEngine::RenderTexture rt, int32_t mipLevel, UnityEngine::CubemapFace face, int32_t depthSlice) ;

/// @brief Method CopyTexture addr 0x2b71510 size 0x84 virtual false final false
static void CopyTexture(UnityEngine::Texture src, UnityEngine::Texture dst) ;

/// @brief Method CopyTexture addr 0x2b715d8 size 0xb4 virtual false final false
static void CopyTexture(UnityEngine::Texture src, int32_t srcElement, int32_t srcMip, UnityEngine::Texture dst, int32_t dstElement, int32_t dstMip) ;

/// @brief Method DrawMeshNow addr 0x2b71700 size 0x124 virtual false final false
static void DrawMeshNow(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, int32_t materialIndex) ;

/// @brief Method DrawMesh addr 0x2b718b0 size 0x19c virtual false final false
static void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t layer, UnityEngine::Camera camera, int32_t submeshIndex, UnityEngine::MaterialPropertyBlock properties, bool castShadows, bool receiveShadows, bool useLightProbes) ;

/// @brief Method DrawMesh addr 0x2b71a4c size 0x1a4 virtual false final false
static void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t layer, UnityEngine::Camera camera, int32_t submeshIndex, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, UnityEngine::Transform probeAnchor, UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine::LightProbeProxyVolume lightProbeProxyVolume) ;

/// @brief Method DrawMeshInstanced addr 0x2b70c94 size 0x4a0 virtual false final false
static void DrawMeshInstanced(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Material material, ::ArrayW<UnityEngine::Matrix4x4> matrices, int32_t count, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine::Camera camera, UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine::LightProbeProxyVolume lightProbeProxyVolume) ;

/// @brief Method Blit addr 0x2b71ddc size 0x84 virtual false final false
static void Blit(UnityEngine::Texture source, UnityEngine::RenderTexture dest) ;

/// @brief Method Blit addr 0x2b71ea4 size 0x94 virtual false final false
static void Blit(UnityEngine::Texture source, UnityEngine::RenderTexture dest, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset) ;

/// @brief Method Blit addr 0x2b71fd8 size 0xa0 virtual false final false
static void Blit(UnityEngine::Texture source, UnityEngine::RenderTexture dest, UnityEngine::Material mat, int32_t pass) ;

/// @brief Method Blit addr 0x2b720e4 size 0x70 virtual false final false
static void Blit(UnityEngine::Texture source, UnityEngine::RenderTexture dest, UnityEngine::Material mat) ;

/// @brief Method Internal_GetMaxDrawMeshInstanceCount addr 0x2b72154 size 0x28 virtual false final false
static int32_t Internal_GetMaxDrawMeshInstanceCount() ;

/// @brief Method get_activeTier addr 0x2b7217c size 0x28 virtual false final false
static UnityEngine::Rendering::GraphicsTier get_activeTier() ;

/// @brief Method set_activeTier addr 0x2b721a4 size 0x3c virtual false final false
static void set_activeTier(UnityEngine::Rendering::GraphicsTier value) ;

/// @brief Method Internal_SetNullRT addr 0x2b714e8 size 0x28 virtual false final false
static void Internal_SetNullRT() ;

/// @brief Method Internal_SetRTSimple addr 0x2b7131c size 0xa8 virtual false final false
static void Internal_SetRTSimple(UnityEngine::RenderBuffer color, UnityEngine::RenderBuffer depth, int32_t mip, UnityEngine::CubemapFace face, int32_t depthSlice) ;

/// @brief Method CopyTexture_Full addr 0x2b71594 size 0x44 virtual false final false
static void CopyTexture_Full(UnityEngine::Texture src, UnityEngine::Texture dst) ;

/// @brief Method CopyTexture_Slice addr 0x2b7168c size 0x74 virtual false final false
static void CopyTexture_Slice(UnityEngine::Texture src, int32_t srcElement, int32_t srcMip, UnityEngine::Texture dst, int32_t dstElement, int32_t dstMip) ;

/// @brief Method Internal_DrawMeshNow2 addr 0x2b71824 size 0x8c virtual false final false
static void Internal_DrawMeshNow2(UnityEngine::Mesh mesh, int32_t subsetIndex, UnityEngine::Matrix4x4 matrix) ;

/// @brief Method Internal_DrawMesh addr 0x2b71bf0 size 0xf0 virtual false final false
static void Internal_DrawMesh(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t layer, UnityEngine::Camera camera, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, UnityEngine::Transform probeAnchor, UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine::LightProbeProxyVolume lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMeshInstanced addr 0x2b71d1c size 0xc0 virtual false final false
static void Internal_DrawMeshInstanced(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Material material, ::ArrayW<UnityEngine::Matrix4x4> matrices, int32_t count, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, UnityEngine::Camera camera, UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine::LightProbeProxyVolume lightProbeProxyVolume) ;

/// @brief Method Internal_BlitMaterial5 addr 0x2b72078 size 0x6c virtual false final false
static void Internal_BlitMaterial5(UnityEngine::Texture source, UnityEngine::RenderTexture dest, UnityEngine::Material mat, int32_t pass, bool setRT) ;

/// @brief Method Blit2 addr 0x2b71e60 size 0x44 virtual false final false
static void Blit2(UnityEngine::Texture source, UnityEngine::RenderTexture dest) ;

/// @brief Method Blit4 addr 0x2b71f38 size 0xa0 virtual false final false
static void Blit4(UnityEngine::Texture source, UnityEngine::RenderTexture dest, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset) ;

/// @brief Method ExecuteCommandBuffer addr 0x2b723bc size 0x3c virtual false final false
static void ExecuteCommandBuffer(UnityEngine::Rendering::CommandBuffer buffer) ;

/// @brief Method Internal_SetRTSimple_Injected addr 0x2b721e0 size 0x6c virtual false final false
static void Internal_SetRTSimple_Injected(ByRef<UnityEngine::RenderBuffer> color, ByRef<UnityEngine::RenderBuffer> depth, int32_t mip, UnityEngine::CubemapFace face, int32_t depthSlice) ;

/// @brief Method Internal_DrawMeshNow2_Injected addr 0x2b7224c size 0x54 virtual false final false
static void Internal_DrawMeshNow2_Injected(UnityEngine::Mesh mesh, int32_t subsetIndex, ByRef<UnityEngine::Matrix4x4> matrix) ;

/// @brief Method Internal_DrawMesh_Injected addr 0x2b722a0 size 0xc0 virtual false final false
static void Internal_DrawMesh_Injected(UnityEngine::Mesh mesh, int32_t submeshIndex, ByRef<UnityEngine::Matrix4x4> matrix, UnityEngine::Material material, int32_t layer, UnityEngine::Camera camera, UnityEngine::MaterialPropertyBlock properties, UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, UnityEngine::Transform probeAnchor, UnityEngine::Rendering::LightProbeUsage lightProbeUsage, UnityEngine::LightProbeProxyVolume lightProbeProxyVolume) ;

/// @brief Method Blit4_Injected addr 0x2b72360 size 0x5c virtual false final false
static void Blit4_Injected(UnityEngine::Texture source, UnityEngine::RenderTexture dest, ByRef<UnityEngine::Vector2> scale, ByRef<UnityEngine::Vector2> offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Graphics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Graphics, "UnityEngine", "Graphics");
