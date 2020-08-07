// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetOverlayRenderModel
#include "Valve/VR/IVROverlay__SetOverlayRenderModel.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.HmdColor_t
#include "Valve/VR/HmdColor_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayRenderModel..ctor
Valve::VR::IVROverlay::_SetOverlayRenderModel* Valve::VR::IVROverlay::_SetOverlayRenderModel::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayRenderModel*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_SetOverlayRenderModel", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayRenderModel.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, Valve::VR::HmdColor_t& pColor) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pchRenderModel, pColor));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayRenderModel.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, Valve::VR::HmdColor_t& pColor, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pchRenderModel, pColor, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayRenderModel.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayRenderModel::EndInvoke(Valve::VR::HmdColor_t& pColor, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pColor, result));
}