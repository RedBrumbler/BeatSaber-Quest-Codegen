// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ManualResetEventSlim
#include "System/Threading/ManualResetEventSlim.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 DEFAULT_SPIN_SP
int System::Threading::ManualResetEventSlim::_get_DEFAULT_SPIN_SP() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "DEFAULT_SPIN_SP"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 DEFAULT_SPIN_SP
void System::Threading::ManualResetEventSlim::_set_DEFAULT_SPIN_SP(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "DEFAULT_SPIN_SP", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 DEFAULT_SPIN_MP
int System::Threading::ManualResetEventSlim::_get_DEFAULT_SPIN_MP() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "DEFAULT_SPIN_MP"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 DEFAULT_SPIN_MP
void System::Threading::ManualResetEventSlim::_set_DEFAULT_SPIN_MP(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "DEFAULT_SPIN_MP", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SignalledState_BitMask
int System::Threading::ManualResetEventSlim::_get_SignalledState_BitMask() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "SignalledState_BitMask"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SignalledState_BitMask
void System::Threading::ManualResetEventSlim::_set_SignalledState_BitMask(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "SignalledState_BitMask", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SignalledState_ShiftCount
int System::Threading::ManualResetEventSlim::_get_SignalledState_ShiftCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "SignalledState_ShiftCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SignalledState_ShiftCount
void System::Threading::ManualResetEventSlim::_set_SignalledState_ShiftCount(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "SignalledState_ShiftCount", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 Dispose_BitMask
int System::Threading::ManualResetEventSlim::_get_Dispose_BitMask() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "Dispose_BitMask"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 Dispose_BitMask
void System::Threading::ManualResetEventSlim::_set_Dispose_BitMask(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "Dispose_BitMask", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SpinCountState_BitMask
int System::Threading::ManualResetEventSlim::_get_SpinCountState_BitMask() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "SpinCountState_BitMask"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SpinCountState_BitMask
void System::Threading::ManualResetEventSlim::_set_SpinCountState_BitMask(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "SpinCountState_BitMask", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SpinCountState_ShiftCount
int System::Threading::ManualResetEventSlim::_get_SpinCountState_ShiftCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "SpinCountState_ShiftCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SpinCountState_ShiftCount
void System::Threading::ManualResetEventSlim::_set_SpinCountState_ShiftCount(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "SpinCountState_ShiftCount", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 SpinCountState_MaxValue
int System::Threading::ManualResetEventSlim::_get_SpinCountState_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "SpinCountState_MaxValue"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 SpinCountState_MaxValue
void System::Threading::ManualResetEventSlim::_set_SpinCountState_MaxValue(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "SpinCountState_MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NumWaitersState_BitMask
int System::Threading::ManualResetEventSlim::_get_NumWaitersState_BitMask() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "NumWaitersState_BitMask"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NumWaitersState_BitMask
void System::Threading::ManualResetEventSlim::_set_NumWaitersState_BitMask(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "NumWaitersState_BitMask", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NumWaitersState_ShiftCount
int System::Threading::ManualResetEventSlim::_get_NumWaitersState_ShiftCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "NumWaitersState_ShiftCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NumWaitersState_ShiftCount
void System::Threading::ManualResetEventSlim::_set_NumWaitersState_ShiftCount(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "NumWaitersState_ShiftCount", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 NumWaitersState_MaxValue
int System::Threading::ManualResetEventSlim::_get_NumWaitersState_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Threading", "ManualResetEventSlim", "NumWaitersState_MaxValue"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 NumWaitersState_MaxValue
void System::Threading::ManualResetEventSlim::_set_NumWaitersState_MaxValue(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "NumWaitersState_MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
System::Action_1<::CsObject*>* System::Threading::ManualResetEventSlim::_get_s_cancellationTokenCallback() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<::CsObject*>*>("System.Threading", "ManualResetEventSlim", "s_cancellationTokenCallback"));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
void System::Threading::ManualResetEventSlim::_set_s_cancellationTokenCallback(System::Action_1<::CsObject*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "ManualResetEventSlim", "s_cancellationTokenCallback", value));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.get_WaitHandle
System::Threading::WaitHandle* System::Threading::ManualResetEventSlim::get_WaitHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::WaitHandle*>(this, "get_WaitHandle"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.get_IsSet
bool System::Threading::ManualResetEventSlim::get_IsSet() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsSet"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.set_IsSet
void System::Threading::ManualResetEventSlim::set_IsSet(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsSet", value));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.get_SpinCount
int System::Threading::ManualResetEventSlim::get_SpinCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_SpinCount"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.set_SpinCount
void System::Threading::ManualResetEventSlim::set_SpinCount(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SpinCount", value));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.get_Waiters
int System::Threading::ManualResetEventSlim::get_Waiters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Waiters"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.set_Waiters
void System::Threading::ManualResetEventSlim::set_Waiters(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Waiters", value));
}
// Autogenerated method: System.Threading.ManualResetEventSlim..ctor
System::Threading::ManualResetEventSlim* System::Threading::ManualResetEventSlim::New_ctor(bool initialState) {
  return (ManualResetEventSlim*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ManualResetEventSlim", initialState));
}
// Autogenerated method: System.Threading.ManualResetEventSlim..ctor
System::Threading::ManualResetEventSlim* System::Threading::ManualResetEventSlim::New_ctor(bool initialState, int spinCount) {
  return (ManualResetEventSlim*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "ManualResetEventSlim", initialState, spinCount));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Initialize
void System::Threading::ManualResetEventSlim::Initialize(bool initialState, int spinCount) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize", initialState, spinCount));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.EnsureLockObjectCreated
void System::Threading::ManualResetEventSlim::EnsureLockObjectCreated() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureLockObjectCreated"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.LazyInitializeEvent
bool System::Threading::ManualResetEventSlim::LazyInitializeEvent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "LazyInitializeEvent"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Set
void System::Threading::ManualResetEventSlim::Set() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Set"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Set
void System::Threading::ManualResetEventSlim::Set(bool duringCancellation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Set", duringCancellation));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Wait
bool System::Threading::ManualResetEventSlim::Wait(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Wait", millisecondsTimeout, cancellationToken));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Dispose
void System::Threading::ManualResetEventSlim::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.ThrowIfDisposed
void System::Threading::ManualResetEventSlim::ThrowIfDisposed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ThrowIfDisposed"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.CancellationTokenCallback
void System::Threading::ManualResetEventSlim::CancellationTokenCallback(::CsObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ManualResetEventSlim", "CancellationTokenCallback", obj));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.UpdateStateAtomically
void System::Threading::ManualResetEventSlim::UpdateStateAtomically(int newBits, int updateBitsMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateStateAtomically", newBits, updateBitsMask));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.ExtractStatePortionAndShiftRight
int System::Threading::ManualResetEventSlim::ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "ManualResetEventSlim", "ExtractStatePortionAndShiftRight", state, mask, rightBitShiftCount));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.ExtractStatePortion
int System::Threading::ManualResetEventSlim::ExtractStatePortion(int state, int mask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Threading", "ManualResetEventSlim", "ExtractStatePortion", state, mask));
}
// Autogenerated method: System.Threading.ManualResetEventSlim..cctor
void System::Threading::ManualResetEventSlim::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "ManualResetEventSlim", ".cctor"));
}
// Autogenerated method: System.Threading.ManualResetEventSlim.Dispose
void System::Threading::ManualResetEventSlim::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Threading::ManualResetEventSlim::System_IDisposable_Dispose() {
  Dispose();
}
