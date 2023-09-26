#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions;
}
namespace HoudiniEngineUnity {
class HEU_AssetDatabase;
}
// Type: ::HEU_ImportAssetOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9629))
// CS Name: HoudiniEngineUnity.HEU_AssetDatabase::HEU_ImportAssetOptions
struct CORDL_TYPE HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions(HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const&) = default;
                    constexpr HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions(HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions&&) = default;
                    constexpr HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions& operator=(HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions& operator=(HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped : int32_t {
__Default = 0,
__ForceUpdate = 1,
__ForceSynchronousImport = 8,
__ImportRecursive = 256,
__DontDownloadFromCacheServer = 8192,
__ForceUncompressedImport = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const Default;

/// @brief Field ForceUpdate offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUpdate;

/// @brief Field ForceSynchronousImport offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceSynchronousImport;

/// @brief Field ImportRecursive offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const ImportRecursive;

/// @brief Field DontDownloadFromCacheServer offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const DontDownloadFromCacheServer;

/// @brief Field ForceUncompressedImport offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions const ForceUncompressedImport;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AssetDatabase
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9630))
// CS Name: HoudiniEngineUnity.HEU_AssetDatabase
class CORDL_TYPE HEU_AssetDatabase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using HEU_ImportAssetOptions = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_AssetDatabase() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: " const&", def_value: None }]
constexpr HEU_AssetDatabase(HEU_AssetDatabase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetDatabase", modifiers: "&&", def_value: None }]
constexpr HEU_AssetDatabase(HEU_AssetDatabase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetDatabase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AssetDatabase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetDatabase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetDatabase& operator=(HEU_AssetDatabase&& o) noexcept = default;
  constexpr HEU_AssetDatabase& operator=(HEU_AssetDatabase const& o) noexcept = default;
                


// Methods

/// @brief Method GetAssetCachePath addr 0x20499c0 size 0x60 virtual false final false
static ::StringW GetAssetCachePath() ;

/// @brief Method GetUnityProjectPath addr 0x2049a20 size 0x64 virtual false final false
static ::StringW GetUnityProjectPath() ;

/// @brief Method GetAssetRelativePath addr 0x2049a84 size 0x144 virtual false final false
static ::StringW GetAssetRelativePath(::StringW inFullPath) ;

/// @brief Method GetPackagesRelativePath addr 0x2049c08 size 0x124 virtual false final false
static ::StringW GetPackagesRelativePath(::StringW inFullPath) ;

/// @brief Method GetValidAssetPath addr 0x2049d2c size 0x1d0 virtual false final false
static ::StringW GetValidAssetPath(::StringW inPath) ;

/// @brief Method GetAssetPath addr 0x2049efc size 0x4c virtual false final false
static ::StringW GetAssetPath(UnityEngine::Object asset) ;

/// @brief Method GetAssetPathWithSubAssetSupport addr 0x2049f48 size 0x4c virtual false final false
static ::StringW GetAssetPathWithSubAssetSupport(UnityEngine::Object asset) ;

/// @brief Method GetSubAssetPathFromPath addr 0x2049f94 size 0xfc virtual false final false
static void GetSubAssetPathFromPath(::StringW fullPath, ByRef<::StringW> mainPath, ByRef<::StringW> subPath) ;

/// @brief Method GetAssetRelativePathStart addr 0x204a090 size 0x94 virtual false final false
static ::StringW GetAssetRelativePathStart() ;

/// @brief Method GetPackagesRelativePathStart addr 0x204a124 size 0x94 virtual false final false
static ::StringW GetPackagesRelativePathStart() ;

/// @brief Method GetAssetFullPath addr 0x204a1b8 size 0x54 virtual false final false
static ::StringW GetAssetFullPath(::StringW inPath) ;

/// @brief Method IsPathRelativeToAssets addr 0x204a264 size 0x28 virtual false final false
static bool IsPathRelativeToAssets(::StringW inPath) ;

/// @brief Method IsPathRelativeToPackages addr 0x204a28c size 0x28 virtual false final false
static bool IsPathRelativeToPackages(::StringW inPath) ;

/// @brief Method GetAssetRootPath addr 0x204a2b4 size 0x4c virtual false final false
static ::StringW GetAssetRootPath(UnityEngine::Object asset) ;

/// @brief Method GetUniqueAssetPath addr 0x204a300 size 0x4c virtual false final false
static ::StringW GetUniqueAssetPath(::StringW path) ;

/// @brief Method GetAssetOrScenePath addr 0x204a34c size 0x4c virtual false final false
static ::StringW GetAssetOrScenePath(UnityEngine::Object inputObject) ;

/// @brief Method IsPathInAssetCache addr 0x204a398 size 0x50 virtual false final false
static bool IsPathInAssetCache(::StringW path) ;

/// @brief Method IsPathInAssetCacheBakedFolder addr 0x204a3e8 size 0x4c virtual false final false
static bool IsPathInAssetCacheBakedFolder(::StringW path) ;

/// @brief Method IsPathInAssetCacheWorkingFolder addr 0x204a434 size 0x4c virtual false final false
static bool IsPathInAssetCacheWorkingFolder(::StringW path) ;

/// @brief Method IsAssetInAssetCacheBakedFolder addr 0x204a480 size 0x4c virtual false final false
static bool IsAssetInAssetCacheBakedFolder(UnityEngine::Object asset) ;

/// @brief Method IsAssetInAssetCacheWorkingFolder addr 0x204a4cc size 0x4c virtual false final false
static bool IsAssetInAssetCacheWorkingFolder(UnityEngine::Object asset) ;

/// @brief Method CreateAssetCacheFolder addr 0x204a518 size 0x4c virtual false final false
static ::StringW CreateAssetCacheFolder(::StringW suggestedAssetPath, int32_t hash) ;

/// @brief Method DeleteAssetCacheFolder addr 0x204a564 size 0x44 virtual false final false
static void DeleteAssetCacheFolder(::StringW assetCacheFolderPath) ;

/// @brief Method DeleteAsset addr 0x204a5a8 size 0x44 virtual false final false
static void DeleteAsset(UnityEngine::Object asset) ;

/// @brief Method DeleteAssetAtPath addr 0x204a5ec size 0x44 virtual false final false
static void DeleteAssetAtPath(::StringW path) ;

/// @brief Method DeleteAssetIfInBakedFolder addr 0x204a630 size 0x44 virtual false final false
static void DeleteAssetIfInBakedFolder(UnityEngine::Object asset) ;

/// @brief Method ContainsAsset addr 0x204a674 size 0x4c virtual false final false
static bool ContainsAsset(UnityEngine::Object assetObject) ;

/// @brief Method CopyAsset addr 0x204a6c0 size 0x4c virtual false final false
static bool CopyAsset(::StringW path, ::StringW newPath) ;

/// @brief Method CopyAndLoadAssetWithRelativePath addr 0x204a70c size 0x4c virtual false final false
static UnityEngine::Object CopyAndLoadAssetWithRelativePath(UnityEngine::Object srcAsset, ::StringW copyAssetFolder, ::StringW relativePath, System::Type type, bool bOverwriteExisting) ;

/// @brief Method CopyAndLoadAssetFromAssetCachePath addr 0x204a758 size 0x4c virtual false final false
static UnityEngine::Object CopyAndLoadAssetFromAssetCachePath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type, bool bOverwriteExisting) ;

/// @brief Method CopyAndLoadAssetAtAnyPath addr 0x204a7a4 size 0x4c virtual false final false
static UnityEngine::Object CopyAndLoadAssetAtAnyPath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type, bool bOverwriteExisting) ;

