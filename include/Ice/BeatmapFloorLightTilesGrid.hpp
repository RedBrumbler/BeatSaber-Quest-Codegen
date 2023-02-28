// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightTilesGrid
  class FloorLightTilesGrid;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectSpawnController
  class IBeatmapObjectSpawnController;
}
// Completed forward declares
// Type namespace: Ice
namespace Ice {
  // Forward declaring type: BeatmapFloorLightTilesGrid
  class BeatmapFloorLightTilesGrid;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::BeatmapFloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::BeatmapFloorLightTilesGrid*, "Ice", "BeatmapFloorLightTilesGrid");
// Type namespace: Ice
namespace Ice {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Ice.BeatmapFloorLightTilesGrid
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapFloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 _numberOfRows
    // Size: 0x4
    // Offset: 0x18
    int numberOfRows;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _tileWidth
    // Size: 0x4
    // Offset: 0x1C
    float tileWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _tileHeight
    // Size: 0x4
    // Offset: 0x20
    float tileHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: tileHeight and: floorLightTilesGrid
    char __padding2[0x4] = {};
    // private Ice.FloorLightTilesGrid _floorLightTilesGrid
    // Size: 0x8
    // Offset: 0x28
    ::Ice::FloorLightTilesGrid* floorLightTilesGrid;
    // Field size check
    static_assert(sizeof(::Ice::FloorLightTilesGrid*) == 0x8);
    // [InjectAttribute] Offset: 0x1150B34
    // private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IBeatmapObjectSpawnController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _numberOfRows
    [[deprecated("Use field access instead!")]] int& dyn__numberOfRows();
    // Get instance field reference: private System.Single _tileWidth
    [[deprecated("Use field access instead!")]] float& dyn__tileWidth();
    // Get instance field reference: private System.Single _tileHeight
    [[deprecated("Use field access instead!")]] float& dyn__tileHeight();
    // Get instance field reference: private Ice.FloorLightTilesGrid _floorLightTilesGrid
    [[deprecated("Use field access instead!")]] ::Ice::FloorLightTilesGrid*& dyn__floorLightTilesGrid();
    // Get instance field reference: private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IBeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // public System.Void .ctor()
    // Offset: 0x2B88A68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapFloorLightTilesGrid* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::BeatmapFloorLightTilesGrid::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapFloorLightTilesGrid*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x2B887E8
    void Start();
  }; // Ice.BeatmapFloorLightTilesGrid
  #pragma pack(pop)
  static check_size<sizeof(BeatmapFloorLightTilesGrid), 48 + sizeof(::GlobalNamespace::IBeatmapObjectSpawnController*)> __Ice_BeatmapFloorLightTilesGridSizeCheck;
  static_assert(sizeof(BeatmapFloorLightTilesGrid) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::BeatmapFloorLightTilesGrid::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ice::BeatmapFloorLightTilesGrid::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::BeatmapFloorLightTilesGrid::*)()>(&Ice::BeatmapFloorLightTilesGrid::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::BeatmapFloorLightTilesGrid*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
