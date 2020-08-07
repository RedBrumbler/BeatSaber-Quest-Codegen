// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DemoMenuLevelPanelView
#include "GlobalNamespace/DemoMenuLevelPanelView.hpp"
// Including type: LocalLeaderboardsModel
#include "GlobalNamespace/LocalLeaderboardsModel.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: LocalLeaderboardTableView
#include "GlobalNamespace/LocalLeaderboardTableView.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: HMUI.ButtonBinder
#include "HMUI/ButtonBinder.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxNumberOfCells
int GlobalNamespace::DemoMenuLevelPanelView::_get_kMaxNumberOfCells() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "DemoMenuLevelPanelView", "kMaxNumberOfCells"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxNumberOfCells
void GlobalNamespace::DemoMenuLevelPanelView::_set_kMaxNumberOfCells(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "DemoMenuLevelPanelView", "kMaxNumberOfCells", value));
}
// Autogenerated method: DemoMenuLevelPanelView.add_playButtonWasPressedEvent
void GlobalNamespace::DemoMenuLevelPanelView::add_playButtonWasPressedEvent(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_playButtonWasPressedEvent", value));
}
// Autogenerated method: DemoMenuLevelPanelView.remove_playButtonWasPressedEvent
void GlobalNamespace::DemoMenuLevelPanelView::remove_playButtonWasPressedEvent(System::Action_1<GlobalNamespace::DemoMenuLevelPanelView*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_playButtonWasPressedEvent", value));
}
// Autogenerated method: DemoMenuLevelPanelView.Start
void GlobalNamespace::DemoMenuLevelPanelView::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: DemoMenuLevelPanelView.OnDestroy
void GlobalNamespace::DemoMenuLevelPanelView::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: DemoMenuLevelPanelView.Init
void GlobalNamespace::DemoMenuLevelPanelView::Init(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", difficultyBeatmap));
}
// Autogenerated method: DemoMenuLevelPanelView.PlayButtonWasPressed
void GlobalNamespace::DemoMenuLevelPanelView::PlayButtonWasPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PlayButtonWasPressed"));
}
// Autogenerated method: DemoMenuLevelPanelView..ctor
GlobalNamespace::DemoMenuLevelPanelView* GlobalNamespace::DemoMenuLevelPanelView::New_ctor() {
  return (DemoMenuLevelPanelView*)THROW_UNLESS(il2cpp_utils::New("", "DemoMenuLevelPanelView"));
}