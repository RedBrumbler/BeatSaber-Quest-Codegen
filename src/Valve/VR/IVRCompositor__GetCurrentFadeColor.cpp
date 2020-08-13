// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetCurrentFadeColor
#include "Valve/VR/IVRCompositor__GetCurrentFadeColor.hpp"
// Including type: Valve.VR.HmdColor_t
#include "Valve/VR/HmdColor_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetCurrentFadeColor..ctor
Valve::VR::IVRCompositor::_GetCurrentFadeColor* Valve::VR::IVRCompositor::_GetCurrentFadeColor::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetCurrentFadeColor*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetCurrentFadeColor", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetCurrentFadeColor.Invoke
Valve::VR::HmdColor_t Valve::VR::IVRCompositor::_GetCurrentFadeColor::Invoke(bool bBackground) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::HmdColor_t>(this, "Invoke", bBackground));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetCurrentFadeColor.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetCurrentFadeColor::BeginInvoke(bool bBackground, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", bBackground, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetCurrentFadeColor.EndInvoke
Valve::VR::HmdColor_t Valve::VR::IVRCompositor::_GetCurrentFadeColor::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::HmdColor_t>(this, "EndInvoke", result));
}
