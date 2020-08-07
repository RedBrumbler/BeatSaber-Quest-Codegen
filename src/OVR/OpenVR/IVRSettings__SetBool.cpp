// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings/_SetBool
#include "OVR/OpenVR/IVRSettings__SetBool.hpp"
// Including type: OVR.OpenVR.EVRSettingsError
#include "OVR/OpenVR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetBool..ctor
OVR::OpenVR::IVRSettings::_SetBool* OVR::OpenVR::IVRSettings::_SetBool::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRSettings::_SetBool*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSettings/_SetBool", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetBool.Invoke
void OVR::OpenVR::IVRSettings::_SetBool::Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, OVR::OpenVR::EVRSettingsError& peError) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pchSection, pchSettingsKey, bValue, peError));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetBool.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSettings::_SetBool::BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, bool bValue, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, pchSettingsKey, bValue, peError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_SetBool.EndInvoke
void OVR::OpenVR::IVRSettings::_SetBool::EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", peError, result));
}