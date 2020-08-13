// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked
#include "Valve/VR/CVRSystem__GetControllerStateWithPosePacked.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.ETrackingUniverseOrigin
#include "Valve/VR/ETrackingUniverseOrigin.hpp"
// Including type: Valve.VR.VRControllerState_t_Packed
#include "Valve/VR/VRControllerState_t_Packed.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked..ctor
Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::New_ctor(::CsObject* object, System::IntPtr method) {
  return (CVRSystem::_GetControllerStateWithPosePacked*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "CVRSystem/_GetControllerStateWithPosePacked", object, method));
}
// Autogenerated method: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked.Invoke
bool Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::Invoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose));
}
// Autogenerated method: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked.BeginInvoke
System::IAsyncResult* Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::BeginInvoke(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t_Packed& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eOrigin, unControllerDeviceIndex, pControllerState, unControllerStateSize, pTrackedDevicePose, callback, object));
}
// Autogenerated method: Valve.VR.CVRSystem/_GetControllerStateWithPosePacked.EndInvoke
bool Valve::VR::CVRSystem::_GetControllerStateWithPosePacked::EndInvoke(Valve::VR::VRControllerState_t_Packed& pControllerState, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pControllerState, pTrackedDevicePose, result));
}
