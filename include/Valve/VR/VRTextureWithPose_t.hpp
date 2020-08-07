// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VRTextureWithPose_t
  struct VRTextureWithPose_t : public System::ValueType {
    public:
    // public Valve.VR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Offset: 0x0
    Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Creating value type constructor for type: VRTextureWithPose_t
    VRTextureWithPose_t(Valve::VR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}) : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_} {}
  }; // Valve.VR.VRTextureWithPose_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRTextureWithPose_t, "Valve.VR", "VRTextureWithPose_t");
#pragma pack(pop)