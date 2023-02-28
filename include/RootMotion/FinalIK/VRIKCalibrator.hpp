// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: VRIKCalibrator
  class VRIKCalibrator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::VRIKCalibrator);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::VRIKCalibrator*, "RootMotion.FinalIK", "VRIKCalibrator");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator
  // [TokenAttribute] Offset: FFFFFFFF
  class VRIKCalibrator : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::VRIKCalibrator::Settings
    class Settings;
    // Nested type: ::RootMotion::FinalIK::VRIKCalibrator::CalibrationData
    class CalibrationData;
    // static public System.Void RecalibrateScale(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.Settings settings)
    // Offset: 0x207C9B0
    static void RecalibrateScale(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator::Settings* settings);
    // static public RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData Calibrate(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.Settings settings, UnityEngine.Transform headTracker, UnityEngine.Transform bodyTracker, UnityEngine.Transform leftHandTracker, UnityEngine.Transform rightHandTracker, UnityEngine.Transform leftFootTracker, UnityEngine.Transform rightFootTracker)
    // Offset: 0x207CB18
    static ::RootMotion::FinalIK::VRIKCalibrator::CalibrationData* Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator::Settings* settings, ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker, ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker);
    // static private System.Void CalibrateLeg(RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.Settings settings, UnityEngine.Transform tracker, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg leg, UnityEngine.Transform lastBone, UnityEngine.Vector3 rootForward, System.Boolean isLeft)
    // Offset: 0x207DF68
    static void CalibrateLeg(::RootMotion::FinalIK::VRIKCalibrator::Settings* settings, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::IKSolverVR::Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft);
    // static public System.Void Calibrate(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData data, UnityEngine.Transform headTracker, UnityEngine.Transform bodyTracker, UnityEngine.Transform leftHandTracker, UnityEngine.Transform rightHandTracker, UnityEngine.Transform leftFootTracker, UnityEngine.Transform rightFootTracker)
    // Offset: 0x207EA10
    static void Calibrate(::RootMotion::FinalIK::VRIK* ik, ::RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data, ::UnityEngine::Transform* headTracker, ::UnityEngine::Transform* bodyTracker, ::UnityEngine::Transform* leftHandTracker, ::UnityEngine::Transform* rightHandTracker, ::UnityEngine::Transform* leftFootTracker, ::UnityEngine::Transform* rightFootTracker);
    // static private System.Void CalibrateLeg(RootMotion.FinalIK.VRIKCalibrator/RootMotion.FinalIK.CalibrationData data, UnityEngine.Transform tracker, RootMotion.FinalIK.IKSolverVR/RootMotion.FinalIK.Leg leg, UnityEngine.Transform lastBone, UnityEngine.Vector3 rootForward, System.Boolean isLeft)
    // Offset: 0x207F500
    static void CalibrateLeg(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data, ::UnityEngine::Transform* tracker, ::RootMotion::FinalIK::IKSolverVR::Leg* leg, ::UnityEngine::Transform* lastBone, ::UnityEngine::Vector3 rootForward, bool isLeft);
  }; // RootMotion.FinalIK.VRIKCalibrator
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale
// Il2CppName: RecalibrateScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator::Settings*)>(&RootMotion::FinalIK::VRIKCalibrator::RecalibrateScale)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/Settings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator*), "RecalibrateScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, settings});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::VRIKCalibrator::CalibrationData* (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator::Settings*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* settings = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/Settings")->byval_arg;
    static auto* headTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bodyTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftHandTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightHandTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftFootTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightFootTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, settings, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg
// Il2CppName: CalibrateLeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIKCalibrator::Settings*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverVR::Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(&RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/Settings")->byval_arg;
    static auto* tracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* lastBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rootForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator*), "CalibrateLeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings, tracker, leg, lastBone, rootForward, isLeft});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::Calibrate
// Il2CppName: Calibrate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIK*, ::RootMotion::FinalIK::VRIKCalibrator::CalibrationData*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::VRIKCalibrator::Calibrate)> {
  static const MethodInfo* get() {
    static auto* ik = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/CalibrationData")->byval_arg;
    static auto* headTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bodyTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftHandTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightHandTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leftFootTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rightFootTracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator*), "Calibrate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ik, data, headTracker, bodyTracker, leftHandTracker, rightHandTracker, leftFootTracker, rightFootTracker});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg
// Il2CppName: CalibrateLeg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::RootMotion::FinalIK::VRIKCalibrator::CalibrationData*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolverVR::Leg*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, bool)>(&RootMotion::FinalIK::VRIKCalibrator::CalibrateLeg)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIKCalibrator/CalibrationData")->byval_arg;
    static auto* tracker = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* leg = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/Leg")->byval_arg;
    static auto* lastBone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* rootForward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* isLeft = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::VRIKCalibrator*), "CalibrateLeg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, tracker, leg, lastBone, rootForward, isLeft});
  }
};
