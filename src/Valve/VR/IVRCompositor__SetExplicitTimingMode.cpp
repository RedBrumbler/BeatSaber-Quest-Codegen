// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_SetExplicitTimingMode
#include "Valve/VR/IVRCompositor__SetExplicitTimingMode.hpp"
// Including type: Valve.VR.EVRCompositorTimingMode
#include "Valve/VR/EVRCompositorTimingMode.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_SetExplicitTimingMode..ctor
Valve::VR::IVRCompositor::_SetExplicitTimingMode* Valve::VR::IVRCompositor::_SetExplicitTimingMode::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRCompositor::_SetExplicitTimingMode*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_SetExplicitTimingMode", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetExplicitTimingMode.Invoke
void Valve::VR::IVRCompositor::_SetExplicitTimingMode::Invoke(Valve::VR::EVRCompositorTimingMode eTimingMode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", eTimingMode));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetExplicitTimingMode.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_SetExplicitTimingMode::BeginInvoke(Valve::VR::EVRCompositorTimingMode eTimingMode, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eTimingMode, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetExplicitTimingMode.EndInvoke
void Valve::VR::IVRCompositor::_SetExplicitTimingMode::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}