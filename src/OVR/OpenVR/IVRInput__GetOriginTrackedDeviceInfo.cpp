// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo
#include "OVR/OpenVR/IVRInput__GetOriginTrackedDeviceInfo.hpp"
// Including type: OVR.OpenVR.EVRInputError
#include "OVR/OpenVR/EVRInputError.hpp"
// Including type: OVR.OpenVR.InputOriginInfo_t
#include "OVR/OpenVR/InputOriginInfo_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo..ctor
OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo* OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRInput::_GetOriginTrackedDeviceInfo*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRInput/_GetOriginTrackedDeviceInfo", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo.Invoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::Invoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "Invoke", origin, pOriginInfo, unOriginInfoSize));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::BeginInvoke(uint64_t origin, OVR::OpenVR::InputOriginInfo_t& pOriginInfo, uint unOriginInfoSize, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", origin, pOriginInfo, unOriginInfoSize, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetOriginTrackedDeviceInfo.EndInvoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetOriginTrackedDeviceInfo::EndInvoke(OVR::OpenVR::InputOriginInfo_t& pOriginInfo, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "EndInvoke", pOriginInfo, result));
}