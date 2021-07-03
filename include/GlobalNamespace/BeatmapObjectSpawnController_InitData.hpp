// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnController/InitData
  class BeatmapObjectSpawnController::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single beatsPerMinute
    // Size: 0x4
    // Offset: 0x10
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Int32 noteLinesCount
    // Size: 0x4
    // Offset: 0x14
    int noteLinesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Single noteJumpMovementSpeed
    // Size: 0x4
    // Offset: 0x18
    float noteJumpMovementSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single noteJumpStartBeatOffset
    // Size: 0x4
    // Offset: 0x1C
    float noteJumpStartBeatOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Single jumpOffsetY
    // Size: 0x4
    // Offset: 0x20
    float jumpOffsetY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float beatsPerMinute_ = {}, int noteLinesCount_ = {}, float noteJumpMovementSpeed_ = {}, float noteJumpStartBeatOffset_ = {}, float jumpOffsetY_ = {}) noexcept : beatsPerMinute{beatsPerMinute_}, noteLinesCount{noteLinesCount_}, noteJumpMovementSpeed{noteJumpMovementSpeed_}, noteJumpStartBeatOffset{noteJumpStartBeatOffset_}, jumpOffsetY{jumpOffsetY_} {}
    // public System.Void .ctor(System.Single beatsPerMinute, System.Int32 noteLinesCount, System.Single noteJumpMovementSpeed, System.Single noteJumpStartBeatOffset, System.Single jumpOffsetY)
    // Offset: 0x110B858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnController::InitData* New_ctor(float beatsPerMinute, int noteLinesCount, float noteJumpMovementSpeed, float noteJumpStartBeatOffset, float jumpOffsetY) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectSpawnController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnController::InitData*, creationType>(beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpStartBeatOffset, jumpOffsetY)));
    }
  }; // BeatmapObjectSpawnController/InitData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnController::InitData), 32 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnController_InitDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnController::InitData) == 0x24);
  // Writing MetadataGetter for method: BeatmapObjectSpawnController::InitData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectSpawnController::InitData::*)(float, int, float, float, float)>(&BeatmapObjectSpawnController::InitData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectSpawnController::InitData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapObjectSpawnController::InitData::*)(float, int, float, float, float)>(&BeatmapObjectSpawnController::InitData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapObjectSpawnController::InitData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnController::InitData*, "", "BeatmapObjectSpawnController/InitData");
