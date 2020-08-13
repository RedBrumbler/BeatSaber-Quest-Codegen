// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath
#include "OVR/OpenVR/IVRRenderModels__GetComponentStateForDevicePath.hpp"
// Including type: OVR.OpenVR.RenderModel_ControllerMode_State_t
#include "OVR/OpenVR/RenderModel_ControllerMode_State_t.hpp"
// Including type: OVR.OpenVR.RenderModel_ComponentState_t
#include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath..ctor
OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath* OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_GetComponentStateForDevicePath*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_GetComponentStateForDevicePath", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath.Invoke
bool OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::Invoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, uint64_t devicePath, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pchRenderModelName, pchComponentName, devicePath, pState, pComponentState));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::BeginInvoke(::CsString* pchRenderModelName, ::CsString* pchComponentName, uint64_t devicePath, OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchRenderModelName, pchComponentName, devicePath, pState, pComponentState, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath.EndInvoke
bool OVR::OpenVR::IVRRenderModels::_GetComponentStateForDevicePath::EndInvoke(OVR::OpenVR::RenderModel_ControllerMode_State_t& pState, OVR::OpenVR::RenderModel_ComponentState_t& pComponentState, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pState, pComponentState, result));
}
