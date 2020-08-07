// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext/InvocationEntryDelegate
#include "System/Threading/OSSpecificSynchronizationContext_InvocationEntryDelegate.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext/MonoPInvokeCallbackAttribute
#include "System/Threading/OSSpecificSynchronizationContext_MonoPInvokeCallbackAttribute.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext/InvocationContext
#include "System/Threading/OSSpecificSynchronizationContext_InvocationContext.hpp"
// Including type: System.Threading.OSSpecificSynchronizationContext/<>c
#include "System/Threading/OSSpecificSynchronizationContext_--c.hpp"
// Including type: System.Runtime.CompilerServices.ConditionalWeakTable`2
#include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.SendOrPostCallback
#include "System/Threading/SendOrPostCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext> s_ContextCache
System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Threading::OSSpecificSynchronizationContext*>* System::Threading::OSSpecificSynchronizationContext::_get_s_ContextCache() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Threading::OSSpecificSynchronizationContext*>*>("System.Threading", "OSSpecificSynchronizationContext", "s_ContextCache")));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext> s_ContextCache
void System::Threading::OSSpecificSynchronizationContext::_set_s_ContextCache(System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Threading::OSSpecificSynchronizationContext*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "OSSpecificSynchronizationContext", "s_ContextCache", value));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext..ctor
System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::New_ctor(::Il2CppObject* osContext) {
  return (OSSpecificSynchronizationContext*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "OSSpecificSynchronizationContext", osContext));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.Get
System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::Get() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::OSSpecificSynchronizationContext*>("System.Threading", "OSSpecificSynchronizationContext", "Get"));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.InvocationEntry
void System::Threading::OSSpecificSynchronizationContext::InvocationEntry(System::IntPtr arg) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "OSSpecificSynchronizationContext", "InvocationEntry", arg));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.GetOSContext
::Il2CppObject* System::Threading::OSSpecificSynchronizationContext::GetOSContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Threading", "OSSpecificSynchronizationContext", "GetOSContext"));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.PostInternal
void System::Threading::OSSpecificSynchronizationContext::PostInternal(::Il2CppObject* osSynchronizationContext, System::IntPtr callback, System::IntPtr arg) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "OSSpecificSynchronizationContext", "PostInternal", osSynchronizationContext, callback, arg));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext..cctor
void System::Threading::OSSpecificSynchronizationContext::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "OSSpecificSynchronizationContext", ".cctor"));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.CreateCopy
System::Threading::SynchronizationContext* System::Threading::OSSpecificSynchronizationContext::CreateCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(this, "CreateCopy"));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.Send
void System::Threading::OSSpecificSynchronizationContext::Send(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Send", d, state));
}
// Autogenerated method: System.Threading.OSSpecificSynchronizationContext.Post
void System::Threading::OSSpecificSynchronizationContext::Post(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Post", d, state));
}