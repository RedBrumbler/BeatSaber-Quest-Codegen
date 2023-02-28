// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_InputInterfaceTilemap
#include "HoudiniEngineUnity/HEU_InputInterfaceTilemap.hpp"
// Including type: HoudiniEngineUnity.HEU_InputData
#include "HoudiniEngineUnity/HEU_InputData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tilemap
  class Tilemap;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap*, "HoudiniEngineUnity", "HEU_InputInterfaceTilemap/HEU_InputDataTilemap");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_InputInterfaceTilemap/HoudiniEngineUnity.HEU_InputDataTilemap
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_InputInterfaceTilemap::HEU_InputDataTilemap : public ::HoudiniEngineUnity::HEU_InputData {
    public:
    public:
    // public UnityEngine.Tilemaps.Tilemap _tilemap
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Tilemaps::Tilemap* tilemap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Tilemaps::Tilemap*) == 0x8);
    // public UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::UnityEngine::GameObject*
    constexpr operator ::UnityEngine::GameObject*() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Tilemaps.Tilemap _tilemap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Tilemaps::Tilemap*& dyn__tilemap();
    // Get instance field reference: public UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public System.Void .ctor()
    // Offset: 0x18D3EB8
    // Implemented from: HoudiniEngineUnity.HEU_InputData
    // Base method: System.Void HEU_InputData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_InputInterfaceTilemap::HEU_InputDataTilemap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_InputInterfaceTilemap::HEU_InputDataTilemap*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_InputInterfaceTilemap/HoudiniEngineUnity.HEU_InputDataTilemap
  #pragma pack(pop)
  static check_size<sizeof(HEU_InputInterfaceTilemap::HEU_InputDataTilemap), 32 + sizeof(::UnityEngine::Transform*)> __HoudiniEngineUnity_HEU_InputInterfaceTilemap_HEU_InputDataTilemapSizeCheck;
  static_assert(sizeof(HEU_InputInterfaceTilemap::HEU_InputDataTilemap) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_InputInterfaceTilemap::HEU_InputDataTilemap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
