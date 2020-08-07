// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
#include "OVR/OpenVR/IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose..ctor
OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose* OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose.Invoke
bool OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pmatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pmatSeatedZeroPoseToRawTrackingPose, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose.EndInvoke
bool OVR::OpenVR::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pmatSeatedZeroPoseToRawTrackingPose, result));
}