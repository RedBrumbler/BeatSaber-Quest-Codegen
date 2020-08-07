// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Monitor
#include "System/Threading/Monitor.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Monitor.Enter
void System::Threading::Monitor::Enter(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Enter", obj));
}
// Autogenerated method: System.Threading.Monitor.Enter
void System::Threading::Monitor::Enter(::Il2CppObject* obj, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Enter", obj, lockTaken));
}
// Autogenerated method: System.Threading.Monitor.ThrowLockTakenException
void System::Threading::Monitor::ThrowLockTakenException() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "ThrowLockTakenException"));
}
// Autogenerated method: System.Threading.Monitor.Exit
void System::Threading::Monitor::Exit(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Exit", obj));
}
// Autogenerated method: System.Threading.Monitor.Wait
bool System::Threading::Monitor::Wait(::Il2CppObject* obj, int millisecondsTimeout, bool exitContext) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Monitor", "Wait", obj, millisecondsTimeout, exitContext));
}
// Autogenerated method: System.Threading.Monitor.Wait
bool System::Threading::Monitor::Wait(::Il2CppObject* obj, int millisecondsTimeout) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Monitor", "Wait", obj, millisecondsTimeout));
}
// Autogenerated method: System.Threading.Monitor.Pulse
void System::Threading::Monitor::Pulse(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Pulse", obj));
}
// Autogenerated method: System.Threading.Monitor.PulseAll
void System::Threading::Monitor::PulseAll(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "PulseAll", obj));
}
// Autogenerated method: System.Threading.Monitor.Monitor_test_synchronised
bool System::Threading::Monitor::Monitor_test_synchronised(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Monitor", "Monitor_test_synchronised", obj));
}
// Autogenerated method: System.Threading.Monitor.Monitor_pulse
void System::Threading::Monitor::Monitor_pulse(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Monitor_pulse", obj));
}
// Autogenerated method: System.Threading.Monitor.ObjPulse
void System::Threading::Monitor::ObjPulse(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "ObjPulse", obj));
}
// Autogenerated method: System.Threading.Monitor.Monitor_pulse_all
void System::Threading::Monitor::Monitor_pulse_all(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "Monitor_pulse_all", obj));
}
// Autogenerated method: System.Threading.Monitor.ObjPulseAll
void System::Threading::Monitor::ObjPulseAll(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "ObjPulseAll", obj));
}
// Autogenerated method: System.Threading.Monitor.Monitor_wait
bool System::Threading::Monitor::Monitor_wait(::Il2CppObject* obj, int ms) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Monitor", "Monitor_wait", obj, ms));
}
// Autogenerated method: System.Threading.Monitor.ObjWait
bool System::Threading::Monitor::ObjWait(bool exitContext, int millisecondsTimeout, ::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading", "Monitor", "ObjWait", exitContext, millisecondsTimeout, obj));
}
// Autogenerated method: System.Threading.Monitor.try_enter_with_atomic_var
void System::Threading::Monitor::try_enter_with_atomic_var(::Il2CppObject* obj, int millisecondsTimeout, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "try_enter_with_atomic_var", obj, millisecondsTimeout, lockTaken));
}
// Autogenerated method: System.Threading.Monitor.ReliableEnterTimeout
void System::Threading::Monitor::ReliableEnterTimeout(::Il2CppObject* obj, int timeout, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "ReliableEnterTimeout", obj, timeout, lockTaken));
}
// Autogenerated method: System.Threading.Monitor.ReliableEnter
void System::Threading::Monitor::ReliableEnter(::Il2CppObject* obj, bool& lockTaken) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "Monitor", "ReliableEnter", obj, lockTaken));
}