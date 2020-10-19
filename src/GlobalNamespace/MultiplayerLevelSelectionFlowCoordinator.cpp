// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLevelSelectionFlowCoordinator
#include "GlobalNamespace/MultiplayerLevelSelectionFlowCoordinator.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: ILobbyGameStateController
#include "GlobalNamespace/ILobbyGameStateController.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: LevelSelectionFlowCoordinator/State
#include "GlobalNamespace/LevelSelectionFlowCoordinator_State.hpp"
// Including type: HMUI.ViewController/AnimationType
#include "HMUI/ViewController_AnimationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.add_didSelectLevelEvent
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectLevelEvent", value));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.remove_didSelectLevelEvent
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didSelectLevelEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator::State*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectLevelEvent", value));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.add_didFinishedEvent
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::add_didFinishedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didFinishedEvent", value));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.remove_didFinishedEvent
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::remove_didFinishedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didFinishedEvent", value));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.Setup
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::Setup(GlobalNamespace::LevelSelectionFlowCoordinator::State* state, GlobalNamespace::SongPackMask songPackMask, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, ::Il2CppString* actionText, ::Il2CppString* titleText) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", state, songPackMask, allowedBeatmapDifficultyMask, actionText, titleText));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.HandleLobbyGameStateControllerGameStarted
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::HandleLobbyGameStateControllerGameStarted() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLobbyGameStateControllerGameStarted"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_hidePracticeButton
bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePracticeButton() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hidePracticeButton"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_hidePacksIfOneOrNone
bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_hidePacksIfOneOrNone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hidePacksIfOneOrNone"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_actionButtonText
::Il2CppString* GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_actionButtonText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_actionButtonText"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_showBackButtonForMainViewController
bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_showBackButtonForMainViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showBackButtonForMainViewController"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_songPackMask
GlobalNamespace::SongPackMask GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_songPackMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::SongPackMask>(this, "get_songPackMask"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_enableCustomLevels
bool GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_enableCustomLevels() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_enableCustomLevels"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_allowedBeatmapDifficultyMask
GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_allowedBeatmapDifficultyMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapDifficultyMask>(this, "get_allowedBeatmapDifficultyMask"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_notAllowedCharacteristics
::Array<GlobalNamespace::BeatmapCharacteristicSO*>* GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_notAllowedCharacteristics() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::BeatmapCharacteristicSO*>*>(this, "get_notAllowedCharacteristics"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.get_mainTitle
::Il2CppString* GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::get_mainTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_mainTitle"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.ActionButtonWasPressed
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::ActionButtonWasPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ActionButtonWasPressed"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.BackButtonWasPressed
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonWasPressed", topViewController));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.LevelSelectionFlowCoordinatorTopViewControllerWillChange
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, HMUI::ViewController::AnimationType animationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorTopViewControllerWillChange", oldViewController, newViewController, animationType));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.TransitionDidStart
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TransitionDidStart"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator.TransitionDidFinish
void GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::TransitionDidFinish() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TransitionDidFinish"));
}
// Autogenerated method: MultiplayerLevelSelectionFlowCoordinator..ctor
GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator* GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MultiplayerLevelSelectionFlowCoordinator*>());
}