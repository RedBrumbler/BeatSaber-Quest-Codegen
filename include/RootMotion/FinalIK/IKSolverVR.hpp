// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: RootMotion.FinalIK.VRIK
#include "RootMotion/FinalIK/VRIK.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x178
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR
  class IKSolverVR : public RootMotion::FinalIK::IKSolver {
    public:
    // Nested type: RootMotion::FinalIK::IKSolverVR::Arm
    class Arm;
    // Nested type: RootMotion::FinalIK::IKSolverVR::BodyPart
    class BodyPart;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Footstep
    class Footstep;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Leg
    class Leg;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Locomotion
    class Locomotion;
    // Nested type: RootMotion::FinalIK::IKSolverVR::Spine
    class Spine;
    // Nested type: RootMotion::FinalIK::IKSolverVR::PositionOffset
    struct PositionOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::RotationOffset
    struct RotationOffset;
    // Nested type: RootMotion::FinalIK::IKSolverVR::VirtualBone
    class VirtualBone;
    // private UnityEngine.Transform[] solverTransforms
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Transform*>* solverTransforms;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Transform*>*) == 0x8);
    // private System.Boolean hasChest
    // Size: 0x1
    // Offset: 0x60
    bool hasChest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasNeck
    // Size: 0x1
    // Offset: 0x61
    bool hasNeck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasShoulders
    // Size: 0x1
    // Offset: 0x62
    bool hasShoulders;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasToes
    // Size: 0x1
    // Offset: 0x63
    bool hasToes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasLegs
    // Size: 0x1
    // Offset: 0x64
    bool hasLegs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLegs and: readPositions
    char __padding5[0x3] = {};
    // private UnityEngine.Vector3[] readPositions
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::Vector3>* readPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] readRotations
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::Quaternion>* readRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3[] solvedPositions
    // Size: 0x8
    // Offset: 0x78
    ::Array<UnityEngine::Vector3>* solvedPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Quaternion[] solvedRotations
    // Size: 0x8
    // Offset: 0x80
    ::Array<UnityEngine::Quaternion>* solvedRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Quaternion[] defaultLocalRotations
    // Size: 0x8
    // Offset: 0x88
    ::Array<UnityEngine::Quaternion>* defaultLocalRotations;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Quaternion>*) == 0x8);
    // private UnityEngine.Vector3[] defaultLocalPositions
    // Size: 0x8
    // Offset: 0x90
    ::Array<UnityEngine::Vector3>* defaultLocalPositions;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private UnityEngine.Vector3 rootV
    // Size: 0xC
    // Offset: 0x98
    UnityEngine::Vector3 rootV;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 rootVelocity
    // Size: 0xC
    // Offset: 0xA4
    UnityEngine::Vector3 rootVelocity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 bodyOffset
    // Size: 0xC
    // Offset: 0xB0
    UnityEngine::Vector3 bodyOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Int32 supportLegIndex
    // Size: 0x4
    // Offset: 0xBC
    int supportLegIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastLOD
    // Size: 0x4
    // Offset: 0xC0
    int lastLOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE09758
    // [RangeAttribute] Offset: 0xE09758
    // public System.Int32 LOD
    // Size: 0x4
    // Offset: 0xC4
    int LOD;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xE097AC
    // public System.Boolean plantFeet
    // Size: 0x1
    // Offset: 0xC8
    bool plantFeet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: plantFeet and: rootBone
    char __padding18[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE097E4
    // private RootMotion.FinalIK.IKSolverVR/VirtualBone <rootBone>k__BackingField
    // Size: 0x8
    // Offset: 0xD0
    RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::VirtualBone*) == 0x8);
    // [TooltipAttribute] Offset: 0xE097F4
    // public RootMotion.FinalIK.IKSolverVR/Spine spine
    // Size: 0x8
    // Offset: 0xD8
    RootMotion::FinalIK::IKSolverVR::Spine* spine;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Spine*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0982C
    // public RootMotion.FinalIK.IKSolverVR/Arm leftArm
    // Size: 0x8
    // Offset: 0xE0
    RootMotion::FinalIK::IKSolverVR::Arm* leftArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // [TooltipAttribute] Offset: 0xE09864
    // public RootMotion.FinalIK.IKSolverVR/Arm rightArm
    // Size: 0x8
    // Offset: 0xE8
    RootMotion::FinalIK::IKSolverVR::Arm* rightArm;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Arm*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0989C
    // public RootMotion.FinalIK.IKSolverVR/Leg leftLeg
    // Size: 0x8
    // Offset: 0xF0
    RootMotion::FinalIK::IKSolverVR::Leg* leftLeg;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Leg*) == 0x8);
    // [TooltipAttribute] Offset: 0xE098D4
    // public RootMotion.FinalIK.IKSolverVR/Leg rightLeg
    // Size: 0x8
    // Offset: 0xF8
    RootMotion::FinalIK::IKSolverVR::Leg* rightLeg;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Leg*) == 0x8);
    // [TooltipAttribute] Offset: 0xE0990C
    // public RootMotion.FinalIK.IKSolverVR/Locomotion locomotion
    // Size: 0x8
    // Offset: 0x100
    RootMotion::FinalIK::IKSolverVR::Locomotion* locomotion;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKSolverVR::Locomotion*) == 0x8);
    // private RootMotion.FinalIK.IKSolverVR/Leg[] legs
    // Size: 0x8
    // Offset: 0x108
    ::Array<RootMotion::FinalIK::IKSolverVR::Leg*>* legs;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Leg*>*) == 0x8);
    // private RootMotion.FinalIK.IKSolverVR/Arm[] arms
    // Size: 0x8
    // Offset: 0x110
    ::Array<RootMotion::FinalIK::IKSolverVR::Arm*>* arms;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::IKSolverVR::Arm*>*) == 0x8);
    // private UnityEngine.Vector3 headPosition
    // Size: 0xC
    // Offset: 0x118
    UnityEngine::Vector3 headPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 headDeltaPosition
    // Size: 0xC
    // Offset: 0x124
    UnityEngine::Vector3 headDeltaPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 raycastOriginPelvis
    // Size: 0xC
    // Offset: 0x130
    UnityEngine::Vector3 raycastOriginPelvis;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastOffset
    // Size: 0xC
    // Offset: 0x13C
    UnityEngine::Vector3 lastOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos1
    // Size: 0xC
    // Offset: 0x148
    UnityEngine::Vector3 debugPos1;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos2
    // Size: 0xC
    // Offset: 0x154
    UnityEngine::Vector3 debugPos2;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos3
    // Size: 0xC
    // Offset: 0x160
    UnityEngine::Vector3 debugPos3;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 debugPos4
    // Size: 0xC
    // Offset: 0x16C
    UnityEngine::Vector3 debugPos4;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: IKSolverVR
    IKSolverVR(::Array<UnityEngine::Transform*>* solverTransforms_ = {}, bool hasChest_ = {}, bool hasNeck_ = {}, bool hasShoulders_ = {}, bool hasToes_ = {}, bool hasLegs_ = {}, ::Array<UnityEngine::Vector3>* readPositions_ = {}, ::Array<UnityEngine::Quaternion>* readRotations_ = {}, ::Array<UnityEngine::Vector3>* solvedPositions_ = {}, ::Array<UnityEngine::Quaternion>* solvedRotations_ = {}, ::Array<UnityEngine::Quaternion>* defaultLocalRotations_ = {}, ::Array<UnityEngine::Vector3>* defaultLocalPositions_ = {}, UnityEngine::Vector3 rootV_ = {}, UnityEngine::Vector3 rootVelocity_ = {}, UnityEngine::Vector3 bodyOffset_ = {}, int supportLegIndex_ = {}, int lastLOD_ = {}, int LOD_ = {}, bool plantFeet_ = {}, RootMotion::FinalIK::IKSolverVR::VirtualBone* rootBone_ = {}, RootMotion::FinalIK::IKSolverVR::Spine* spine_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* leftArm_ = {}, RootMotion::FinalIK::IKSolverVR::Arm* rightArm_ = {}, RootMotion::FinalIK::IKSolverVR::Leg* leftLeg_ = {}, RootMotion::FinalIK::IKSolverVR::Leg* rightLeg_ = {}, RootMotion::FinalIK::IKSolverVR::Locomotion* locomotion_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Leg*>* legs_ = {}, ::Array<RootMotion::FinalIK::IKSolverVR::Arm*>* arms_ = {}, UnityEngine::Vector3 headPosition_ = {}, UnityEngine::Vector3 headDeltaPosition_ = {}, UnityEngine::Vector3 raycastOriginPelvis_ = {}, UnityEngine::Vector3 lastOffset_ = {}, UnityEngine::Vector3 debugPos1_ = {}, UnityEngine::Vector3 debugPos2_ = {}, UnityEngine::Vector3 debugPos3_ = {}, UnityEngine::Vector3 debugPos4_ = {}) noexcept : solverTransforms{solverTransforms_}, hasChest{hasChest_}, hasNeck{hasNeck_}, hasShoulders{hasShoulders_}, hasToes{hasToes_}, hasLegs{hasLegs_}, readPositions{readPositions_}, readRotations{readRotations_}, solvedPositions{solvedPositions_}, solvedRotations{solvedRotations_}, defaultLocalRotations{defaultLocalRotations_}, defaultLocalPositions{defaultLocalPositions_}, rootV{rootV_}, rootVelocity{rootVelocity_}, bodyOffset{bodyOffset_}, supportLegIndex{supportLegIndex_}, lastLOD{lastLOD_}, LOD{LOD_}, plantFeet{plantFeet_}, rootBone{rootBone_}, spine{spine_}, leftArm{leftArm_}, rightArm{rightArm_}, leftLeg{leftLeg_}, rightLeg{rightLeg_}, locomotion{locomotion_}, legs{legs_}, arms{arms_}, headPosition{headPosition_}, headDeltaPosition{headDeltaPosition_}, raycastOriginPelvis{raycastOriginPelvis_}, lastOffset{lastOffset_}, debugPos1{debugPos1_}, debugPos2{debugPos2_}, debugPos3{debugPos3_}, debugPos4{debugPos4_} {}
    // public System.Void SetToReferences(RootMotion.FinalIK.VRIK/References references)
    // Offset: 0x1C048A0
    void SetToReferences(RootMotion::FinalIK::VRIK::References* references);
    // public System.Void GuessHandOrientations(RootMotion.FinalIK.VRIK/References references, System.Boolean onlyIfZero)
    // Offset: 0x1C04CDC
    void GuessHandOrientations(RootMotion::FinalIK::VRIK::References* references, bool onlyIfZero);
    // public System.Void DefaultAnimationCurves()
    // Offset: 0x1C04B84
    void DefaultAnimationCurves();
    // public System.Void AddPositionOffset(RootMotion.FinalIK.IKSolverVR/PositionOffset positionOffset, UnityEngine.Vector3 value)
    // Offset: 0x1C056C8
    void AddPositionOffset(RootMotion::FinalIK::IKSolverVR::PositionOffset positionOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Vector3 value)
    // Offset: 0x1C059A4
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Vector3 value);
    // public System.Void AddRotationOffset(RootMotion.FinalIK.IKSolverVR/RotationOffset rotationOffset, UnityEngine.Quaternion value)
    // Offset: 0x1C05A48
    void AddRotationOffset(RootMotion::FinalIK::IKSolverVR::RotationOffset rotationOffset, UnityEngine::Quaternion value);
    // public System.Void AddPlatformMotion(UnityEngine.Vector3 deltaPosition, UnityEngine.Quaternion deltaRotation, UnityEngine.Vector3 platformPivot)
    // Offset: 0x1C05BDC
    void AddPlatformMotion(UnityEngine::Vector3 deltaPosition, UnityEngine::Quaternion deltaRotation, UnityEngine::Vector3 platformPivot);
    // public System.Void Reset()
    // Offset: 0x1C05D68
    void Reset();
    // private UnityEngine.Vector3 GetNormal(UnityEngine.Transform[] transforms)
    // Offset: 0x1C06C04
    UnityEngine::Vector3 GetNormal(::Array<UnityEngine::Transform*>* transforms);
    // private UnityEngine.Vector3 GuessWristToPalmAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x1C04F7C
    UnityEngine::Vector3 GuessWristToPalmAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // private UnityEngine.Vector3 GuessPalmToThumbAxis(UnityEngine.Transform hand, UnityEngine.Transform forearm)
    // Offset: 0x1C05154
    UnityEngine::Vector3 GuessPalmToThumbAxis(UnityEngine::Transform* hand, UnityEngine::Transform* forearm);
    // static private UnityEngine.Keyframe[] GetSineKeyframes(System.Single mag)
    // Offset: 0x1C055A4
    static ::Array<UnityEngine::Keyframe>* GetSineKeyframes(float mag);
    // private System.Void UpdateSolverTransforms()
    // Offset: 0x1C05EE0
    void UpdateSolverTransforms();
    // private System.Void WriteTransforms()
    // Offset: 0x1C08630
    void WriteTransforms();
    // private System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs)
    // Offset: 0x1C06048
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs);
    // private System.Void Solve()
    // Offset: 0x1C073F4
    void Solve();
    // private UnityEngine.Vector3 GetPosition(System.Int32 index)
    // Offset: 0x1C08A1C
    UnityEngine::Vector3 GetPosition(int index);
    // private UnityEngine.Quaternion GetRotation(System.Int32 index)
    // Offset: 0x1C08A64
    UnityEngine::Quaternion GetRotation(int index);
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone get_rootBone()
    // Offset: 0x1C090A8
    RootMotion::FinalIK::IKSolverVR::VirtualBone* get_rootBone();
    // private System.Void set_rootBone(RootMotion.FinalIK.IKSolverVR/VirtualBone value)
    // Offset: 0x1C090B0
    void set_rootBone(RootMotion::FinalIK::IKSolverVR::VirtualBone* value);
    // private System.Void Write()
    // Offset: 0x1C084E0
    void Write();
    // private UnityEngine.Vector3 GetPelvisOffset()
    // Offset: 0x1C08AA8
    UnityEngine::Vector3 GetPelvisOffset();
    // public override System.Void StoreDefaultLocalState()
    // Offset: 0x1C0658C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::StoreDefaultLocalState()
    void StoreDefaultLocalState();
    // public override System.Void FixTransforms()
    // Offset: 0x1C06700
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::FixTransforms()
    void FixTransforms();
    // public override RootMotion.FinalIK.IKSolver/Point[] GetPoints()
    // Offset: 0x1C06908
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point[] IKSolver::GetPoints()
    ::Array<RootMotion::FinalIK::IKSolver::Point*>* GetPoints();
    // public override RootMotion.FinalIK.IKSolver/Point GetPoint(UnityEngine.Transform transform)
    // Offset: 0x1C0697C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: RootMotion.FinalIK.IKSolver/Point IKSolver::GetPoint(UnityEngine.Transform transform)
    RootMotion::FinalIK::IKSolver::Point* GetPoint(UnityEngine::Transform* transform);
    // public override System.Boolean IsValid(ref System.String message)
    // Offset: 0x1C069F0
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Boolean IKSolver::IsValid(ref System.String message)
    bool IsValid(::Il2CppString*& message);
    // protected override System.Void OnInitiate()
    // Offset: 0x1C06EE4
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnInitiate()
    void OnInitiate();
    // protected override System.Void OnUpdate()
    // Offset: 0x1C06F2C
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::OnUpdate()
    void OnUpdate();
    // public System.Void .ctor()
    // Offset: 0x1C090B8
    // Implemented from: RootMotion.FinalIK.IKSolver
    // Base method: System.Void IKSolver::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKSolverVR* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKSolverVR::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKSolverVR*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKSolverVR
  #pragma pack(pop)
  static check_size<sizeof(IKSolverVR), 364 + sizeof(UnityEngine::Vector3)> __RootMotion_FinalIK_IKSolverVRSizeCheck;
  static_assert(sizeof(IKSolverVR) == 0x178);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR*, "RootMotion.FinalIK", "IKSolverVR");
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::SetToReferences
// Il2CppName: SetToReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::VRIK::References*)>(&RootMotion::FinalIK::IKSolverVR::SetToReferences)> {
  const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK/References")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "SetToReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GuessHandOrientations
