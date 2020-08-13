// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ExternalCamerasManager
#include "GlobalNamespace/ExternalCamerasManager.hpp"
// Including type: ExternalCamerasManager/InitData
#include "GlobalNamespace/ExternalCamerasManager_InitData.hpp"
// Including type: OculusMRCManager
#include "GlobalNamespace/OculusMRCManager.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ExternalCamerasManager.Init
void GlobalNamespace::ExternalCamerasManager::Init(GlobalNamespace::ExternalCamerasManager::InitData* initData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", initData));
}
// Autogenerated method: ExternalCamerasManager.InstantiateMixedRealityBackgroundCameraGameObject
UnityEngine::GameObject* GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine::Camera* mainCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "InstantiateMixedRealityBackgroundCameraGameObject", mainCamera));
}
// Autogenerated method: ExternalCamerasManager.InstantiateMixedRealityForegroundCameraGameObject
UnityEngine::GameObject* GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject(UnityEngine::Camera* mainCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "InstantiateMixedRealityForegroundCameraGameObject", mainCamera));
}
// Autogenerated method: ExternalCamerasManager..ctor
GlobalNamespace::ExternalCamerasManager* GlobalNamespace::ExternalCamerasManager::New_ctor() {
  return (ExternalCamerasManager*)THROW_UNLESS(il2cpp_utils::New("", "ExternalCamerasManager"));
}
