// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/GetControllerStateUnion
  struct CVRSystem::GetControllerStateUnion : public System::ValueType {
    public:
    // public Valve.VR.IVRSystem/_GetControllerState pGetControllerState
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetControllerState* pGetControllerState;
    // public Valve.VR.CVRSystem/_GetControllerStatePacked pGetControllerStatePacked
    // Offset: 0x0
    Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked;
    // Creating value type constructor for type: GetControllerStateUnion
    GetControllerStateUnion(Valve::VR::IVRSystem::_GetControllerState* pGetControllerState_ = {}, Valve::VR::CVRSystem::_GetControllerStatePacked* pGetControllerStatePacked_ = {}) : pGetControllerState{pGetControllerState_}, pGetControllerStatePacked{pGetControllerStatePacked_} {}
  }; // Valve.VR.CVRSystem/GetControllerStateUnion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::GetControllerStateUnion, "Valve.VR", "CVRSystem/GetControllerStateUnion");
#pragma pack(pop)