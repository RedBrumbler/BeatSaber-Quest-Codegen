// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetControllerStateWithPose
#include "Valve/VR/IVRSystem__GetControllerStateWithPose.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.VRControllerState_t
#include "Valve/VR/VRControllerState_t.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetControllerStateWithPose..ctor
Valve::VR::IVRSystem::_GetControllerStateWithPose* Valve::VR::IVRSystem::_GetControllerStateWithPose::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetControllerStateWithPose*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetControllerStateWithPose", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetControllerStateWithPose.Invoke
bool Valve::VR::IVRSystem::_GetControllerStateWithPose::Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetControllerStateWithPose.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetControllerStateWithPose::BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetControllerStateWithPose.EndInvoke
bool Valve::VR::IVRSystem::_GetControllerStateWithPose::EndInvoke(Valve::VR::VRControllerState_t& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pControllerState, pTrackedDevicePose, result));
}
