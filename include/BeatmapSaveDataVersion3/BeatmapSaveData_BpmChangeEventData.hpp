// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion3/BeatmapSaveData_BeatmapSaveDataItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BpmChangeEventData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BpmChangeEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BpmChangeEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // public System.Single m
    // Size: 0x4
    // Offset: 0x14
    float m;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: public System.Single m
    [[deprecated("Use field access instead!")]] float& dyn_m();
    // public System.Single get_bpm()
    // Offset: 0x2702050
    float get_bpm();
    // public System.Void .ctor(System.Single beat, System.Single bpm)
    // Offset: 0x2701BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BpmChangeEventData* New_ctor(float beat, float bpm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BpmChangeEventData*, creationType>(beat, bpm)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BpmChangeEventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BpmChangeEventData), 20 + sizeof(float)> __BeatmapSaveDataVersion3_BeatmapSaveData_BpmChangeEventDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BpmChangeEventData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData::get_bpm
// Il2CppName: get_bpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData::get_bpm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData*), "get_bpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BpmChangeEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
