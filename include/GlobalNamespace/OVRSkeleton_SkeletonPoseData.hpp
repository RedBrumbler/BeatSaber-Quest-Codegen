// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Posef
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSkeleton/SkeletonPoseData
  struct OVRSkeleton::SkeletonPoseData/*, public System::ValueType*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDD094C
    // private OVRPlugin/Posef <RootPose>k__BackingField
    // Size: 0x1C
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Posef RootPose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // [CompilerGeneratedAttribute] Offset: 0xDD095C
    // private System.Single <RootScale>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    float RootScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDD096C
    // private OVRPlugin/Quatf[] <BoneRotations>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVRPlugin::Quatf>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDD097C
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDD098C
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x29
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: SkeletonChangedCount
    char __padding4[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDD099C
    // private System.Int32 <SkeletonChangedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int SkeletonChangedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SkeletonPoseData
    constexpr SkeletonPoseData(GlobalNamespace::OVRPlugin::Posef RootPose_ = {}, float RootScale_ = {}, ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, int SkeletonChangedCount_ = {}) noexcept : RootPose{RootPose_}, RootScale{RootScale_}, BoneRotations{BoneRotations_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, SkeletonChangedCount{SkeletonChangedCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public OVRPlugin/Posef get_RootPose()
    // Offset: 0xF0F9C8
    GlobalNamespace::OVRPlugin::Posef get_RootPose();
    // public System.Void set_RootPose(OVRPlugin/Posef value)
    // Offset: 0xF0F9DC
    void set_RootPose(GlobalNamespace::OVRPlugin::Posef value);
    // public System.Single get_RootScale()
    // Offset: 0xF0F9F8
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0xF0FA00
    void set_RootScale(float value);
    // public OVRPlugin/Quatf[] get_BoneRotations()
    // Offset: 0xF0FA08
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* get_BoneRotations();
    // public System.Void set_BoneRotations(OVRPlugin/Quatf[] value)
    // Offset: 0xF0FA10
    void set_BoneRotations(::Array<GlobalNamespace::OVRPlugin::Quatf>* value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0xF0FA18
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xF0FA20
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xF0FA2C
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xF0FA34
    void set_IsDataHighConfidence(bool value);
    // public System.Int32 get_SkeletonChangedCount()
    // Offset: 0xF0FA40
    int get_SkeletonChangedCount();
    // public System.Void set_SkeletonChangedCount(System.Int32 value)
    // Offset: 0xF0FA48
    void set_SkeletonChangedCount(int value);
  }; // OVRSkeleton/SkeletonPoseData
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeleton::SkeletonPoseData), 44 + sizeof(int)> __GlobalNamespace_OVRSkeleton_SkeletonPoseDataSizeCheck;
  static_assert(sizeof(OVRSkeleton::SkeletonPoseData) == 0x30);
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_RootPose
  // Il2CppName: get_RootPose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Posef (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_RootPose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_RootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_RootPose
  // Il2CppName: set_RootPose
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(GlobalNamespace::OVRPlugin::Posef)>(&OVRSkeleton::SkeletonPoseData::set_RootPose)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_RootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Posef>()});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_RootScale
  // Il2CppName: get_RootScale
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_RootScale)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_RootScale
  // Il2CppName: set_RootScale
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(float)>(&OVRSkeleton::SkeletonPoseData::set_RootScale)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_BoneRotations
  // Il2CppName: get_BoneRotations
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<GlobalNamespace::OVRPlugin::Quatf>* (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_BoneRotations)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_BoneRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_BoneRotations
  // Il2CppName: set_BoneRotations
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(::Array<GlobalNamespace::OVRPlugin::Quatf>*)>(&OVRSkeleton::SkeletonPoseData::set_BoneRotations)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_BoneRotations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::OVRPlugin::Quatf>*>()});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_IsDataValid
  // Il2CppName: get_IsDataValid
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_IsDataValid)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_IsDataValid
  // Il2CppName: set_IsDataValid
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(bool)>(&OVRSkeleton::SkeletonPoseData::set_IsDataValid)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_IsDataHighConfidence
  // Il2CppName: get_IsDataHighConfidence
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_IsDataHighConfidence)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_IsDataHighConfidence
  // Il2CppName: set_IsDataHighConfidence
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(bool)>(&OVRSkeleton::SkeletonPoseData::set_IsDataHighConfidence)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::get_SkeletonChangedCount
  // Il2CppName: get_SkeletonChangedCount
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVRSkeleton::SkeletonPoseData::*)()>(&OVRSkeleton::SkeletonPoseData::get_SkeletonChangedCount)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "get_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: OVRSkeleton::SkeletonPoseData::set_SkeletonChangedCount
  // Il2CppName: set_SkeletonChangedCount
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRSkeleton::SkeletonPoseData::*)(int)>(&OVRSkeleton::SkeletonPoseData::set_SkeletonChangedCount)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(OVRSkeleton::SkeletonPoseData), "set_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
