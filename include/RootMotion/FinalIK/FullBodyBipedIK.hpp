// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IK
#include "RootMotion/FinalIK/IK.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BipedReferences
  class BipedReferences;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
  // Forward declaring type: IKSolver
  class IKSolver;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FullBodyBipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FullBodyBipedIK*, "RootMotion.FinalIK", "FullBodyBipedIK");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FullBodyBipedIK
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: 11470F0
  // [AddComponentMenu] Offset: 11470F0
  class FullBodyBipedIK : public ::RootMotion::FinalIK::IK {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    public:
    // public RootMotion.BipedReferences references
    // Size: 0x8
    // Offset: 0x38
    ::RootMotion::BipedReferences* references;
    // Field size check
    static_assert(sizeof(::RootMotion::BipedReferences*) == 0x8);
    // public RootMotion.FinalIK.IKSolverFullBodyBiped solver
    // Size: 0x8
    // Offset: 0x40
    ::RootMotion::FinalIK::IKSolverFullBodyBiped* solver;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolverFullBodyBiped*) == 0x8);
    public:
    // Get instance field reference: public RootMotion.BipedReferences references
    [[deprecated("Use field access instead!")]] ::RootMotion::BipedReferences*& dyn_references();
    // Get instance field reference: public RootMotion.FinalIK.IKSolverFullBodyBiped solver
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolverFullBodyBiped*& dyn_solver();
    // private System.Void OpenSetupTutorial()
    // Offset: 0x22E6A1C
    void OpenSetupTutorial();
    // private System.Void OpenInspectorTutorial()
    // Offset: 0x22E6A68
    void OpenInspectorTutorial();
    // private System.Void SupportGroup()
    // Offset: 0x22E6AB4
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x22E6B00
    void ASThread();
    // public System.Void SetReferences(RootMotion.BipedReferences references, UnityEngine.Transform rootNode)
    // Offset: 0x22E6B4C
    void SetReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode);
    // public System.Boolean ReferencesError(ref System.String errorMessage)
    // Offset: 0x22E6B78
    bool ReferencesError(ByRef<::StringW> errorMessage);
    // public System.Boolean ReferencesWarning(ref System.String warningMessage)
    // Offset: 0x22E6D34
    bool ReferencesWarning(ByRef<::StringW> warningMessage);
    // private System.Void Reinitiate()
    // Offset: 0x22E7088
    void Reinitiate();
    // private System.Void AutoDetectReferences()
    // Offset: 0x22E70A8
    void AutoDetectReferences();
    // public System.Void .ctor()
    // Offset: 0x22E7184
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FullBodyBipedIK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FullBodyBipedIK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FullBodyBipedIK*, creationType>()));
    }
    // protected override System.Void OpenUserManual()
    // Offset: 0x22E6984
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenUserManual()
    void OpenUserManual();
    // protected override System.Void OpenScriptReference()
    // Offset: 0x22E69D0
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: System.Void IK::OpenScriptReference()
    void OpenScriptReference();
    // public override RootMotion.FinalIK.IKSolver GetIKSolver()
    // Offset: 0x22E6B70
    // Implemented from: RootMotion.FinalIK.IK
    // Base method: RootMotion.FinalIK.IKSolver IK::GetIKSolver()
    ::RootMotion::FinalIK::IKSolver* GetIKSolver();
  }; // RootMotion.FinalIK.FullBodyBipedIK
  #pragma pack(pop)
  static check_size<sizeof(FullBodyBipedIK), 64 + sizeof(::RootMotion::FinalIK::IKSolverFullBodyBiped*)> __RootMotion_FinalIK_FullBodyBipedIKSizeCheck;
  static_assert(sizeof(FullBodyBipedIK) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::OpenSetupTutorial
// Il2CppName: OpenSetupTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::OpenSetupTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "OpenSetupTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::OpenInspectorTutorial
// Il2CppName: OpenInspectorTutorial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::OpenInspectorTutorial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "OpenInspectorTutorial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::SupportGroup
// Il2CppName: SupportGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::SupportGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "SupportGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::ASThread
// Il2CppName: ASThread
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::ASThread)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "ASThread", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::SetReferences
// Il2CppName: SetReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)(::RootMotion::BipedReferences*, ::UnityEngine::Transform*)>(&RootMotion::FinalIK::FullBodyBipedIK::SetReferences)> {
  static const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion", "BipedReferences")->byval_arg;
    static auto* rootNode = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "SetReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, rootNode});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::ReferencesError
// Il2CppName: ReferencesError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FullBodyBipedIK::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::FullBodyBipedIK::ReferencesError)> {
  static const MethodInfo* get() {
    static auto* errorMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "ReferencesError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::ReferencesWarning
// Il2CppName: ReferencesWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FullBodyBipedIK::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::FullBodyBipedIK::ReferencesWarning)> {
  static const MethodInfo* get() {
    static auto* warningMessage = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "ReferencesWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{warningMessage});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::Reinitiate
// Il2CppName: Reinitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::Reinitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "Reinitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::AutoDetectReferences
// Il2CppName: AutoDetectReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::AutoDetectReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "AutoDetectReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::OpenUserManual
// Il2CppName: OpenUserManual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::OpenUserManual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "OpenUserManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::OpenScriptReference
// Il2CppName: OpenScriptReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::OpenScriptReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "OpenScriptReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FullBodyBipedIK::GetIKSolver
// Il2CppName: GetIKSolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (RootMotion::FinalIK::FullBodyBipedIK::*)()>(&RootMotion::FinalIK::FullBodyBipedIK::GetIKSolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FullBodyBipedIK*), "GetIKSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
