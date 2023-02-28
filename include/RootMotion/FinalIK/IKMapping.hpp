// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolver
  class IKSolver;
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKMapping
  class IKMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKMapping);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKMapping*, "RootMotion.FinalIK", "IKMapping");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class IKMapping : public ::Il2CppObject {
    public:
    // Nested type: ::RootMotion::FinalIK::IKMapping::BoneMap
    class BoneMap;
    // public System.Void .ctor()
    // Offset: 0x22F7B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKMapping* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKMapping::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKMapping*, creationType>()));
    }
    // public System.Boolean IsValid(RootMotion.FinalIK.IKSolver solver, ref System.String message)
    // Offset: 0x22F791C
    bool IsValid(::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x22F7924
    void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);
    // protected System.Boolean BoneIsValid(UnityEngine.Transform bone, RootMotion.FinalIK.IKSolver solver, ref System.String message, RootMotion.Warning/RootMotion.Logger logger)
    // Offset: 0x22F7928
    bool BoneIsValid(::UnityEngine::Transform* bone, ::RootMotion::FinalIK::IKSolver* solver, ByRef<::StringW> message, ::RootMotion::Warning::Logger* logger);
    // protected UnityEngine.Vector3 SolveFABRIKJoint(UnityEngine.Vector3 pos1, UnityEngine.Vector3 pos2, System.Single length)
    // Offset: 0x22F7A4C
    ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float length);
  }; // RootMotion.FinalIK.IKMapping
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMapping::*)(::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>)>(&RootMotion::FinalIK::IKMapping::IsValid)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKMapping::*)(::RootMotion::FinalIK::IKSolverFullBody*)>(&RootMotion::FinalIK::IKMapping::Initiate)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::BoneIsValid
// Il2CppName: BoneIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKMapping::*)(::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolver*, ByRef<::StringW>, ::RootMotion::Warning::Logger*)>(&RootMotion::FinalIK::IKMapping::BoneIsValid)> {
  static const MethodInfo* get() {
    static auto* bone = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* logger = &::il2cpp_utils::GetClassFromName("RootMotion", "Warning/Logger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "BoneIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bone, solver, message, logger});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKMapping::SolveFABRIKJoint
// Il2CppName: SolveFABRIKJoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKMapping::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&RootMotion::FinalIK::IKMapping::SolveFABRIKJoint)> {
  static const MethodInfo* get() {
    static auto* pos1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pos2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKMapping*), "SolveFABRIKJoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos1, pos2, length});
  }
};
