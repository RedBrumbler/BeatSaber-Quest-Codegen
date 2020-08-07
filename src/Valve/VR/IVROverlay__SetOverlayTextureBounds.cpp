// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_SetOverlayTextureBounds
#include "Valve/VR/IVROverlay__SetOverlayTextureBounds.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTextureBounds..ctor
Valve::VR::IVROverlay::_SetOverlayTextureBounds* Valve::VR::IVROverlay::_SetOverlayTextureBounds::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayTextureBounds*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_SetOverlayTextureBounds", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTextureBounds.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pOverlayTextureBounds));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTextureBounds.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_SetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pOverlayTextureBounds, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_SetOverlayTextureBounds.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_SetOverlayTextureBounds::EndInvoke(Valve::VR::VRTextureBounds_t& pOverlayTextureBounds, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pOverlayTextureBounds, result));
}