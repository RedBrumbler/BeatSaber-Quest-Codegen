// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_FreeTexture
#include "OVR/OpenVR/IVRRenderModels__FreeTexture.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeTexture..ctor
OVR::OpenVR::IVRRenderModels::_FreeTexture* OVR::OpenVR::IVRRenderModels::_FreeTexture::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_FreeTexture*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_FreeTexture", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeTexture.Invoke
void OVR::OpenVR::IVRRenderModels::_FreeTexture::Invoke(System::IntPtr pTexture) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pTexture));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeTexture.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_FreeTexture::BeginInvoke(System::IntPtr pTexture, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pTexture, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_FreeTexture.EndInvoke
void OVR::OpenVR::IVRRenderModels::_FreeTexture::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
