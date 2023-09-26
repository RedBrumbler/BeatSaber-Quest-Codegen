#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct SkinQuality;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct UnityEngine__GraphicsBuffer__Target;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Type: UnityEngine::SkinnedMeshRenderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10025))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10027))
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public UnityEngine::Renderer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SkinnedMeshRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: " const&", def_value: None }]
constexpr SkinnedMeshRenderer(SkinnedMeshRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
constexpr SkinnedMeshRenderer(SkinnedMeshRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SkinnedMeshRenderer(void* ptr) noexcept : UnityEngine::Renderer(ptr) {
}


  constexpr SkinnedMeshRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SkinnedMeshRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SkinnedMeshRenderer& operator=(SkinnedMeshRenderer&& o) noexcept = default;
  constexpr SkinnedMeshRenderer& operator=(SkinnedMeshRenderer const& o) noexcept = default;
                


// Properties

 UnityEngine::SkinQuality __declspec(property(get=get_quality, put=set_quality))  quality;

 bool __declspec(property(get=get_updateWhenOffscreen, put=set_updateWhenOffscreen))  updateWhenOffscreen;

 bool __declspec(property(get=get_forceMatrixRecalculationPerRender, put=set_forceMatrixRecalculationPerRender))  forceMatrixRecalculationPerRender;

 UnityEngine::Transform __declspec(property(get=get_rootBone, put=set_rootBone))  rootBone;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=get_bones, put=set_bones))  bones;

 UnityEngine::Mesh __declspec(property(get=get_sharedMesh, put=set_sharedMesh))  sharedMesh;

 bool __declspec(property(get=get_skinnedMotionVectors, put=set_skinnedMotionVectors))  skinnedMotionVectors;

 UnityEngine::UnityEngine__GraphicsBuffer__Target __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget))  vertexBufferTarget;


// Methods

/// @brief Method get_quality addr 0x2b5ffb0 size 0x3c virtual false final false
 UnityEngine::SkinQuality get_quality() ;

/// @brief Method set_quality addr 0x2b5ffec size 0x44 virtual false final false
 void set_quality(UnityEngine::SkinQuality value) ;

/// @brief Method get_updateWhenOffscreen addr 0x2b60030 size 0x3c virtual false final false
 bool get_updateWhenOffscreen() ;

/// @brief Method set_updateWhenOffscreen addr 0x2b6006c size 0x44 virtual false final false
 void set_updateWhenOffscreen(bool value) ;

/// @brief Method get_forceMatrixRecalculationPerRender addr 0x2b600b0 size 0x3c virtual false final false
 bool get_forceMatrixRecalculationPerRender() ;

/// @brief Method set_forceMatrixRecalculationPerRender addr 0x2b600ec size 0x44 virtual false final false
 void set_forceMatrixRecalculationPerRender(bool value) ;

/// @brief Method get_rootBone addr 0x2b60130 size 0x3c virtual false final false
 UnityEngine::Transform get_rootBone() ;

/// @brief Method set_rootBone addr 0x2b6016c size 0x44 virtual false final false
 void set_rootBone(UnityEngine::Transform value) ;

/// @brief Method get_bones addr 0x2b601b0 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Transform> get_bones() ;

/// @brief Method set_bones addr 0x2b601ec size 0x44 virtual false final false
 void set_bones(::ArrayW<UnityEngine::Transform> value) ;

/// @brief Method get_sharedMesh addr 0x2b60230 size 0x3c virtual false final false
 UnityEngine::Mesh get_sharedMesh() ;

/// @brief Method set_sharedMesh addr 0x2b6026c size 0x44 virtual false final false
 void set_sharedMesh(UnityEngine::Mesh value) ;

/// @brief Method get_skinnedMotionVectors addr 0x2b602b0 size 0x3c virtual false final false
 bool get_skinnedMotionVectors() ;

/// @brief Method set_skinnedMotionVectors addr 0x2b602ec size 0x44 virtual false final false
 void set_skinnedMotionVectors(bool value) ;

/// @brief Method GetBlendShapeWeight addr 0x2b60330 size 0x44 virtual false final false
 float_t GetBlendShapeWeight(int32_t index) ;

/// @brief Method SetBlendShapeWeight addr 0x2b60374 size 0x54 virtual false final false
 void SetBlendShapeWeight(int32_t index, float_t value) ;

/// @brief Method BakeMesh addr 0x2b603c8 size 0x48 virtual false final false
 void BakeMesh(UnityEngine::Mesh mesh) ;

/// @brief Method BakeMesh addr 0x2b60410 size 0x54 virtual false final false
 void BakeMesh(UnityEngine::Mesh mesh, bool useScale) ;

/// @brief Method GetVertexBuffer addr 0x2b60464 size 0xc4 virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBuffer() ;

/// @brief Method GetPreviousVertexBuffer addr 0x2b60564 size 0xc4 virtual false final false
 UnityEngine::GraphicsBuffer GetPreviousVertexBuffer() ;

/// @brief Method GetVertexBufferImpl addr 0x2b60528 size 0x3c virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBufferImpl() ;

/// @brief Method GetPreviousVertexBufferImpl addr 0x2b60628 size 0x3c virtual false final false
 UnityEngine::GraphicsBuffer GetPreviousVertexBufferImpl() ;

/// @brief Method get_vertexBufferTarget addr 0x2b60664 size 0x3c virtual false final false
 UnityEngine::UnityEngine__GraphicsBuffer__Target get_vertexBufferTarget() ;

/// @brief Method set_vertexBufferTarget addr 0x2b606a0 size 0x44 virtual false final false
 void set_vertexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value) ;

// Ctor Parameters []
explicit SkinnedMeshRenderer() ;

/// @brief Method .ctor addr 0x2b606e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SkinnedMeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SkinnedMeshRenderer, "UnityEngine", "SkinnedMeshRenderer");
