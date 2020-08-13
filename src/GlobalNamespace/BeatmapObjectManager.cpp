// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
// Including type: ObstacleData
#include "GlobalNamespace/ObstacleData.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: NoteController/Pool
#include "GlobalNamespace/NoteController_Pool.hpp"
// Including type: ObstacleController/Pool
#include "GlobalNamespace/ObstacleController_Pool.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectManager.add_noteWasSpawnedEvent
void GlobalNamespace::BeatmapObjectManager::add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteWasSpawnedEvent", value));
}
// Autogenerated method: BeatmapObjectManager.remove_noteWasSpawnedEvent
void GlobalNamespace::BeatmapObjectManager::remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteWasSpawnedEvent", value));
}
// Autogenerated method: BeatmapObjectManager.add_noteWasMissedEvent
void GlobalNamespace::BeatmapObjectManager::add_noteWasMissedEvent(System::Action_1<GlobalNamespace::INoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteWasMissedEvent", value));
}
// Autogenerated method: BeatmapObjectManager.remove_noteWasMissedEvent
void GlobalNamespace::BeatmapObjectManager::remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::INoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteWasMissedEvent", value));
}
// Autogenerated method: BeatmapObjectManager.add_noteWasCutEvent
void GlobalNamespace::BeatmapObjectManager::add_noteWasCutEvent(System::Action_2<GlobalNamespace::INoteController*, GlobalNamespace::NoteCutInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteWasCutEvent", value));
}
// Autogenerated method: BeatmapObjectManager.remove_noteWasCutEvent
void GlobalNamespace::BeatmapObjectManager::remove_noteWasCutEvent(System::Action_2<GlobalNamespace::INoteController*, GlobalNamespace::NoteCutInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteWasCutEvent", value));
}
// Autogenerated method: BeatmapObjectManager.add_noteDidStartJumpEvent
void GlobalNamespace::BeatmapObjectManager::add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteDidStartJumpEvent", value));
}
// Autogenerated method: BeatmapObjectManager.remove_noteDidStartJumpEvent
void GlobalNamespace::BeatmapObjectManager::remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteDidStartJumpEvent", value));
}
// Autogenerated method: BeatmapObjectManager.add_obstacleDidPassThreeQuartersOfMove2Event
void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_obstacleDidPassThreeQuartersOfMove2Event", value));
}
// Autogenerated method: BeatmapObjectManager.remove_obstacleDidPassThreeQuartersOfMove2Event
void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_obstacleDidPassThreeQuartersOfMove2Event", value));
}
// Autogenerated method: BeatmapObjectManager.add_obstacleDidPassAvoidedMarkEvent
void GlobalNamespace::BeatmapObjectManager::add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_obstacleDidPassAvoidedMarkEvent", value));
}
// Autogenerated method: BeatmapObjectManager.remove_obstacleDidPassAvoidedMarkEvent
void GlobalNamespace::BeatmapObjectManager::remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_obstacleDidPassAvoidedMarkEvent", value));
}
// Autogenerated method: BeatmapObjectManager.SetNoteControllerEventCallbacks
void GlobalNamespace::BeatmapObjectManager::SetNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetNoteControllerEventCallbacks", noteController));
}
// Autogenerated method: BeatmapObjectManager.RemoveNoteControllerEventCallbacks
void GlobalNamespace::BeatmapObjectManager::RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveNoteControllerEventCallbacks", noteController));
}
// Autogenerated method: BeatmapObjectManager.SetObstacleEventCallbacks
void GlobalNamespace::BeatmapObjectManager::SetObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetObstacleEventCallbacks", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.RemoveObstacleEventCallbacks
void GlobalNamespace::BeatmapObjectManager::RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveObstacleEventCallbacks", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.Despawn
void GlobalNamespace::BeatmapObjectManager::Despawn(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Despawn", noteController));
}
// Autogenerated method: BeatmapObjectManager.Despawn
void GlobalNamespace::BeatmapObjectManager::Despawn(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Despawn", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.HandleNoteDidStartJump
void GlobalNamespace::BeatmapObjectManager::HandleNoteDidStartJump(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDidStartJump", noteController));
}
// Autogenerated method: BeatmapObjectManager.HandleNoteWasMissed
void GlobalNamespace::BeatmapObjectManager::HandleNoteWasMissed(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasMissed", noteController));
}
// Autogenerated method: BeatmapObjectManager.HandleNoteDidFinishJump
void GlobalNamespace::BeatmapObjectManager::HandleNoteDidFinishJump(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDidFinishJump", noteController));
}
// Autogenerated method: BeatmapObjectManager.HandleNoteDidDissolve
void GlobalNamespace::BeatmapObjectManager::HandleNoteDidDissolve(GlobalNamespace::NoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteDidDissolve", noteController));
}
// Autogenerated method: BeatmapObjectManager.HandleNoteWasCut
void GlobalNamespace::BeatmapObjectManager::HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasCut", noteController, noteCutInfo));
}
// Autogenerated method: BeatmapObjectManager.HandleObstaclePassedThreeQuartersOfMove2
void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleObstaclePassedThreeQuartersOfMove2", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.HandleObstaclePassedAvoidedMark
void GlobalNamespace::BeatmapObjectManager::HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleObstaclePassedAvoidedMark", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.HandleObstacleFinishedMovement
void GlobalNamespace::BeatmapObjectManager::HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleObstacleFinishedMovement", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.HandleObstacleDidDissolve
void GlobalNamespace::BeatmapObjectManager::HandleObstacleDidDissolve(GlobalNamespace::ObstacleController* obstacleController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleObstacleDidDissolve", obstacleController));
}
// Autogenerated method: BeatmapObjectManager.DissolveAllObjects
void GlobalNamespace::BeatmapObjectManager::DissolveAllObjects() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DissolveAllObjects"));
}
// Autogenerated method: BeatmapObjectManager.HideAllBeatmapObjects
void GlobalNamespace::BeatmapObjectManager::HideAllBeatmapObjects(bool hide) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HideAllBeatmapObjects", hide));
}
// Autogenerated method: BeatmapObjectManager.SpawnObstacle
void GlobalNamespace::BeatmapObjectManager::SpawnObstacle(GlobalNamespace::ObstacleData* obstacleData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float rotation, float noteLinesDistance, float obstacleHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnObstacle", obstacleData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, rotation, noteLinesDistance, obstacleHeight));
}
// Autogenerated method: BeatmapObjectManager.SpawnBombNote
void GlobalNamespace::BeatmapObjectManager::SpawnBombNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBombNote", noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation));
}
// Autogenerated method: BeatmapObjectManager.SpawnBasicNote
void GlobalNamespace::BeatmapObjectManager::SpawnBasicNote(GlobalNamespace::NoteData* noteData, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float rotation, bool disappearingArrow, bool ghostNote, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBasicNote", noteData, moveStartPos, moveEndPos, jumpEndPos, moveDuration, jumpDuration, jumpGravity, rotation, disappearingArrow, ghostNote, cutDirectionAngleOffset));
}
// Autogenerated method: BeatmapObjectManager..ctor
GlobalNamespace::BeatmapObjectManager* GlobalNamespace::BeatmapObjectManager::New_ctor() {
  return (BeatmapObjectManager*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapObjectManager"));
}
