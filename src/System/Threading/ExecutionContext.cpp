// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Threading.ExecutionContext/Reader
#include "System/Threading/ExecutionContext_Reader.hpp"
// Including type: System.Threading.ExecutionContext/CaptureOptions
#include "System/Threading/ExecutionContext_CaptureOptions.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
// Including type: System.Threading.IAsyncLocal
#include "System/Threading/IAsyncLocal.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
// Including type: System.Threading.ExecutionContextSwitcher
#include "System/Threading/ExecutionContextSwitcher.hpp"
// Including type: System.Threading.Thread
#include "System/Threading/Thread.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
System::Threading::ExecutionContext* System::Threading::ExecutionContext::_get_s_dummyDefaultEC() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ExecutionContext*>("System.Threading", "ExecutionContext", "s_dummyDefaultEC"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
void System::Threading::ExecutionContext::_set_s_dummyDefaultEC(System::Threading::ExecutionContext* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ExecutionContext", "s_dummyDefaultEC", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_isNewCapture
bool System::Threading::ExecutionContext::get_isNewCapture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isNewCapture"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_isNewCapture
void System::Threading::ExecutionContext::set_isNewCapture(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_isNewCapture", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_isFlowSuppressed
bool System::Threading::ExecutionContext::get_isFlowSuppressed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isFlowSuppressed"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_isFlowSuppressed
void System::Threading::ExecutionContext::set_isFlowSuppressed(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_isFlowSuppressed", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_PreAllocatedDefault
System::Threading::ExecutionContext* System::Threading::ExecutionContext::get_PreAllocatedDefault() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>("System.Threading", "ExecutionContext", "get_PreAllocatedDefault"));
}
// Autogenerated method: System.Threading.ExecutionContext.get_IsPreAllocatedDefault
bool System::Threading::ExecutionContext::get_IsPreAllocatedDefault() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPreAllocatedDefault"));
}
// Autogenerated method: System.Threading.ExecutionContext..ctor
System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(bool isPreAllocatedDefault) {
  return (ExecutionContext*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ExecutionContext", isPreAllocatedDefault));
}
// Autogenerated method: System.Threading.ExecutionContext.GetLocalValue
::CsObject* System::Threading::ExecutionContext::GetLocalValue(System::Threading::IAsyncLocal* local) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>("System.Threading", "ExecutionContext", "GetLocalValue", local));
}
// Autogenerated method: System.Threading.ExecutionContext.SetLocalValue
void System::Threading::ExecutionContext::SetLocalValue(System::Threading::IAsyncLocal* local, ::CsObject* newValue, bool needChangeNotifications) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "SetLocalValue", local, newValue, needChangeNotifications));
}
// Autogenerated method: System.Threading.ExecutionContext.OnAsyncLocalContextChanged
void System::Threading::ExecutionContext::OnAsyncLocalContextChanged(System::Threading::ExecutionContext* previous, System::Threading::ExecutionContext* current) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "OnAsyncLocalContextChanged", previous, current));
}
// Autogenerated method: System.Threading.ExecutionContext.get_LogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Threading::ExecutionContext::get_LogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, "get_LogicalCallContext"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_LogicalCallContext
void System::Threading::ExecutionContext::set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_LogicalCallContext", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_IllogicalCallContext
System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Threading::ExecutionContext::get_IllogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IllogicalCallContext*>(this, "get_IllogicalCallContext"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_IllogicalCallContext
void System::Threading::ExecutionContext::set_IllogicalCallContext(System::Runtime::Remoting::Messaging::IllogicalCallContext* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IllogicalCallContext", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_SynchronizationContext
System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(this, "get_SynchronizationContext"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_SynchronizationContext
void System::Threading::ExecutionContext::set_SynchronizationContext(System::Threading::SynchronizationContext* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SynchronizationContext", value));
}
// Autogenerated method: System.Threading.ExecutionContext.get_SynchronizationContextNoFlow
System::Threading::SynchronizationContext* System::Threading::ExecutionContext::get_SynchronizationContextNoFlow() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::SynchronizationContext*>(this, "get_SynchronizationContextNoFlow"));
}
// Autogenerated method: System.Threading.ExecutionContext.set_SynchronizationContextNoFlow
void System::Threading::ExecutionContext::set_SynchronizationContextNoFlow(System::Threading::SynchronizationContext* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SynchronizationContextNoFlow", value));
}
// Autogenerated method: System.Threading.ExecutionContext.Run
void System::Threading::ExecutionContext::Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::CsObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "Run", executionContext, callback, state));
}
// Autogenerated method: System.Threading.ExecutionContext.Run
void System::Threading::ExecutionContext::Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::CsObject* state, bool preserveSyncCtx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "Run", executionContext, callback, state, preserveSyncCtx));
}
// Autogenerated method: System.Threading.ExecutionContext.RunInternal
void System::Threading::ExecutionContext::RunInternal(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::CsObject* state, bool preserveSyncCtx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "RunInternal", executionContext, callback, state, preserveSyncCtx));
}
// Autogenerated method: System.Threading.ExecutionContext.EstablishCopyOnWriteScope
void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(System::Threading::ExecutionContextSwitcher& ecsw) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "EstablishCopyOnWriteScope", ecsw));
}
// Autogenerated method: System.Threading.ExecutionContext.EstablishCopyOnWriteScope
void System::Threading::ExecutionContext::EstablishCopyOnWriteScope(System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, System::Threading::ExecutionContextSwitcher& ecsw) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", "EstablishCopyOnWriteScope", currentThread, knownNullWindowsIdentity, ecsw));
}
// Autogenerated method: System.Threading.ExecutionContext.SetExecutionContext
System::Threading::ExecutionContextSwitcher System::Threading::ExecutionContext::SetExecutionContext(System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContextSwitcher>("System.Threading", "ExecutionContext", "SetExecutionContext", executionContext, preserveSyncCtx));
}
// Autogenerated method: System.Threading.ExecutionContext.CreateCopy
System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>(this, "CreateCopy"));
}
// Autogenerated method: System.Threading.ExecutionContext.CreateMutableCopy
System::Threading::ExecutionContext* System::Threading::ExecutionContext::CreateMutableCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>(this, "CreateMutableCopy"));
}
// Autogenerated method: System.Threading.ExecutionContext.IsFlowSuppressed
bool System::Threading::ExecutionContext::IsFlowSuppressed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "ExecutionContext", "IsFlowSuppressed"));
}
// Autogenerated method: System.Threading.ExecutionContext.Capture
System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>("System.Threading", "ExecutionContext", "Capture"));
}
// Autogenerated method: System.Threading.ExecutionContext.FastCapture
System::Threading::ExecutionContext* System::Threading::ExecutionContext::FastCapture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>("System.Threading", "ExecutionContext", "FastCapture"));
}
// Autogenerated method: System.Threading.ExecutionContext.Capture
System::Threading::ExecutionContext* System::Threading::ExecutionContext::Capture(System::Threading::StackCrawlMark& stackMark, System::Threading::ExecutionContext::CaptureOptions options) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::ExecutionContext*>("System.Threading", "ExecutionContext", "Capture", stackMark, options));
}
// Autogenerated method: System.Threading.ExecutionContext..ctor
System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ExecutionContext*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ExecutionContext", info, context));
}
// Autogenerated method: System.Threading.ExecutionContext.IsDefaultFTContext
bool System::Threading::ExecutionContext::IsDefaultFTContext(bool ignoreSyncCtx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsDefaultFTContext", ignoreSyncCtx));
}
// Autogenerated method: System.Threading.ExecutionContext..cctor
void System::Threading::ExecutionContext::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ExecutionContext", ".cctor"));
}
// Autogenerated method: System.Threading.ExecutionContext..ctor
System::Threading::ExecutionContext* System::Threading::ExecutionContext::New_ctor() {
  return (ExecutionContext*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ExecutionContext"));
}
// Autogenerated method: System.Threading.ExecutionContext.Dispose
void System::Threading::ExecutionContext::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Threading::ExecutionContext::System_IDisposable_Dispose() {
  Dispose();
}
// Autogenerated method: System.Threading.ExecutionContext.GetObjectData
void System::Threading::ExecutionContext::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Threading::ExecutionContext::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
