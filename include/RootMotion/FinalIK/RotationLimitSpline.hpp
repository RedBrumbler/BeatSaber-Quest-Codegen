// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimitSpline
  class RotationLimitSpline;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitSpline);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitSpline*, "RootMotion.FinalIK", "RotationLimitSpline");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitSpline
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 114760C
  // [AddComponentMenu] Offset: 114760C
  class RotationLimitSpline : public ::RootMotion::FinalIK::RotationLimit {
    public:
    public:
    // [RangeAttribute] Offset: 0x114A348
    // public System.Single twistLimit
    // Size: 0x4
    // Offset: 0x38
    float twistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: twistLimit and: spline
    char __padding0[0x4] = {};
    // public UnityEngine.AnimationCurve spline
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* spline;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Get instance field reference: public System.Single twistLimit
    [[deprecated("Use field access instead!")]] float& dyn_twistLimit();
    // Get instance field reference: public UnityEngine.AnimationCurve spline
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_spline();
    // private System.Void OpenUserManual()
    // Offset: 0x2079C20
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x2079C6C
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x2079CB8
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x2079D04
    void ASThread();
    // public System.Void SetSpline(UnityEngine.Keyframe[] keyframes)
    // Offset: 0x2079D50
    void SetSpline(::ArrayW<::UnityEngine::Keyframe> keyframes);
    // public UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x2079E24
    ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x207A150
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitSpline* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimitSpline::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitSpline*, creationType>()));
    }
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x2079D6C
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.RotationLimitSpline
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitSpline), 64 + sizeof(::UnityEngine::AnimationCurve*)> __RootMotion_FinalIK_RotationLimitSplineSizeCheck;
  static_assert(sizeof(RotationLimitSpline) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)()>(&RootMotion::FinalIK::RotationLimitSpline::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::SetSpline
// Il2CppName: SetSpline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitSpline::*)(::ArrayW<::UnityEngine::Keyframe>)>(&RootMotion::FinalIK::RotationLimitSpline::SetSpline)> {
  static const MethodInfo* get() {
    static auto* keyframes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Keyframe"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "SetSpline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyframes});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::LimitSwing
// Il2CppName: LimitSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitSpline::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitSpline::LimitSwing)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "LimitSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitSpline::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitSpline::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitSpline::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitSpline*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