// Il2CppName: GuessHandOrientations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::VRIK::References*, bool)>(&RootMotion::FinalIK::IKSolverVR::GuessHandOrientations)> {
  const MethodInfo* get() {
    static auto* references = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "VRIK/References")->byval_arg;
    static auto* onlyIfZero = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GuessHandOrientations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{references, onlyIfZero});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves
// Il2CppName: DefaultAnimationCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::DefaultAnimationCurves)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "DefaultAnimationCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::AddPositionOffset
// Il2CppName: AddPositionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::IKSolverVR::PositionOffset, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddPositionOffset)> {
  const MethodInfo* get() {
    static auto* positionOffset = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/PositionOffset")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "AddPositionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positionOffset, value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::AddRotationOffset
// Il2CppName: AddRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::IKSolverVR::RotationOffset, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  const MethodInfo* get() {
    static auto* rotationOffset = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/RotationOffset")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "AddRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationOffset, value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::AddRotationOffset
// Il2CppName: AddRotationOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::IKSolverVR::RotationOffset, UnityEngine::Quaternion)>(&RootMotion::FinalIK::IKSolverVR::AddRotationOffset)> {
  const MethodInfo* get() {
    static auto* rotationOffset = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/RotationOffset")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "AddRotationOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationOffset, value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::AddPlatformMotion
// Il2CppName: AddPlatformMotion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::FinalIK::IKSolverVR::AddPlatformMotion)> {
  const MethodInfo* get() {
    static auto* deltaPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaRotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* platformPivot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "AddPlatformMotion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaPosition, deltaRotation, platformPivot});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Reset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetNormal
// Il2CppName: GetNormal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(::Array<UnityEngine::Transform*>*)>(&RootMotion::FinalIK::IKSolverVR::GetNormal)> {
  const MethodInfo* get() {
    static auto* transforms = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Transform"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetNormal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transforms});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis
// Il2CppName: GuessWristToPalmAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverVR::GuessWristToPalmAxis)> {
  const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* forearm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GuessWristToPalmAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, forearm});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis
// Il2CppName: GuessPalmToThumbAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform*, UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverVR::GuessPalmToThumbAxis)> {
  const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* forearm = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GuessPalmToThumbAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, forearm});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetSineKeyframes
