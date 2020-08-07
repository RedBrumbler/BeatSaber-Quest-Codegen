// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
#include "Valve/VR/IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose..ctor
Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose* Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose", object, method));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose.Invoke
void Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::Invoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pMatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::BeginInvoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pMatSeatedZeroPoseToRawTrackingPose, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose.EndInvoke
void Valve::VR::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose::EndInvoke(Valve::VR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pMatSeatedZeroPoseToRawTrackingPose, result));
}