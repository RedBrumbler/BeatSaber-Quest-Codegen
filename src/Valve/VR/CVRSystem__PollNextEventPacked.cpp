// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRSystem/_PollNextEventPacked
#include "Valve/VR/CVRSystem__PollNextEventPacked.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.VREvent_t_Packed
#include "Valve/VR/VREvent_t_Packed.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRSystem/_PollNextEventPacked..ctor
Valve::VR::CVRSystem::_PollNextEventPacked* Valve::VR::CVRSystem::_PollNextEventPacked::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (CVRSystem::_PollNextEventPacked*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "CVRSystem/_PollNextEventPacked", object, method));
}
// Autogenerated method: Valve.VR.CVRSystem/_PollNextEventPacked.Invoke
bool Valve::VR::CVRSystem::_PollNextEventPacked::Invoke(Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", pEvent, uncbVREvent));
}
// Autogenerated method: Valve.VR.CVRSystem/_PollNextEventPacked.BeginInvoke
System::IAsyncResult* Valve::VR::CVRSystem::_PollNextEventPacked::BeginInvoke(Valve::VR::VREvent_t_Packed& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pEvent, uncbVREvent, callback, object));
}
// Autogenerated method: Valve.VR.CVRSystem/_PollNextEventPacked.EndInvoke
bool Valve::VR::CVRSystem::_PollNextEventPacked::EndInvoke(Valve::VR::VREvent_t_Packed& pEvent, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", pEvent, result));
}