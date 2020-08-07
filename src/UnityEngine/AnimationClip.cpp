// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AnimationClip
#include "UnityEngine/AnimationClip.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.WrapMode
#include "UnityEngine/WrapMode.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.AnimationClip.Internal_CreateAnimationClip
void UnityEngine::AnimationClip::Internal_CreateAnimationClip(UnityEngine::AnimationClip* self) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "AnimationClip", "Internal_CreateAnimationClip", self));
}
// Autogenerated method: UnityEngine.AnimationClip.SampleAnimation
void UnityEngine::AnimationClip::SampleAnimation(UnityEngine::GameObject* go, float time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SampleAnimation", go, time));
}
// Autogenerated method: UnityEngine.AnimationClip.SampleAnimation
void UnityEngine::AnimationClip::SampleAnimation(UnityEngine::GameObject* go, UnityEngine::AnimationClip* clip, float inTime, UnityEngine::WrapMode wrapMode) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "AnimationClip", "SampleAnimation", go, clip, inTime, wrapMode));
}
// Autogenerated method: UnityEngine.AnimationClip.get_length
float UnityEngine::AnimationClip::get_length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_length"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_frameRate
float UnityEngine::AnimationClip::get_frameRate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_frameRate"));
}
// Autogenerated method: UnityEngine.AnimationClip.set_frameRate
void UnityEngine::AnimationClip::set_frameRate(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_frameRate", value));
}
// Autogenerated method: UnityEngine.AnimationClip.SetCurve
void UnityEngine::AnimationClip::SetCurve(::Il2CppString* relativePath, System::Type* type, ::Il2CppString* propertyName, UnityEngine::AnimationCurve* curve) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCurve", relativePath, type, propertyName, curve));
}
// Autogenerated method: UnityEngine.AnimationClip.EnsureQuaternionContinuity
void UnityEngine::AnimationClip::EnsureQuaternionContinuity() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureQuaternionContinuity"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_wrapMode
UnityEngine::WrapMode UnityEngine::AnimationClip::get_wrapMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::WrapMode>(this, "get_wrapMode"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_legacy
bool UnityEngine::AnimationClip::get_legacy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_legacy"));
}
// Autogenerated method: UnityEngine.AnimationClip.set_legacy
void UnityEngine::AnimationClip::set_legacy(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_legacy", value));
}
// Autogenerated method: UnityEngine.AnimationClip.get_empty
bool UnityEngine::AnimationClip::get_empty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_empty"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_hasGenericRootTransform
bool UnityEngine::AnimationClip::get_hasGenericRootTransform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasGenericRootTransform"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_hasMotionCurves
bool UnityEngine::AnimationClip::get_hasMotionCurves() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasMotionCurves"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_hasRootCurves
bool UnityEngine::AnimationClip::get_hasRootCurves() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasRootCurves"));
}
// Autogenerated method: UnityEngine.AnimationClip.get_hasRootMotion
bool UnityEngine::AnimationClip::get_hasRootMotion() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasRootMotion"));
}
// Autogenerated method: UnityEngine.AnimationClip..ctor
UnityEngine::AnimationClip* UnityEngine::AnimationClip::New_ctor() {
  return (AnimationClip*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "AnimationClip"));
}