// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationCount
#include "OVR/OpenVR/IVRApplications__GetApplicationCount.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationCount..ctor
OVR::OpenVR::IVRApplications::_GetApplicationCount* OVR::OpenVR::IVRApplications::_GetApplicationCount::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationCount*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationCount", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationCount.Invoke
uint OVR::OpenVR::IVRApplications::_GetApplicationCount::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationCount.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationCount::BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationCount.EndInvoke
uint OVR::OpenVR::IVRApplications::_GetApplicationCount::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}