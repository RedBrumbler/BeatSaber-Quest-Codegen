// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CampaignFlowCoordinator
#include "GlobalNamespace/CampaignFlowCoordinator.hpp"
// Including type: CampaignFlowCoordinator/<>c__DisplayClass19_0
#include "GlobalNamespace/CampaignFlowCoordinator_--c__DisplayClass19_0.hpp"
// Including type: CampaignFlowCoordinator/<>c__DisplayClass21_0
#include "GlobalNamespace/CampaignFlowCoordinator_--c__DisplayClass21_0.hpp"
// Including type: MenuLightsPresetSO
#include "GlobalNamespace/MenuLightsPresetSO.hpp"
// Including type: MenuTransitionsHelper
#include "GlobalNamespace/MenuTransitionsHelper.hpp"
// Including type: MenuLightsManager
#include "GlobalNamespace/MenuLightsManager.hpp"
// Including type: MissionSelectionNavigationController
#include "GlobalNamespace/MissionSelectionNavigationController.hpp"
// Including type: MissionResultsViewController
#include "GlobalNamespace/MissionResultsViewController.hpp"
// Including type: GameplaySetupViewController
#include "GlobalNamespace/GameplaySetupViewController.hpp"
// Including type: MissionHelpViewController
#include "GlobalNamespace/MissionHelpViewController.hpp"
// Including type: PlayerDataModel
#include "GlobalNamespace/PlayerDataModel.hpp"
// Including type: CampaignProgressModel
#include "GlobalNamespace/CampaignProgressModel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: HMUI.FlowCoordinator/ActivationType
#include "HMUI/FlowCoordinator_ActivationType.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: MissionLevelScenesTransitionSetupDataSO
#include "GlobalNamespace/MissionLevelScenesTransitionSetupDataSO.hpp"
// Including type: MissionCompletionResults
#include "GlobalNamespace/MissionCompletionResults.hpp"
// Including type: HMUI.FlowCoordinator/DeactivationType
#include "HMUI/FlowCoordinator_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: CampaignFlowCoordinator.add_didFinishEvent
void GlobalNamespace::CampaignFlowCoordinator::add_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didFinishEvent", value));
}
// Autogenerated method: CampaignFlowCoordinator.remove_didFinishEvent
void GlobalNamespace::CampaignFlowCoordinator::remove_didFinishEvent(System::Action_1<GlobalNamespace::CampaignFlowCoordinator*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didFinishEvent", value));
}
// Autogenerated method: CampaignFlowCoordinator.HandleMissionSelectionNavigationControllerDidPressPlayButton
void GlobalNamespace::CampaignFlowCoordinator::HandleMissionSelectionNavigationControllerDidPressPlayButton(GlobalNamespace::MissionSelectionNavigationController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionSelectionNavigationControllerDidPressPlayButton", viewController));
}
// Autogenerated method: CampaignFlowCoordinator.HandleMissionHelpViewControllerDidFinish
void GlobalNamespace::CampaignFlowCoordinator::HandleMissionHelpViewControllerDidFinish(GlobalNamespace::MissionHelpViewController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionHelpViewControllerDidFinish", viewController));
}
// Autogenerated method: CampaignFlowCoordinator.HandleMissionResultsViewControllerContinueButtonPressed
void GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerContinueButtonPressed(GlobalNamespace::MissionResultsViewController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionResultsViewControllerContinueButtonPressed", viewController));
}
// Autogenerated method: CampaignFlowCoordinator.HandleMissionResultsViewControllerRetryButtonPressed
void GlobalNamespace::CampaignFlowCoordinator::HandleMissionResultsViewControllerRetryButtonPressed(GlobalNamespace::MissionResultsViewController* viewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionResultsViewControllerRetryButtonPressed", viewController));
}
// Autogenerated method: CampaignFlowCoordinator.StartLevel
void GlobalNamespace::CampaignFlowCoordinator::StartLevel(System::Action* beforeSceneSwitchCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartLevel", beforeSceneSwitchCallback));
}
// Autogenerated method: CampaignFlowCoordinator.HandleMissionLevelSceneDidFinish
void GlobalNamespace::CampaignFlowCoordinator::HandleMissionLevelSceneDidFinish(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData, GlobalNamespace::MissionCompletionResults* missionCompletionResults) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionLevelSceneDidFinish", missionLevelScenesTransitionSetupData, missionCompletionResults));
}
// Autogenerated method: CampaignFlowCoordinator.<HandleMissionResultsViewControllerContinueButtonPressed>b__20_0
void GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__20_0() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<HandleMissionResultsViewControllerContinueButtonPressed>b__20_0"));
}
// Autogenerated method: CampaignFlowCoordinator.<HandleMissionResultsViewControllerContinueButtonPressed>b__20_1
void GlobalNamespace::CampaignFlowCoordinator::$HandleMissionResultsViewControllerContinueButtonPressed$b__20_1(bool presented) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<HandleMissionResultsViewControllerContinueButtonPressed>b__20_1", presented));
}
// Autogenerated method: CampaignFlowCoordinator.DidActivate
void GlobalNamespace::CampaignFlowCoordinator::DidActivate(bool firstActivation, HMUI::FlowCoordinator::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: CampaignFlowCoordinator.DidDeactivate
void GlobalNamespace::CampaignFlowCoordinator::DidDeactivate(HMUI::FlowCoordinator::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: CampaignFlowCoordinator.TopViewControllerWillChange
void GlobalNamespace::CampaignFlowCoordinator::TopViewControllerWillChange(HMUI::ViewController* oldViewController, HMUI::ViewController* newViewController, bool immediately) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TopViewControllerWillChange", oldViewController, newViewController, immediately));
}
// Autogenerated method: CampaignFlowCoordinator.BackButtonWasPressed
void GlobalNamespace::CampaignFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackButtonWasPressed", topViewController));
}
// Autogenerated method: CampaignFlowCoordinator..ctor
GlobalNamespace::CampaignFlowCoordinator* GlobalNamespace::CampaignFlowCoordinator::New_ctor() {
  return (CampaignFlowCoordinator*)THROW_UNLESS(il2cpp_utils::New("", "CampaignFlowCoordinator"));
}