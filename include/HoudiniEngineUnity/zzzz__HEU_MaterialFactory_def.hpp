#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_MaterialData__Source;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Shader;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MaterialFactory;
}
// Type: HoudiniEngineUnity::HEU_MaterialFactory
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9739))
// CS Name: HoudiniEngineUnity.HEU_MaterialFactory
class CORDL_TYPE HEU_MaterialFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_MaterialFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: " const&", def_value: None }]
constexpr HEU_MaterialFactory(HEU_MaterialFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: "&&", def_value: None }]
constexpr HEU_MaterialFactory(HEU_MaterialFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_MaterialFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_MaterialFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_MaterialFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_MaterialFactory& operator=(HEU_MaterialFactory&& o) noexcept = default;
  constexpr HEU_MaterialFactory& operator=(HEU_MaterialFactory const& o) noexcept = default;
                


// Fields

static UnityEngine::Material __declspec(property(get=__get__defaultStandardMaterial, put=__set__defaultStandardMaterial))  _defaultStandardMaterial;

static void __set__defaultStandardMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get__defaultStandardMaterial() ;


// Methods

/// @brief Method FindShader addr 0x206544c size 0x4c virtual false final false
static UnityEngine::Shader FindShader(::StringW shaderName) ;

/// @brief Method FindPluginShader addr 0x2064298 size 0x4c virtual false final false
static UnityEngine::Shader FindPluginShader(::StringW shaderName) ;

/// @brief Method GetNewMaterialWithShader addr 0x2065498 size 0x228 virtual false final false
static UnityEngine::Material GetNewMaterialWithShader(::StringW assetCacheFolderPath, ::StringW shaderName, ::StringW materialName, bool bWriteToFile) ;

/// @brief Method CreateNewHoudiniStandardMaterial addr 0x20656c0 size 0x38 virtual false final false
static UnityEngine::Material CreateNewHoudiniStandardMaterial(::StringW assetCacheFolderPath, ::StringW materialName, bool bWriteToFile) ;

/// @brief Method WriteMaterialToAssetCache addr 0x20656f8 size 0xf4 virtual false final false
static void WriteMaterialToAssetCache(UnityEngine::Material material, ::StringW assetCacheFolderPath, ::StringW materialName, bool bOverwriteExisting) ;

/// @brief Method DoesMaterialExistInAssetCache addr 0x20657ec size 0x24 virtual false final false
static bool DoesMaterialExistInAssetCache(UnityEngine::Material material) ;

/// @brief Method DestroyNonAssetMaterial addr 0x2065810 size 0xa0 virtual false final false
static void DestroyNonAssetMaterial(UnityEngine::Material material, bool bRegisterUndo) ;

/// @brief Method DeleteAssetMaterial addr 0x20658b0 size 0x8 virtual false final false
static void DeleteAssetMaterial(UnityEngine::Material material) ;

/// @brief Method RenderAndExtractImageToTexture addr 0x2064b08 size 0x470 virtual false final false
static UnityEngine::Texture2D RenderAndExtractImageToTexture(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, int32_t textureParmID, ::StringW textureName, ::StringW assetCacheFolderPath, bool isNormalMap, bool invertTexture) ;

/// @brief Method ExtractHoudiniImageToTexturePNGJPEG addr 0x2065ba4 size 0x134 virtual false final false
static UnityEngine::Texture2D ExtractHoudiniImageToTexturePNGJPEG(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes) ;

/// @brief Method ExtractHoudiniImageToTextureRaw addr 0x20658b8 size 0x2ec virtual false final false
static UnityEngine::Texture2D ExtractHoudiniImageToTextureRaw(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes) ;

/// @brief Method ExtractHoudiniImageToTextureFile addr 0x2065cd8 size 0x1a0 virtual false final false
static UnityEngine::Texture2D ExtractHoudiniImageToTextureFile(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_MaterialInfo materialInfo, ::StringW imagePlanes, ::StringW assetCacheFolderPath) ;

/// @brief Method LoadUnityMaterial addr 0x2065e78 size 0x298 virtual false final false
static UnityEngine::Material LoadUnityMaterial(::StringW materialPath) ;

/// @brief Method LoadSubstanceMaterialWithName addr 0x2066110 size 0x1dc virtual false final false
static UnityEngine::Material LoadSubstanceMaterialWithName(::StringW materialPath, ::StringW substanceName) ;

/// @brief Method LoadSubstanceMaterialWithIndex addr 0x20662ec size 0x270 virtual false final false
static UnityEngine::Material LoadSubstanceMaterialWithIndex(::StringW materialPath, int32_t substanceMaterialIndex) ;

/// @brief Method GetUnitySubstanceMaterialKey addr 0x206655c size 0x118 virtual false final false
static int32_t GetUnitySubstanceMaterialKey(::StringW unityMaterialPath, ::StringW substanceName, int32_t substanceIndex) ;

/// @brief Method MaterialNameToKey addr 0x2066674 size 0x1c virtual false final false
static int32_t MaterialNameToKey(::StringW materialName) ;

/// @brief Method EnableGPUInstancing addr 0x2066690 size 0x18 virtual false final false
static void EnableGPUInstancing(UnityEngine::Material material) ;

/// @brief Method MaterialHasGPUInstancingEnabled addr 0x20666a8 size 0x14 virtual false final false
static bool MaterialHasGPUInstancingEnabled(UnityEngine::Material material) ;

/// @brief Method CopyMaterial addr 0x20666bc size 0x64 virtual false final false
static UnityEngine::Material CopyMaterial(UnityEngine::Material material) ;

/// @brief Method GetDefaultStandardMaterial addr 0x2066720 size 0xcc virtual false final false
static UnityEngine::Material GetDefaultStandardMaterial() ;

/// @brief Method LoadTexture addr 0x20667ec size 0x138 virtual false final false
static UnityEngine::Texture2D LoadTexture(::StringW path) ;

/// @brief Method WhiteTexture addr 0x2066924 size 0x8 virtual false final false
static UnityEngine::Texture2D WhiteTexture() ;

/// @brief Method CreateUnitySubstanceMaterialData addr 0x206692c size 0x368 virtual false final false
static HoudiniEngineUnity::HEU_MaterialData CreateUnitySubstanceMaterialData(int32_t materialKey, ::StringW materialPath, ::StringW substanceName, int32_t substanceIndex, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath) ;

/// @brief Method CreateMaterialInCache addr 0x2066c94 size 0x168 virtual false final false
static HoudiniEngineUnity::HEU_MaterialData CreateMaterialInCache(int32_t materialKey, ::StringW materialName, HoudiniEngineUnity::HoudiniEngineUnity__HEU_MaterialData__Source sourceType, bool bWriteToFile, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath) ;

/// @brief Method GetOrCreateDefaultMaterialInCache addr 0x2066dfc size 0xec virtual false final false
static HoudiniEngineUnity::HEU_MaterialData GetOrCreateDefaultMaterialInCache(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, bool bWriteToFile, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath) ;

/// @brief Method GetMaterialDataFromCache addr 0x2066fa4 size 0x164 virtual false final false
static HoudiniEngineUnity::HEU_MaterialData GetMaterialDataFromCache(int32_t materialKey, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache) ;

/// @brief Method GenerateDefaultMaterialName addr 0x2066ee8 size 0xbc virtual false final false
static ::StringW GenerateDefaultMaterialName(int32_t geoID, int32_t partID) ;

/// @brief Method CreateHoudiniMaterialData addr 0x2067108 size 0x1e4 virtual false final false
static HoudiniEngineUnity::HEU_MaterialData CreateHoudiniMaterialData(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, int32_t materialID, int32_t geoID, int32_t partID, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache, ::StringW assetCacheFolderPath) ;

/// @brief Method GetMaterialDataMapFromCache addr 0x2067504 size 0x248 virtual false final false
static System::Collections::Generic::Dictionary_2<int32_t,HoudiniEngineUnity::HEU_MaterialData> GetMaterialDataMapFromCache(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_MaterialData> materialCache) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_MaterialFactory);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MaterialFactory, "HoudiniEngineUnity", "HEU_MaterialFactory");
