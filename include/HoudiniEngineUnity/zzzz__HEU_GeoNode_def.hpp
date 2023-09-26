#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace System::Text {
class StringBuilder;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_PartInfo;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_InputNode;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HEU_ObjectNode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
// Type: HoudiniEngineUnity::HEU_GeoNode
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9589))
// CS Name: HoudiniEngineUnity.HEU_GeoNode
class CORDL_TYPE HEU_GeoNode : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr operator  UnityEngine::ISerializationCallbackReceiver() const noexcept;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeoNode>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeoNode>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~HEU_GeoNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: " const&", def_value: None }]
constexpr HEU_GeoNode(HEU_GeoNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeoNode", modifiers: "&&", def_value: None }]
constexpr HEU_GeoNode(HEU_GeoNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeoNode(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_GeoNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeoNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeoNode& operator=(HEU_GeoNode&& o) noexcept = default;
  constexpr HEU_GeoNode& operator=(HEU_GeoNode const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HAPI_GeoInfo __declspec(property(get=__get__geoInfo, put=__set__geoInfo))  _geoInfo;

constexpr void __set__geoInfo(HoudiniEngineUnity::HAPI_GeoInfo value) ;

constexpr HoudiniEngineUnity::HAPI_GeoInfo __get__geoInfo() const;

 ::StringW __declspec(property(get=__get__geoName, put=__set__geoName))  _geoName;

constexpr void __set__geoName(::StringW value) ;

constexpr ::StringW __get__geoName() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> __declspec(property(get=__get__parts, put=__set__parts))  _parts;

constexpr void __set__parts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> __get__parts() const;

 HoudiniEngineUnity::HEU_ObjectNode __declspec(property(get=__get__containerObjectNode, put=__set__containerObjectNode))  _containerObjectNode;

constexpr void __set__containerObjectNode(HoudiniEngineUnity::HEU_ObjectNode value) ;

constexpr HoudiniEngineUnity::HEU_ObjectNode __get__containerObjectNode() const;

 HoudiniEngineUnity::HEU_InputNode __declspec(property(get=__get__inputNode, put=__set__inputNode))  _inputNode;

constexpr void __set__inputNode(HoudiniEngineUnity::HEU_InputNode value) ;

constexpr HoudiniEngineUnity::HEU_InputNode __get__inputNode() const;

 HoudiniEngineUnity::HEU_Curve __declspec(property(get=__get__geoCurve, put=__set__geoCurve))  _geoCurve;

constexpr void __set__geoCurve(HoudiniEngineUnity::HEU_Curve value) ;

constexpr HoudiniEngineUnity::HEU_Curve __get__geoCurve() const;

 HoudiniEngineUnity::HEU_VolumeCache __declspec(property(get=__get__volumeCache, put=__set__volumeCache))  _volumeCache;

constexpr void __set__volumeCache(HoudiniEngineUnity::HEU_VolumeCache value) ;

constexpr HoudiniEngineUnity::HEU_VolumeCache __get__volumeCache() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> __declspec(property(get=__get__volumeCaches, put=__set__volumeCaches))  _volumeCaches;

constexpr void __set__volumeCaches(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> __get__volumeCaches() const;


// Properties

 int32_t __declspec(property(get=get_GeoID))  GeoID;

 ::StringW __declspec(property(get=get_GeoName))  GeoName;

 HoudiniEngineUnity::HAPI_GeoType __declspec(property(get=get_GeoType))  GeoType;

 bool __declspec(property(get=get_Editable))  Editable;

 bool __declspec(property(get=get_Displayable))  Displayable;

 HoudiniEngineUnity::HEU_ObjectNode __declspec(property(get=get_ObjectNode))  ObjectNode;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=get_ParentAsset))  ParentAsset;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> __declspec(property(get=get_VolumeCaches))  VolumeCaches;


// Methods

/// @brief Method get_GeoID addr 0x2012828 size 0x8 virtual false final false
 int32_t get_GeoID() ;

/// @brief Method get_GeoName addr 0x201d0c8 size 0x8 virtual false final false
 ::StringW get_GeoName() ;

/// @brief Method get_GeoType addr 0x201d0d0 size 0x8 virtual false final false
 HoudiniEngineUnity::HAPI_GeoType get_GeoType() ;

/// @brief Method get_Editable addr 0x201d0d8 size 0x8 virtual false final false
 bool get_Editable() ;

/// @brief Method get_Displayable addr 0x201d0e0 size 0x8 virtual false final false
 bool get_Displayable() ;

/// @brief Method IsVisible addr 0x201d0e8 size 0x1c virtual false final false
 bool IsVisible() ;

/// @brief Method IsIntermediate addr 0x201d104 size 0x10 virtual false final false
 bool IsIntermediate() ;

/// @brief Method IsIntermediateOrEditable addr 0x201d114 size 0x30 virtual false final false
 bool IsIntermediateOrEditable() ;

/// @brief Method IsGeoInputType addr 0x201d144 size 0x20 virtual false final false
 bool IsGeoInputType() ;

/// @brief Method IsGeoCurveType addr 0x201d164 size 0x10 virtual false final false
 bool IsGeoCurveType() ;

/// @brief Method get_ObjectNode addr 0x201d174 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_ObjectNode get_ObjectNode() ;

/// @brief Method get_ParentAsset addr 0x201d17c size 0x80 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset get_ParentAsset() ;

/// @brief Method get_VolumeCaches addr 0x201d1fc size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> get_VolumeCaches() ;

// Ctor Parameters []
explicit HEU_GeoNode() ;

/// @brief Method .ctor addr 0x201d204 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method OnBeforeSerialize addr 0x201d2d0 size 0x4 virtual true final true
 void OnBeforeSerialize() ;

/// @brief Method OnAfterDeserialize addr 0x201d2d4 size 0x13c virtual true final true
 void OnAfterDeserialize() ;

/// @brief Method DestroyAllData addr 0x201d410 size 0x1ac virtual false final false
 void DestroyAllData(bool bIsRebuild) ;

/// @brief Method RemoveAndDestroyPart addr 0x201d7cc size 0x64 virtual false final false
 void RemoveAndDestroyPart(HoudiniEngineUnity::HEU_PartData part) ;

/// @brief Method Reset addr 0x201d220 size 0xb0 virtual false final false
 void Reset() ;

/// @brief Method Initialize addr 0x201d830 size 0x134 virtual false final false
 void Initialize(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HAPI_GeoInfo geoInfo, HoudiniEngineUnity::HEU_ObjectNode containerObjectNode) ;

/// @brief Method DoesThisRequirePotentialCook addr 0x201d964 size 0x60 virtual false final false
 bool DoesThisRequirePotentialCook() ;

/// @brief Method UpdateGeo addr 0x201d9c4 size 0x628 virtual false final false
 void UpdateGeo(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ProcessUnityScriptAttribute addr 0x201eac0 size 0x1f8 virtual false final false
 void ProcessUnityScriptAttribute(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ProcessPart addr 0x201e1b0 size 0x910 virtual false final false
 void ProcessPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID, ByRef<HoudiniEngineUnity::HAPI_PartInfo> partInfo, ByRef<HoudiniEngineUnity::HEU_PartData> partData) ;

/// @brief Method SetupGameObjectAndTransform addr 0x201ed8c size 0x280 virtual false final false
 void SetupGameObjectAndTransform(HoudiniEngineUnity::HEU_PartData partData, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method GetPartsByOutputType addr 0x201f180 size 0x19c virtual false final false
 void GetPartsByOutputType(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> meshParts, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> volumeParts) ;

/// @brief Method GeneratePartInstances addr 0x201f31c size 0xe8 virtual false final false
 void GeneratePartInstances(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method GenerateAttributesStore addr 0x201f404 size 0xa4 virtual false final false
 void GenerateAttributesStore(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ProcessGeoCurve addr 0x201dfec size 0x1c4 virtual false final false
 void ProcessGeoCurve(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method SetupGeoCurveGameObjectAndTransform addr 0x201f4a8 size 0x1e0 virtual false final false
 void SetupGeoCurveGameObjectAndTransform(HoudiniEngineUnity::HEU_Curve curve) ;

/// @brief Method ClearObjectInstances addr 0x201f688 size 0x98 virtual false final false
 void ClearObjectInstances() ;

/// @brief Method SetGeoInfo addr 0x201f720 size 0x9c virtual false final false
 void SetGeoInfo(HoudiniEngineUnity::HAPI_GeoInfo geoInfo) ;

/// @brief Method GeneratePartFullName addr 0x201f00c size 0x16c virtual false final false
 ::StringW GeneratePartFullName(::StringW partName) ;

/// @brief Method GenerateGeoCurveName addr 0x201f7bc size 0x8 virtual false final false
 ::StringW GenerateGeoCurveName() ;

/// @brief Method HasGeoNodeChanged addr 0x201f7c4 size 0xe8 virtual false final false
 bool HasGeoNodeChanged(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method ApplyHAPITransform addr 0x201f8ac size 0x154 virtual false final false
 void ApplyHAPITransform(ByRef<HoudiniEngineUnity::HAPI_Transform> hapiTransform) ;

/// @brief Method GetDebugInfo addr 0x201fa00 size 0x3ac virtual false final false
 void GetDebugInfo(System::Text::StringBuilder sb) ;

/// @brief Method IsUsingMaterial addr 0x201fdac size 0x180 virtual false final false
 bool IsUsingMaterial(HoudiniEngineUnity::HEU_MaterialData materialData) ;

/// @brief Method GetClonableParts addr 0x201ff2c size 0x154 virtual false final false
 void GetClonableParts(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> clonableParts) ;

/// @brief Method GetOutputGameObjects addr 0x2020080 size 0x154 virtual false final false
 void GetOutputGameObjects(System::Collections::Generic::List_1<UnityEngine::GameObject> outputObjects) ;

/// @brief Method GetOutput addr 0x20201d4 size 0x154 virtual false final false
 void GetOutput(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutput> outputs) ;

/// @brief Method GetHDAPartWithGameObject addr 0x2020328 size 0x1ac virtual false final false
 HoudiniEngineUnity::HEU_PartData GetHDAPartWithGameObject(UnityEngine::GameObject outputGameObject) ;

/// @brief Method GetPartFromPartID addr 0x20204d4 size 0xcc virtual false final false
 HoudiniEngineUnity::HEU_PartData GetPartFromPartID(int32_t partID) ;

/// @brief Method GetCurves addr 0x20205a0 size 0x2c4 virtual false final false
 void GetCurves(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_Curve> curves, bool bEditableOnly) ;

/// @brief Method GetParts addr 0x2020864 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> GetParts() ;

/// @brief Method HasAttribInstancer addr 0x202086c size 0x170 virtual false final false
 bool HasAttribInstancer() ;

/// @brief Method SetAttributeModifiersOnPartOutputs addr 0x20209dc size 0x204 virtual false final false
 void SetAttributeModifiersOnPartOutputs(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method CalculateVisiblity addr 0x2020be0 size 0x10c virtual false final false
 void CalculateVisiblity(bool bParentVisibility) ;

/// @brief Method HideAllGeometry addr 0x2020cec size 0xa0 virtual false final false
 void HideAllGeometry() ;

/// @brief Method CalculateColliderState addr 0x2020d8c size 0x9c virtual false final false
 void CalculateColliderState() ;

/// @brief Method DisableAllColliders addr 0x2020e28 size 0xa0 virtual false final false
 void DisableAllColliders() ;

/// @brief Method ProcessVolumeParts addr 0x2020ec8 size 0x68c virtual false final false
 void ProcessVolumeParts(HoudiniEngineUnity::HEU_SessionBase session, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> volumeParts, bool bRebuild) ;

/// @brief Method GetVolumeCacheByTileIndex addr 0x2021554 size 0x164 virtual false final false
 HoudiniEngineUnity::HEU_VolumeCache GetVolumeCacheByTileIndex(int32_t tileIndex) ;

/// @brief Method DestroyVolumeCache addr 0x201d66c size 0x160 virtual false final false
 void DestroyVolumeCache() ;

/// @brief Method ToString addr 0x2021760 size 0x70 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsEquivalentTo addr 0x20217d0 size 0x2a0 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_GeoNode other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_GeoNode);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeoNode, "HoudiniEngineUnity", "HEU_GeoNode");
