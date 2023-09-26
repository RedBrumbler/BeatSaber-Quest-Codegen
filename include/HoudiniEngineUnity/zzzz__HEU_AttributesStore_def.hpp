#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_AttributeData__AttributeType;
}
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
class HEU_AttributeData;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ToolsInfo;
}
namespace UnityEngine {
class MeshCollider;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AttributesStore;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc;
}
// Type: ::SetAttributeValueFunc
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9624))
// CS Name: HoudiniEngineUnity.HEU_AttributesStore::SetAttributeValueFunc
class CORDL_TYPE HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc(HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc(HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc& operator=(HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc& operator=(HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2049578 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2049650 size 0x14 virtual true final false
 void Invoke(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method BeginInvoke addr 0x2049664 size 0xe0 virtual true final false
 System::IAsyncResult BeginInvoke(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2049744 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_AttributesStore
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9625))
// CS Name: HoudiniEngineUnity.HEU_AttributesStore
class CORDL_TYPE HEU_AttributesStore : public UnityEngine::ScriptableObject {
public:
// Declarations
using SetAttributeValueFunc = HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributesStore>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributesStore>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~HEU_AttributesStore() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: " const&", def_value: None }]
constexpr HEU_AttributesStore(HEU_AttributesStore const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AttributesStore", modifiers: "&&", def_value: None }]
constexpr HEU_AttributesStore(HEU_AttributesStore&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AttributesStore(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_AttributesStore& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AttributesStore& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AttributesStore& operator=(HEU_AttributesStore&& o) noexcept = default;
  constexpr HEU_AttributesStore& operator=(HEU_AttributesStore const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__geoID, put=__set__geoID))  _geoID;

constexpr void __set__geoID(int32_t value) ;

constexpr int32_t __get__geoID() const;

 int32_t __declspec(property(get=__get__partID, put=__set__partID))  _partID;

constexpr void __set__partID(int32_t value) ;

constexpr int32_t __get__partID() const;

 ::StringW __declspec(property(get=__get__geoName, put=__set__geoName))  _geoName;

constexpr void __set__geoName(::StringW value) ;

constexpr ::StringW __get__geoName() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributeData> __declspec(property(get=__get__attributeDatas, put=__set__attributeDatas))  _attributeDatas;

constexpr void __set__attributeDatas(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributeData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributeData> __get__attributeDatas() const;

 bool __declspec(property(get=__get__hasColorAttribute, put=__set__hasColorAttribute))  _hasColorAttribute;

constexpr void __set__hasColorAttribute(bool value) ;

constexpr bool __get__hasColorAttribute() const;

 UnityEngine::Material __declspec(property(get=__get__localMaterial, put=__set__localMaterial))  _localMaterial;

constexpr void __set__localMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__localMaterial() const;

 UnityEngine::Transform __declspec(property(get=__get__outputTransform, put=__set__outputTransform))  _outputTransform;

constexpr void __set__outputTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__outputTransform() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__positionAttributeValues, put=__set__positionAttributeValues))  _positionAttributeValues;

constexpr void __set__positionAttributeValues(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__positionAttributeValues() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__vertexIndices, put=__set__vertexIndices))  _vertexIndices;

constexpr void __set__vertexIndices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__vertexIndices() const;

 UnityEngine::GameObject __declspec(property(get=__get__outputGameObject, put=__set__outputGameObject))  _outputGameObject;

constexpr void __set__outputGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__outputGameObject() const;

 UnityEngine::Mesh __declspec(property(get=__get__outputMesh, put=__set__outputMesh))  _outputMesh;

constexpr void __set__outputMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__outputMesh() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get__outputMaterials, put=__set__outputMaterials))  _outputMaterials;

constexpr void __set__outputMaterials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get__outputMaterials() const;

 UnityEngine::MeshCollider __declspec(property(get=__get__outputCollider, put=__set__outputCollider))  _outputCollider;

constexpr void __set__outputCollider(UnityEngine::MeshCollider value) ;

constexpr UnityEngine::MeshCollider __get__outputCollider() const;

 UnityEngine::Mesh __declspec(property(get=__get__outputColliderMesh, put=__set__outputColliderMesh))  _outputColliderMesh;

constexpr void __set__outputColliderMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__outputColliderMesh() const;

 UnityEngine::MeshCollider __declspec(property(get=__get__outputMeshCollider, put=__set__outputMeshCollider))  _outputMeshCollider;

constexpr void __set__outputMeshCollider(UnityEngine::MeshCollider value) ;

constexpr UnityEngine::MeshCollider __get__outputMeshCollider() const;

 UnityEngine::MeshCollider __declspec(property(get=__get__localMeshCollider, put=__set__localMeshCollider))  _localMeshCollider;

constexpr void __set__localMeshCollider(UnityEngine::MeshCollider value) ;

constexpr UnityEngine::MeshCollider __get__localMeshCollider() const;

 bool __declspec(property(get=__get__outputMeshRendererInitiallyEnabled, put=__set__outputMeshRendererInitiallyEnabled))  _outputMeshRendererInitiallyEnabled;

constexpr void __set__outputMeshRendererInitiallyEnabled(bool value) ;

constexpr bool __get__outputMeshRendererInitiallyEnabled() const;

 bool __declspec(property(get=__get__outputMeshColliderInitiallyEnabled, put=__set__outputMeshColliderInitiallyEnabled))  _outputMeshColliderInitiallyEnabled;

constexpr void __set__outputMeshColliderInitiallyEnabled(bool value) ;

constexpr bool __get__outputMeshColliderInitiallyEnabled() const;


// Properties

 int32_t __declspec(property(get=get_GeoID))  GeoID;

 int32_t __declspec(property(get=get_PartID))  PartID;

 ::StringW __declspec(property(get=get_GeoName))  GeoName;

 UnityEngine::Transform __declspec(property(get=get_OutputTransform))  OutputTransform;

 UnityEngine::Mesh __declspec(property(get=get_OutputMesh))  OutputMesh;


// Methods

/// @brief Method get_GeoID addr 0x2044a00 size 0x8 virtual false final false
 int32_t get_GeoID() ;

/// @brief Method get_PartID addr 0x2044a08 size 0x8 virtual false final false
 int32_t get_PartID() ;

/// @brief Method get_GeoName addr 0x2044a10 size 0x8 virtual false final false
 ::StringW get_GeoName() ;

/// @brief Method HasColorAttribute addr 0x2044a18 size 0x8 virtual false final false
 bool HasColorAttribute() ;

/// @brief Method get_OutputTransform addr 0x2044a20 size 0x8 virtual false final false
 UnityEngine::Transform get_OutputTransform() ;

/// @brief Method get_OutputMesh addr 0x2044a28 size 0x8 virtual false final false
 UnityEngine::Mesh get_OutputMesh() ;

/// @brief Method DestroyAllData addr 0x20436dc size 0xcc virtual false final false
 void DestroyAllData(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

/// @brief Method SyncAllAttributesFrom addr 0x2042ca0 size 0x698 virtual false final false
 void SyncAllAttributesFrom(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset asset, int32_t geoID, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo, UnityEngine::GameObject outputGameObject) ;

/// @brief Method SetupMeshAndMaterials addr 0x2043338 size 0x3a4 virtual false final false
 void SetupMeshAndMaterials(HoudiniEngineUnity::HEU_HoudiniAsset asset, HoudiniEngineUnity::HAPI_PartType partType, UnityEngine::GameObject outputGameObject) ;

/// @brief Method HasDirtyAttributes addr 0x20453d0 size 0x184 virtual false final false
 bool HasDirtyAttributes() ;

/// @brief Method SyncDirtyAttributesToHoudini addr 0x2045554 size 0x6c virtual false final false
 void SyncDirtyAttributesToHoudini(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method PopulateAttributeData addr 0x2044c74 size 0x75c virtual false final false
 void PopulateAttributeData(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HEU_AttributeData attributeData, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) ;

/// @brief Method GetAttributesList addr 0x2045ad4 size 0x268 virtual false final false
 void GetAttributesList(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributeData> attributesList, HoudiniEngineUnity::HAPI_AttributeOwner ownerType, int32_t attributeCount) ;

/// @brief Method UpdateAttribute addr 0x2045d3c size 0x4bc virtual false final false
 void UpdateAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HEU_AttributeData attributeData) ;

/// @brief Method UpdateAttributeList addr 0x20461f8 size 0x154 virtual false final false
 void UpdateAttributeList(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_AttributeData> attributeDataList) ;

/// @brief Method RefreshUpstreamInputs addr 0x204634c size 0x78 virtual false final false
 void RefreshUpstreamInputs(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadAttributeViaMeshInput addr 0x20455c0 size 0x4f8 virtual false final false
 bool UploadAttributeViaMeshInput(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method SetAttributeDataSyncd addr 0x2045ab8 size 0x1c virtual false final false
static void SetAttributeDataSyncd(HoudiniEngineUnity::HEU_AttributeData attributeData) ;

/// @brief Method SetAttributeDataDirty addr 0x20463c4 size 0x1c virtual false final false
static void SetAttributeDataDirty(HoudiniEngineUnity::HEU_AttributeData attributeData) ;

/// @brief Method CreateAttribute addr 0x2044bc0 size 0xb4 virtual false final false
 HoudiniEngineUnity::HEU_AttributeData CreateAttribute(::StringW attributeName, ByRef<HoudiniEngineUnity::HAPI_AttributeInfo> attributeInfo) ;

/// @brief Method GetAttributeData addr 0x2044a30 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_AttributeData GetAttributeData(::StringW name) ;

/// @brief Method GetAttributeData addr 0x20463e0 size 0x84 virtual false final false
 HoudiniEngineUnity::HEU_AttributeData GetAttributeData(int32_t index) ;

/// @brief Method GetAttributeNames addr 0x2046464 size 0x204 virtual false final false
 System::Collections::Generic::List_1<::StringW> GetAttributeNames() ;

/// @brief Method EnablePaintCollider addr 0x2046668 size 0x1a4 virtual false final false
 void EnablePaintCollider() ;

/// @brief Method DisablePaintCollider addr 0x204680c size 0x118 virtual false final false
 void DisablePaintCollider() ;

/// @brief Method ShowPaintMesh addr 0x2046924 size 0x124 virtual false final false
 void ShowPaintMesh() ;

/// @brief Method HidePaintMesh addr 0x2046a48 size 0xe8 virtual false final false
 void HidePaintMesh() ;

/// @brief Method HasMeshForPainting addr 0x2046b30 size 0x60 virtual false final false
 bool HasMeshForPainting() ;

/// @brief Method GetPaintMeshCollider addr 0x2046b90 size 0x78 virtual false final false
 UnityEngine::MeshCollider GetPaintMeshCollider() ;

/// @brief Method PaintAttribute addr 0x2046c08 size 0x54 virtual false final false
 void PaintAttribute(HoudiniEngineUnity::HEU_AttributeData attributeData, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t attributeIndex, float_t paintFactor, HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc setAttrFunc) ;

/// @brief Method SetAttributeEditValueInt addr 0x2046c5c size 0x6c virtual false final false
static void SetAttributeEditValueInt(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<int32_t> values) ;

/// @brief Method SetAttributeEditValueFloat addr 0x2046cc8 size 0x6c virtual false final false
static void SetAttributeEditValueFloat(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<float_t> values) ;

/// @brief Method SetAttributeEditValueString addr 0x2046d34 size 0xdc virtual false final false
static void SetAttributeEditValueString(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t startIndex, ::ArrayW<::StringW> values) ;

/// @brief Method ReplaceAttributeValueInt addr 0x2046e10 size 0x1e4 virtual false final false
static void ReplaceAttributeValueInt(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method AddAttributeValueInt addr 0x2046ff4 size 0x1b4 virtual false final false
static void AddAttributeValueInt(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method SubtractAttributeValueInt addr 0x20471a8 size 0x1b4 virtual false final false
static void SubtractAttributeValueInt(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method MultiplyAttributeValueInt addr 0x204735c size 0x1e8 virtual false final false
static void MultiplyAttributeValueInt(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method ReplaceAttributeValueFloat addr 0x2047544 size 0xa8 virtual false final false
static void ReplaceAttributeValueFloat(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method AddAttributeValueFloat addr 0x20475ec size 0xa0 virtual false final false
static void AddAttributeValueFloat(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method SubtractAttributeValueFloat addr 0x204768c size 0xa0 virtual false final false
static void SubtractAttributeValueFloat(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method MultiplyAttributeValueFloat addr 0x204772c size 0xb8 virtual false final false
static void MultiplyAttributeValueFloat(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method SetAttributeValueString addr 0x20477e4 size 0xdc virtual false final false
static void SetAttributeValueString(HoudiniEngineUnity::HEU_AttributeData attributeData, int32_t targetIndex, HoudiniEngineUnity::HEU_ToolsInfo sourceTools, int32_t sourceIndex, float_t factor) ;

/// @brief Method FillAttribute addr 0x20478c0 size 0xa0 virtual false final false
 void FillAttribute(HoudiniEngineUnity::HEU_AttributeData attributeData, HoudiniEngineUnity::HEU_ToolsInfo sourceTools) ;

/// @brief Method AreAttributesDirty addr 0x2047b6c size 0x174 virtual false final false
 bool AreAttributesDirty() ;

/// @brief Method GetPositionAttributeValues addr 0x2047ce0 size 0xc virtual false final false
 void GetPositionAttributeValues(ByRef<::ArrayW<UnityEngine::Vector3>> positionArray) ;

/// @brief Method GetVertexIndices addr 0x2047cec size 0xc virtual false final false
 void GetVertexIndices(ByRef<::ArrayW<int32_t>> indices) ;

/// @brief Method GetAttributeSetValueFunction addr 0x2047960 size 0x20c virtual false final false
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc GetAttributeSetValueFunction(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType attrType, HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode paintMergeMode) ;

/// @brief Method CopyAttributeValuesTo addr 0x2047cf8 size 0x1d8 virtual false final false
 void CopyAttributeValuesTo(HoudiniEngineUnity::HEU_AttributesStore destAttrStore) ;

/// @brief Method IsValidStore addr 0x2047ed0 size 0x64 virtual false final false
 bool IsValidStore(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method IsEquivalentTo addr 0x2047f34 size 0x578 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_AttributesStore other) ;

// Ctor Parameters []
explicit HEU_AttributesStore() ;

/// @brief Method .ctor addr 0x20484ac size 0x10cc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_AttributesStore);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AttributesStore, "HoudiniEngineUnity", "HEU_AttributesStore");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributesStore__SetAttributeValueFunc, "HoudiniEngineUnity", "HEU_AttributesStore/SetAttributeValueFunc");
