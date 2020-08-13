// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay
#include "OVR/OpenVR/IVROverlay__IsHoverTargetOverlay.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay..ctor
OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay* OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_IsHoverTargetOverlay*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_IsHoverTargetOverlay", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay.Invoke
bool OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay::Invoke(uint64_t ulOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", ulOverlayHandle));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay::BeginInvoke(uint64_t ulOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay.EndInvoke
bool OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
