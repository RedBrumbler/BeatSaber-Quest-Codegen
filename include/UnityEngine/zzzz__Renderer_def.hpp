#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine::Rendering {
struct ReflectionProbeUsage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine {
class Renderer;
}
// Type: UnityEngine::Renderer
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10025))
// CS Name: UnityEngine.Renderer
class CORDL_TYPE Renderer : public UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Renderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: " const&", def_value: None }]
constexpr Renderer(Renderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Renderer", modifiers: "&&", def_value: None }]
constexpr Renderer(Renderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Renderer(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr Renderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Renderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Renderer& operator=(Renderer&& o) noexcept = default;
  constexpr Renderer& operator=(Renderer const& o) noexcept = default;
                


// Properties

 UnityEngine::Bounds __declspec(property(get=get_bounds))  bounds;

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;

 bool __declspec(property(get=get_isVisible))  isVisible;

 UnityEngine::Rendering::ShadowCastingMode __declspec(property(put=set_shadowCastingMode))  shadowCastingMode;

 bool __declspec(property(put=set_receiveShadows))  receiveShadows;

 UnityEngine::MotionVectorGenerationMode __declspec(property(put=set_motionVectorGenerationMode))  motionVectorGenerationMode;

 UnityEngine::Rendering::LightProbeUsage __declspec(property(put=set_lightProbeUsage))  lightProbeUsage;

 UnityEngine::Rendering::ReflectionProbeUsage __declspec(property(put=set_reflectionProbeUsage))  reflectionProbeUsage;

 int32_t __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID))  sortingLayerID;

 int32_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;

 bool __declspec(property(put=set_allowOcclusionWhenDynamic))  allowOcclusionWhenDynamic;

 bool __declspec(property(get=get_isPartOfStaticBatch))  isPartOfStaticBatch;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=get_materials, put=set_materials))  materials;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 UnityEngine::Material __declspec(property(get=get_sharedMaterial, put=set_sharedMaterial))  sharedMaterial;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=get_sharedMaterials, put=set_sharedMaterials))  sharedMaterials;


// Methods

/// @brief Method get_bounds addr 0x2b5f124 size 0x68 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method GetMaterial addr 0x2b5f1d0 size 0x3c virtual false final false
 UnityEngine::Material GetMaterial() ;

/// @brief Method GetSharedMaterial addr 0x2b5f20c size 0x3c virtual false final false
 UnityEngine::Material GetSharedMaterial() ;

/// @brief Method SetMaterial addr 0x2b5f248 size 0x44 virtual false final false
 void SetMaterial(UnityEngine::Material m) ;

/// @brief Method GetMaterialArray addr 0x2b5f28c size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Material> GetMaterialArray() ;

/// @brief Method CopySharedMaterialArray addr 0x2b5f2c8 size 0x44 virtual false final false
 void CopySharedMaterialArray(ByRef<::ArrayW<UnityEngine::Material>> m) ;

/// @brief Method SetMaterialArray addr 0x2b5f30c size 0x44 virtual false final false
 void SetMaterialArray(::ArrayW<UnityEngine::Material> m) ;

