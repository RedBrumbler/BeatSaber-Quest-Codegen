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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup*, "BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::EventBoxGroup : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // private System.Int32 g
    // Size: 0x4
    // Offset: 0x14
    int g;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: private System.Int32 g
    [[deprecated("Use field access instead!")]] int& dyn_g();
    // public System.Int32 get_groupId()
    // Offset: 0x26EF9A8
    int get_groupId();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox> get_baseEventBoxes()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox*>* get_baseEventBoxes();
    // protected System.Void .ctor(System.Single beat, System.Int32 groupId)
    // Offset: 0x26EF9B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::EventBoxGroup* New_ctor(float beat, int groupId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::EventBoxGroup*, creationType>(beat, groupId)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::EventBoxGroup), 20 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_EventBoxGroupSizeCheck;
  static_assert(sizeof(BeatmapSaveData::EventBoxGroup) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::get_groupId
// Il2CppName: get_groupId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::get_groupId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup*), "get_groupId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::get_baseEventBoxes
// Il2CppName: get_baseEventBoxes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox*>* (BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::get_baseEventBoxes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup*), "get_baseEventBoxes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
