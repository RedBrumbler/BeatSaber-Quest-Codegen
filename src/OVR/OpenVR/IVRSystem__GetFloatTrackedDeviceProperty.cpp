// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty
#include "OVR/OpenVR/IVRSystem__GetFloatTrackedDeviceProperty.hpp"
// Including type: OVR.OpenVR.ETrackedDeviceProperty
#include "OVR/OpenVR/ETrackedDeviceProperty.hpp"
// Including type: OVR.OpenVR.ETrackedPropertyError
#include "OVR/OpenVR/ETrackedPropertyError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty..ctor
OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty* OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetFloatTrackedDeviceProperty*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSystem/_GetFloatTrackedDeviceProperty", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty.Invoke
float OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty::Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "Invoke", unDeviceIndex, prop, pError));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty::BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackedDeviceProperty prop, OVR::OpenVR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, prop, pError, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSystem/_GetFloatTrackedDeviceProperty.EndInvoke
float OVR::OpenVR::IVRSystem::_GetFloatTrackedDeviceProperty::EndInvoke(OVR::OpenVR::ETrackedPropertyError& pError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "EndInvoke", pError, result));
}
