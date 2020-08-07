// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.VRTextureWithPose_t
  struct VRTextureWithPose_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdMatrix34_t mDeviceToAbsoluteTracking
    // Offset: 0x0
    OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking;
    // Creating value type constructor for type: VRTextureWithPose_t
    VRTextureWithPose_t(OVR::OpenVR::HmdMatrix34_t mDeviceToAbsoluteTracking_ = {}) : mDeviceToAbsoluteTracking{mDeviceToAbsoluteTracking_} {}
  }; // OVR.OpenVR.VRTextureWithPose_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::VRTextureWithPose_t, "OVR.OpenVR", "VRTextureWithPose_t");
#pragma pack(pop)