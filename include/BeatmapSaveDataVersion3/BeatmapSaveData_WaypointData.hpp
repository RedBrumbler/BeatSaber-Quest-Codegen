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
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/WaypointData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::WaypointData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
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
    // private OffsetDirection d
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::OffsetDirection d;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OffsetDirection) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: private System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: private System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // Get instance field reference: private OffsetDirection d
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OffsetDirection& dyn_d();
    // public System.Int32 get_line()
    // Offset: 0x2702CB4
    int get_line();
    // public System.Int32 get_layer()
    // Offset: 0x2702CBC
    int get_layer();
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x2702CC4
    ::GlobalNamespace::OffsetDirection get_offsetDirection();
    // public System.Void .ctor(System.Single beat, System.Int32 line, System.Int32 layer, OffsetDirection offsetDirection)
    // Offset: 0x2701B98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::WaypointData* New_ctor(float beat, int line, int layer, ::GlobalNamespace::OffsetDirection offsetDirection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::WaypointData*, creationType>(beat, line, layer, offsetDirection)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::WaypointData), 28 + sizeof(::GlobalNamespace::OffsetDirection)> __BeatmapSaveDataVersion3_BeatmapSaveData_WaypointDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::WaypointData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_line
// Il2CppName: get_line
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_line)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*), "get_line", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_layer
// Il2CppName: get_layer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_layer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*), "get_layer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_offsetDirection
// Il2CppName: get_offsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::get_offsetDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*), "get_offsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
