// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
// Including type: UnityEngine.Events.InvokableCallList
#include "UnityEngine/Events/InvokableCallList.hpp"
// Including type: UnityEngine.Events.PersistentCallGroup
#include "UnityEngine/Events/PersistentCallGroup.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
// Including type: UnityEngine.Events.PersistentCall
#include "UnityEngine/Events/PersistentCall.hpp"
// Including type: UnityEngine.Events.PersistentListenerMode
#include "UnityEngine/Events/PersistentListenerMode.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Events.UnityEventBase.FindMethod_Impl
System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod_Impl", name, targetObj));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.GetDelegate
UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEventBase::GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(this, "GetDelegate", target, theFunction));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.FindMethod
System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(UnityEngine::Events::PersistentCall* call) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod", call));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.FindMethod
System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::FindMethod(::Il2CppString* name, ::Il2CppObject* listener, UnityEngine::Events::PersistentListenerMode mode, System::Type* argumentType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod", name, listener, mode, argumentType));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.DirtyPersistentCalls
void UnityEngine::Events::UnityEventBase::DirtyPersistentCalls() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DirtyPersistentCalls"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.RebuildPersistentCallsIfNeeded
void UnityEngine::Events::UnityEventBase::RebuildPersistentCallsIfNeeded() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RebuildPersistentCallsIfNeeded"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.AddCall
void UnityEngine::Events::UnityEventBase::AddCall(UnityEngine::Events::BaseInvokableCall* call) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddCall", call));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.RemoveListener
void UnityEngine::Events::UnityEventBase::RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveListener", targetObj, method));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.PrepareInvoke
System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* UnityEngine::Events::UnityEventBase::PrepareInvoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>*>(this, "PrepareInvoke"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.GetValidMethodInfo
System::Reflection::MethodInfo* UnityEngine::Events::UnityEventBase::GetValidMethodInfo(::Il2CppObject* obj, ::Il2CppString* functionName, ::Array<System::Type*>* argumentTypes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>("UnityEngine.Events", "UnityEventBase", "GetValidMethodInfo", obj, functionName, argumentTypes));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase..ctor
UnityEngine::Events::UnityEventBase* UnityEngine::Events::UnityEventBase::New_ctor() {
  return (UnityEventBase*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Events", "UnityEventBase"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
void UnityEngine::Events::UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize"));
}
// Autogenerated method: UnityEngine.Events.UnityEventBase.ToString
::Il2CppString* UnityEngine::Events::UnityEventBase::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}