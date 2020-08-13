// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayMouseScale
#include "Valve/VR/IVROverlay__GetOverlayMouseScale.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayMouseScale..ctor
Valve::VR::IVROverlay::_GetOverlayMouseScale* Valve::VR::IVROverlay::_GetOverlayMouseScale::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayMouseScale*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_GetOverlayMouseScale", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayMouseScale.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pvecMouseScale));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayMouseScale.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pvecMouseScale, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayMouseScale.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayMouseScale::EndInvoke(Valve::VR::HmdVector2_t& pvecMouseScale, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pvecMouseScale, result));
}
