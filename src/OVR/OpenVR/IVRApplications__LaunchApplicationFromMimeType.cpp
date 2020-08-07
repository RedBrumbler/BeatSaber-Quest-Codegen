// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType
#include "OVR/OpenVR/IVRApplications__LaunchApplicationFromMimeType.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType..ctor
OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType* OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_LaunchApplicationFromMimeType*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_LaunchApplicationFromMimeType", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", pchMimeType, pchArgs));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchMimeType, pchArgs, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_LaunchApplicationFromMimeType.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_LaunchApplicationFromMimeType::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}