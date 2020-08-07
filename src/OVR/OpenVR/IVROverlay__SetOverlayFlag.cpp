// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayFlag
#include "OVR/OpenVR/IVROverlay__SetOverlayFlag.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.VROverlayFlags
#include "OVR/OpenVR/VROverlayFlags.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFlag..ctor
OVR::OpenVR::IVROverlay::_SetOverlayFlag* OVR::OpenVR::IVROverlay::_SetOverlayFlag::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayFlag*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayFlag", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFlag.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayFlag::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, eOverlayFlag, bEnabled));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFlag.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, eOverlayFlag, bEnabled, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayFlag.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayFlag::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}