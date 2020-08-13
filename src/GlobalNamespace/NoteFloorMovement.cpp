// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteFloorMovement
#include "GlobalNamespace/NoteFloorMovement.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: PlayerController
#include "GlobalNamespace/PlayerController.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteFloorMovement.add_floorMovementDidFinishEvent
void GlobalNamespace::NoteFloorMovement::add_floorMovementDidFinishEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_floorMovementDidFinishEvent", value));
}
// Autogenerated method: NoteFloorMovement.remove_floorMovementDidFinishEvent
void GlobalNamespace::NoteFloorMovement::remove_floorMovementDidFinishEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_floorMovementDidFinishEvent", value));
}
// Autogenerated method: NoteFloorMovement.get_distanceToPlayer
float GlobalNamespace::NoteFloorMovement::get_distanceToPlayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_distanceToPlayer"));
}
// Autogenerated method: NoteFloorMovement.get_startPos
UnityEngine::Vector3 GlobalNamespace::NoteFloorMovement::get_startPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_startPos"));
}
// Autogenerated method: NoteFloorMovement.get_endPos
UnityEngine::Vector3 GlobalNamespace::NoteFloorMovement::get_endPos() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_endPos"));
}
// Autogenerated method: NoteFloorMovement.get_startTime
float GlobalNamespace::NoteFloorMovement::get_startTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_startTime"));
}
// Autogenerated method: NoteFloorMovement.get_moveDuration
float GlobalNamespace::NoteFloorMovement::get_moveDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_moveDuration"));
}
// Autogenerated method: NoteFloorMovement.get_worldRotation
UnityEngine::Quaternion GlobalNamespace::NoteFloorMovement::get_worldRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "get_worldRotation"));
}
// Autogenerated method: NoteFloorMovement.get_inverseWorldRotation
UnityEngine::Quaternion GlobalNamespace::NoteFloorMovement::get_inverseWorldRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "get_inverseWorldRotation"));
}
// Autogenerated method: NoteFloorMovement.Init
void GlobalNamespace::NoteFloorMovement::Init(float worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 endPos, float moveDuration, float startTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", worldRotation, startPos, endPos, moveDuration, startTime));
}
// Autogenerated method: NoteFloorMovement.SetToStart
UnityEngine::Vector3 GlobalNamespace::NoteFloorMovement::SetToStart() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "SetToStart"));
}
// Autogenerated method: NoteFloorMovement.ManualUpdate
UnityEngine::Vector3 GlobalNamespace::NoteFloorMovement::ManualUpdate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "ManualUpdate"));
}
// Autogenerated method: NoteFloorMovement..ctor
GlobalNamespace::NoteFloorMovement* GlobalNamespace::NoteFloorMovement::New_ctor() {
  return (NoteFloorMovement*)THROW_UNLESS(il2cpp_utils::New("", "NoteFloorMovement"));
}
