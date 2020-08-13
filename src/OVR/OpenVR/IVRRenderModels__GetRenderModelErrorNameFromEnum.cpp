// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
#include "OVR/OpenVR/IVRRenderModels__GetRenderModelErrorNameFromEnum.hpp"
// Including type: OVR.OpenVR.EVRRenderModelError
#include "OVR/OpenVR/EVRRenderModelError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum..ctor
OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum* OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRRenderModels::_GetRenderModelErrorNameFromEnum*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum.Invoke
System::IntPtr OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::Invoke(OVR::OpenVR::EVRRenderModelError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", error));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::BeginInvoke(OVR::OpenVR::EVRRenderModelError error, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", error, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum.EndInvoke
System::IntPtr OVR::OpenVR::IVRRenderModels::_GetRenderModelErrorNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}
