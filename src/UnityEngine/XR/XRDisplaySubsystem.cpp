// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.XRDisplaySubsystemDescriptor
#include "UnityEngine/XR/XRDisplaySubsystemDescriptor.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
#include "UnityEngine/XR/XRDisplaySubsystem_XRRenderPass.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
#include "UnityEngine/XR/XRDisplaySubsystem_XRMirrorViewBlitDesc.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Action`1<System.Boolean> displayFocusChanged
System::Action_1<bool>* UnityEngine::XR::XRDisplaySubsystem::_get_displayFocusChanged() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<bool>*>("UnityEngine.XR", "XRDisplaySubsystem", "displayFocusChanged"));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<System.Boolean> displayFocusChanged
void UnityEngine::XR::XRDisplaySubsystem::_set_displayFocusChanged(System::Action_1<bool>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.XR", "XRDisplaySubsystem", "displayFocusChanged", value));
}
// Autogenerated method: UnityEngine.XR.XRDisplaySubsystem.InvokeDisplayFocusChanged
void UnityEngine::XR::XRDisplaySubsystem::InvokeDisplayFocusChanged(bool focus) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.XR", "XRDisplaySubsystem", "InvokeDisplayFocusChanged", focus));
}
// Autogenerated method: UnityEngine.XR.XRDisplaySubsystem..ctor
UnityEngine::XR::XRDisplaySubsystem* UnityEngine::XR::XRDisplaySubsystem::New_ctor() {
  return (XRDisplaySubsystem*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.XR", "XRDisplaySubsystem"));
}