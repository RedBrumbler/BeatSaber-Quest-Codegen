// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FBBIKArmBending
  class FBBIKArmBending : public UnityEngine::MonoBehaviour {
    public:
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Offset: 0x18
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // public UnityEngine.Vector3 bendDirectionOffsetLeft
    // Offset: 0x20
    UnityEngine::Vector3 bendDirectionOffsetLeft;
    // public UnityEngine.Vector3 bendDirectionOffsetRight
    // Offset: 0x2C
    UnityEngine::Vector3 bendDirectionOffsetRight;
    // public UnityEngine.Vector3 characterSpaceBendOffsetLeft
    // Offset: 0x38
    UnityEngine::Vector3 characterSpaceBendOffsetLeft;
    // public UnityEngine.Vector3 characterSpaceBendOffsetRight
    // Offset: 0x44
    UnityEngine::Vector3 characterSpaceBendOffsetRight;
    // private UnityEngine.Quaternion leftHandTargetRotation
    // Offset: 0x50
    UnityEngine::Quaternion leftHandTargetRotation;
    // private UnityEngine.Quaternion rightHandTargetRotation
    // Offset: 0x60
    UnityEngine::Quaternion rightHandTargetRotation;
    // private System.Boolean initiated
    // Offset: 0x70
    bool initiated;
    // private System.Void LateUpdate()
    // Offset: 0x1396178
    void LateUpdate();
    // private System.Void OnPostFBBIK()
    // Offset: 0x13966F4
    void OnPostFBBIK();
    // private System.Void OnDestroy()
    // Offset: 0x13968B4
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x13969D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FBBIKArmBending* New_ctor();
  }; // RootMotion.FinalIK.FBBIKArmBending
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBBIKArmBending*, "RootMotion.FinalIK", "FBBIKArmBending");
#pragma pack(pop)