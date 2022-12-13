// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
// Including type: BeatmapObjectSpawnMovementData/NoteJumpValueType
#include "GlobalNamespace/BeatmapObjectSpawnMovementData_NoteJumpValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnController::InitData*, "", "BeatmapObjectSpawnController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectSpawnController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectSpawnController::InitData : public ::Il2CppObject {
    public:
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
    // public readonly BeatmapObjectSpawnMovementData/NoteJumpValueType noteJumpValueType
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpValueType noteJumpValueType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpValueType) == 0x4);
    // public readonly System.Single noteJumpValue
    // Size: 0x4
    // Offset: 0x20
    float noteJumpValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly System.Single beatsPerMinute
    [[deprecated("Use field access instead!")]] float& dyn_beatsPerMinute();
    // Get instance field reference: public readonly System.Int32 noteLinesCount
    [[deprecated("Use field access instead!")]] int& dyn_noteLinesCount();
    // Get instance field reference: public readonly System.Single noteJumpMovementSpeed
    [[deprecated("Use field access instead!")]] float& dyn_noteJumpMovementSpeed();
    // Get instance field reference: public readonly BeatmapObjectSpawnMovementData/NoteJumpValueType noteJumpValueType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpValueType& dyn_noteJumpValueType();
    // Get instance field reference: public readonly System.Single noteJumpValue
    [[deprecated("Use field access instead!")]] float& dyn_noteJumpValue();
    // public System.Void .ctor(System.Single beatsPerMinute, System.Int32 noteLinesCount, System.Single noteJumpMovementSpeed, BeatmapObjectSpawnMovementData/NoteJumpValueType noteJumpValueType, System.Single noteJumpValue)
    // Offset: 0x13F96B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectSpawnController::InitData* New_ctor(float beatsPerMinute, int noteLinesCount, float noteJumpMovementSpeed, ::GlobalNamespace::BeatmapObjectSpawnMovementData::NoteJumpValueType noteJumpValueType, float noteJumpValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectSpawnController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectSpawnController::InitData*, creationType>(beatsPerMinute, noteLinesCount, noteJumpMovementSpeed, noteJumpValueType, noteJumpValue)));
    }
  }; // BeatmapObjectSpawnController/InitData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectSpawnController::InitData), 32 + sizeof(float)> __GlobalNamespace_BeatmapObjectSpawnController_InitDataSizeCheck;
  static_assert(sizeof(BeatmapObjectSpawnController::InitData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectSpawnController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
