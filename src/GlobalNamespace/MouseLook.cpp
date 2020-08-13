// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MouseLook
#include "GlobalNamespace/MouseLook.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MouseLook.Init
void GlobalNamespace::MouseLook::Init(UnityEngine::Transform* character, UnityEngine::Transform* camera) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", character, camera));
}
// Autogenerated method: MouseLook.LookRotation
void GlobalNamespace::MouseLook::LookRotation(UnityEngine::Transform* character, UnityEngine::Transform* camera) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LookRotation", character, camera));
}
// Autogenerated method: MouseLook.SetCursorLock
void GlobalNamespace::MouseLook::SetCursorLock(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCursorLock", value));
}
// Autogenerated method: MouseLook.UpdateCursorLock
void GlobalNamespace::MouseLook::UpdateCursorLock() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateCursorLock"));
}
// Autogenerated method: MouseLook.InternalLockUpdate
void GlobalNamespace::MouseLook::InternalLockUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalLockUpdate"));
}
// Autogenerated method: MouseLook.ClampRotationAroundXAxis
UnityEngine::Quaternion GlobalNamespace::MouseLook::ClampRotationAroundXAxis(UnityEngine::Quaternion q) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "ClampRotationAroundXAxis", q));
}
// Autogenerated method: MouseLook..ctor
GlobalNamespace::MouseLook* GlobalNamespace::MouseLook::New_ctor() {
  return (MouseLook*)THROW_UNLESS(il2cpp_utils::New("", "MouseLook"));
}
