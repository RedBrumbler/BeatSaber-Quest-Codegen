// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
#include "Valve/VR/IVRChaperoneSetup__GetWorkingPlayAreaRect.hpp"
// Including type: Valve.VR.HmdQuad_t
#include "Valve/VR/HmdQuad_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect..ctor
Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect* Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_GetWorkingPlayAreaRect*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect", object, method));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect.Invoke
bool Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::Invoke(Valve::VR::HmdQuad_t& rect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", rect));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::BeginInvoke(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", rect, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect.EndInvoke
bool Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::EndInvoke(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", rect, result));
}
