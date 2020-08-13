// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_SetOverlayTexture
#include "OVR/OpenVR/IVROverlay__SetOverlayTexture.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.Texture_t
#include "OVR/OpenVR/Texture_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTexture..ctor
OVR::OpenVR::IVROverlay::_SetOverlayTexture* OVR::OpenVR::IVROverlay::_SetOverlayTexture::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_SetOverlayTexture*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_SetOverlayTexture", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTexture.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayTexture::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::Texture_t& pTexture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pTexture));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTexture.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_SetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::Texture_t& pTexture, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pTexture, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_SetOverlayTexture.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_SetOverlayTexture::EndInvoke(OVR::OpenVR::Texture_t& pTexture, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", pTexture, result));
}
