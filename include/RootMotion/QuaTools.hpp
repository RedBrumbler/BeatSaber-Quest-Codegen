// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: QuaTools
  class QuaTools;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::QuaTools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::QuaTools*, "RootMotion", "QuaTools");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.QuaTools
  // [TokenAttribute] Offset: FFFFFFFF
  class QuaTools : public ::Il2CppObject {
    public:
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x206F154
    static ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion fromRotation, UnityEngine.Quaternion toRotation, System.Single weight)
    // Offset: 0x206F2A0
    static ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float weight);
    // static public UnityEngine.Quaternion LinearBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x206F3EC
    static ::UnityEngine::Quaternion LinearBlend(::UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion SphericalBlend(UnityEngine.Quaternion q, System.Single weight)
    // Offset: 0x206F500
    static ::UnityEngine::Quaternion SphericalBlend(::UnityEngine::Quaternion q, float weight);
    // static public UnityEngine.Quaternion FromToAroundAxis(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, UnityEngine.Vector3 axis)
    // Offset: 0x206F614
    static ::UnityEngine::Quaternion FromToAroundAxis(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection, ::UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion RotationToLocalSpace(UnityEngine.Quaternion space, UnityEngine.Quaternion rotation)
    // Offset: 0x206F7A0
    static ::UnityEngine::Quaternion RotationToLocalSpace(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Quaternion from, UnityEngine.Quaternion to)
    // Offset: 0x2060B6C
    static ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to);
    // static public UnityEngine.Vector3 GetAxis(UnityEngine.Vector3 v)
    // Offset: 0x206F870
    static ::UnityEngine::Vector3 GetAxis(::UnityEngine::Vector3 v);
    // static public UnityEngine.Quaternion ClampRotation(UnityEngine.Quaternion rotation, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x206FAF4
    static ::UnityEngine::Quaternion ClampRotation(::UnityEngine::Quaternion rotation, float clampWeight, int clampSmoothing);
    // static public System.Single ClampAngle(System.Single angle, System.Single clampWeight, System.Int32 clampSmoothing)
    // Offset: 0x206FD08
    static float ClampAngle(float angle, float clampWeight, int clampSmoothing);
    // static public UnityEngine.Quaternion MatchRotation(UnityEngine.Quaternion targetRotation, UnityEngine.Vector3 targetforwardAxis, UnityEngine.Vector3 targetUpAxis, UnityEngine.Vector3 forwardAxis, UnityEngine.Vector3 upAxis)
    // Offset: 0x2069624
    static ::UnityEngine::Quaternion MatchRotation(::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetforwardAxis, ::UnityEngine::Vector3 targetUpAxis, ::UnityEngine::Vector3 forwardAxis, ::UnityEngine::Vector3 upAxis);
    // static public UnityEngine.Vector3 ToBiPolar(UnityEngine.Vector3 euler)
    // Offset: 0x206FE88
    static ::UnityEngine::Vector3 ToBiPolar(::UnityEngine::Vector3 euler);
    // static public System.Single ToBiPolar(System.Single angle)
    // Offset: 0x206FF98
    static float ToBiPolar(float angle);
  }; // RootMotion.QuaTools
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::QuaTools::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&RootMotion::QuaTools::Lerp)> {
  static const MethodInfo* get() {
    static auto* fromRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* toRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromRotation, toRotation, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&RootMotion::QuaTools::Slerp)> {
  static const MethodInfo* get() {
    static auto* fromRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* toRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromRotation, toRotation, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::LinearBlend
// Il2CppName: LinearBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float)>(&RootMotion::QuaTools::LinearBlend)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "LinearBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::SphericalBlend
// Il2CppName: SphericalBlend
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float)>(&RootMotion::QuaTools::SphericalBlend)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "SphericalBlend", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q, weight});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::FromToAroundAxis
// Il2CppName: FromToAroundAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::QuaTools::FromToAroundAxis)> {
  static const MethodInfo* get() {
    static auto* fromDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* toDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* axis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "FromToAroundAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromDirection, toDirection, axis});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::RotationToLocalSpace
// Il2CppName: RotationToLocalSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&RootMotion::QuaTools::RotationToLocalSpace)> {
  static const MethodInfo* get() {
    static auto* space = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "RotationToLocalSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{space, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::FromToRotation
// Il2CppName: FromToRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&RootMotion::QuaTools::FromToRotation)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "FromToRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::GetAxis
// Il2CppName: GetAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&RootMotion::QuaTools::GetAxis)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "GetAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::ClampRotation
// Il2CppName: ClampRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, float, int)>(&RootMotion::QuaTools::ClampRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampSmoothing = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "ClampRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation, clampWeight, clampSmoothing});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::ClampAngle
// Il2CppName: ClampAngle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, int)>(&RootMotion::QuaTools::ClampAngle)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampWeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* clampSmoothing = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "ClampAngle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle, clampWeight, clampSmoothing});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::MatchRotation
// Il2CppName: MatchRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::QuaTools::MatchRotation)> {
  static const MethodInfo* get() {
    static auto* targetRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* targetforwardAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* targetUpAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* forwardAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* upAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "MatchRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetRotation, targetforwardAxis, targetUpAxis, forwardAxis, upAxis});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::ToBiPolar
// Il2CppName: ToBiPolar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3)>(&RootMotion::QuaTools::ToBiPolar)> {
  static const MethodInfo* get() {
    static auto* euler = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "ToBiPolar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{euler});
  }
};
// Writing MetadataGetter for method: RootMotion::QuaTools::ToBiPolar
// Il2CppName: ToBiPolar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&RootMotion::QuaTools::ToBiPolar)> {
  static const MethodInfo* get() {
    static auto* angle = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::QuaTools*), "ToBiPolar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{angle});
  }
};
