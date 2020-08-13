// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ArcadeFlowCoordinator
#include "GlobalNamespace/ArcadeFlowCoordinator.hpp"
// Including type: ArcadeFlowCoordinator/<>c__DisplayClass19_0
#include "GlobalNamespace/ArcadeFlowCoordinator_--c__DisplayClass19_0.hpp"
// Including type: ArcadeFlowCoordinator/<>c__DisplayClass23_0
#include "GlobalNamespace/ArcadeFlowCoordinator_--c__DisplayClass23_0.hpp"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
// Including type: TabBarViewController
#include "GlobalNamespace/TabBarViewController.hpp"
// Including type: HowToPlayViewController
#include "GlobalNamespace/HowToPlayViewController.hpp"
// Including type: MenuLightsManager
#include "GlobalNamespace/MenuLightsManager.hpp"
// Including type: ResultsViewController
#include "GlobalNamespace/ResultsViewController.hpp"
// Including type: LocalLeaderboardViewController
#include "GlobalNamespace/LocalLeaderboardViewController.hpp"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: LeaderboardViewController
#include "GlobalNamespace/LeaderboardViewController.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: HMUI.FlowCoordinator/ActivationType
#include "HMUI/FlowCoordinator_ActivationType.hpp"
// Including type: HMUI.FlowCoordinator/DeactivationType
#include "HMUI/FlowCoordinator_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ArcadeFlowCoordinator.WillScoreGoToLeaderboard
bool GlobalNamespace::ArcadeFlowCoordinator::WillScoreGoToLeaderboard(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WillScoreGoToLeaderboard", levelCompletionResults, difficultyBeatmap, practice));
}
// Autogenerated method: ArcadeFlowCoordinator.ProcessScore
bool GlobalNamespace::ArcadeFlowCoordinator::ProcessScore(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, ::CsString* playerName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ProcessScore", levelCompletionResults, difficultyBeatmap, practice, playerName));
}
// Autogenerated method: ArcadeFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
void GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerContinueButtonPressed", resultsViewController));
}
// Autogenerated method: ArcadeFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
void GlobalNamespace::ArcadeFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(GlobalNamespace::ResultsViewController* resultsViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleResultsViewControllerRestartButtonPressed", resultsViewController));
}
// Autogenerated method: ArcadeFlowCoordinator.HandleHowToPlayViewControllerDidPressTutorialButton
void GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayViewControllerDidPressTutorialButton() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleHowToPlayViewControllerDidPressTutorialButton"));
}
// Autogenerated method: ArcadeFlowCoordinator.HandleHowToPlayTabSelected
void GlobalNamespace::ArcadeFlowCoordinator::HandleHowToPlayTabSelected() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleHowToPlayTabSelected"));
}
// Autogenerated method: ArcadeFlowCoordinator.<LevelSelectionFlowCoordinatorDidActivate>b__17_0
void GlobalNamespace::ArcadeFlowCoordinator::$LevelSelectionFlowCoordinatorDidActivate$b__17_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<LevelSelectionFlowCoordinatorDidActivate>b__17_0"));
}
// Autogenerated method: ArcadeFlowCoordinator.<HandleHowToPlayTabSelected>b__25_0
void GlobalNamespace::ArcadeFlowCoordinator::$HandleHowToPlayTabSelected$b__25_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<HandleHowToPlayTabSelected>b__25_0"));
}
// Autogenerated method: ArcadeFlowCoordinator.get_leaderboardViewController
GlobalNamespace::LeaderboardViewController* GlobalNamespace::ArcadeFlowCoordinator::get_leaderboardViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::LeaderboardViewController*>(this, "get_leaderboardViewController"));
}
// Autogenerated method: ArcadeFlowCoordinator.get_topScreenViewController
HMUI::ViewController* GlobalNamespace::ArcadeFlowCoordinator::get_topScreenViewController() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<HMUI::ViewController*>(this, "get_topScreenViewController"));
}
// Autogenerated method: ArcadeFlowCoordinator.get_showPlayerStatsInDetailView
bool GlobalNamespace::ArcadeFlowCoordinator::get_showPlayerStatsInDetailView() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_showPlayerStatsInDetailView"));
}
// Autogenerated method: ArcadeFlowCoordinator.get_hidePacksIfOneOrNone
bool GlobalNamespace::ArcadeFlowCoordinator::get_hidePacksIfOneOrNone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hidePacksIfOneOrNone"));
}
// Autogenerated method: ArcadeFlowCoordinator.LevelSelectionFlowCoordinatorDidActivate
void GlobalNamespace::ArcadeFlowCoordinator::LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidActivate", firstActivation, activationType));
}
// Autogenerated method: ArcadeFlowCoordinator.LevelSelectionFlowCoordinatorDidDeactivate
void GlobalNamespace::ArcadeFlowCoordinator::LevelSelectionFlowCoordinatorDidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelSelectionFlowCoordinatorDidDeactivate", deactivationType));
}
// Autogenerated method: ArcadeFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
void GlobalNamespace::ArcadeFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessLevelCompletionResultsAfterLevelDidFinish", levelCompletionResults, difficultyBeatmap, gameplayModifiers, practice));
}
// Autogenerated method: ArcadeFlowCoordinator..ctor
GlobalNamespace::ArcadeFlowCoordinator* GlobalNamespace::ArcadeFlowCoordinator::New_ctor() {
  return (ArcadeFlowCoordinator*)THROW_UNLESS(il2cpp_utils::New("", "ArcadeFlowCoordinator"));
}
