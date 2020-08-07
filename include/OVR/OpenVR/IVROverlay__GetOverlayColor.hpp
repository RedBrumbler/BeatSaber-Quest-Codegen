// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayColor
  class IVROverlay::_GetOverlayColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150A4BC
    static IVROverlay::_GetOverlayColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single pfRed, System.Single pfGreen, System.Single pfBlue)
    // Offset: 0x150A4D0
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single pfRed, System.Single pfGreen, System.Single pfBlue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150A780
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.Single pfRed, System.Single pfGreen, System.Single pfBlue, System.IAsyncResult result)
    // Offset: 0x150A868
    OVR::OpenVR::EVROverlayError EndInvoke(float& pfRed, float& pfGreen, float& pfBlue, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayColor*, "OVR.OpenVR", "IVROverlay/_GetOverlayColor");
#pragma pack(pop)