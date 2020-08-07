// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
  class IVRCompositor::_GetLastPoseForTrackedDeviceIndex : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15EA9F0
    static IVRCompositor::_GetLastPoseForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRCompositorError Invoke(System.UInt32 unDeviceIndex, Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0x15EAA04
    Valve::VR::EVRCompositorError Invoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pOutputGamePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15EACB0
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(Valve.VR.TrackedDevicePose_t pOutputPose, Valve.VR.TrackedDevicePose_t pOutputGamePose, System.IAsyncResult result)
    // Offset: 0x15EAD7C
    Valve::VR::EVRCompositorError EndInvoke(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pOutputGamePose, System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, "Valve.VR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
#pragma pack(pop)