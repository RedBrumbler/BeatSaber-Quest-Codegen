// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRComposition
#include "GlobalNamespace/OVRComposition.hpp"
// Including type: OVRCameraRig
#include "GlobalNamespace/OVRCameraRig.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: OVRPlugin/CameraExtrinsics
#include "GlobalNamespace/OVRPlugin_CameraExtrinsics.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRComposition..ctor
GlobalNamespace::OVRComposition* GlobalNamespace::OVRComposition::New_ctor(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera) {
  return (OVRComposition*)THROW_UNLESS(il2cpp_utils::New("", "OVRComposition", parentObject, mainCamera));
}
// Autogenerated method: OVRComposition.CompositionMethod
GlobalNamespace::OVRManager::CompositionMethod GlobalNamespace::OVRComposition::CompositionMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRManager::CompositionMethod>(this, "CompositionMethod"));
}
// Autogenerated method: OVRComposition.Update
void GlobalNamespace::OVRComposition::Update(UnityEngine::GameObject* gameObject, UnityEngine::Camera* mainCamera, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityBackgroundCameraGameObject, System::Func_2<UnityEngine::Camera*, UnityEngine::GameObject*>* instantiateMixedRealityForegroundCameraGameObject) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", gameObject, mainCamera, instantiateMixedRealityBackgroundCameraGameObject, instantiateMixedRealityForegroundCameraGameObject));
}
// Autogenerated method: OVRComposition.Cleanup
void GlobalNamespace::OVRComposition::Cleanup() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cleanup"));
}
// Autogenerated method: OVRComposition.RecenterPose
void GlobalNamespace::OVRComposition::RecenterPose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecenterPose"));
}
// Autogenerated method: OVRComposition.RefreshCameraRig
void GlobalNamespace::OVRComposition::RefreshCameraRig(UnityEngine::GameObject* parentObject, UnityEngine::Camera* mainCamera) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshCameraRig", parentObject, mainCamera));
}
// Autogenerated method: OVRComposition.ComputeCameraWorldSpacePose
GlobalNamespace::OVRPose GlobalNamespace::OVRComposition::ComputeCameraWorldSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics, GlobalNamespace::OVRPlugin::Posef calibrationRawPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPose>(this, "ComputeCameraWorldSpacePose", extrinsics, calibrationRawPose));
}
// Autogenerated method: OVRComposition.ComputeCameraTrackingSpacePose
GlobalNamespace::OVRPose GlobalNamespace::OVRComposition::ComputeCameraTrackingSpacePose(GlobalNamespace::OVRPlugin::CameraExtrinsics extrinsics, GlobalNamespace::OVRPlugin::Posef calibrationRawPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPose>(this, "ComputeCameraTrackingSpacePose", extrinsics, calibrationRawPose));
}
