// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteJump
#include "GlobalNamespace/NoteJump.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: PlayerController
#include "GlobalNamespace/PlayerController.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Single kMissedTimeOffset
float GlobalNamespace::NoteJump::_get_kMissedTimeOffset() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "NoteJump", "kMissedTimeOffset"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kMissedTimeOffset
void GlobalNamespace::NoteJump::_set_kMissedTimeOffset(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "NoteJump", "kMissedTimeOffset", value));
}
// Autogenerated method: NoteJump.add_noteJumpDidFinishEvent
void GlobalNamespace::NoteJump::add_noteJumpDidFinishEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteJumpDidFinishEvent", value));
}
// Autogenerated method: NoteJump.remove_noteJumpDidFinishEvent
void GlobalNamespace::NoteJump::remove_noteJumpDidFinishEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteJumpDidFinishEvent", value));
}
// Autogenerated method: NoteJump.add_noteJumpDidPassMissedMarkerEvent
void GlobalNamespace::NoteJump::add_noteJumpDidPassMissedMarkerEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteJumpDidPassMissedMarkerEvent", value));
}
// Autogenerated method: NoteJump.remove_noteJumpDidPassMissedMarkerEvent
void GlobalNamespace::NoteJump::remove_noteJumpDidPassMissedMarkerEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteJumpDidPassMissedMarkerEvent", value));
}
// Autogenerated method: NoteJump.add_noteJumpDidPassThreeQuartersEvent
void GlobalNamespace::NoteJump::add_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteJumpDidPassThreeQuartersEvent", value));
}
// Autogenerated method: NoteJump.remove_noteJumpDidPassThreeQuartersEvent
void GlobalNamespace::NoteJump::remove_noteJumpDidPassThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteJump*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteJumpDidPassThreeQuartersEvent", value));
}
// Autogenerated method: NoteJump.add_noteJumpDidPassHalfEvent
void GlobalNamespace::NoteJump::add_noteJumpDidPassHalfEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_noteJumpDidPassHalfEvent", value));
}
// Autogenerated method: NoteJump.remove_noteJumpDidPassHalfEvent
void GlobalNamespace::NoteJump::remove_noteJumpDidPassHalfEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_noteJumpDidPassHalfEvent", value));
}
// Autogenerated method: NoteJump.get_distanceToPlayer
float GlobalNamespace::NoteJump::get_distanceToPlayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_distanceToPlayer"));
}
// Autogenerated method: NoteJump.get_beatPos
UnityEngine::Vector3 GlobalNamespace::NoteJump::get_beatPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_beatPos"));
}
// Autogenerated method: NoteJump.get_jumpDuration
float GlobalNamespace::NoteJump::get_jumpDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_jumpDuration"));
}
// Autogenerated method: NoteJump.get_moveVec
UnityEngine::Vector3 GlobalNamespace::NoteJump::get_moveVec() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_moveVec"));
}
// Autogenerated method: NoteJump.Init
void GlobalNamespace::NoteJump::Init(float beatTime, float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 endPos, float jumpDuration, float gravity, float flipYSide, GlobalNamespace::NoteCutDirection cutDirection, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", beatTime, worldRotation, startPos, endPos, jumpDuration, gravity, flipYSide, cutDirection, cutDirectionAngleOffset));
}
// Autogenerated method: NoteJump.EaseInOutQuad
float GlobalNamespace::NoteJump::EaseInOutQuad(float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "EaseInOutQuad", t));
}
// Autogenerated method: NoteJump.ManualUpdate
UnityEngine::Vector3 GlobalNamespace::NoteJump::ManualUpdate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "ManualUpdate"));
}
// Autogenerated method: NoteJump..ctor
GlobalNamespace::NoteJump* GlobalNamespace::NoteJump::New_ctor() {
  return (NoteJump*)THROW_UNLESS(il2cpp_utils::New("", "NoteJump"));
}