/// @brief Method Internal_SetPropertyBlock addr 0x2b5f350 size 0x44 virtual false final false
 void Internal_SetPropertyBlock(UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method Internal_SetPropertyBlockMaterialIndex addr 0x2b5f394 size 0x54 virtual false final false
 void Internal_SetPropertyBlockMaterialIndex(UnityEngine::MaterialPropertyBlock properties, int32_t materialIndex) ;

/// @brief Method Internal_GetPropertyBlockMaterialIndex addr 0x2b5f3e8 size 0x54 virtual false final false
 void Internal_GetPropertyBlockMaterialIndex(UnityEngine::MaterialPropertyBlock dest, int32_t materialIndex) ;

/// @brief Method SetPropertyBlock addr 0x2b5f43c size 0x44 virtual false final false
 void SetPropertyBlock(UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method SetPropertyBlock addr 0x2b5f480 size 0x54 virtual false final false
 void SetPropertyBlock(UnityEngine::MaterialPropertyBlock properties, int32_t materialIndex) ;

/// @brief Method GetPropertyBlock addr 0x2b5f4d4 size 0x54 virtual false final false
 void GetPropertyBlock(UnityEngine::MaterialPropertyBlock properties, int32_t materialIndex) ;

/// @brief Method get_enabled addr 0x2b5f528 size 0x3c virtual false final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x2b5f564 size 0x44 virtual false final false
 void set_enabled(bool value) ;

/// @brief Method get_isVisible addr 0x2b5f5a8 size 0x3c virtual false final false
 bool get_isVisible() ;

/// @brief Method set_shadowCastingMode addr 0x2b5f5e4 size 0x44 virtual false final false
 void set_shadowCastingMode(UnityEngine::Rendering::ShadowCastingMode value) ;

/// @brief Method set_receiveShadows addr 0x2b5f628 size 0x44 virtual false final false
 void set_receiveShadows(bool value) ;

/// @brief Method set_motionVectorGenerationMode addr 0x2b5f66c size 0x44 virtual false final false
 void set_motionVectorGenerationMode(UnityEngine::MotionVectorGenerationMode value) ;

/// @brief Method set_lightProbeUsage addr 0x2b5f6b0 size 0x44 virtual false final false
 void set_lightProbeUsage(UnityEngine::Rendering::LightProbeUsage value) ;

/// @brief Method set_reflectionProbeUsage addr 0x2b5f6f4 size 0x44 virtual false final false
 void set_reflectionProbeUsage(UnityEngine::Rendering::ReflectionProbeUsage value) ;

/// @brief Method get_sortingLayerID addr 0x2b5f738 size 0x3c virtual false final false
 int32_t get_sortingLayerID() ;

/// @brief Method set_sortingLayerID addr 0x2b5f774 size 0x44 virtual false final false
 void set_sortingLayerID(int32_t value) ;

/// @brief Method get_sortingOrder addr 0x2b5f7b8 size 0x3c virtual false final false
 int32_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2b5f7f4 size 0x44 virtual false final false
 void set_sortingOrder(int32_t value) ;

/// @brief Method set_allowOcclusionWhenDynamic addr 0x2b5f838 size 0x44 virtual false final false
 void set_allowOcclusionWhenDynamic(bool value) ;

/// @brief Method get_isPartOfStaticBatch addr 0x2b5f87c size 0x3c virtual false final false
 bool get_isPartOfStaticBatch() ;

/// @brief Method GetMaterialCount addr 0x2b5f8b8 size 0x3c virtual false final false
 int32_t GetMaterialCount() ;

/// @brief Method GetSharedMaterialArray addr 0x2b5f8f4 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Material> GetSharedMaterialArray() ;

/// @brief Method get_materials addr 0x2b5f930 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Material> get_materials() ;

/// @brief Method set_materials addr 0x2b5f96c size 0x44 virtual false final false
 void set_materials(::ArrayW<UnityEngine::Material> value) ;

/// @brief Method get_material addr 0x2b5f9b0 size 0x3c virtual false final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2b5f9ec size 0x44 virtual false final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method get_sharedMaterial addr 0x2b5fa30 size 0x3c virtual false final false
 UnityEngine::Material get_sharedMaterial() ;

/// @brief Method set_sharedMaterial addr 0x2b5fa6c size 0x44 virtual false final false
 void set_sharedMaterial(UnityEngine::Material value) ;

/// @brief Method get_sharedMaterials addr 0x2b5fab0 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Material> get_sharedMaterials() ;

/// @brief Method set_sharedMaterials addr 0x2b5faec size 0x44 virtual false final false
 void set_sharedMaterials(::ArrayW<UnityEngine::Material> value) ;

/// @brief Method GetSharedMaterials addr 0x2b5fb30 size 0x134 virtual false final false
 void GetSharedMaterials(System::Collections::Generic::List_1<UnityEngine::Material> m) ;

// Ctor Parameters []
explicit Renderer() ;

/// @brief Method .ctor addr 0x2b5fc64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_bounds_Injected addr 0x2b5f18c size 0x44 virtual false final false
 void get_bounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Renderer, "UnityEngine", "Renderer");
