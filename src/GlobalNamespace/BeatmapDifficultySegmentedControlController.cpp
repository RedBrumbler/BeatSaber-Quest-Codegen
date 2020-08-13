// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficultySegmentedControlController
#include "GlobalNamespace/BeatmapDifficultySegmentedControlController.hpp"
// Including type: HMUI.TextSegmentedControl
#include "HMUI/TextSegmentedControl.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: HMUI.SegmentedControl
#include "HMUI/SegmentedControl.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapDifficultySegmentedControlController.add_didSelectDifficultyEvent
void GlobalNamespace::BeatmapDifficultySegmentedControlController::add_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectDifficultyEvent", value));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.remove_didSelectDifficultyEvent
void GlobalNamespace::BeatmapDifficultySegmentedControlController::remove_didSelectDifficultyEvent(System::Action_2<GlobalNamespace::BeatmapDifficultySegmentedControlController*, GlobalNamespace::BeatmapDifficulty>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectDifficultyEvent", value));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.get_selectedDifficulty
GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapDifficultySegmentedControlController::get_selectedDifficulty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapDifficulty>(this, "get_selectedDifficulty"));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.Awake
void GlobalNamespace::BeatmapDifficultySegmentedControlController::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.OnDestroy
void GlobalNamespace::BeatmapDifficultySegmentedControlController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.GetClosestDifficultyIndex
int GlobalNamespace::BeatmapDifficultySegmentedControlController::GetClosestDifficultyIndex(GlobalNamespace::BeatmapDifficulty searchDifficulty) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetClosestDifficultyIndex", searchDifficulty));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.HandleDifficultySegmentedControlDidSelectCell
void GlobalNamespace::BeatmapDifficultySegmentedControlController::HandleDifficultySegmentedControlDidSelectCell(HMUI::SegmentedControl* segmentedControl, int cellIdx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleDifficultySegmentedControlDidSelectCell", segmentedControl, cellIdx));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController.SetData
void GlobalNamespace::BeatmapDifficultySegmentedControlController::SetData(::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps, GlobalNamespace::BeatmapDifficulty selectedDifficulty) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", difficultyBeatmaps, selectedDifficulty));
}
// Autogenerated method: BeatmapDifficultySegmentedControlController..ctor
GlobalNamespace::BeatmapDifficultySegmentedControlController* GlobalNamespace::BeatmapDifficultySegmentedControlController::New_ctor() {
  return (BeatmapDifficultySegmentedControlController*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapDifficultySegmentedControlController"));
}
