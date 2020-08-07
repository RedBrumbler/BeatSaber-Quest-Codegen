// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder
#include "GlobalNamespace/VRTrackersRecorder.hpp"
// Including type: VRTrackersRecorder/SavedData
#include "GlobalNamespace/VRTrackersRecorder_SavedData.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: VRTrackersRecorder/Keyframe
#include "GlobalNamespace/VRTrackersRecorder_Keyframe.hpp"
// Including type: FloatSO
#include "GlobalNamespace/FloatSO.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
// Including type: SteamVR_Events/Action
#include "GlobalNamespace/SteamVR_Events_Action.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRTrackersRecorder.Awake
void GlobalNamespace::VRTrackersRecorder::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: VRTrackersRecorder.OnDestroy
void GlobalNamespace::VRTrackersRecorder::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: VRTrackersRecorder.OnEnable
void GlobalNamespace::VRTrackersRecorder::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: VRTrackersRecorder.OnDisable
void GlobalNamespace::VRTrackersRecorder::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: VRTrackersRecorder.OnNewPoses
void GlobalNamespace::VRTrackersRecorder::OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnNewPoses", poses));
}
// Autogenerated method: VRTrackersRecorder.Update
void GlobalNamespace::VRTrackersRecorder::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: VRTrackersRecorder.Save
void GlobalNamespace::VRTrackersRecorder::Save() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Save"));
}
// Autogenerated method: VRTrackersRecorder.Load
void GlobalNamespace::VRTrackersRecorder::Load() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Load"));
}
// Autogenerated method: VRTrackersRecorder..ctor
GlobalNamespace::VRTrackersRecorder* GlobalNamespace::VRTrackersRecorder::New_ctor() {
  return (VRTrackersRecorder*)THROW_UNLESS(il2cpp_utils::New("", "VRTrackersRecorder"));
}