// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FBIKChain
  class FBIKChain;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: IKMappingSpine
  class IKMappingSpine;
  // Forward declaring type: IKMappingBone
  class IKMappingBone;
  // Forward declaring type: IKMappingLimb
  class IKMappingLimb;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFullBody);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFullBody*, "RootMotion.FinalIK", "IKSolverFullBody");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFullBody
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverFullBody : public ::RootMotion::FinalIK::IKSolver {
    public:
    public:
    // [RangeAttribute] Offset: 0x1149548
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x58
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: chain
    char __padding0[0x4] = {};
    // public RootMotion.FinalIK.FBIKChain[] chain
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::RootMotion::FinalIK::FBIKChain*> chain;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::FBIKChain*>) == 0x8);
    // public RootMotion.FinalIK.IKEffector[] effectors
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::RootMotion::FinalIK::IKEffector*> effectors;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKEffector*>) == 0x8);
    // public RootMotion.FinalIK.IKMappingSpine spineMapping
    // Size: 0x8
    // Offset: 0x70
    ::RootMotion::FinalIK::IKMappingSpine* spineMapping;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKMappingSpine*) == 0x8);
    // public RootMotion.FinalIK.IKMappingBone[] boneMappings
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::RootMotion::FinalIK::IKMappingBone*> boneMappings;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKMappingBone*>) == 0x8);
    // public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*> limbMappings;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::IKMappingLimb*>) == 0x8);
    // public System.Boolean FABRIKPass
    // Size: 0x1
    // Offset: 0x88
    bool FABRIKPass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: FABRIKPass and: OnPreRead
    char __padding6[0x7] = {};
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreRead
    // Size: 0x8
    // Offset: 0x90
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreRead;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreSolve
    // Size: 0x8
    // Offset: 0x98
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreSolve;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    // Size: 0x8
    // Offset: 0xA0
    ::RootMotion::FinalIK::IKSolver::IterationDelegate* OnPreIteration;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPostIteration
    // Size: 0x8
    // Offset: 0xA8
    ::RootMotion::FinalIK::IKSolver::IterationDelegate* OnPostIteration;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::IterationDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreBend
    // Size: 0x8
    // Offset: 0xB0
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPreBend;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostSolve
    // Size: 0x8
    // Offset: 0xB8
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnPostSolve;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnStoreDefaultLocalState
    // Size: 0x8
    // Offset: 0xC0
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnStoreDefaultLocalState;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnFixTransforms
    // Size: 0x8
    // Offset: 0xC8
    ::RootMotion::FinalIK::IKSolver::UpdateDelegate* OnFixTransforms;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 iterations
    [[deprecated("Use field access instead!")]] int& dyn_iterations();
    // Get instance field reference: public RootMotion.FinalIK.FBIKChain[] chain
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::FBIKChain*>& dyn_chain();
    // Get instance field reference: public RootMotion.FinalIK.IKEffector[] effectors
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKEffector*>& dyn_effectors();
    // Get instance field reference: public RootMotion.FinalIK.IKMappingSpine spineMapping
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKMappingSpine*& dyn_spineMapping();
    // Get instance field reference: public RootMotion.FinalIK.IKMappingBone[] boneMappings
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKMappingBone*>& dyn_boneMappings();
    // Get instance field reference: public RootMotion.FinalIK.IKMappingLimb[] limbMappings
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*>& dyn_limbMappings();
    // Get instance field reference: public System.Boolean FABRIKPass
    [[deprecated("Use field access instead!")]] bool& dyn_FABRIKPass();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreRead
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPreRead();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreSolve
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPreSolve();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPreIteration
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::IterationDelegate*& dyn_OnPreIteration();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.IterationDelegate OnPostIteration
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::IterationDelegate*& dyn_OnPostIteration();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPreBend
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPreBend();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnPostSolve
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnPostSolve();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnStoreDefaultLocalState
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnStoreDefaultLocalState();
    // Get instance field reference: public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.UpdateDelegate OnFixTransforms
    [[deprecated("Use field access instead!")]] ::RootMotion::FinalIK::IKSolver::UpdateDelegate*& dyn_OnFixTransforms();
    // public RootMotion.FinalIK.IKEffector GetEffector(UnityEngine.Transform t)
    // Offset: 0x22BF124
    ::RootMotion::FinalIK::IKEffector* GetEffector(::UnityEngine::Transform* t);
    // public RootMotion.FinalIK.FBIKChain GetChain(UnityEngine.Transform transform)
    // Offset: 0x22BF218
    ::RootMotion::FinalIK::FBIKChain* GetChain(::UnityEngine::Transform* transform);
    // public System.Int32 GetChainIndex(UnityEngine.Transform transform)
    // Offset: 0x22BF274
    int GetChainIndex(::UnityEngine::Transform* transform);
    // public RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Node GetNode(System.Int32 chainIndex, System.Int32 nodeIndex)
    // Offset: 0x22BF3A8
    ::RootMotion::FinalIK::IKSolver::Node* GetNode(int chainIndex, int nodeIndex);
    // public System.Void GetChainAndNodeIndexes(UnityEngine.Transform transform, out System.Int32 chainIndex, out System.Int32 nodeIndex)
    // Offset: 0x22BF404
    void GetChainAndNodeIndexes(::UnityEngine::Transform* transform, ByRef<int> chainIndex, ByRef<int> nodeIndex);
    // protected System.Void ReadPose()
    // Offset: 0x22BFE90
    void ReadPose();
    // protected System.Void Solve()
    // Offset: 0x22C00DC
    void Solve();
    // protected System.Void ApplyBendConstraints()
    // Offset: 0x22C03B4
    void ApplyBendConstraints();
    // protected System.Void WritePose()
    // Offset: 0x22C03F8
    void WritePose();
    // public System.Void .ctor()
    // Offset: 0x22C04E8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFullBody* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverFullBody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFullBody*, creationType>()));
    }
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x22BF484
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x22BF62C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    ::RootMotion::FinalIK::IKSolver::Point* GetPoint(::UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x22BF7A0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::StringW> message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x22BF9A4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x22BFA78
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x22BFB60
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x22BFCD4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
  }; // RootMotion.FinalIK.IKSolverFullBody
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFullBody), 200 + sizeof(::RootMotion::FinalIK::IKSolver::UpdateDelegate*)> __RootMotion_FinalIK_IKSolverFullBodySizeCheck;
  static_assert(sizeof(IKSolverFullBody) == 0xD0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetEffector
// Il2CppName: GetEffector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKEffector* (RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetEffector)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetEffector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChain
// Il2CppName: GetChain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::FBIKChain* (RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetChain)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainIndex
// Il2CppName: GetChainIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetChainIndex)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChainIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetNode
// Il2CppName: GetNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver::Node* (RootMotion::FinalIK::IKSolverFullBody::*)(int, int)>(&RootMotion::FinalIK::IKSolverFullBody::GetNode)> {
  static const MethodInfo* get() {
    static auto* chainIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chainIndex, nodeIndex});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes
// Il2CppName: GetChainAndNodeIndexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*, ByRef<int>, ByRef<int>)>(&RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* chainIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* nodeIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetChainAndNodeIndexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, chainIndex, nodeIndex});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ReadPose
// Il2CppName: ReadPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::ReadPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "ReadPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::Solve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints
// Il2CppName: ApplyBendConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "ApplyBendConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::WritePose
// Il2CppName: WritePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::WritePose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "WritePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverFullBody::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFullBody::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverFullBody::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::IKSolverFullBody::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFullBody::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFullBody::*)()>(&RootMotion::FinalIK::IKSolverFullBody::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFullBody*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
