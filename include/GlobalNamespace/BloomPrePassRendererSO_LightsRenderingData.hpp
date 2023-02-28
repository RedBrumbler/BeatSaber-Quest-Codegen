// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.SubMeshDescriptor
#include "UnityEngine/Rendering/SubMeshDescriptor.hpp"
// Including type: BloomPrePassRendererSO
#include "GlobalNamespace/BloomPrePassRendererSO.hpp"
// Including type: BloomPrePassLight/QuadData
#include "GlobalNamespace/BloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*, "", "BloomPrePassRendererSO/LightsRenderingData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO/LightsRenderingData
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassRendererSO::LightsRenderingData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // public BloomPrePassLight/QuadData[] lightQuads
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::BloomPrePassLight::QuadData> lightQuads;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassLight::QuadData>) == 0x8);
    // public UnityEngine.Rendering.SubMeshDescriptor subMeshDescriptor
    // Size: 0x30
    // Offset: 0x20
    ::UnityEngine::Rendering::SubMeshDescriptor subMeshDescriptor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::SubMeshDescriptor) == 0x30);
    public:
    // Get instance field reference: public UnityEngine.Mesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: public BloomPrePassLight/QuadData[] lightQuads
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassLight::QuadData>& dyn_lightQuads();
    // Get instance field reference: public UnityEngine.Rendering.SubMeshDescriptor subMeshDescriptor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::SubMeshDescriptor& dyn_subMeshDescriptor();
    // public System.Void .ctor()
    // Offset: 0x1CE48E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO::LightsRenderingData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO::LightsRenderingData*, creationType>()));
    }
  }; // BloomPrePassRendererSO/LightsRenderingData
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRendererSO::LightsRenderingData), 32 + sizeof(::UnityEngine::Rendering::SubMeshDescriptor)> __GlobalNamespace_BloomPrePassRendererSO_LightsRenderingDataSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO::LightsRenderingData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
