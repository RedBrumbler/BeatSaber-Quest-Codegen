// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum
#include "OVR/OpenVR/IVRSystem__GetButtonIdNameFromEnum.hpp"
// Including type: OVR.OpenVR.EVRButtonId
#include "OVR/OpenVR/EVRButtonId.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum..ctor
OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum* OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRSystem::_GetButtonIdNameFromEnum*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetButtonIdNameFromEnum", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum.Invoke
System::IntPtr OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::Invoke(OVR::OpenVR::EVRButtonId eButtonId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "Invoke", eButtonId));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::BeginInvoke(OVR::OpenVR::EVRButtonId eButtonId, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eButtonId, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetButtonIdNameFromEnum.EndInvoke
System::IntPtr OVR::OpenVR::IVRSystem::_GetButtonIdNameFromEnum::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(this, "EndInvoke", result));
}