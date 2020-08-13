// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async
#include "OVR/OpenVR/IVRRenderModels__LoadRenderModel_Async.hpp"
// Including type: OVR.OpenVR.EVRRenderModelError
#include "OVR/OpenVR/EVRRenderModelError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async..ctor
OVR::OpenVR::IVRRenderModels::_LoadRenderModel_Async* OVR::OpenVR::IVRRenderModels::_LoadRenderModel_Async::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_LoadRenderModel_Async*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_LoadRenderModel_Async", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async.Invoke
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels::_LoadRenderModel_Async::Invoke(::CsString* pchRenderModelName, System::IntPtr& ppRenderModel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "Invoke", pchRenderModelName, ppRenderModel));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_LoadRenderModel_Async::BeginInvoke(::CsString* pchRenderModelName, System::IntPtr& ppRenderModel, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, ppRenderModel, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async.EndInvoke
OVR::OpenVR::EVRRenderModelError OVR::OpenVR::IVRRenderModels::_LoadRenderModel_Async::EndInvoke(System::IntPtr& ppRenderModel, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRRenderModelError>(this, "EndInvoke", ppRenderModel, result));
}
