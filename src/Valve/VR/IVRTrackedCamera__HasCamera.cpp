// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_HasCamera
#include "Valve/VR/IVRTrackedCamera__HasCamera.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_HasCamera..ctor
Valve::VR::IVRTrackedCamera::_HasCamera* Valve::VR::IVRTrackedCamera::_HasCamera::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_HasCamera*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRTrackedCamera/_HasCamera", object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_HasCamera.Invoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_HasCamera::Invoke(uint nDeviceIndex, bool& pHasCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "Invoke", nDeviceIndex, pHasCamera));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_HasCamera.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_HasCamera::BeginInvoke(uint nDeviceIndex, bool& pHasCamera, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", nDeviceIndex, pHasCamera, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_HasCamera.EndInvoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_HasCamera::EndInvoke(bool& pHasCamera, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "EndInvoke", pHasCamera, result));
}