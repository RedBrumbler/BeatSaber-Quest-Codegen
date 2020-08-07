// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid
#include "OVR/OpenVR/IVROverlay__SetOverlayRenderingPid.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid..ctor
OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid* OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayRenderingPid*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayRenderingPid", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle, uint unPID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, unPID));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, uint unPID, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, unPID, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}