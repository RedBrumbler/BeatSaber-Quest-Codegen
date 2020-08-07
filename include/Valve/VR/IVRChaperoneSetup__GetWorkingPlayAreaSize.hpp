// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
  class IVRChaperoneSetup::_GetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15E4D18
    static IVRChaperoneSetup::_GetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Single pSizeX, System.Single pSizeZ)
    // Offset: 0x15E4D2C
    bool Invoke(float& pSizeX, float& pSizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single pSizeX, System.Single pSizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15E4FA4
    System::IAsyncResult* BeginInvoke(float& pSizeX, float& pSizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.Single pSizeX, System.Single pSizeZ, System.IAsyncResult result)
    // Offset: 0x15E5050
    bool EndInvoke(float& pSizeX, float& pSizeZ, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaSize*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
#pragma pack(pop)