// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DelayedPauseTrigger
#include "GlobalNamespace/DelayedPauseTrigger.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: VRControllersInputManager
#include "GlobalNamespace/VRControllersInputManager.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: DelayedPauseTrigger.add_pauseTriggeredEvent
void GlobalNamespace::DelayedPauseTrigger::add_pauseTriggeredEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_pauseTriggeredEvent", value));
}
// Autogenerated method: DelayedPauseTrigger.remove_pauseTriggeredEvent
void GlobalNamespace::DelayedPauseTrigger::remove_pauseTriggeredEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_pauseTriggeredEvent", value));
}
// Autogenerated method: DelayedPauseTrigger.Tick
void GlobalNamespace::DelayedPauseTrigger::Tick() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Tick"));
}
// Autogenerated method: DelayedPauseTrigger..ctor
GlobalNamespace::DelayedPauseTrigger* GlobalNamespace::DelayedPauseTrigger::New_ctor() {
  return (DelayedPauseTrigger*)THROW_UNLESS(il2cpp_utils::New("", "DelayedPauseTrigger"));
}