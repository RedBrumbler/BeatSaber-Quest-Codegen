// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: RotationLimit
  class RotationLimit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimit);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimit*, "RootMotion.FinalIK", "RotationLimit");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimit
  // [TokenAttribute] Offset: FFFFFFFF
  class RotationLimit : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion defaultLocalRotation
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Quaternion defaultLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean <defaultLocalRotationOverride>k__BackingField
    // Size: 0x1
    // Offset: 0x34
    bool defaultLocalRotationOverride;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x35
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean applicationQuit
    // Size: 0x1
    // Offset: 0x36
    bool applicationQuit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean defaultLocalRotationSet
    // Size: 0x1
    // Offset: 0x37
    bool defaultLocalRotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Vector3 axis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_axis();
    // Get instance field reference: public UnityEngine.Quaternion defaultLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_defaultLocalRotation();
    // Get instance field reference: private System.Boolean <defaultLocalRotationOverride>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$defaultLocalRotationOverride$k__BackingField();
    // Get instance field reference: private System.Boolean initiated
    [[deprecated("Use field access instead!")]] bool& dyn_initiated();
    // Get instance field reference: private System.Boolean applicationQuit
    [[deprecated("Use field access instead!")]] bool& dyn_applicationQuit();
    // Get instance field reference: private System.Boolean defaultLocalRotationSet
    [[deprecated("Use field access instead!")]] bool& dyn_defaultLocalRotationSet();
    // public UnityEngine.Vector3 get_secondaryAxis()
    // Offset: 0x2076D18
    ::UnityEngine::Vector3 get_secondaryAxis();
    // public UnityEngine.Vector3 get_crossAxis()
    // Offset: 0x2076D54
    ::UnityEngine::Vector3 get_crossAxis();
    // public System.Boolean get_defaultLocalRotationOverride()
    // Offset: 0x2076E24
    bool get_defaultLocalRotationOverride();
    // private System.Void set_defaultLocalRotationOverride(System.Boolean value)
    // Offset: 0x2076E2C
    void set_defaultLocalRotationOverride(bool value);
    // protected System.Void .ctor()
    // Offset: 0x2077288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimit*, creationType>()));
    }
    // public System.Void SetDefaultLocalRotation()
    // Offset: 0x207697C
    void SetDefaultLocalRotation();
    // public System.Void SetDefaultLocalRotation(UnityEngine.Quaternion localRotation)
    // Offset: 0x20769C4
    void SetDefaultLocalRotation(::UnityEngine::Quaternion localRotation);
    // public UnityEngine.Quaternion GetLimitedLocalRotation(UnityEngine.Quaternion localRotation, out System.Boolean changed)
    // Offset: 0x20769DC
    ::UnityEngine::Quaternion GetLimitedLocalRotation(::UnityEngine::Quaternion localRotation, ByRef<bool> changed);
    // public System.Boolean Apply()
    // Offset: 0x2076C70
    bool Apply();
    // public System.Void Disable()
    // Offset: 0x2076CE0
    void Disable();
    // protected UnityEngine.Quaternion LimitRotation(UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Quaternion LimitRotation(::UnityEngine::Quaternion rotation);
    // private System.Void Awake()
    // Offset: 0x2076B80
    void Awake();
    // private System.Void LateUpdate()
    // Offset: 0x2076E38
    void LateUpdate();
    // public System.Void LogWarning(System.String message)
    // Offset: 0x2076E3C
    void LogWarning(::StringW message);
    // static protected UnityEngine.Quaternion Limit1DOF(UnityEngine.Quaternion rotation, UnityEngine.Vector3 axis)
    // Offset: 0x2076E6C
    static ::UnityEngine::Quaternion Limit1DOF(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis);
    // static protected UnityEngine.Quaternion LimitTwist(UnityEngine.Quaternion rotation, UnityEngine.Vector3 axis, UnityEngine.Vector3 orthoAxis, System.Single twistLimit)
    // Offset: 0x2076F50
    static ::UnityEngine::Quaternion LimitTwist(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 axis, ::UnityEngine::Vector3 orthoAxis, float twistLimit);
    // static protected System.Single GetOrthogonalAngle(UnityEngine.Vector3 v1, UnityEngine.Vector3 v2, UnityEngine.Vector3 normal)
    // Offset: 0x20771CC
    static float GetOrthogonalAngle(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, ::UnityEngine::Vector3 normal);
  }; // RootMotion.FinalIK.RotationLimit
  #pragma pack(pop)
  static check_size<sizeof(RotationLimit), 55 + sizeof(bool)> __RootMotion_FinalIK_RotationLimitSizeCheck;
  static_assert(sizeof(RotationLimit) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_secondaryAxis
// Il2CppName: get_secondaryAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_secondaryAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_secondaryAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_crossAxis
// Il2CppName: get_crossAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_crossAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_crossAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::get_defaultLocalRotationOverride
// Il2CppName: get_defaultLocalRotationOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::get_defaultLocalRotationOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "get_defaultLocalRotationOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::set_defaultLocalRotationOverride
// Il2CppName: set_defaultLocalRotationOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(bool)>(&RootMotion::FinalIK::RotationLimit::set_defaultLocalRotationOverride)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "set_defaultLocalRotationOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation
// Il2CppName: SetDefaultLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "SetDefaultLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation
// Il2CppName: SetDefaultLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation)> {
  static const MethodInfo* get() {
    static auto* localRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "SetDefaultLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localRotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::GetLimitedLocalRotation
// Il2CppName: GetLimitedLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimit::*)(::UnityEngine::Quaternion, ByRef<bool>)>(&RootMotion::FinalIK::RotationLimit::GetLimitedLocalRotation)> {
  static const MethodInfo* get() {
    static auto* localRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* changed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "GetLimitedLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localRotation, changed});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Apply)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LimitRotation
// Il2CppName: LimitRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::RotationLimit::*)(::UnityEngine::Quaternion)>(&RootMotion::FinalIK::RotationLimit::LimitRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LimitRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)()>(&RootMotion::FinalIK::RotationLimit::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimit::*)(::StringW)>(&RootMotion::FinalIK::RotationLimit::LogWarning)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::Limit1DOF
// Il2CppName: Limit1DOF
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimit::Limit1DOF)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "Limit1DOF", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, axis});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::LimitTwist
// Il2CppName: LimitTwist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::RotationLimit::LimitTwist)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* orthoAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* twistLimit = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "LimitTwist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, axis, orthoAxis, twistLimit});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimit::GetOrthogonalAngle
// Il2CppName: GetOrthogonalAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::RotationLimit::GetOrthogonalAngle)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimit*), "GetOrthogonalAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2, normal});
  }
};
