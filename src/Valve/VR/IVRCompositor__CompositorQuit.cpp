// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_CompositorQuit
#include "Valve/VR/IVRCompositor__CompositorQuit.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_CompositorQuit..ctor
Valve::VR::IVRCompositor::_CompositorQuit* Valve::VR::IVRCompositor::_CompositorQuit::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_CompositorQuit*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_CompositorQuit", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_CompositorQuit.Invoke
void Valve::VR::IVRCompositor::_CompositorQuit::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: Valve.VR.IVRCompositor/_CompositorQuit.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_CompositorQuit::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_CompositorQuit.EndInvoke
void Valve::VR::IVRCompositor::_CompositorQuit::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
