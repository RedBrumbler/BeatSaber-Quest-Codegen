// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlaySortOrder
#include "Valve/VR/IVROverlay__GetOverlaySortOrder.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlaySortOrder..ctor
Valve::VR::IVROverlay::_GetOverlaySortOrder* Valve::VR::IVROverlay::_GetOverlaySortOrder::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlaySortOrder*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_GetOverlaySortOrder", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlaySortOrder.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint& punSortOrder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, punSortOrder));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlaySortOrder.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint& punSortOrder, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, punSortOrder, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlaySortOrder.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlaySortOrder::EndInvoke(uint& punSortOrder, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", punSortOrder, result));
}