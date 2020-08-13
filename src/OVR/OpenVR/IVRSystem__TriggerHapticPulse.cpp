// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_TriggerHapticPulse
#include "OVR/OpenVR/IVRSystem__TriggerHapticPulse.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_TriggerHapticPulse..ctor
OVR::OpenVR::IVRSystem::_TriggerHapticPulse* OVR::OpenVR::IVRSystem::_TriggerHapticPulse::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_TriggerHapticPulse*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_TriggerHapticPulse", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_TriggerHapticPulse.Invoke
void OVR::OpenVR::IVRSystem::_TriggerHapticPulse::Invoke(uint unControllerDeviceIndex, uint unAxisId, uint16_t usDurationMicroSec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", unControllerDeviceIndex, unAxisId, usDurationMicroSec));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_TriggerHapticPulse.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_TriggerHapticPulse::BeginInvoke(uint unControllerDeviceIndex, uint unAxisId, uint16_t usDurationMicroSec, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unControllerDeviceIndex, unAxisId, usDurationMicroSec, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_TriggerHapticPulse.EndInvoke
void OVR::OpenVR::IVRSystem::_TriggerHapticPulse::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