/// @brief Method CopyAndLoadAssetAtGivenPath addr 0x204a7f0 size 0x4c virtual false final false
static UnityEngine::Object CopyAndLoadAssetAtGivenPath(UnityEngine::Object srcAsset, ::StringW targetPath, System::Type type) ;

/// @brief Method CopyUniqueAndLoadAssetAtAnyPath addr 0x204a83c size 0x4c virtual false final false
static UnityEngine::Object CopyUniqueAndLoadAssetAtAnyPath(UnityEngine::Object srcAsset, ::StringW copyPath, System::Type type) ;

/// @brief Method CreateObjectInAssetCacheFolder addr 0x204a888 size 0x44 virtual false final false
static void CreateObjectInAssetCacheFolder(UnityEngine::Object objectToCreate, ::StringW assetCacheRoot, ::StringW relativeFolderPath, ::StringW assetFileName, System::Type type, bool bOverwriteExisting) ;

/// @brief Method CreateAsset addr 0x204a8cc size 0x44 virtual false final false
static void CreateAsset(UnityEngine::Object asset, ::StringW path) ;

/// @brief Method CreateAddObjectInAssetCacheFolder addr 0x204a910 size 0x44 virtual false final false
static void CreateAddObjectInAssetCacheFolder(::StringW assetName, ::StringW assetObjectFileName, UnityEngine::Object objectToAdd, ::StringW relativeFolderPath, ByRef<::StringW> exportRootPath, ByRef<UnityEngine::Object> assetDBObject) ;

/// @brief Method AddObjectToAsset addr 0x204a954 size 0x44 virtual false final false
static void AddObjectToAsset(UnityEngine::Object objectToAdd, UnityEngine::Object assetObject) ;

/// @brief Method SaveAndRefreshDatabase addr 0x204a998 size 0x4 virtual false final false
static void SaveAndRefreshDatabase() ;

/// @brief Method SaveAssetDatabase addr 0x204a99c size 0x4 virtual false final false
static void SaveAssetDatabase() ;

/// @brief Method RefreshAssetDatabase addr 0x204a9a0 size 0x4 virtual false final false
static void RefreshAssetDatabase() ;

