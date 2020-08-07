// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSettings/_GetBool
#include "OVR/OpenVR/IVRSettings__GetBool.hpp"
// Including type: OVR.OpenVR.EVRSettingsError
#include "OVR/OpenVR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSettings/_GetBool..ctor
OVR::OpenVR::IVRSettings::_GetBool* OVR::OpenVR::IVRSettings::_GetBool::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRSettings::_GetBool*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSettings/_GetBool", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_GetBool.Invoke
bool OVR::OpenVR::IVRSettings::_GetBool::Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pchSection, pchSettingsKey, peError));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_GetBool.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSettings::_GetBool::BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, OVR::OpenVR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, pchSettingsKey, peError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSettings/_GetBool.EndInvoke
bool OVR::OpenVR::IVRSettings::_GetBool::EndInvoke(OVR::OpenVR::EVRSettingsError& peError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", peError, result));
}