// Il2CppName: GetSineKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::Keyframe>* (*)(float)>(&RootMotion::FinalIK::IKSolverVR::GetSineKeyframes)> {
  const MethodInfo* get() {
    static auto* mag = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetSineKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mag});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms
// Il2CppName: UpdateSolverTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::UpdateSolverTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "UpdateSolverTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::WriteTransforms
// Il2CppName: WriteTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::WriteTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "WriteTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(::Array<UnityEngine::Vector3>*, ::Array<UnityEngine::Quaternion>*, bool, bool, bool, bool, bool)>(&RootMotion::FinalIK::IKSolverVR::Read)> {
  const MethodInfo* get() {
    static auto* positions = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    static auto* rotations = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion"), 1)->byval_arg;
    static auto* hasChest = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasNeck = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasShoulders = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasToes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* hasLegs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Solve)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)(int)>(&RootMotion::FinalIK::IKSolverVR::GetPosition)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (RootMotion::FinalIK::IKSolverVR::*)(int)>(&RootMotion::FinalIK::IKSolverVR::GetRotation)> {
  const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::get_rootBone
// Il2CppName: get_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolverVR::VirtualBone* (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::get_rootBone)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "get_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::set_rootBone
// Il2CppName: set_rootBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)(RootMotion::FinalIK::IKSolverVR::VirtualBone*)>(&RootMotion::FinalIK::IKSolverVR::set_rootBone)> {
  const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverVR/VirtualBone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "set_rootBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::Write)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetPelvisOffset
// Il2CppName: GetPelvisOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::GetPelvisOffset)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetPelvisOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState
// Il2CppName: StoreDefaultLocalState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::StoreDefaultLocalState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "StoreDefaultLocalState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::FixTransforms)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetPoints
// Il2CppName: GetPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<RootMotion::FinalIK::IKSolver::Point*>* (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::GetPoints)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::FinalIK::IKSolver::Point* (RootMotion::FinalIK::IKSolverVR::*)(UnityEngine::Transform*)>(&RootMotion::FinalIK::IKSolverVR::GetPoint)> {
  const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKSolverVR::*)(::Il2CppString*&)>(&RootMotion::FinalIK::IKSolverVR::IsValid)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::OnInitiate
// Il2CppName: OnInitiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::OnInitiate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "OnInitiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKSolverVR::*)()>(&RootMotion::FinalIK::IKSolverVR::OnUpdate)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKSolverVR*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKSolverVR::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
