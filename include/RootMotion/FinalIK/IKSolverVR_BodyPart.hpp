// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.IKSolverVR/BodyPart
  class IKSolverVR::BodyPart : public ::Il2CppObject {
    public:
    // private System.Single <sqrMag>k__BackingField
    // Offset: 0x10
    float sqrMag;
    // private System.Single <mag>k__BackingField
    // Offset: 0x14
    float mag;
    // public RootMotion.FinalIK.IKSolverVR/VirtualBone[] bones
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::IKSolverVR::VirtualBone*>* bones;
    // protected System.Boolean initiated
    // Offset: 0x20
    bool initiated;
    // protected UnityEngine.Vector3 rootPosition
    // Offset: 0x24
    UnityEngine::Vector3 rootPosition;
    // protected UnityEngine.Quaternion rootRotation
    // Offset: 0x30
    UnityEngine::Quaternion rootRotation;
    // protected System.Int32 index
    // Offset: 0x40
    int index;
    // protected System.Int32 LOD
    // Offset: 0x44
    int LOD;
    // protected System.Void OnRead(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void OnRead(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void PreSolve()
    // Offset: 0xFFFFFFFF
    void PreSolve();
    // public System.Void Write(UnityEngine.Vector3[] solvedPositions, UnityEngine.Quaternion[] solvedRotations)
    // Offset: 0xFFFFFFFF
    void Write(::Array<UnityEngine::Vector3>*& solvedPositions, ::Array<UnityEngine::Quaternion>*& solvedRotations);
    // public System.Void ApplyOffsets()
    // Offset: 0xFFFFFFFF
    void ApplyOffsets();
    // public System.Void ResetOffsets()
    // Offset: 0xFFFFFFFF
    void ResetOffsets();
    // public System.Single get_sqrMag()
    // Offset: 0x142730C
    float get_sqrMag();
    // private System.Void set_sqrMag(System.Single value)
    // Offset: 0x1427314
    void set_sqrMag(float value);
    // public System.Single get_mag()
    // Offset: 0x142731C
    float get_mag();
    // private System.Void set_mag(System.Single value)
    // Offset: 0x1427324
    void set_mag(float value);
    // public System.Void SetLOD(System.Int32 LOD)
    // Offset: 0x142732C
    void SetLOD(int LOD);
    // public System.Void Read(UnityEngine.Vector3[] positions, UnityEngine.Quaternion[] rotations, System.Boolean hasChest, System.Boolean hasNeck, System.Boolean hasShoulders, System.Boolean hasToes, System.Boolean hasLegs, System.Int32 rootIndex, System.Int32 index)
    // Offset: 0x1427334
    void Read(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index);
    // public System.Void MovePosition(UnityEngine.Vector3 position)
    // Offset: 0x14276F0
    void MovePosition(UnityEngine::Vector3 position);
    // public System.Void MoveRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x142785C
    void MoveRotation(UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1427AEC
    void Translate(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void TranslateRoot(UnityEngine.Vector3 newRootPos, UnityEngine.Quaternion newRootRot)
    // Offset: 0x1427B40
    void TranslateRoot(UnityEngine::Vector3 newRootPos, UnityEngine::Quaternion newRootRot);
    // public System.Void RotateTo(RootMotion.FinalIK.IKSolverVR/VirtualBone bone, UnityEngine.Quaternion rotation, System.Single weight)
    // Offset: 0x1426BDC
    void RotateTo(RootMotion::FinalIK::IKSolverVR::VirtualBone* bone, UnityEngine::Quaternion rotation, float weight);
    // public System.Void Visualize(UnityEngine.Color color)
    // Offset: 0x1427D2C
    void Visualize(UnityEngine::Color color);
    // public System.Void Visualize()
    // Offset: 0x1427E70
    void Visualize();
    // protected System.Void .ctor()
    // Offset: 0x1427268
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IKSolverVR::BodyPart* New_ctor();
  }; // RootMotion.FinalIK.IKSolverVR/BodyPart
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverVR::BodyPart*, "RootMotion.FinalIK", "IKSolverVR/BodyPart");
#pragma pack(pop)