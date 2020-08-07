// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent
  class IVROverlay::_SetOverlayTransformTrackedDeviceComponent : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AC5DC
    static IVROverlay::_SetOverlayTransformTrackedDeviceComponent* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 unDeviceIndex, System.String pchComponentName)
    // Offset: 0x16AC5F0
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint unDeviceIndex, ::Il2CppString* pchComponentName);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 unDeviceIndex, System.String pchComponentName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AC888
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint unDeviceIndex, ::Il2CppString* pchComponentName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AC940
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent*, "Valve.VR", "IVROverlay/_SetOverlayTransformTrackedDeviceComponent");
#pragma pack(pop)