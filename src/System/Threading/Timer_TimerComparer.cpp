// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Timer/TimerComparer
#include "System/Threading/Timer_TimerComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Timer/TimerComparer.Compare
int System::Threading::Timer::TimerComparer::Compare(::Il2CppObject* x, ::Il2CppObject* y) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", x, y));
}
int System::Threading::Timer::TimerComparer::System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y) {
  return Compare(x, y);
}
// Autogenerated method: System.Threading.Timer/TimerComparer..ctor
System::Threading::Timer::TimerComparer* System::Threading::Timer::TimerComparer::New_ctor() {
  return (Timer::TimerComparer*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "Timer/TimerComparer"));
}