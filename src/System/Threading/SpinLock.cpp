// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SpinLock
#include "System/Threading/SpinLock.hpp"
// Including type: System.Threading.SpinLock/SystemThreading_SpinLockDebugView
#include "System/Threading/SpinLock_SystemThreading_SpinLockDebugView.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 MAXIMUM_WAITERS
int System::Threading::SpinLock::_get_MAXIMUM_WAITERS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "SpinLock", "MAXIMUM_WAITERS"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 MAXIMUM_WAITERS
void System::Threading::SpinLock::_set_MAXIMUM_WAITERS(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "SpinLock", "MAXIMUM_WAITERS", value));
}
// Autogenerated method: System.Threading.SpinLock..ctor
System::Threading::SpinLock* System::Threading::SpinLock::New_ctor(bool enableThreadOwnerTracking) {
  return (SpinLock*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "SpinLock", enableThreadOwnerTracking));
}
// Autogenerated method: System.Threading.SpinLock.Enter
void System::Threading::SpinLock::Enter(bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Enter", lockTaken));
}
// Autogenerated method: System.Threading.SpinLock.TryEnter
void System::Threading::SpinLock::TryEnter(int millisecondsTimeout, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "TryEnter", millisecondsTimeout, lockTaken));
}
// Autogenerated method: System.Threading.SpinLock.ContinueTryEnter
void System::Threading::SpinLock::ContinueTryEnter(int millisecondsTimeout, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ContinueTryEnter", millisecondsTimeout, lockTaken));
}
// Autogenerated method: System.Threading.SpinLock.DecrementWaiters
void System::Threading::SpinLock::DecrementWaiters() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "DecrementWaiters"));
}
// Autogenerated method: System.Threading.SpinLock.ContinueTryEnterWithThreadTracking
void System::Threading::SpinLock::ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ContinueTryEnterWithThreadTracking", millisecondsTimeout, startTime, lockTaken));
}
// Autogenerated method: System.Threading.SpinLock.Exit
void System::Threading::SpinLock::Exit(bool useMemoryBarrier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Exit", useMemoryBarrier));
}
// Autogenerated method: System.Threading.SpinLock.ExitSlowPath
void System::Threading::SpinLock::ExitSlowPath(bool useMemoryBarrier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ExitSlowPath", useMemoryBarrier));
}
// Autogenerated method: System.Threading.SpinLock.get_IsHeldByCurrentThread
bool System::Threading::SpinLock::get_IsHeldByCurrentThread() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsHeldByCurrentThread"));
}
// Autogenerated method: System.Threading.SpinLock.get_IsThreadOwnerTrackingEnabled
bool System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_IsThreadOwnerTrackingEnabled"));
}
// Autogenerated method: System.Threading.SpinLock..cctor
void System::Threading::SpinLock::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "SpinLock", ".cctor"));
}