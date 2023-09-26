#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
// Type: HoudiniEngineUnity::HEU_ObjectNode
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9614))
// CS Name: HoudiniEngineUnity.HEU_ObjectNode
class CORDL_TYPE HEU_ObjectNode : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ObjectNode>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~HEU_ObjectNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: " const&", def_value: None }]
constexpr HEU_ObjectNode(HEU_ObjectNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectNode", modifiers: "&&", def_value: None }]
constexpr HEU_ObjectNode(HEU_ObjectNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ObjectNode(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_ObjectNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ObjectNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ObjectNode& operator=(HEU_ObjectNode&& o) noexcept = default;
  constexpr HEU_ObjectNode& operator=(HEU_ObjectNode const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__objName, put=__set__objName))  _objName;

constexpr void __set__objName(::StringW value) ;

constexpr ::StringW __get__objName() const;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__parentAsset, put=__set__parentAsset))  _parentAsset;

constexpr void __set__parentAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__parentAsset() const;

 HoudiniEngineUnity::HAPI_ObjectInfo __declspec(property(get=__get__objectInfo, put=__set__objectInfo))  _objectInfo;

constexpr void __set__objectInfo(HoudiniEngineUnity::HAPI_ObjectInfo value) ;

constexpr HoudiniEngineUnity::HAPI_ObjectInfo __get__objectInfo() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode> __declspec(property(get=__get__geoNodes, put=__set__geoNodes))  _geoNodes;

constexpr void __set__geoNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode> __get__geoNodes() const;

 HoudiniEngineUnity::HAPI_Transform __declspec(property(get=__get__objectTransform, put=__set__objectTransform))  _objectTransform;

constexpr void __set__objectTransform(HoudiniEngineUnity::HAPI_Transform value) ;

constexpr HoudiniEngineUnity::HAPI_Transform __get__objectTransform() const;


// Properties

 int32_t __declspec(property(get=get_ObjectID))  ObjectID;

 ::StringW __declspec(property(get=get_ObjectName))  ObjectName;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=get_ParentAsset))  ParentAsset;


// Methods

/// @brief Method get_ObjectID addr 0x2037848 size 0x8 virtual false final false
 int32_t get_ObjectID() ;

/// @brief Method get_ObjectName addr 0x2037850 size 0x8 virtual false final false
 ::StringW get_ObjectName() ;

/// @brief Method get_ParentAsset addr 0x2037858 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset get_ParentAsset() ;

/// @brief Method IsInstanced addr 0x2037860 size 0x8 virtual false final false
 bool IsInstanced() ;

/// @brief Method IsVisible addr 0x2037868 size 0x8 virtual false final false
 bool IsVisible() ;

// Ctor Parameters []
explicit HEU_ObjectNode() ;

/// @brief Method .ctor addr 0x2037870 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x203788c size 0xd8 virtual false final false
 void Reset() ;

/// @brief Method SyncWithObjectInfo addr 0x2037964 size 0xe8 virtual false final false
 void SyncWithObjectInfo(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method Initialize addr 0x2037a4c size 0x430 virtual false final false
 void Initialize(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, HoudiniEngineUnity::HAPI_Transform objectTranform, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method DestroyAllData addr 0x2037f30 size 0x100 virtual false final false
 void DestroyAllData(bool bIsRebuild) ;

/// @brief Method CreateGeoNode addr 0x2037e7c size 0xb4 virtual false final false
 HoudiniEngineUnity::HEU_GeoNode CreateGeoNode(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_GeoInfo geoInfo) ;

/// @brief Method GetDebugInfo addr 0x2038030 size 0x2bc virtual false final false
 void GetDebugInfo(System::Text::StringBuilder sb) ;

/// @brief Method SetObjectInfo addr 0x20382ec size 0x1c virtual false final false
 void SetObjectInfo(HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo) ;

/// @brief Method UpdateObject addr 0x2038308 size 0x9f8 virtual false final false
 void UpdateObject(HoudiniEngineUnity::HEU_SessionBase session, bool bForceUpdate) ;

/// @brief Method GenerateGeometry addr 0x2038d00 size 0x714 virtual false final false
 void GenerateGeometry(HoudiniEngineUnity::HEU_SessionBase session, bool bRebuild) ;

/// @brief Method GeneratePartInstances addr 0x2039a4c size 0x154 virtual false final false
 void GeneratePartInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GenerateAttributesStore addr 0x2039ba0 size 0x154 virtual false final false
 void GenerateAttributesStore(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ApplyObjectTransformToGeoNodes addr 0x203982c size 0x154 virtual false final false
 void ApplyObjectTransformToGeoNodes() ;

/// @brief Method IsUsingMaterial addr 0x2039cf4 size 0x180 virtual false final false
 bool IsUsingMaterial(HoudiniEngineUnity::HEU_MaterialData materialData) ;

/// @brief Method GetClonableParts addr 0x2039e74 size 0x164 virtual false final false
 void GetClonableParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> clonableParts) ;

/// @brief Method GetOutputGameObjects addr 0x2039fd8 size 0x154 virtual false final false
 void GetOutputGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method GetOutput addr 0x203a12c size 0x154 virtual false final false
 void GetOutput(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput> outputs) ;

/// @brief Method GetHDAPartWithGameObject addr 0x203a280 size 0x1ac virtual false final false
 HoudiniEngineUnity::HEU_PartData GetHDAPartWithGameObject(UnityEngine::GameObject outputGameObject) ;

/// @brief Method GetGeoNode addr 0x203a42c size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_GeoNode GetGeoNode(::StringW geoName) ;

/// @brief Method GetCurves addr 0x203a5bc size 0x158 virtual false final false
 void GetCurves(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> curves, bool bEditableOnly) ;

/// @brief Method GetOutputGeoNodes addr 0x203a714 size 0x1e0 virtual false final false
 void GetOutputGeoNodes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeoNode> outGeoNodes) ;

/// @brief Method GenerateObjectInstances addr 0x203a8f4 size 0x48c virtual false final false
 void GenerateObjectInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ClearObjectInstances addr 0x203c578 size 0x184 virtual false final false
 void ClearObjectInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method PopulateObjectInstanceInfos addr 0x203ca0c size 0x138 virtual false final false
 void PopulateObjectInstanceInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_ObjectInstanceInfo> objInstanceInfos) ;

/// @brief Method ProcessUnityScriptAttributes addr 0x203cb9c size 0x154 virtual false final false
 void ProcessUnityScriptAttributes(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method HideAllGeometry addr 0x203ccf0 size 0x14c virtual false final false
 void HideAllGeometry() ;

/// @brief Method CalculateVisibility addr 0x203ce3c size 0x150 virtual false final false
 void CalculateVisibility() ;

/// @brief Method CalculateColliderState addr 0x203cf8c size 0x14c virtual false final false
 void CalculateColliderState() ;

/// @brief Method DisableAllColliders addr 0x203d0d8 size 0x14c virtual false final false
 void DisableAllColliders() ;

/// @brief Method IsInstancer addr 0x203ad80 size 0x184 virtual false final false
 bool IsInstancer() ;

/// @brief Method ToString addr 0x203d224 size 0x70 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsEquivalentTo addr 0x203d294 size 0x280 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_ObjectNode other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_ObjectNode);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ObjectNode, "HoudiniEngineUnity", "HEU_ObjectNode");
