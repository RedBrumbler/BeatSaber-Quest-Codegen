// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck
#include "OVR/OpenVR/IVRApplications__PerformApplicationPrelaunchCheck.hpp"
// Including type: OVR.OpenVR.EVRApplicationError
#include "OVR/OpenVR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck..ctor
OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck* OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_PerformApplicationPrelaunchCheck*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_PerformApplicationPrelaunchCheck", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck.Invoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck::Invoke(::Il2CppString* pchAppKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "Invoke", pchAppKey));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck::BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchAppKey, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_PerformApplicationPrelaunchCheck.EndInvoke
OVR::OpenVR::EVRApplicationError OVR::OpenVR::IVRApplications::_PerformApplicationPrelaunchCheck::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRApplicationError>(this, "EndInvoke", result));
}