// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData
#include "RootMotion/FinalIK/VRIKCalibrator_CalibrationData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*, "RootMotion.FinalIK", "VRIKCalibrator/CalibrationData/Target");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKCalibrator::CalibrationData::Target : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean used
    // Size: 0x1
    // Offset: 0x10
    bool used;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: used and: localPosition
    char __padding0[0x3] = {};
    // public UnityEngine.Vector3 localPosition
    // Size: 0xC
    // Offset: 0x14
    ::UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion localRotation
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Quaternion localRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public System.Boolean used
    [[deprecated("Use field access instead!")]] bool& dyn_used();
    // Get instance field reference: public UnityEngine.Vector3 localPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localPosition();
    // Get instance field reference: public UnityEngine.Quaternion localRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_localRotation();
    // public System.Void .ctor(UnityEngine.Transform t)
    // Offset: 0x207E94C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRIKCalibrator::CalibrationData::Target* New_ctor(::UnityEngine::Transform* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRIKCalibrator::CalibrationData::Target*, creationType>(t)));
    }
    // public System.Void SetTo(UnityEngine.Transform t)
    // Offset: 0x207F4A0
    void SetTo(::UnityEngine::Transform* t);
  }; // RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData/RootMotion.FinalIK.Target
  #pragma pack(pop)
  static check_size<sizeof(VRIKCalibrator::CalibrationData::Target), 32 + sizeof(::UnityEngine::Quaternion)> __RootMotion_FinalIK_VRIKCalibrator_CalibrationData_TargetSizeCheck;
  static_assert(sizeof(VRIKCalibrator::CalibrationData::Target) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target::SetTo
// Il2CppName: SetTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target::SetTo)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator::CalibrationData::Target*), "SetTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
