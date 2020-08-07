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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_GetOverlayTextureSize
  class IVROverlay::_GetOverlayTextureSize : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x150E3DC
    static IVROverlay::_GetOverlayTextureSize* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt32 pWidth, System.UInt32 pHeight)
    // Offset: 0x150E3F0
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt32 pWidth, System.UInt32 pHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x150E688
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.UInt32 pWidth, System.UInt32 pHeight, System.IAsyncResult result)
    // Offset: 0x150E754
    OVR::OpenVR::EVROverlayError EndInvoke(uint& pWidth, uint& pHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_GetOverlayTextureSize
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_GetOverlayTextureSize*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureSize");
#pragma pack(pop)