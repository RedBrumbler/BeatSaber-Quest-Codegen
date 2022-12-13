// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EventBox.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis
#include "BeatmapSaveDataVersion3/BeatmapSaveData_Axis.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType
#include "BeatmapSaveDataVersion3/BeatmapSaveData_EaseType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*, "BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBox");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBox
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::LightRotationEventBox : public ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox {
    public:
    public:
    // private System.Single s
    // Size: 0x4
    // Offset: 0x20
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    // Size: 0x4
    // Offset: 0x24
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType t;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis a
    // Size: 0x4
    // Offset: 0x28
    ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis a;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::Axis) == 0x4);
    // private System.Int32 r
    // Size: 0x4
    // Offset: 0x2C
    int r;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 b
    // Size: 0x4
    // Offset: 0x30
    int b;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    // Size: 0x4
    // Offset: 0x34
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType i;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType) == 0x4);
    // private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData> l
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>* l;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>*) == 0x8);
    public:
    // Get instance field reference: private System.Single s
    [[deprecated("Use field access instead!")]] float& dyn_s();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType t
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType& dyn_t();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis a
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis& dyn_a();
    // Get instance field reference: private System.Int32 r
    [[deprecated("Use field access instead!")]] int& dyn_r();
    // Get instance field reference: private System.Int32 b
    [[deprecated("Use field access instead!")]] int& dyn_b();
    // Get instance field reference: private BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType i
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType& dyn_i();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData> l
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>*& dyn_l();
    // public System.Single get_rotationDistributionParam()
    // Offset: 0x26EFFEC
    float get_rotationDistributionParam();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType get_rotationDistributionParamType()
    // Offset: 0x26EFFF4
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType get_rotationDistributionParamType();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis get_axis()
    // Offset: 0x26EFFFC
    ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis get_axis();
    // public System.Boolean get_flipRotation()
    // Offset: 0x26F0004
    bool get_flipRotation();
    // public System.Boolean get_rotationDistributionShouldAffectFirstBaseEvent()
    // Offset: 0x26F0014
    bool get_rotationDistributionShouldAffectFirstBaseEvent();
    // public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType get_rotationDistributionEaseType()
    // Offset: 0x26F0024
    ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType get_rotationDistributionEaseType();
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData> get_lightRotationBaseDataList()
    // Offset: 0x26F002C
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>* get_lightRotationBaseDataList();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter indexFilter, System.Single beatDistributionParam, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType beatDistributionParamType, System.Single rotationDistributionParam, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBox/BeatmapSaveDataVersion3.DistributionParamType rotationDistributionParamType, System.Boolean rotationDistributionShouldAffectFirstBaseEvent, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EaseType rotationDistributionEaseType, BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.Axis axis, System.Boolean flipRotation, System.Collections.Generic.List`1<BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationBaseData> lightRotationBaseDataList)
    // Offset: 0x26F0034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::LightRotationEventBox* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* indexFilter, float beatDistributionParam, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType beatDistributionParamType, float rotationDistributionParam, ::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType rotationDistributionParamType, bool rotationDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType rotationDistributionEaseType, ::BeatmapSaveDataVersion3::BeatmapSaveData::Axis axis, bool flipRotation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>* lightRotationBaseDataList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::LightRotationEventBox*, creationType>(indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBox
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::LightRotationEventBox), 56 + sizeof(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>*)> __BeatmapSaveDataVersion3_BeatmapSaveData_LightRotationEventBoxSizeCheck;
  static_assert(sizeof(BeatmapSaveData::LightRotationEventBox) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionParam
// Il2CppName: get_rotationDistributionParam
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionParam)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_rotationDistributionParam", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionParamType
// Il2CppName: get_rotationDistributionParamType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EventBox::DistributionParamType (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionParamType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_rotationDistributionParamType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_axis
// Il2CppName: get_axis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::Axis (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_axis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_axis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_flipRotation
// Il2CppName: get_flipRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_flipRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_flipRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent
// Il2CppName: get_rotationDistributionShouldAffectFirstBaseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_rotationDistributionShouldAffectFirstBaseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionEaseType
// Il2CppName: get_rotationDistributionEaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData::EaseType (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_rotationDistributionEaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_rotationDistributionEaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_lightRotationBaseDataList
// Il2CppName: get_lightRotationBaseDataList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationBaseData*>* (BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::get_lightRotationBaseDataList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*), "get_lightRotationBaseDataList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
