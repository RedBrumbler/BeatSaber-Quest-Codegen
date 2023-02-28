// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BaseSliderData
#include "BeatmapSaveDataVersion3/BeatmapSaveData_BaseSliderData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BurstSliderData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BurstSliderData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData {
    public:
    public:
    // private System.Int32 sc
    // Size: 0x4
    // Offset: 0x30
    int sc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single s
    // Size: 0x4
    // Offset: 0x34
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Int32 sc
    [[deprecated("Use field access instead!")]] int& dyn_sc();
    // Get instance field reference: private System.Single s
    [[deprecated("Use field access instead!")]] float& dyn_s();
    // public System.Int32 get_sliceCount()
    // Offset: 0x2702058
    int get_sliceCount();
    // public System.Single get_squishAmount()
    // Offset: 0x2702060
    float get_squishAmount();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType colorType, System.Single headBeat, System.Int32 headLine, System.Int32 headLayer, NoteCutDirection headCutDirection, System.Single tailBeat, System.Int32 tailLine, System.Int32 tailLayer, System.Int32 sliceCount, System.Single squishAmount)
    // Offset: 0x2702068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BurstSliderData* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType colorType, float headBeat, int headLine, int headLayer, ::GlobalNamespace::NoteCutDirection headCutDirection, float tailBeat, int tailLine, int tailLayer, int sliceCount, float squishAmount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BurstSliderData*, creationType>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer, sliceCount, squishAmount)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BurstSliderData), 52 + sizeof(float)> __BeatmapSaveDataVersion3_BeatmapSaveData_BurstSliderDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BurstSliderData) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::get_sliceCount
// Il2CppName: get_sliceCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::get_sliceCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*), "get_sliceCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::get_squishAmount
// Il2CppName: get_squishAmount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::get_squishAmount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*), "get_squishAmount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
