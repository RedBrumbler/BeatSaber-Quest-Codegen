// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PatternFightSongController
#include "GlobalNamespace/PatternFightSongController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PatternFightSongController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternFightSongController::InitData*, "", "PatternFightSongController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PatternFightSongController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class PatternFightSongController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly BeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapData*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::BeatmapData*
    constexpr operator ::GlobalNamespace::BeatmapData*() const noexcept {
      return beatmapData;
    }
    // Get instance field reference: public readonly BeatmapData beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapData*& dyn_beatmapData();
    // public System.Void .ctor(BeatmapData beatmapData)
    // Offset: 0x159ED54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PatternFightSongController::InitData* New_ctor(::GlobalNamespace::BeatmapData* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PatternFightSongController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PatternFightSongController::InitData*, creationType>(beatmapData)));
    }
  }; // PatternFightSongController/InitData
  #pragma pack(pop)
  static check_size<sizeof(PatternFightSongController::InitData), 16 + sizeof(::GlobalNamespace::BeatmapData*)> __GlobalNamespace_PatternFightSongController_InitDataSizeCheck;
  static_assert(sizeof(PatternFightSongController::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PatternFightSongController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
