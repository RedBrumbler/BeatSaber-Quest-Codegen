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
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/ObstacleData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::ObstacleData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // private System.Int32 x
    // Size: 0x4
    // Offset: 0x14
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 y
    // Size: 0x4
    // Offset: 0x18
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single d
    // Size: 0x4
    // Offset: 0x1C
    float d;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 w
    // Size: 0x4
    // Offset: 0x20
    int w;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 h
    // Size: 0x4
    // Offset: 0x24
    int h;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: private System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: private System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // Get instance field reference: private System.Single d
    [[deprecated("Use field access instead!")]] float& dyn_d();
    // Get instance field reference: private System.Int32 w
    [[deprecated("Use field access instead!")]] int& dyn_w();
    // Get instance field reference: private System.Int32 h
    [[deprecated("Use field access instead!")]] int& dyn_h();
    // public System.Int32 get_line()
    // Offset: 0x26F0478
    int get_line();
    // public System.Int32 get_layer()
    // Offset: 0x26F0480
    int get_layer();
    // public System.Single get_duration()
    // Offset: 0x26F0488
    float get_duration();
    // public System.Int32 get_width()
    // Offset: 0x26F0490
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x26F0498
    int get_height();
    // public System.Void .ctor(System.Single beat, System.Int32 line, System.Int32 layer, System.Single duration, System.Int32 width, System.Int32 height)
    // Offset: 0x26EF2A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::ObstacleData* New_ctor(float beat, int line, int layer, float duration, int width, int height) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::ObstacleData*, creationType>(beat, line, layer, duration, width, height)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::ObstacleData), 36 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_ObstacleDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::ObstacleData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_line
// Il2CppName: get_line
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_line)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*), "get_line", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_layer
// Il2CppName: get_layer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_layer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*), "get_layer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_height
// Il2CppName: get_height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::get_height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*), "get_height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
