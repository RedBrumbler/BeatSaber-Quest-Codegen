#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions;
}
namespace HoudiniEngineUnity {
class HEU_EditorUtility;
}
// Type: ::HEU_ReplacePrefabOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9779))
// CS Name: HoudiniEngineUnity.HEU_EditorUtility::HEU_ReplacePrefabOptions
struct CORDL_TYPE HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions(HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions const&) = default;
                    constexpr HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions(HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions&&) = default;
                    constexpr HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions& operator=(HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions& operator=(HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped : int32_t {
__Default = 0,
__ConnectToPrefab = 1,
__ReplaceNameBased = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions const Default;

/// @brief Field ConnectToPrefab offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions const ConnectToPrefab;

/// @brief Field ReplaceNameBased offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions const ReplaceNameBased;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_EditorUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9780))
// CS Name: HoudiniEngineUnity.HEU_EditorUtility
class CORDL_TYPE HEU_EditorUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HEU_ReplacePrefabOptions = HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_EditorUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: " const&", def_value: None }]
constexpr HEU_EditorUtility(HEU_EditorUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_EditorUtility", modifiers: "&&", def_value: None }]
constexpr HEU_EditorUtility(HEU_EditorUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_EditorUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_EditorUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_EditorUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_EditorUtility& operator=(HEU_EditorUtility&& o) noexcept = default;
  constexpr HEU_EditorUtility& operator=(HEU_EditorUtility const& o) noexcept = default;
                


// Methods

/// @brief Method MarkSceneDirty addr 0x2078b0c size 0x4 virtual false final false
static void MarkSceneDirty() ;

/// @brief Method SelectObject addr 0x2078b10 size 0x4 virtual false final false
static void SelectObject(UnityEngine::GameObject gameObject) ;

/// @brief Method SelectObjects addr 0x2078b14 size 0x4 virtual false final false
static void SelectObjects(::ArrayW<UnityEngine::GameObject> gameObjects) ;

/// @brief Method GetSelectedObjectsMeanPosition addr 0x2078b18 size 0x44 virtual false final false
static UnityEngine::Vector3 GetSelectedObjectsMeanPosition() ;

/// @brief Method GetSelectedObjectsMeanTransform addr 0x2078b5c size 0x58 virtual false final false
static UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform() ;

/// @brief Method SaveAsPrefabAsset addr 0x2078bb4 size 0x4c virtual false final false
static UnityEngine::GameObject SaveAsPrefabAsset(::StringW path, UnityEngine::GameObject go) ;

/// @brief Method PrefabIsAddedComponentOverride addr 0x2078c00 size 0x8 virtual false final false
static bool PrefabIsAddedComponentOverride(UnityEngine::Component comp) ;

/// @brief Method IsEditorPlaying addr 0x2078c08 size 0x8 virtual false final false
static bool IsEditorPlaying() ;

/// @brief Method ReplacePrefab addr 0x2078c10 size 0x4c virtual false final false
static UnityEngine::GameObject ReplacePrefab(UnityEngine::GameObject go, UnityEngine::Object targetPrefab, HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions heuOptions) ;

/// @brief Method IsPrefabInstance addr 0x2078c5c size 0x4c virtual false final false
static bool IsPrefabInstance(UnityEngine::GameObject go) ;

/// @brief Method IsPrefabAsset addr 0x2078ca8 size 0x4c virtual false final false
static bool IsPrefabAsset(UnityEngine::GameObject go) ;

/// @brief Method IsEditingInPrefabMode addr 0x2078cf4 size 0x8 virtual false final false
static bool IsEditingInPrefabMode(UnityEngine::GameObject obj) ;

/// @brief Method IsDisconnectedPrefabInstance addr 0x2078cfc size 0x4c virtual false final false
static bool IsDisconnectedPrefabInstance(UnityEngine::GameObject go) ;

/// @brief Method GetPrefabAsset addr 0x2078d48 size 0x4c virtual false final false
static UnityEngine::Object GetPrefabAsset(UnityEngine::GameObject go) ;

/// @brief Method GetPrefabAssetPath addr 0x2078d94 size 0x4c virtual false final false
static ::StringW GetPrefabAssetPath(UnityEngine::Object obj) ;

/// @brief Method DisconnectPrefabInstance addr 0x2078de0 size 0x44 virtual false final false
static void DisconnectPrefabInstance(UnityEngine::GameObject instance) ;

/// @brief Method InstantiatePrefab addr 0x2078e24 size 0x4c virtual false final false
static UnityEngine::Object InstantiatePrefab(UnityEngine::GameObject prefabOriginal) ;

/// @brief Method InstantiateGameObject addr 0x2078e70 size 0x84 virtual false final false
static UnityEngine::GameObject InstantiateGameObject(UnityEngine::GameObject sourceGameObject, UnityEngine::Transform parentTransform, bool instantiateInWorldSpace, bool bRegisterUndo) ;

/// @brief Method AddComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static UnityEngine::Component AddComponent(UnityEngine::GameObject target, bool bRegisterUndo) ;

/// @brief Method UndoRecordObject addr 0x2078ef4 size 0x4 virtual false final false
static void UndoRecordObject(UnityEngine::Object objectToUndo, ::StringW name) ;

/// @brief Method UndoCollapseCurrentGroup addr 0x2078ef8 size 0x4 virtual false final false
static void UndoCollapseCurrentGroup() ;

/// @brief Method CollectDependencies addr 0x2078efc size 0x4c virtual false final false
static ::ArrayW<UnityEngine::Object> CollectDependencies(UnityEngine::Object obj) ;

/// @brief Method IsPersistant addr 0x2078f48 size 0x4c virtual false final false
static bool IsPersistant(UnityEngine::Object obj) ;

/// @brief Method GetUniqueNameForSibling addr 0x2078f94 size 0x4c virtual false final false
static ::StringW GetUniqueNameForSibling(UnityEngine::Transform parentTransform, ::StringW name) ;

/// @brief Method DisplayProgressBar addr 0x2078fe0 size 0x44 virtual false final false
static void DisplayProgressBar(::StringW title, ::StringW info, float_t progress) ;

/// @brief Method ClearProgressBar addr 0x2079024 size 0x44 virtual false final false
static void ClearProgressBar() ;

/// @brief Method IsEditorNotInPlayModeAndNotGoingToPlayMode addr 0x2079068 size 0x30 virtual false final false
static bool IsEditorNotInPlayModeAndNotGoingToPlayMode() ;

/// @brief Method DisplayDialog addr 0x2079098 size 0x6c virtual false final false
static bool DisplayDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel) ;

/// @brief Method DisplayErrorDialog addr 0x2079104 size 0x84 virtual false final false
static bool DisplayErrorDialog(::StringW title, ::StringW message, ::StringW ok, ::StringW cancel) ;

/// @brief Method RevealInFinder addr 0x2079188 size 0x4 virtual false final false
static void RevealInFinder(::StringW path) ;

/// @brief Method SetObjectDirtyForEditorUpdate addr 0x207918c size 0x4 virtual false final false
static void SetObjectDirtyForEditorUpdate(UnityEngine::Object obj) ;

/// @brief Method SetStatic addr 0x2079190 size 0x4 virtual false final false
static void SetStatic(UnityEngine::GameObject go, bool bStatic, bool bIncludeChildren) ;

/// @brief Method SetIsHidden addr 0x2079194 size 0x4 virtual false final false
static void SetIsHidden(UnityEngine::GameObject go, bool isHidden, bool bIncludeChildren) ;

/// @brief Method GetSelectedObjects addr 0x2079198 size 0x8 virtual false final false
static ::ArrayW<UnityEngine::GameObject> GetSelectedObjects() ;

/// @brief Method GetSelectedAssetRoots addr 0x20791a0 size 0x88 virtual false final false
static ::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> GetSelectedAssetRoots() ;

/// @brief Method GetAllAssetRoots addr 0x2079228 size 0x64 virtual false final false
static ::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> GetAllAssetRoots() ;

/// @brief Method CookSelected addr 0x207928c size 0x10 virtual false final false
static void CookSelected() ;

/// @brief Method CookAll addr 0x2079378 size 0x10 virtual false final false
static void CookAll() ;

/// @brief Method CookAssets addr 0x207929c size 0xdc virtual false final false
static void CookAssets(::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> rootAssets) ;

/// @brief Method RebuildSelected addr 0x2079388 size 0x10 virtual false final false
static void RebuildSelected() ;

/// @brief Method RebuildAll addr 0x2079468 size 0x10 virtual false final false
static void RebuildAll() ;

/// @brief Method RebuildAssets addr 0x2079398 size 0xd0 virtual false final false
static void RebuildAssets(::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> rootAssets) ;

/// @brief Method BakeAndReplaceSelectedInScene addr 0x2079478 size 0x10 virtual false final false
static void BakeAndReplaceSelectedInScene() ;

/// @brief Method BakeAndReplaceAllInScene addr 0x2079554 size 0x10 virtual false final false
static void BakeAndReplaceAllInScene() ;

/// @brief Method BakeAndReplaceAssets addr 0x2079488 size 0xcc virtual false final false
static void BakeAndReplaceAssets(::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> rootAssets) ;

/// @brief Method ExportSelectedAssetsToGeoFiles addr 0x2079564 size 0x10 virtual false final false
static void ExportSelectedAssetsToGeoFiles() ;

/// @brief Method ExportAllAssetsToGeoFiles addr 0x2079c80 size 0x10 virtual false final false
static void ExportAllAssetsToGeoFiles() ;

/// @brief Method ExportAssetsToGeoFiles addr 0x2079574 size 0x70c virtual false final false
static void ExportAssetsToGeoFiles(::ArrayW<HoudiniEngineUnity::HEU_HoudiniAssetRoot> rootAssets) ;

/// @brief Method EditorSaveFolderPanel addr 0x2079c90 size 0x4c virtual false final false
static ::StringW EditorSaveFolderPanel(::StringW title, ::StringW folder, ::StringW defaultName) ;

/// @brief Method QuerySelectedMeshTopology addr 0x2079cdc size 0x4 virtual false final false
static void QuerySelectedMeshTopology() ;

/// @brief Method GetObjectParentFolder addr 0x2079ce0 size 0x40 virtual false final false
static ::StringW GetObjectParentFolder(UnityEngine::GameObject parentObject, System::Collections::Generic::HashSet_1<UnityEngine::Material> generatedMaterials) ;

/// @brief Method GetObjectParentFolderHelper addr 0x2079d20 size 0x40 virtual false final false
static ::StringW GetObjectParentFolderHelper(int32_t instanceID) ;

/// @brief Method RepaintScene addr 0x2079d60 size 0x4 virtual false final false
static void RepaintScene() ;

/// @brief Method SetTextureToNormalMap addr 0x2079d64 size 0x4 virtual false final false
static void SetTextureToNormalMap(::StringW filename) ;

/// @brief Method ReleasedMouse addr 0x2079d68 size 0x8 virtual false final false
static bool ReleasedMouse() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_EditorUtility__HEU_ReplacePrefabOptions, "HoudiniEngineUnity", "HEU_EditorUtility/HEU_ReplacePrefabOptions");
NEED_NO_BOX(HoudiniEngineUnity::HEU_EditorUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_EditorUtility, "HoudiniEngineUnity", "HEU_EditorUtility");
