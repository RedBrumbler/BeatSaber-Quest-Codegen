// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetControllerState
  class IVRSystem::_GetControllerState : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A2A14
    static IVRSystem::_GetControllerState* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x16A2A28
    bool Invoke(uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unControllerDeviceIndex, OVR.OpenVR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A2CD8
    System::IAsyncResult* BeginInvoke(uint unControllerDeviceIndex, OVR::OpenVR::VRControllerState_t& pControllerState, uint unControllerStateSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(OVR.OpenVR.VRControllerState_t pControllerState, System.IAsyncResult result)
    // Offset: 0x16A2DA4
    bool EndInvoke(OVR::OpenVR::VRControllerState_t& pControllerState, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetControllerState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetControllerState*, "OVR.OpenVR", "IVRSystem/_GetControllerState");
#pragma pack(pop)