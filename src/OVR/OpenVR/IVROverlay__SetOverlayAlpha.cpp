// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayAlpha
#include "OVR/OpenVR/IVROverlay__SetOverlayAlpha.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayAlpha..ctor
OVR::OpenVR::IVROverlay::_SetOverlayAlpha* OVR::OpenVR::IVROverlay::_SetOverlayAlpha::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayAlpha*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayAlpha", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayAlpha.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float fAlpha) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, fAlpha));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayAlpha.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float fAlpha, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, fAlpha, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayAlpha.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayAlpha::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", result));
}