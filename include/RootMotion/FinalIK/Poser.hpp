// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.SolverManager
#include "RootMotion/SolverManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x4D
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Poser
  class Poser : public RootMotion::SolverManager {
    public:
    // Writing base type padding for base size: 0x33 to desired offset: 0x38
    char ___base_padding[0x5] = {};
    // public UnityEngine.Transform poseRoot
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* poseRoot;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [RangeAttribute] Offset: 0xE0A13C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x40
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE0A154
    // public System.Single localRotationWeight
    // Size: 0x4
    // Offset: 0x44
    float localRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xE0A16C
    // public System.Single localPositionWeight
    // Size: 0x4
    // Offset: 0x48
    float localPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0x4C
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Poser
    Poser(UnityEngine::Transform* poseRoot_ = {}, float weight_ = {}, float localRotationWeight_ = {}, float localPositionWeight_ = {}, bool initiated_ = {}) noexcept : poseRoot{poseRoot_}, weight{weight_}, localRotationWeight{localRotationWeight_}, localPositionWeight{localPositionWeight_}, initiated{initiated_} {}
    // public System.Void AutoMapping()
    // Offset: 0xFFFFFFFF
    void AutoMapping();
    // public System.Void UpdateManual()
    // Offset: 0x1AA2744
    void UpdateManual();
    // protected System.Void InitiatePoser()
    // Offset: 0xFFFFFFFF
    void InitiatePoser();
    // protected System.Void UpdatePoser()
    // Offset: 0xFFFFFFFF
    void UpdatePoser();
    // protected System.Void FixPoserTransforms()
    // Offset: 0xFFFFFFFF
    void FixPoserTransforms();
    // protected override System.Void UpdateSolver()
    // Offset: 0x1AA2750
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::UpdateSolver()
    void UpdateSolver();
    // protected override System.Void InitiateSolver()
    // Offset: 0x1AA27A4
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::InitiateSolver()
    void InitiateSolver();
    // protected override System.Void FixTransforms()
    // Offset: 0x1AA27E0
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::FixTransforms()
    void FixTransforms();
    // protected System.Void .ctor()
    // Offset: 0x1AA27F8
    // Implemented from: RootMotion.SolverManager
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Poser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Poser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Poser*, creationType>()));
    }
  }; // RootMotion.FinalIK.Poser
  #pragma pack(pop)
  static check_size<sizeof(Poser), 76 + sizeof(bool)> __RootMotion_FinalIK_PoserSizeCheck;
  static_assert(sizeof(Poser) == 0x4D);
  // Writing MetadataGetter for method: Poser::AutoMapping
  // Il2CppName: AutoMapping
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::AutoMapping)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "AutoMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::UpdateManual
  // Il2CppName: UpdateManual
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::UpdateManual)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "UpdateManual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::InitiatePoser
  // Il2CppName: InitiatePoser
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::InitiatePoser)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "InitiatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::UpdatePoser
  // Il2CppName: UpdatePoser
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::UpdatePoser)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "UpdatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::FixPoserTransforms
  // Il2CppName: FixPoserTransforms
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::FixPoserTransforms)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "FixPoserTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::UpdateSolver
  // Il2CppName: UpdateSolver
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::UpdateSolver)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "UpdateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::InitiateSolver
  // Il2CppName: InitiateSolver
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::InitiateSolver)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "InitiateSolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::FixTransforms
  // Il2CppName: FixTransforms
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::FixTransforms)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Poser::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Poser::*)()>(&Poser::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Poser*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Poser*, "RootMotion.FinalIK", "Poser");
