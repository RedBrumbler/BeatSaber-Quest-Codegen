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
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BasicEventData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BasicEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType et
    // Size: 0x4
    // Offset: 0x14
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType et;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType) == 0x4);
    // private System.Int32 i
    // Size: 0x4
    // Offset: 0x18
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single f
    // Size: 0x4
    // Offset: 0x1C
    float f;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType et
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType& dyn_et();
    // Get instance field reference: private System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: private System.Single f
    [[deprecated("Use field access instead!")]] float& dyn_f();
    // public BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType get_eventType()
    // Offset: 0x2701FD0
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType get_eventType();
    // public System.Int32 get_value()
    // Offset: 0x2701FD8
    int get_value();
    // public System.Single get_floatValue()
    // Offset: 0x2701FE0
    float get_floatValue();
    // public System.Void .ctor(System.Single beat, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType eventType, System.Int32 value, System.Single floatValue)
    // Offset: 0x2701D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BasicEventData* New_ctor(float beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType eventType, int value, float floatValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BasicEventData*, creationType>(beat, eventType, value, floatValue)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BasicEventData), 28 + sizeof(float)> __BeatmapSaveDataVersion3_BeatmapSaveData_BasicEventDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BasicEventData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_eventType
// Il2CppName: get_eventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType (BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_eventType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*), "get_eventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_floatValue
// Il2CppName: get_floatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::get_floatValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData*), "get_floatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
