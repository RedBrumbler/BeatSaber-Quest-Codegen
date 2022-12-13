// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveDataItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/EventData");
// Type namespace: BeatmapSaveDataVersion2_6_0AndEarlier
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.EventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::EventData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
    public:
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType _type
    // Size: 0x4
    // Offset: 0x14
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType type;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType) == 0x4);
    // private System.Int32 _value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _floatValue
    // Size: 0x4
    // Offset: 0x1C
    float floatValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _time
    [[deprecated("Use field access instead!")]] float& dyn__time();
    // Get instance field reference: private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType _type
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType& dyn__type();
    // Get instance field reference: private System.Int32 _value
    [[deprecated("Use field access instead!")]] int& dyn__value();
    // Get instance field reference: private System.Single _floatValue
    [[deprecated("Use field access instead!")]] float& dyn__floatValue();
    // public BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType get_type()
    // Offset: 0x26ED86C
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType get_type();
    // public System.Int32 get_value()
    // Offset: 0x26ED874
    int get_value();
    // public System.Single get_floatValue()
    // Offset: 0x26ED87C
    float get_floatValue();
    // public System.Void .ctor(System.Single time, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType type, System.Int32 value, System.Single floatValue)
    // Offset: 0x26ED760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::EventData* New_ctor(float time, ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType type, int value, float floatValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::EventData*, creationType>(time, type, value, floatValue)));
    }
    // public override System.Single get_time()
    // Offset: 0x26ED864
    // Implemented from: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
    // Base method: System.Single BeatmapSaveDataItem::get_time()
    float get_time();
  }; // BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.EventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::EventData), 28 + sizeof(float)> __BeatmapSaveDataVersion2_6_0AndEarlier_BeatmapSaveData_EventDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::EventData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData*), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_floatValue
// Il2CppName: get_floatValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_floatValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData*), "get_floatValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::EventData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
