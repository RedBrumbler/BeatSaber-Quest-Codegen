// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid
#include "OVR/OpenVR/IVROverlay__GetOverlayRenderingPid.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid..ctor
OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid* OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayRenderingPid*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayRenderingPid", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid.Invoke
uint OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid.EndInvoke
uint OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
