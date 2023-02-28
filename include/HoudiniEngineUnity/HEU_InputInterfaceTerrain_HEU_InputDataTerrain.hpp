// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterfaceTerrain
#include "HoudiniEngineUnity/HEU_InputInterfaceTerrain.hpp"
// Including type: HoudiniEngineUnity.HEU_InputData
#include "HoudiniEngineUnity/HEU_InputData.hpp"
// Including type: HoudiniEngineUnity.HAPI_Transform
#include "HoudiniEngineUnity/HAPI_Transform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
  // Forward declaring type: TerrainData
  class TerrainData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain*, "HoudiniEngineUnity", "HEU_InputInterfaceTerrain/HEU_InputDataTerrain");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceTerrain::HEU_InputDataTerrain : public ::HoudiniEngineUnity::HEU_InputData {
    public:
    public:
    // public System.String _heightFieldName
    // Size: 0x8
    // Offset: 0x18
    ::StringW heightFieldName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 _parentNodeID
    // Size: 0x4
    // Offset: 0x20
    int parentNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single _voxelSize
    // Size: 0x4
    // Offset: 0x24
    float voxelSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Terrain _terrain
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Terrain* terrain;
    // Field size check
    static_assert(sizeof(::UnityEngine::Terrain*) == 0x8);
    // public UnityEngine.TerrainData _terrainData
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::TerrainData* terrainData;
    // Field size check
    static_assert(sizeof(::UnityEngine::TerrainData*) == 0x8);
    // public System.Int32 _numPointsX
    // Size: 0x4
    // Offset: 0x38
    int numPointsX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _numPointsY
    // Size: 0x4
    // Offset: 0x3C
    int numPointsY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public HoudiniEngineUnity.HAPI_Transform _transform
    // Size: 0x24
    // Offset: 0x40
    ::HoudiniEngineUnity::HAPI_Transform transform;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HAPI_Transform) == 0x24);
    // Padding between fields: transform and: heightScale
    char __padding7[0x4] = {};
    // public System.Single _heightScale
    // Size: 0x4
    // Offset: 0x68
    float heightScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 _heightfieldNodeID
    // Size: 0x4
    // Offset: 0x6C
    int heightfieldNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _heightNodeID
    // Size: 0x4
    // Offset: 0x70
    int heightNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _maskNodeID
    // Size: 0x4
    // Offset: 0x74
    int maskNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 _mergeNodeID
    // Size: 0x4
    // Offset: 0x78
    int mergeNodeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept = delete;
    // Get instance field reference: public System.String _heightFieldName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__heightFieldName();
    // Get instance field reference: public System.Int32 _parentNodeID
    [[deprecated("Use field access instead!")]] int& dyn__parentNodeID();
    // Get instance field reference: public System.Single _voxelSize
    [[deprecated("Use field access instead!")]] float& dyn__voxelSize();
    // Get instance field reference: public UnityEngine.Terrain _terrain
    [[deprecated("Use field access instead!")]] ::UnityEngine::Terrain*& dyn__terrain();
    // Get instance field reference: public UnityEngine.TerrainData _terrainData
    [[deprecated("Use field access instead!")]] ::UnityEngine::TerrainData*& dyn__terrainData();
    // Get instance field reference: public System.Int32 _numPointsX
    [[deprecated("Use field access instead!")]] int& dyn__numPointsX();
    // Get instance field reference: public System.Int32 _numPointsY
    [[deprecated("Use field access instead!")]] int& dyn__numPointsY();
    // Get instance field reference: public HoudiniEngineUnity.HAPI_Transform _transform
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HAPI_Transform& dyn__transform();
    // Get instance field reference: public System.Single _heightScale
    [[deprecated("Use field access instead!")]] float& dyn__heightScale();
    // Get instance field reference: public System.Int32 _heightfieldNodeID
    [[deprecated("Use field access instead!")]] int& dyn__heightfieldNodeID();
    // Get instance field reference: public System.Int32 _heightNodeID
    [[deprecated("Use field access instead!")]] int& dyn__heightNodeID();
    // Get instance field reference: public System.Int32 _maskNodeID
    [[deprecated("Use field access instead!")]] int& dyn__maskNodeID();
    // Get instance field reference: public System.Int32 _mergeNodeID
    [[deprecated("Use field access instead!")]] int& dyn__mergeNodeID();
    // public System.Void .ctor()
    // Offset: 0x18D1D14
    // Implemented from: HoudiniEngineUnity.HEU_InputData
    // Base method: System.Void HEU_InputData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceTerrain::HEU_InputDataTerrain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceTerrain::HEU_InputDataTerrain*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputInterfaceTerrain/HoudiniEngineUnity.HEU_InputDataTerrain
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterfaceTerrain::HEU_InputDataTerrain), 120 + sizeof(int)> __HoudiniEngineUnity_HEU_InputInterfaceTerrain_HEU_InputDataTerrainSizeCheck;
  static_assert(sizeof(HEU_InputInterfaceTerrain::HEU_InputDataTerrain) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputDataTerrain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
