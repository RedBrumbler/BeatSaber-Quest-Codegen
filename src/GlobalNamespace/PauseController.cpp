// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PauseController
#include "GlobalNamespace/PauseController.hpp"
// Including type: PauseController/<>c__DisplayClass17_0
#include "GlobalNamespace/PauseController_--c__DisplayClass17_0.hpp"
// Including type: PauseMenuManager
#include "GlobalNamespace/PauseMenuManager.hpp"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
// Including type: IPauseTrigger
#include "GlobalNamespace/IPauseTrigger.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: ILevelRestartController
#include "GlobalNamespace/ILevelRestartController.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
// Including type: VRPlatformHelper
#include "GlobalNamespace/VRPlatformHelper.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PauseController.add_didPauseEvent
void GlobalNamespace::PauseController::add_didPauseEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didPauseEvent", value));
}
// Autogenerated method: PauseController.remove_didPauseEvent
void GlobalNamespace::PauseController::remove_didPauseEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didPauseEvent", value));
}
// Autogenerated method: PauseController.add_didResumeEvent
void GlobalNamespace::PauseController::add_didResumeEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didResumeEvent", value));
}
// Autogenerated method: PauseController.remove_didResumeEvent
void GlobalNamespace::PauseController::remove_didResumeEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didResumeEvent", value));
}
// Autogenerated method: PauseController.add_canPauseEvent
void GlobalNamespace::PauseController::add_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_canPauseEvent", value));
}
// Autogenerated method: PauseController.remove_canPauseEvent
void GlobalNamespace::PauseController::remove_canPauseEvent(System::Action_1<System::Action_1<bool>*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_canPauseEvent", value));
}
// Autogenerated method: PauseController.get_canPause
bool GlobalNamespace::PauseController::get_canPause() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canPause"));
}
// Autogenerated method: PauseController.Start
void GlobalNamespace::PauseController::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: PauseController.OnDestroy
void GlobalNamespace::PauseController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: PauseController.OnApplicationPause
void GlobalNamespace::PauseController::OnApplicationPause(bool pauseStatus) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnApplicationPause", pauseStatus));
}
// Autogenerated method: PauseController.Pause
void GlobalNamespace::PauseController::Pause() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Pause"));
}
// Autogenerated method: PauseController.HandlePauseTriggered
void GlobalNamespace::PauseController::HandlePauseTriggered() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePauseTriggered"));
}
// Autogenerated method: PauseController.HandleInputFocusWasCaptured
void GlobalNamespace::PauseController::HandleInputFocusWasCaptured() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleInputFocusWasCaptured"));
}
// Autogenerated method: PauseController.HandleHMDUnmounted
void GlobalNamespace::PauseController::HandleHMDUnmounted() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleHMDUnmounted"));
}
// Autogenerated method: PauseController.HandlePauseMenuManagerDidFinishResumeAnimation
void GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePauseMenuManagerDidFinishResumeAnimation"));
}
// Autogenerated method: PauseController.HandlePauseMenuManagerDidPressContinueButton
void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePauseMenuManagerDidPressContinueButton"));
}
// Autogenerated method: PauseController.HandlePauseMenuManagerDidPressRestartButton
void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePauseMenuManagerDidPressRestartButton"));
}
// Autogenerated method: PauseController.HandlePauseMenuManagerDidPressMenuButton
void GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePauseMenuManagerDidPressMenuButton"));
}
// Autogenerated method: PauseController..ctor
GlobalNamespace::PauseController* GlobalNamespace::PauseController::New_ctor() {
  return (PauseController*)THROW_UNLESS(il2cpp_utils::New("", "PauseController"));
}