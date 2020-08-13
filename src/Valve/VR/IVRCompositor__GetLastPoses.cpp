// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetLastPoses
#include "Valve/VR/IVRCompositor__GetLastPoses.hpp"
// Including type: Valve.VR.EVRCompositorError
#include "Valve/VR/EVRCompositorError.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastPoses..ctor
Valve::VR::IVRCompositor::_GetLastPoses* Valve::VR::IVRCompositor::_GetLastPoses::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetLastPoses*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetLastPoses", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastPoses.Invoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_GetLastPoses::Invoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "Invoke", pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastPoses.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetLastPoses::BeginInvoke(::Array<Valve::VR::TrackedDevicePose_t>*& pRenderPoseArray, uint unRenderPoseArrayCount, ::Array<Valve::VR::TrackedDevicePose_t>*& pGamePoseArray, uint unGamePoseArrayCount, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetLastPoses.EndInvoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_GetLastPoses::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "EndInvoke", result));
}
