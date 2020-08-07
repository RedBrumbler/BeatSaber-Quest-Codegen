// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRScreenshots
#include "OVR/OpenVR/IVRScreenshots.hpp"
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
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRScreenshots/_UpdateScreenshotProgress
  class IVRScreenshots::_UpdateScreenshotProgress : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x169B948
    static IVRScreenshots::_UpdateScreenshotProgress* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVRScreenshotError Invoke(System.UInt32 screenshotHandle, System.Single flProgress)
    // Offset: 0x169B95C
    OVR::OpenVR::EVRScreenshotError Invoke(uint screenshotHandle, float flProgress);
    // public System.IAsyncResult BeginInvoke(System.UInt32 screenshotHandle, System.Single flProgress, System.AsyncCallback callback, System.Object object)
    // Offset: 0x169BBF0
    System::IAsyncResult* BeginInvoke(uint screenshotHandle, float flProgress, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRScreenshotError EndInvoke(System.IAsyncResult result)
    // Offset: 0x169BC9C
    OVR::OpenVR::EVRScreenshotError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRScreenshots/_UpdateScreenshotProgress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRScreenshots::_UpdateScreenshotProgress*, "OVR.OpenVR", "IVRScreenshots/_UpdateScreenshotProgress");
#pragma pack(pop)