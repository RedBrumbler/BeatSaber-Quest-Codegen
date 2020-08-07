// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.GrounderFBBIK
#include "RootMotion/FinalIK/GrounderFBBIK.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.GrounderFBBIK/SpineEffector
  class GrounderFBBIK::SpineEffector : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effectorType
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // public System.Single horizontalWeight
    // Offset: 0x14
    float horizontalWeight;
    // public System.Single verticalWeight
    // Offset: 0x18
    float verticalWeight;
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType, System.Single horizontalWeight, System.Single verticalWeight)
    // Offset: 0x135B8B8
    static GrounderFBBIK::SpineEffector* New_ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType, float horizontalWeight, float verticalWeight);
    // public System.Void .ctor()
    // Offset: 0x135B8A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GrounderFBBIK::SpineEffector* New_ctor();
  }; // RootMotion.FinalIK.GrounderFBBIK/SpineEffector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GrounderFBBIK::SpineEffector*, "RootMotion.FinalIK", "GrounderFBBIK/SpineEffector");
#pragma pack(pop)