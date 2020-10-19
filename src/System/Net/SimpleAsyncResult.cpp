// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
// Including type: System.Net.SimpleAsyncResult/<>c__DisplayClass9_0
#include "System/Net/SimpleAsyncResult_--c__DisplayClass9_0.hpp"
// Including type: System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
#include "System/Net/SimpleAsyncResult_--c__DisplayClass11_0.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.Net.SimpleAsyncCallback
#include "System/Net/SimpleAsyncCallback.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.SimpleAsyncResult..ctor
System::Net::SimpleAsyncResult* System::Net::SimpleAsyncResult::New_ctor(System::Net::SimpleAsyncCallback* cb) {
  return THROW_UNLESS(il2cpp_utils::New<SimpleAsyncResult*>(cb));
}
// Autogenerated method: System.Net.SimpleAsyncResult..ctor
System::Net::SimpleAsyncResult* System::Net::SimpleAsyncResult::New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
  return THROW_UNLESS(il2cpp_utils::New<SimpleAsyncResult*>(cb, state));
}
// Autogenerated method: System.Net.SimpleAsyncResult.Run
void System::Net::SimpleAsyncResult::Run(System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "SimpleAsyncResult", "Run", func, callback));
}
// Autogenerated method: System.Net.SimpleAsyncResult.RunWithLock
void System::Net::SimpleAsyncResult::RunWithLock(::Il2CppObject* locker, System::Func_2<System::Net::SimpleAsyncResult*, bool>* func, System::Net::SimpleAsyncCallback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "SimpleAsyncResult", "RunWithLock", locker, func, callback));
}
// Autogenerated method: System.Net.SimpleAsyncResult.Reset_internal
void System::Net::SimpleAsyncResult::Reset_internal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset_internal"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.SetCompleted
void System::Net::SimpleAsyncResult::SetCompleted(bool synch, System::Exception* e) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCompleted", synch, e));
}
// Autogenerated method: System.Net.SimpleAsyncResult.SetCompleted
void System::Net::SimpleAsyncResult::SetCompleted(bool synch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCompleted", synch));
}
// Autogenerated method: System.Net.SimpleAsyncResult.SetCompleted_internal
void System::Net::SimpleAsyncResult::SetCompleted_internal(bool synch, System::Exception* e) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCompleted_internal", synch, e));
}
// Autogenerated method: System.Net.SimpleAsyncResult.SetCompleted_internal
void System::Net::SimpleAsyncResult::SetCompleted_internal(bool synch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCompleted_internal", synch));
}
// Autogenerated method: System.Net.SimpleAsyncResult.DoCallback_private
void System::Net::SimpleAsyncResult::DoCallback_private() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCallback_private"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.DoCallback_internal
void System::Net::SimpleAsyncResult::DoCallback_internal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCallback_internal"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.WaitUntilComplete
void System::Net::SimpleAsyncResult::WaitUntilComplete() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WaitUntilComplete"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.WaitUntilComplete
bool System::Net::SimpleAsyncResult::WaitUntilComplete(int timeout, bool exitContext) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WaitUntilComplete", timeout, exitContext));
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_CompletedSynchronouslyPeek
bool System::Net::SimpleAsyncResult::get_CompletedSynchronouslyPeek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompletedSynchronouslyPeek"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_GotException
bool System::Net::SimpleAsyncResult::get_GotException() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_GotException"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_Exception
System::Exception* System::Net::SimpleAsyncResult::get_Exception() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "get_Exception"));
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_AsyncState
::Il2CppObject* System::Net::SimpleAsyncResult::get_AsyncState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_AsyncState"));
}
::Il2CppObject* System::Net::SimpleAsyncResult::System_IAsyncResult_get_AsyncState() {
  return System::Net::SimpleAsyncResult::get_AsyncState();
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_AsyncWaitHandle
System::Threading::WaitHandle* System::Net::SimpleAsyncResult::get_AsyncWaitHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::WaitHandle*>(this, "get_AsyncWaitHandle"));
}
System::Threading::WaitHandle* System::Net::SimpleAsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  return System::Net::SimpleAsyncResult::get_AsyncWaitHandle();
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_CompletedSynchronously
bool System::Net::SimpleAsyncResult::get_CompletedSynchronously() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompletedSynchronously"));
}
bool System::Net::SimpleAsyncResult::System_IAsyncResult_get_CompletedSynchronously() {
  return System::Net::SimpleAsyncResult::get_CompletedSynchronously();
}
// Autogenerated method: System.Net.SimpleAsyncResult.get_IsCompleted
bool System::Net::SimpleAsyncResult::get_IsCompleted() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCompleted"));
}
bool System::Net::SimpleAsyncResult::System_IAsyncResult_get_IsCompleted() {
  return System::Net::SimpleAsyncResult::get_IsCompleted();
}