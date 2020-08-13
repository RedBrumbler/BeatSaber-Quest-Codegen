// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_CreateOverlay
#include "Valve/VR/IVROverlay__CreateOverlay.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_CreateOverlay..ctor
Valve::VR::IVROverlay::_CreateOverlay* Valve::VR::IVROverlay::_CreateOverlay::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_CreateOverlay*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_CreateOverlay", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_CreateOverlay.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_CreateOverlay::Invoke(::CsString* pchOverlayKey, ::CsString* pchOverlayName, uint64_t& pOverlayHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", pchOverlayKey, pchOverlayName, pOverlayHandle));
}
// Autogenerated method: Valve.VR.IVROverlay/_CreateOverlay.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_CreateOverlay::BeginInvoke(::CsString* pchOverlayKey, ::CsString* pchOverlayName, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_CreateOverlay.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_CreateOverlay::EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pOverlayHandle, result));
}
