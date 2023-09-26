#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTerrain;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain;
}
// Type: ::HEU_InputDataTerrain
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9798))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9803))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTerrain::HEU_InputDataTerrain
class CORDL_TYPE HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain : public HoudiniEngineUnity::HEU_InputData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain(HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain(HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputData(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain& operator=(HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain& operator=(HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__heightFieldName, put=__set__heightFieldName))  _heightFieldName;

constexpr void __set__heightFieldName(::StringW value) ;

constexpr ::StringW __get__heightFieldName() const;

 int32_t __declspec(property(get=__get__parentNodeID, put=__set__parentNodeID))  _parentNodeID;

constexpr void __set__parentNodeID(int32_t value) ;

constexpr int32_t __get__parentNodeID() const;

 float_t __declspec(property(get=__get__voxelSize, put=__set__voxelSize))  _voxelSize;

constexpr void __set__voxelSize(float_t value) ;

constexpr float_t __get__voxelSize() const;

 UnityEngine::Terrain __declspec(property(get=__get__terrain, put=__set__terrain))  _terrain;

constexpr void __set__terrain(UnityEngine::Terrain value) ;

constexpr UnityEngine::Terrain __get__terrain() const;

 UnityEngine::TerrainData __declspec(property(get=__get__terrainData, put=__set__terrainData))  _terrainData;

constexpr void __set__terrainData(UnityEngine::TerrainData value) ;

constexpr UnityEngine::TerrainData __get__terrainData() const;

 int32_t __declspec(property(get=__get__numPointsX, put=__set__numPointsX))  _numPointsX;

constexpr void __set__numPointsX(int32_t value) ;

constexpr int32_t __get__numPointsX() const;

 int32_t __declspec(property(get=__get__numPointsY, put=__set__numPointsY))  _numPointsY;

constexpr void __set__numPointsY(int32_t value) ;

constexpr int32_t __get__numPointsY() const;

 HoudiniEngineUnity::HAPI_Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(HoudiniEngineUnity::HAPI_Transform value) ;

constexpr HoudiniEngineUnity::HAPI_Transform __get__transform() const;

 float_t __declspec(property(get=__get__heightScale, put=__set__heightScale))  _heightScale;

constexpr void __set__heightScale(float_t value) ;

constexpr float_t __get__heightScale() const;

 int32_t __declspec(property(get=__get__heightfieldNodeID, put=__set__heightfieldNodeID))  _heightfieldNodeID;

constexpr void __set__heightfieldNodeID(int32_t value) ;

constexpr int32_t __get__heightfieldNodeID() const;

 int32_t __declspec(property(get=__get__heightNodeID, put=__set__heightNodeID))  _heightNodeID;

constexpr void __set__heightNodeID(int32_t value) ;

constexpr int32_t __get__heightNodeID() const;

 int32_t __declspec(property(get=__get__maskNodeID, put=__set__maskNodeID))  _maskNodeID;

constexpr void __set__maskNodeID(int32_t value) ;

constexpr int32_t __get__maskNodeID() const;

 int32_t __declspec(property(get=__get__mergeNodeID, put=__set__mergeNodeID))  _mergeNodeID;

constexpr void __set__mergeNodeID(int32_t value) ;

constexpr int32_t __get__mergeNodeID() const;


// Methods

// Ctor Parameters []
explicit HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain() ;

/// @brief Method .ctor addr 0x2091288 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceTerrain
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9799))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9804))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTerrain
class CORDL_TYPE HEU_InputInterfaceTerrain : public HoudiniEngineUnity::HEU_InputInterface {
public:
// Declarations
using HEU_InputDataTerrain = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputInterfaceTerrain() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: " const&", def_value: None }]
constexpr HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTerrain", modifiers: "&&", def_value: None }]
constexpr HEU_InputInterfaceTerrain(HEU_InputInterfaceTerrain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputInterfaceTerrain(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputInterface(ptr) {
}


  constexpr HEU_InputInterfaceTerrain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputInterfaceTerrain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputInterfaceTerrain& operator=(HEU_InputInterfaceTerrain&& o) noexcept = default;
  constexpr HEU_InputInterfaceTerrain& operator=(HEU_InputInterfaceTerrain const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HEU_InputInterfaceTerrain() ;

/// @brief Method .ctor addr 0x208ed08 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method CreateInputNodeWithDataUpload addr 0x208ed14 size 0x1a4 virtual true final false
 bool CreateInputNodeWithDataUpload(HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID) ;

/// @brief Method SetMaskLayer addr 0x2090354 size 0x11c virtual false final false
 bool SetMaskLayer(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) ;

/// @brief Method IsThisInputObjectSupported addr 0x20906e0 size 0xc8 virtual true final false
 bool IsThisInputObjectSupported(UnityEngine::GameObject inputObject) ;

/// @brief Method CreateHeightFieldInputNode addr 0x208f364 size 0x13c virtual false final false
 bool CreateHeightFieldInputNode(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt) ;

/// @brief Method UploadHeightValuesWithTransform addr 0x208f4a0 size 0x800 virtual false final false
 bool UploadHeightValuesWithTransform(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo) ;

/// @brief Method UploadAlphaMaps addr 0x208fca0 size 0x6b4 virtual false final false
 bool UploadAlphaMaps(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ByRef<bool> bMaskSet) ;

/// @brief Method SetHeightFieldData addr 0x2090470 size 0x270 virtual false final false
 bool SetHeightFieldData(HoudiniEngineUnity::HEU_SessionBase session, int32_t volumeNodeID, int32_t partID, ::ArrayW<float_t> heightValues, ::StringW heightFieldName, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo) ;

/// @brief Method SetTerrainDataAttributesToHeightField addr 0x2090bcc size 0x1b4 virtual false final false
 bool SetTerrainDataAttributesToHeightField(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, UnityEngine::TerrainData terrainData) ;

/// @brief Method SetTerrainLayerAttributesToHeightField addr 0x2091048 size 0x1b4 virtual false final false
 bool SetTerrainLayerAttributesToHeightField(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, UnityEngine::TerrainLayer terrainLayer) ;

/// @brief Method SetTreePrototypes addr 0x2090d80 size 0x2c8 virtual false final false
 void SetTreePrototypes(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, UnityEngine::TerrainData terrainData) ;

/// @brief Method SetTreeInstances addr 0x2091270 size 0x18 virtual false final false
 void SetTreeInstances(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, UnityEngine::TerrainData terrainData) ;

/// @brief Method GenerateTerrainDataFromGameObject addr 0x208ef18 size 0x44c virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain GenerateTerrainDataFromGameObject(UnityEngine::GameObject inputObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputInterfaceTerrain);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterfaceTerrain, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain");
