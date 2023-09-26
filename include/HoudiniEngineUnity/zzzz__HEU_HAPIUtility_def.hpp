#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Matrix4x4;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_Viewport;
}
namespace HoudiniEngineUnity {
struct HAPI_CookOptions;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_TransformEuler;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HAPIUtility;
}
// Type: HoudiniEngineUnity::HEU_HAPIUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9632))
// CS Name: HoudiniEngineUnity.HEU_HAPIUtility
class CORDL_TYPE HEU_HAPIUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_HAPIUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: " const&", def_value: None }]
constexpr HEU_HAPIUtility(HEU_HAPIUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HAPIUtility", modifiers: "&&", def_value: None }]
constexpr HEU_HAPIUtility(HEU_HAPIUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HAPIUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_HAPIUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HAPIUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HAPIUtility& operator=(HEU_HAPIUtility&& o) noexcept = default;
  constexpr HEU_HAPIUtility& operator=(HEU_HAPIUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetHoudiniEngineInstallationInfo addr 0x204b5dc size 0x40 virtual false final false
static ::StringW GetHoudiniEngineInstallationInfo() ;

/// @brief Method GetEnvironmentPath addr 0x204b61c size 0x48 virtual false final false
static ::StringW GetEnvironmentPath() ;

/// @brief Method GetRealPathFromHFSPath addr 0x204b664 size 0x160 virtual false final false
static ::StringW GetRealPathFromHFSPath(::StringW inPath) ;

/// @brief Method DoesMappedPathExist addr 0x204b818 size 0x9c virtual false final false
static bool DoesMappedPathExist(::StringW inPath) ;

/// @brief Method IsHoudiniAssetFile addr 0x204bb70 size 0x144 virtual false final false
static bool IsHoudiniAssetFile(::StringW filePath) ;

/// @brief Method FindHoudiniAssetFileInPathWithExt addr 0x204bcb4 size 0x284 virtual false final false
static ::StringW FindHoudiniAssetFileInPathWithExt(::StringW filePath) ;

/// @brief Method Log addr 0x204bf40 size 0x8 virtual false final false
static void Log(::StringW message) ;

/// @brief Method LogWarning addr 0x204bf48 size 0x8 virtual false final false
static void LogWarning(::StringW message) ;

/// @brief Method LogError addr 0x204bf50 size 0x8 virtual false final false
static void LogError(::StringW message) ;

/// @brief Method LocateValidFilePath addr 0x204bf58 size 0x6c virtual false final false
static ::StringW LocateValidFilePath(UnityEngine::Object inObject) ;

/// @brief Method LocateValidFilePath addr 0x204bfc4 size 0x8 virtual false final false
static ::StringW LocateValidFilePath(::StringW assetName, ::StringW inFilePath) ;

/// @brief Method InstantiateHDA addr 0x204bfcc size 0x260 virtual false final false
static UnityEngine::GameObject InstantiateHDA(::StringW filePath, UnityEngine::Vector3 initialPosition, HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, bool bLoadFromMemory, bool bAlwaysOverwriteOnLoad, UnityEngine::GameObject rootGO) ;

/// @brief Method LoadHDAFile addr 0x204c31c size 0x220 virtual false final false
static bool LoadHDAFile(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetPath, ByRef<int32_t> assetLibraryID, ByRef<::ArrayW<::StringW>> assetNames) ;

/// @brief Method CreateAndCookAssetNode addr 0x204c53c size 0x1b8 virtual false final false
static bool CreateAndCookAssetNode(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID) ;

/// @brief Method CreateAndCookCurveAsset addr 0x204c920 size 0xec virtual false final false
static bool CreateAndCookCurveAsset(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID) ;

/// @brief Method CreateAndCookInputAsset addr 0x204ca0c size 0x1d4 virtual false final false
static bool CreateAndCookInputAsset(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName, bool bCookTemplatedGeos, ByRef<int32_t> newAssetID) ;

/// @brief Method CookNodeInHoudini addr 0x204c8c8 size 0x58 virtual false final false
static bool CookNodeInHoudini(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, bool bCookTemplatedGeos, ::StringW assetName) ;

/// @brief Method CookNodeInHoudiniWithOptions addr 0x204cc38 size 0x7c virtual false final false
static bool CookNodeInHoudiniWithOptions(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID, HoudiniEngineUnity::HAPI_CookOptions options, ::StringW assetName) ;

/// @brief Method GetDefaultCookOptions addr 0x204ccb4 size 0x44 virtual false final false
static HoudiniEngineUnity::HAPI_CookOptions GetDefaultCookOptions(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ProcessHoudiniCookStatus addr 0x204c6f4 size 0x1d4 virtual false final false
static bool ProcessHoudiniCookStatus(HoudiniEngineUnity::HEU_SessionBase session, ::StringW assetName) ;

/// @brief Method CreateNewAsset addr 0x204cd58 size 0x3b0 virtual false final false
static UnityEngine::GameObject CreateNewAsset(HoudiniEngineUnity::HoudiniEngineUnity__HEU_HoudiniAsset__HEU_AssetType assetType, ::StringW rootName, UnityEngine::Transform parentTransform, HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, UnityEngine::GameObject rootGO) ;

/// @brief Method CreateNewCurveAsset addr 0x204d108 size 0x24 virtual false final false
static UnityEngine::GameObject CreateNewCurveAsset(::StringW name, UnityEngine::Transform parentTransform, HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, UnityEngine::GameObject rootGO) ;

/// @brief Method CreateNewInputAsset addr 0x204d12c size 0x24 virtual false final false
static UnityEngine::GameObject CreateNewInputAsset(::StringW name, UnityEngine::Transform parentTransform, HoudiniEngineUnity::HEU_SessionBase session, bool bBuildAsync, UnityEngine::GameObject rootGO) ;

/// @brief Method LoadGeoWithNewGeoSync addr 0x204d150 size 0x8 virtual false final false
static UnityEngine::GameObject LoadGeoWithNewGeoSync(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DestroyChildren addr 0x204d158 size 0x47c virtual false final false
static void DestroyChildren(UnityEngine::Transform inTransform) ;

/// @brief Method DestroyGameObject addr 0x204d5d4 size 0x10 virtual false final false
static void DestroyGameObject(UnityEngine::GameObject gameObect, bool bRegisterUndo) ;

/// @brief Method DestroyChildrenWithComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DestroyChildrenWithComponent(UnityEngine::GameObject gameObject) ;

/// @brief Method IsNodeValidInHoudini addr 0x204d5e4 size 0xa0 virtual false final false
static bool IsNodeValidInHoudini(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID) ;

/// @brief Method GetAssetInScene addr 0x204d684 size 0x104 virtual false final false
static HoudiniEngineUnity::HEU_HoudiniAssetRoot GetAssetInScene(int32_t assetID) ;

/// @brief Method ApplyWorldTransfromFromHoudiniToUnity addr 0x204d788 size 0x1e8 virtual false final false
static void ApplyWorldTransfromFromHoudiniToUnity(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform, UnityEngine::Transform unityTransform) ;

/// @brief Method ApplyLocalTransfromFromHoudiniToUnity addr 0x204d970 size 0x114 virtual false final false
static void ApplyLocalTransfromFromHoudiniToUnity(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform, UnityEngine::Transform unityTransform) ;

/// @brief Method ApplyLocalTransfromFromHoudiniToUnityForInstance addr 0x204da84 size 0x1c8 virtual false final false
static void ApplyLocalTransfromFromHoudiniToUnityForInstance(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform, UnityEngine::Transform unityTransform) ;

/// @brief Method ApplyMatrixToLocalTransform addr 0x204dc4c size 0x60 virtual false final false
static void ApplyMatrixToLocalTransform(ByRef<UnityEngine::Matrix4x4> matrix, UnityEngine::Transform transform) ;

/// @brief Method GetMatrixFromHAPITransform addr 0x204e07c size 0x17c virtual false final false
static UnityEngine::Matrix4x4 GetMatrixFromHAPITransform(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform, bool bConvertToUnity) ;

/// @brief Method GetQuaternion addr 0x204dcb8 size 0x360 virtual false final false
static UnityEngine::Quaternion GetQuaternion(ByRef<UnityEngine::Matrix4x4> m) ;

/// @brief Method GetPosition addr 0x204dcac size 0xc virtual false final false
static UnityEngine::Vector3 GetPosition(ByRef<UnityEngine::Matrix4x4> m) ;

/// @brief Method SetMatrixPosition addr 0x204e1f8 size 0x18 virtual false final false
static void SetMatrixPosition(ByRef<UnityEngine::Matrix4x4> m, ByRef<UnityEngine::Vector3> position) ;

/// @brief Method GetScale addr 0x204e018 size 0x64 virtual false final false
static UnityEngine::Vector3 GetScale(ByRef<UnityEngine::Matrix4x4> m) ;

/// @brief Method GetHAPITransformFromMatrix addr 0x204e210 size 0x178 virtual false final false
static HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransformFromMatrix(ByRef<UnityEngine::Matrix4x4> mat) ;

/// @brief Method GetHAPITransform addr 0x204e42c size 0x124 virtual false final false
static HoudiniEngineUnity::HAPI_TransformEuler GetHAPITransform(ByRef<UnityEngine::Vector3> p, ByRef<UnityEngine::Vector3> r, ByRef<UnityEngine::Vector3> s) ;

/// @brief Method GetHAPITransformQuatFromMatrix addr 0x204e550 size 0x1b4 virtual false final false
static HoudiniEngineUnity::HAPI_Transform GetHAPITransformQuatFromMatrix(ByRef<UnityEngine::Matrix4x4> mat) ;

/// @brief Method GetMatrix4x4 addr 0x204e7b0 size 0xc4 virtual false final false
static UnityEngine::Matrix4x4 GetMatrix4x4(ByRef<UnityEngine::Vector3> p, ByRef<UnityEngine::Vector3> r, ByRef<UnityEngine::Vector3> s) ;

/// @brief Method IsSameTransform addr 0x204e874 size 0x64 virtual false final false
static bool IsSameTransform(ByRef<UnityEngine::Matrix4x4> transformMatrix, ByRef<UnityEngine::Vector3> p, ByRef<UnityEngine::Vector3> r, ByRef<UnityEngine::Vector3> s) ;

/// @brief Method IsEqualTol addr 0x204e8d8 size 0x10 virtual false final false
static bool IsEqualTol(float_t a, float_t b, float_t t) ;

/// @brief Method IsTransformEqual addr 0x204e8e8 size 0x1a0 virtual false final false
static bool IsTransformEqual(ByRef<HoudiniEngineUnity::HAPI_Transform> transA, ByRef<HoudiniEngineUnity::HAPI_Transform> transB) ;

/// @brief Method IsViewportEqual addr 0x204ea88 size 0xe8 virtual false final false
static bool IsViewportEqual(ByRef<HoudiniEngineUnity::HAPI_Viewport> viewA, ByRef<HoudiniEngineUnity::HAPI_Viewport> viewB) ;

/// @brief Method IsSessionSyncEqual addr 0x204eb70 size 0x2c virtual false final false
static bool IsSessionSyncEqual(ByRef<HoudiniEngineUnity::HAPI_SessionSyncInfo> syncA, ByRef<HoudiniEngineUnity::HAPI_SessionSyncInfo> syncB) ;

/// @brief Method DoesGeoPartHaveAttribute addr 0x204eb9c size 0x40 virtual false final false
static bool DoesGeoPartHaveAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, HoudiniEngineUnity::HAPI_AttributeOwner owner, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) ;

/// @brief Method SetAnimationCurveTangentModes addr 0x204ebdc size 0x4 virtual false final false
static void SetAnimationCurveTangentModes(UnityEngine::AnimationCurve animCurve, System::Collections::Generic::List_1<int32_t> tangentValues) ;

/// @brief Method IsSupportedPolygonType addr 0x204ebe0 size 0x1c virtual false final false
static bool IsSupportedPolygonType(HoudiniEngineUnity::HAPI_PartType partType) ;

/// @brief Method GetParentNodeID addr 0x204ebfc size 0x68 virtual false final false
static int32_t GetParentNodeID(HoudiniEngineUnity::HEU_SessionBase session, int32_t nodeID) ;

/// @brief Method GetObjectInfos addr 0x204ec64 size 0x4b8 virtual false final false
static bool GetObjectInfos(HoudiniEngineUnity::HEU_SessionBase session, int32_t assetID, ByRef<HoudiniEngineUnity::HAPI_NodeInfo> nodeInfo, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_ObjectInfo>> objectInfos, ByRef<::ArrayW<HoudiniEngineUnity::HAPI_Transform>> objectTransforms) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_HAPIUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HAPIUtility, "HoudiniEngineUnity", "HEU_HAPIUtility");
