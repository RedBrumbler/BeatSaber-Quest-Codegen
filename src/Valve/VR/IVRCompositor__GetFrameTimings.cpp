// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetFrameTimings
#include "Valve/VR/IVRCompositor__GetFrameTimings.hpp"
// Including type: Valve.VR.Compositor_FrameTiming
#include "Valve/VR/Compositor_FrameTiming.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTimings..ctor
Valve::VR::IVRCompositor::_GetFrameTimings* Valve::VR::IVRCompositor::_GetFrameTimings::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetFrameTimings*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetFrameTimings", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTimings.Invoke
uint Valve::VR::IVRCompositor::_GetFrameTimings::Invoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pTiming, nFrames));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTimings.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetFrameTimings::BeginInvoke(Valve::VR::Compositor_FrameTiming& pTiming, uint nFrames, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pTiming, nFrames, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetFrameTimings.EndInvoke
uint Valve::VR::IVRCompositor::_GetFrameTimings::EndInvoke(Valve::VR::Compositor_FrameTiming& pTiming, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", pTiming, result));
}
