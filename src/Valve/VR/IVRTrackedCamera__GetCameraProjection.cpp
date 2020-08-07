// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_GetCameraProjection
#include "Valve/VR/IVRTrackedCamera__GetCameraProjection.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: Valve.VR.EVRTrackedCameraFrameType
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
// Including type: Valve.VR.HmdMatrix44_t
#include "Valve/VR/HmdMatrix44_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraProjection..ctor
Valve::VR::IVRTrackedCamera::_GetCameraProjection* Valve::VR::IVRTrackedCamera::_GetCameraProjection::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_GetCameraProjection*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRTrackedCamera/_GetCameraProjection", object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraProjection.Invoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_GetCameraProjection::Invoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "Invoke", nDeviceIndex, eFrameType, flZNear, flZFar, pProjection));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraProjection.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_GetCameraProjection::BeginInvoke(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", nDeviceIndex, eFrameType, flZNear, flZFar, pProjection, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetCameraProjection.EndInvoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_GetCameraProjection::EndInvoke(Valve::VR::HmdMatrix44_t& pProjection, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "EndInvoke", pProjection, result));
}