// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.RegisteredWaitHandle
#include "System/Threading/RegisteredWaitHandle.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Threading.WaitOrTimerCallback
#include "System/Threading/WaitOrTimerCallback.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.RegisteredWaitHandle..ctor
System::Threading::RegisteredWaitHandle* System::Threading::RegisteredWaitHandle::New_ctor(System::Threading::WaitHandle* waitObject, System::Threading::WaitOrTimerCallback* callback, ::Il2CppObject* state, System::TimeSpan timeout, bool executeOnlyOnce) {
  return (RegisteredWaitHandle*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "RegisteredWaitHandle", waitObject, callback, state, timeout, executeOnlyOnce));
}
// Autogenerated method: System.Threading.RegisteredWaitHandle.Wait
void System::Threading::RegisteredWaitHandle::Wait(::Il2CppObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Wait", state));
}
// Autogenerated method: System.Threading.RegisteredWaitHandle.DoCallBack
void System::Threading::RegisteredWaitHandle::DoCallBack(::Il2CppObject* timedOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCallBack", timedOut));
}
// Autogenerated method: System.Threading.RegisteredWaitHandle.Unregister
bool System::Threading::RegisteredWaitHandle::Unregister(System::Threading::WaitHandle* waitObject) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Unregister", waitObject));
}