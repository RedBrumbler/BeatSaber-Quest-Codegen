// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayName
#include "OVR/OpenVR/IVROverlay__GetOverlayName.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayName..ctor
OVR::OpenVR::IVROverlay::_GetOverlayName* OVR::OpenVR::IVROverlay::_GetOverlayName::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayName*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayName", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayName.Invoke
uint OVR::OpenVR::IVROverlay::_GetOverlayName::Invoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", ulOverlayHandle, pchValue, unBufferSize, pError));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayName.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, OVR::OpenVR::EVROverlayError& pError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pchValue, unBufferSize, pError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayName.EndInvoke
uint OVR::OpenVR::IVROverlay::_GetOverlayName::EndInvoke(OVR::OpenVR::EVROverlayError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pError, result));
}