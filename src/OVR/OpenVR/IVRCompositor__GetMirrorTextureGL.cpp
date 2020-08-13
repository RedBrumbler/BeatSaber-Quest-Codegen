// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL
#include "OVR/OpenVR/IVRCompositor__GetMirrorTextureGL.hpp"
// Including type: OVR.OpenVR.EVRCompositorError
#include "OVR/OpenVR/EVRCompositorError.hpp"
// Including type: OVR.OpenVR.EVREye
#include "OVR/OpenVR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL..ctor
OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL* OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetMirrorTextureGL*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRCompositor/_GetMirrorTextureGL", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL.Invoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL::Invoke(OVR::OpenVR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "Invoke", eEye, pglTextureId, pglSharedTextureHandle));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL::BeginInvoke(OVR::OpenVR::EVREye eEye, uint& pglTextureId, System::IntPtr pglSharedTextureHandle, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, pglTextureId, pglSharedTextureHandle, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL.EndInvoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetMirrorTextureGL::EndInvoke(uint& pglTextureId, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "EndInvoke", pglTextureId, result));
}
