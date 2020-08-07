// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRatingsRecorder
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder.hpp"
// Including type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
// Including type: ScoreController
#include "GlobalNamespace/ScoreController.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: PlayerHeadAndObstacleInteraction
#include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: BeatmapObjectExecutionRating
#include "GlobalNamespace/BeatmapObjectExecutionRating.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: ObstacleController
#include "GlobalNamespace/ObstacleController.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.get_beatmapObjectExecutionRatings
System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>* GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::get_beatmapObjectExecutionRatings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectExecutionRating*>*>(this, "get_beatmapObjectExecutionRatings"));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.Start
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.OnDestroy
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.Update
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.HandleCutScoreHandlerDidFinish
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleCutScoreHandlerDidFinish(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleCutScoreHandlerDidFinish", cutScoreHandler));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.HandleScoreControllerNoteWasCut
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasCut(GlobalNamespace::NoteData* noteData, GlobalNamespace::NoteCutInfo* noteCutInfo, int multiplier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleScoreControllerNoteWasCut", noteData, noteCutInfo, multiplier));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.HandleScoreControllerNoteWasMissed
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleScoreControllerNoteWasMissed(GlobalNamespace::NoteData* noteData, int multiplier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleScoreControllerNoteWasMissed", noteData, multiplier));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder.HandleObstacleDidPassAvoidedMark
void GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::HandleObstacleDidPassAvoidedMark(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleObstacleDidPassAvoidedMark", obstacleController));
}
// Autogenerated method: BeatmapObjectExecutionRatingsRecorder..ctor
GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::New_ctor() {
  return (BeatmapObjectExecutionRatingsRecorder*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapObjectExecutionRatingsRecorder"));
}