// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Threading.SendOrPostCallback
#include "System/Threading/SendOrPostCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedPreparedType1
System::Type* System::Threading::SynchronizationContext::_get_s_cachedPreparedType1() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Threading", "SynchronizationContext", "s_cachedPreparedType1"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedPreparedType1
void System::Threading::SynchronizationContext::_set_s_cachedPreparedType1(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SynchronizationContext", "s_cachedPreparedType1", value));
}
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedPreparedType2
System::Type* System::Threading::SynchronizationContext::_get_s_cachedPreparedType2() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Threading", "SynchronizationContext", "s_cachedPreparedType2"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedPreparedType2
void System::Threading::SynchronizationContext::_set_s_cachedPreparedType2(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SynchronizationContext", "s_cachedPreparedType2", value));
}
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedPreparedType3
System::Type* System::Threading::SynchronizationContext::_get_s_cachedPreparedType3() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Threading", "SynchronizationContext", "s_cachedPreparedType3"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedPreparedType3
void System::Threading::SynchronizationContext::_set_s_cachedPreparedType3(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SynchronizationContext", "s_cachedPreparedType3", value));
}
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedPreparedType4
System::Type* System::Threading::SynchronizationContext::_get_s_cachedPreparedType4() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Threading", "SynchronizationContext", "s_cachedPreparedType4"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedPreparedType4
void System::Threading::SynchronizationContext::_set_s_cachedPreparedType4(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SynchronizationContext", "s_cachedPreparedType4", value));
}
// Autogenerated static field getter
// Get static field: static private System.Type s_cachedPreparedType5
System::Type* System::Threading::SynchronizationContext::_get_s_cachedPreparedType5() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Type*>("System.Threading", "SynchronizationContext", "s_cachedPreparedType5"));
}
// Autogenerated static field setter
// Set static field: static private System.Type s_cachedPreparedType5
void System::Threading::SynchronizationContext::_set_s_cachedPreparedType5(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SynchronizationContext", "s_cachedPreparedType5", value));
}
// Autogenerated method: System.Threading.SynchronizationContext.Send
void System::Threading::SynchronizationContext::Send(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send", d, state));
}
// Autogenerated method: System.Threading.SynchronizationContext.Post
void System::Threading::SynchronizationContext::Post(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Post", d, state));
}
// Autogenerated method: System.Threading.SynchronizationContext.OperationStarted
void System::Threading::SynchronizationContext::OperationStarted() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OperationStarted"));
}
// Autogenerated method: System.Threading.SynchronizationContext.OperationCompleted
void System::Threading::SynchronizationContext::OperationCompleted() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OperationCompleted"));
}
// Autogenerated method: System.Threading.SynchronizationContext.SetSynchronizationContext
void System::Threading::SynchronizationContext::SetSynchronizationContext(System::Threading::SynchronizationContext* syncContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "SynchronizationContext", "SetSynchronizationContext", syncContext));
}
// Autogenerated method: System.Threading.SynchronizationContext.get_Current
System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>("System.Threading", "SynchronizationContext", "get_Current"));
}
// Autogenerated method: System.Threading.SynchronizationContext.get_CurrentNoFlow
System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::get_CurrentNoFlow() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>("System.Threading", "SynchronizationContext", "get_CurrentNoFlow"));
}
// Autogenerated method: System.Threading.SynchronizationContext.GetThreadLocalContext
System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::GetThreadLocalContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>("System.Threading", "SynchronizationContext", "GetThreadLocalContext"));
}
// Autogenerated method: System.Threading.SynchronizationContext.CreateCopy
System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::CreateCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(this, "CreateCopy"));
}
// Autogenerated method: System.Threading.SynchronizationContext..ctor
System::Threading::SynchronizationContext* System::Threading::SynchronizationContext::New_ctor() {
  return (SynchronizationContext*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "SynchronizationContext"));
}