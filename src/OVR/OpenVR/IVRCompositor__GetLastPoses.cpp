// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRCompositor/_GetLastPoses
#include "OVR/OpenVR/IVRCompositor__GetLastPoses.hpp"
// Including type: OVR.OpenVR.EVRCompositorError
#include "OVR/OpenVR/EVRCompositorError.hpp"
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetLastPoses..ctor
OVR::OpenVR::IVRCompositor::_GetLastPoses* OVR::OpenVR::IVRCompositor::_GetLastPoses::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetLastPoses*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRCompositor/_GetLastPoses", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetLastPoses.Invoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetLastPoses::Invoke(::Array<OVR::OpenVR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<OVR::OpenVR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "Invoke", pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetLastPoses.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRCompositor::_GetLastPoses::BeginInvoke(::Array<OVR::OpenVR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<OVR::OpenVR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRCompositor/_GetLastPoses.EndInvoke
OVR::OpenVR::EVRCompositorError OVR::OpenVR::IVRCompositor::_GetLastPoses::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRCompositorError>(this, "EndInvoke", result));
}