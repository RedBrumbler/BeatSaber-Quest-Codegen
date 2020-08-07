// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorder
#include "GlobalNamespace/VRControllersRecorder.hpp"
// Including type: VRControllersRecorder/TypeSerializationBinder
#include "GlobalNamespace/VRControllersRecorder_TypeSerializationBinder.hpp"
// Including type: VRControllersRecorder/SavedData
#include "GlobalNamespace/VRControllersRecorder_SavedData.hpp"
// Including type: VRController
#include "GlobalNamespace/VRController.hpp"
// Including type: VRControllersRecorder/Keyframe
#include "GlobalNamespace/VRControllersRecorder_Keyframe.hpp"
// Including type: UnityEngine.TextAsset
#include "UnityEngine/TextAsset.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: AudioTimeSyncController
#include "GlobalNamespace/AudioTimeSyncController.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.AnimationClip
#include "UnityEngine/AnimationClip.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRControllersRecorder.set_mode
void GlobalNamespace::VRControllersRecorder::set_mode(GlobalNamespace::VRControllersRecorder::Mode value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_mode", value));
}
// Autogenerated method: VRControllersRecorder.get_mode
GlobalNamespace::VRControllersRecorder::Mode GlobalNamespace::VRControllersRecorder::get_mode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::VRControllersRecorder::Mode>(this, "get_mode"));
}
// Autogenerated method: VRControllersRecorder.set_recordingTextAsset
void GlobalNamespace::VRControllersRecorder::set_recordingTextAsset(UnityEngine::TextAsset* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_recordingTextAsset", value));
}
// Autogenerated method: VRControllersRecorder.get_recordingTextAsset
UnityEngine::TextAsset* GlobalNamespace::VRControllersRecorder::get_recordingTextAsset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::TextAsset*>(this, "get_recordingTextAsset"));
}
// Autogenerated method: VRControllersRecorder.set_recordingFileName
void GlobalNamespace::VRControllersRecorder::set_recordingFileName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_recordingFileName", value));
}
// Autogenerated method: VRControllersRecorder.get_recordingFileName
::Il2CppString* GlobalNamespace::VRControllersRecorder::get_recordingFileName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_recordingFileName"));
}
// Autogenerated method: VRControllersRecorder.set_changeToNonVRCamera
void GlobalNamespace::VRControllersRecorder::set_changeToNonVRCamera(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_changeToNonVRCamera", value));
}
// Autogenerated method: VRControllersRecorder.get_changeToNonVRCamera
bool GlobalNamespace::VRControllersRecorder::get_changeToNonVRCamera() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_changeToNonVRCamera"));
}
// Autogenerated method: VRControllersRecorder.Start
void GlobalNamespace::VRControllersRecorder::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: VRControllersRecorder.OnDestroy
void GlobalNamespace::VRControllersRecorder::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: VRControllersRecorder.SetDefaultSettings
void GlobalNamespace::VRControllersRecorder::SetDefaultSettings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultSettings"));
}
// Autogenerated method: VRControllersRecorder.SetInGamePlaybackDefaultSettings
void GlobalNamespace::VRControllersRecorder::SetInGamePlaybackDefaultSettings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetInGamePlaybackDefaultSettings"));
}
// Autogenerated method: VRControllersRecorder.PlaybackTick
void GlobalNamespace::VRControllersRecorder::PlaybackTick() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PlaybackTick"));
}
// Autogenerated method: VRControllersRecorder.SetPositionAndRotation
void GlobalNamespace::VRControllersRecorder::SetPositionAndRotation(UnityEngine::Transform* transf, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion targetRot, float t) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPositionAndRotation", transf, targetPos, targetRot, t));
}
// Autogenerated method: VRControllersRecorder.RecordTick
void GlobalNamespace::VRControllersRecorder::RecordTick() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecordTick"));
}
// Autogenerated method: VRControllersRecorder.Update
void GlobalNamespace::VRControllersRecorder::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: VRControllersRecorder.LateUpdate
void GlobalNamespace::VRControllersRecorder::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: VRControllersRecorder.Save
void GlobalNamespace::VRControllersRecorder::Save() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Save"));
}
// Autogenerated method: VRControllersRecorder.Load
void GlobalNamespace::VRControllersRecorder::Load() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Load"));
}
// Autogenerated method: VRControllersRecorder.CreateAnimationClipFromRecording
UnityEngine::AnimationClip* GlobalNamespace::VRControllersRecorder::CreateAnimationClipFromRecording(::Il2CppString* recordingfilePath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationClip*>("", "VRControllersRecorder", "CreateAnimationClipFromRecording", recordingfilePath));
}
// Autogenerated method: VRControllersRecorder..ctor
GlobalNamespace::VRControllersRecorder* GlobalNamespace::VRControllersRecorder::New_ctor() {
  return (VRControllersRecorder*)THROW_UNLESS(il2cpp_utils::New("", "VRControllersRecorder"));
}