// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder
#include "OVR/OpenVR/IVROverlay__GetOverlaySortOrder.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder..ctor
OVR::OpenVR::IVROverlay::_GetOverlaySortOrder* OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlaySortOrder*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlaySortOrder", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint& punSortOrder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, punSortOrder));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint& punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, punSortOrder, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlaySortOrder.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlaySortOrder::EndInvoke(uint& punSortOrder, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", punSortOrder, result));
}