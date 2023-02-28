// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimitAngle
  class RotationLimitAngle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitAngle);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitAngle*, "RootMotion.FinalIK", "RotationLimitAngle");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitAngle
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 11474EC
  // [AddComponentMenu] Offset: 11474EC
  class RotationLimitAngle : public ::RootMotion::FinalIK::RotationLimit {
    public:
    public:
    // [RangeAttribute] Offset: 0x114A224
    // public System.Single limit
    // Size: 0x4
    // Offset: 0x38
    float limit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x114A240
    // public System.Single twistLimit
    // Size: 0x4
    // Offset: 0x3C
    float twistLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single limit
    [[deprecated("Use field access instead!")]] float& dyn_limit();
    // Get instance field reference: public System.Single twistLimit
    [[deprecated("Use field access instead!")]] float& dyn_twistLimit();
    // private System.Void OpenUserManual()
    // Offset: 0x2077300
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x207734C
    void OpenScriptReference();
    // private System.Void SupportGroup()
    // Offset: 0x2077398
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x20773E4
    void ASThread();
    // private UnityEngine.Quaternion LimitSwing(UnityEngine.Quaternion rotation)
    // Offset: 0x20774E8
    ::UnityEngine::Quaternion LimitSwing(::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x2077730
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: System.Void RotationLimit::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitAngle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimitAngle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitAngle*, creationType>()));
    }
    // protected override UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x2077430
    // Implemented from: RootMotion.FinalIK.RotationLimit
    // Base method: UnityEngine.Quaternion RotationLimit::LimitRotation(UnityEngine.Quaternion rotation)
    ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);
  }; // RootMotion.FinalIK.RotationLimitAngle
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitAngle), 60 + sizeof(float)> __RootMotion_FinalIK_RotationLimitAngleSizeCheck;
  static_assert(sizeof(RotationLimitAngle) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitAngle::*)()>(&RootMotion::FinalIK::RotationLimitAngle::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitAngle::*)()>(&RootMotion::FinalIK::RotationLimitAngle::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitAngle::*)()>(&RootMotion::FinalIK::RotationLimitAngle::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitAngle::*)()>(&RootMotion::FinalIK::RotationLimitAngle::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::LimitSwing
// Il2CppName: LimitSwing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitAngle::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitAngle::LimitSwing)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "LimitSwing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitAngle::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimitAngle::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimitAngle::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitAngle*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
