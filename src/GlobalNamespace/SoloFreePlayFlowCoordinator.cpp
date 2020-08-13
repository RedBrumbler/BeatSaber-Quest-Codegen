// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SoloFreePlayFlowCoordinator
#include "GlobalNamespace/SoloFreePlayFlowCoordinator.hpp"
// Including type: SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0
#include "GlobalNamespace/SoloFreePlayFlowCoordinator_--c__DisplayClass21_0.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
// Including type: MenuLightsManager
#include "GlobalNamespace/MenuLightsManager.hpp"
// Including type: ResultsViewController
#include "GlobalNamespace/ResultsViewController.hpp"
// Including type: PlatformLeaderboardViewController
#include "GlobalNamespace/PlatformLeaderboardViewController.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: PlayerLevelStatsData
#include "GlobalNamespace/PlayerLevelStatsData.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: HMUI.FlowCoordinator/ActivationType
#include "HMUI/FlowCoordinator_ActivationType.hpp"
// Including type: HMUI.FlowCoordinator/DeactivationType
#include "HMUI/FlowCoordinator_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SoloFreePlayFlowCoordinator.add_didFinishEvent
void GlobalNamespace::SoloFreePlayFlowCoordinator::add_didFinishEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didFinishEvent", value));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.remove_didFinishEvent
void GlobalNamespace::SoloFreePlayFlowCoordinator::remove_didFinishEvent(System::Action_1<GlobalNamespace::LevelSelectionFlowCoordinator*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didFinishEvent", value));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.IsNewHighScore
bool GlobalNamespace::SoloFreePlayFlowCoordinator::IsNewHighScore(GlobalNamespace::PlayerLevelStatsData* playerLevelStats, GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsNewHighScore", playerLevelStats, levelCompletionResults));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.ProcessScore
void GlobalNamespace::SoloFreePlayFlowCoordinator::ProcessScore(GlobalNamespace::PlayerLevelStatsData* playerLevelStats, GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessScore", playerLevelStats, levelCompletionResults, difficultyBeatmap));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
void GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerContinueButtonPressed", viewController));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
void GlobalNamespace::SoloFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerRestartButtonPressed", resultsViewController));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.get_leaderboardViewController
GlobalNamespace::LeaderboardViewController* GlobalNamespace::SoloFreePlayFlowCoordinator::get_leaderboardViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::LeaderboardViewController*>(this, "get_leaderboardViewController"));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.get_showPlayerStatsInDetailView
bool GlobalNamespace::SoloFreePlayFlowCoordinator::get_showPlayerStatsInDetailView() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showPlayerStatsInDetailView"));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.get_showBackButtonForMainViewController
bool GlobalNamespace::SoloFreePlayFlowCoordinator::get_showBackButtonForMainViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showBackButtonForMainViewController"));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
void GlobalNamespace::SoloFreePlayFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidActivate", firstActivation, activationType));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
void GlobalNamespace::SoloFreePlayFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidDeactivate", deactivationType));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
void GlobalNamespace::SoloFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLevelCompletionResultsAfterLevelDidFinish", levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice));
}
// Autogenerated method: SoloFreePlayFlowCoordinator.BackButtonWasPressed
void GlobalNamespace::SoloFreePlayFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonWasPressed", topViewController));
}
// Autogenerated method: SoloFreePlayFlowCoordinator..ctor
GlobalNamespace::SoloFreePlayFlowCoordinator* GlobalNamespace::SoloFreePlayFlowCoordinator::New_ctor() {
  return (SoloFreePlayFlowCoordinator*)THROW_UNLESS(il2cpp_utils::New("", "SoloFreePlayFlowCoordinator"));
}
