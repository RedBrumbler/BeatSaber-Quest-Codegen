// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
// Including type: UnityEngine.Events.UnityAction
#include "UnityEngine/Events/UnityAction.hpp"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Events.UnityEvent.AddListener
void UnityEngine::Events::UnityEvent::AddListener(UnityEngine::Events::UnityAction* call) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddListener", call));
}
// Autogenerated method: UnityEngine.Events.UnityEvent.RemoveListener
void UnityEngine::Events::UnityEvent::RemoveListener(UnityEngine::Events::UnityAction* call) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveListener", call));
}
// Autogenerated method: UnityEngine.Events.UnityEvent.GetDelegate
UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent::GetDelegate(UnityEngine::Events::UnityAction* action) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>("UnityEngine.Events", "UnityEvent", "GetDelegate", action));
}
// Autogenerated method: UnityEngine.Events.UnityEvent.Invoke
void UnityEngine::Events::UnityEvent::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: UnityEngine.Events.UnityEvent..ctor
UnityEngine::Events::UnityEvent* UnityEngine::Events::UnityEvent::New_ctor() {
  return (UnityEvent*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Events", "UnityEvent"));
}
// Autogenerated method: UnityEngine.Events.UnityEvent.FindMethod_Impl
System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent::FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod_Impl", name, targetObj));
}
// Autogenerated method: UnityEngine.Events.UnityEvent.GetDelegate
UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent::GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(this, "GetDelegate", target, theFunction));
}