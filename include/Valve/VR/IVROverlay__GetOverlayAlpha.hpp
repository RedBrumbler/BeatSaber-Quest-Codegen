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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayAlpha
  class IVROverlay::_GetOverlayAlpha : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F3864
    static IVROverlay::_GetOverlayAlpha* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Single pfAlpha)
    // Offset: 0x15F3878
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, float& pfAlpha);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Single pfAlpha, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F3AFC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, float& pfAlpha, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.Single pfAlpha, System.IAsyncResult result)
    // Offset: 0x15F3BAC
    Valve::VR::EVROverlayError EndInvoke(float& pfAlpha, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayAlpha
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayAlpha*, "Valve.VR", "IVROverlay/_GetOverlayAlpha");
#pragma pack(pop)