/// @brief Method LoadAssetAtPath addr 0x204a9a4 size 0x4c virtual false final false
static UnityEngine::Object LoadAssetAtPath(::StringW assetPath, System::Type type) ;

/// @brief Method LoadSubAssetAtPath addr 0x204a9f0 size 0x14 virtual false final false
static UnityEngine::Object LoadSubAssetAtPath(::StringW mainPath, ::StringW subAssetPath) ;

/// @brief Method LoadAllAssetsAtPath addr 0x204aa50 size 0x4c virtual false final false
static ::ArrayW<UnityEngine::Object> LoadAllAssetsAtPath(::StringW assetPath) ;

/// @brief Method LoadAllAssetRepresentationsAtPath addr 0x204aa04 size 0x4c virtual false final false
static ::ArrayW<UnityEngine::Object> LoadAllAssetRepresentationsAtPath(::StringW assetPath) ;

/// @brief Method ImportAsset addr 0x204aa9c size 0x44 virtual false final false
static void ImportAsset(::StringW assetPath, HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions heuOptions) ;

/// @brief Method GetAssetWorkingPath addr 0x204aae0 size 0x4c virtual false final false
static ::StringW GetAssetWorkingPath() ;

/// @brief Method GetAssetBakedPath addr 0x204ab2c size 0x4c virtual false final false
static ::StringW GetAssetBakedPath() ;

/// @brief Method GetAssetBakedPathWithAssetName addr 0x204ab78 size 0x4c virtual false final false
static ::StringW GetAssetBakedPathWithAssetName(::StringW assetName) ;

/// @brief Method CreateUniqueBakePath addr 0x204abc4 size 0x4c virtual false final false
static ::StringW CreateUniqueBakePath(::StringW assetName) ;

/// @brief Method CreatePathWithFolders addr 0x204ac10 size 0x44 virtual false final false
static void CreatePathWithFolders(::StringW inPath) ;

/// @brief Method AppendMeshesPathToAssetFolder addr 0x204ac54 size 0xc8 virtual false final false
static ::StringW AppendMeshesPathToAssetFolder(::StringW inAssetCacheFolder) ;

/// @brief Method AppendTexturesPathToAssetFolder addr 0x204ae40 size 0xc8 virtual false final false
static ::StringW AppendTexturesPathToAssetFolder(::StringW inAssetCacheFolder) ;

/// @brief Method AppendMaterialsPathToAssetFolder addr 0x204af08 size 0xc8 virtual false final false
static ::StringW AppendMaterialsPathToAssetFolder(::StringW inAssetCacheFolder) ;

/// @brief Method AppendTerrainPathToAssetFolder addr 0x204afd0 size 0xc8 virtual false final false
static ::StringW AppendTerrainPathToAssetFolder(::StringW inAssetCacheFolder) ;

/// @brief Method GetAssetSubFolders addr 0x204b098 size 0x164 virtual false final false
static ::ArrayW<::StringW> GetAssetSubFolders() ;

/// @brief Method AppendPrefabPath addr 0x204b1fc size 0xe0 virtual false final false
static ::StringW AppendPrefabPath(::StringW inAssetCacheFolder, ::StringW assetName) ;

/// @brief Method AppendMeshesAssetFileName addr 0x204b2dc size 0x4c virtual false final false
static ::StringW AppendMeshesAssetFileName(::StringW assetName) ;

/// @brief Method IsSubAsset addr 0x204b328 size 0x8 virtual false final false
static bool IsSubAsset(UnityEngine::Object obj) ;

/// @brief Method GetAssetPathsFromAssetBundle addr 0x204b330 size 0x8 virtual false final false
static ::ArrayW<::StringW> GetAssetPathsFromAssetBundle(::StringW assetBundleFileName) ;

/// @brief Method IsAssetSavedInScene addr 0x204b338 size 0x4c virtual false final false
static bool IsAssetSavedInScene(UnityEngine::GameObject go) ;

/// @brief Method SelectAssetAtPath addr 0x204b384 size 0x4 virtual false final false
static void SelectAssetAtPath(::StringW path) ;

/// @brief Method PrintDependencies addr 0x204b388 size 0x4 virtual false final false
static void PrintDependencies(UnityEngine::GameObject targetGO) ;

/// @brief Method GetUniqueAssetPathForUnityAsset addr 0x204b38c size 0xbc virtual false final false
static ::StringW GetUniqueAssetPathForUnityAsset(UnityEngine::Object obj) ;

/// @brief Method LoadUnityAssetFromUniqueAssetPath addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T LoadUnityAssetFromUniqueAssetPath(::StringW assetPath) ;

/// @brief Method GetBuiltinExtraResource addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetBuiltinExtraResource(::StringW resourceName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AssetDatabase__HEU_ImportAssetOptions, "HoudiniEngineUnity", "HEU_AssetDatabase/HEU_ImportAssetOptions");
NEED_NO_BOX(HoudiniEngineUnity::HEU_AssetDatabase);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetDatabase, "HoudiniEngineUnity", "HEU_AssetDatabase");
