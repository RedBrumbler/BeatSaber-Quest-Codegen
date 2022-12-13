// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric
#include "RootMotion/FinalIK/IKSolverTrigonometric.hpp"
// Including type: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
#include "RootMotion/FinalIK/IKSolver_Bone.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*, "RootMotion.FinalIK", "IKSolverTrigonometric/TrigonometricBone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverTrigonometric::TrigonometricBone : public ::RootMotion::FinalIK::IKSolver::Bone {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    public:
    // private UnityEngine.Quaternion targetToLocalSpace
    // Size: 0x10
    // Offset: 0x74
    ::UnityEngine::Quaternion targetToLocalSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 defaultLocalBendNormal
    // Size: 0xC
    // Offset: 0x84
    ::UnityEngine::Vector3 defaultLocalBendNormal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private UnityEngine.Quaternion targetToLocalSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_targetToLocalSpace();
    // Get instance field reference: private UnityEngine.Vector3 defaultLocalBendNormal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_defaultLocalBendNormal();
    // public System.Void Initiate(UnityEngine.Vector3 childPosition, UnityEngine.Vector3 bendNormal)
    // Offset: 0x22B9D5C
    void Initiate(::UnityEngine::Vector3 childPosition, ::UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Quaternion GetRotation(UnityEngine.Vector3 direction, UnityEngine.Vector3 bendNormal)
    // Offset: 0x22BA914
    ::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendNormal);
    // public UnityEngine.Vector3 GetBendNormalFromCurrentRotation()
    // Offset: 0x22B4910
    ::UnityEngine::Vector3 GetBendNormalFromCurrentRotation();
    // public System.Void .ctor()
    // Offset: 0x22BA9DC
    // Implemented from: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Bone
    // Base method: System.Void Bone::.ctor()
    // Base method: System.Void Point::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverTrigonometric::TrigonometricBone* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverTrigonometric::TrigonometricBone*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverTrigonometric/RootMotion.FinalIK.TrigonometricBone
  #pragma pack(pop)
  static check_size<sizeof(IKSolverTrigonometric::TrigonometricBone), 132 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverTrigonometric_TrigonometricBoneSizeCheck;
  static_assert(sizeof(IKSolverTrigonometric::TrigonometricBone) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::Initiate)> {
  static const MethodInfo* get() {
    static auto* childPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bendNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{childPosition, bendNormal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetRotation)> {
  static const MethodInfo* get() {
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* bendNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{direction, bendNormal});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetBendNormalFromCurrentRotation
// Il2CppName: GetBendNormalFromCurrentRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::*)()>(&RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::GetBendNormalFromCurrentRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone*), "GetBendNormalFromCurrentRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverTrigonometric::TrigonometricBone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
