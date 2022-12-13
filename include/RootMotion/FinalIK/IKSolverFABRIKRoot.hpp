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
  // Forward declaring type: FABRIKChain
  class FABRIKChain;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFABRIKRoot
  class IKSolverFABRIKRoot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFABRIKRoot);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFABRIKRoot*, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverFABRIKRoot
  // [TokenAttribute] Offset: FFFFFFFF
  class IKSolverFABRIKRoot : public ::RootMotion::FinalIK::IKSolver {
    public:
    public:
    // public System.Int32 iterations
    // Size: 0x4
    // Offset: 0x58
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [RangeAttribute] Offset: 0x11465BC
    // public System.Single rootPin
    // Size: 0x4
    // Offset: 0x5C
    float rootPin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public RootMotion.FinalIK.FABRIKChain[] chains
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::RootMotion::FinalIK::FABRIKChain*> chains;
    // Field size check
    static_assert(sizeof(::ArrayW<::RootMotion::FinalIK::FABRIKChain*>) == 0x8);
    // private System.Boolean zeroWeightApplied
    // Size: 0x1
    // Offset: 0x68
    bool zeroWeightApplied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: zeroWeightApplied and: isRoot
    char __padding3[0x7] = {};
    // private System.Boolean[] isRoot
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<bool> isRoot;
    // Field size check
    static_assert(sizeof(::ArrayW<bool>) == 0x8);
    // private UnityEngine.Vector3 rootDefaultPosition
    // Size: 0xC
    // Offset: 0x78
    ::UnityEngine::Vector3 rootDefaultPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public System.Int32 iterations
    [[deprecated("Use field access instead!")]] int& dyn_iterations();
    // Get instance field reference: public System.Single rootPin
    [[deprecated("Use field access instead!")]] float& dyn_rootPin();
    // Get instance field reference: public RootMotion.FinalIK.FABRIKChain[] chains
    [[deprecated("Use field access instead!")]] ::ArrayW<::RootMotion::FinalIK::FABRIKChain*>& dyn_chains();
    // Get instance field reference: private System.Boolean zeroWeightApplied
    [[deprecated("Use field access instead!")]] bool& dyn_zeroWeightApplied();
    // Get instance field reference: private System.Boolean[] isRoot
    [[deprecated("Use field access instead!")]] ::ArrayW<bool>& dyn_isRoot();
    // Get instance field reference: private UnityEngine.Vector3 rootDefaultPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rootDefaultPosition();
    // private System.Boolean IsRoot(System.Int32 index)
    // Offset: 0x22AE04C
    bool IsRoot(int index);
    // private System.Void AddPointsToArray(ref RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] array, RootMotion.FinalIK.FABRIKChain chain)
    // Offset: 0x22AE700
    void AddPointsToArray(ByRef<::ArrayW<::RootMotion::FinalIK::IKSolver::Point*>> array, ::RootMotion::FinalIK::FABRIKChain* chain);
    // private UnityEngine.Vector3 GetCentroid()
    // Offset: 0x22AE31C
    ::UnityEngine::Vector3 GetCentroid();
    // public System.Void .ctor()
    // Offset: 0x22AE8E8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverFABRIKRoot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::IKSolverFABRIKRoot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverFABRIKRoot*, creationType>()));
    }
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x22AD548
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(ByRef<::StringW> message);
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x22ADE14
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x22ADEAC
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // protected override System.Void OnInitiate()
    // Offset: 0x22ADF4C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x22AE0E8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] GetPoints()
    // Offset: 0x22AE650
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point[] IKSolver::GetPoints()
    ::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> GetPoints();
    // public override RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x22AE850
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/RootMotion.FinalIK.Point IKSolver::GetPoint(UnityEngine.Transform transform)
    ::RootMotion::FinalIK::IKSolver::Point* GetPoint(::UnityEngine::Transform* transform);
  }; // RootMotion.FinalIK.IKSolverFABRIKRoot
  #pragma pack(pop)
  static check_size<sizeof(IKSolverFABRIKRoot), 120 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverFABRIKRootSizeCheck;
  static_assert(sizeof(IKSolverFABRIKRoot) == 0x84);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::IsRoot
// Il2CppName: IsRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverFABRIKRoot::*)(int)>(&RootMotion::FinalIK::IKSolverFABRIKRoot::IsRoot)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "IsRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::AddPointsToArray
// Il2CppName: AddPointsToArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIKRoot::*)(ByRef<::ArrayW<::RootMotion::FinalIK::IKSolver::Point*>>, ::RootMotion::FinalIK::FABRIKChain*)>(&RootMotion::FinalIK::IKSolverFABRIKRoot::AddPointsToArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolver/Point"), 1)->this_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "AddPointsToArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetCentroid
// Il2CppName: GetCentroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::GetCentroid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "GetCentroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverFABRIKRoot::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::IKSolverFABRIKRoot::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::StoreDefaultLocalState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::OnInitiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::OnUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::RootMotion::FinalIK::IKSolver::Point*> (RootMotion::FinalIK::IKSolverFABRIKRoot::*)()>(&RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverFABRIKRoot::*)(::UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoint)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverFABRIKRoot*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
