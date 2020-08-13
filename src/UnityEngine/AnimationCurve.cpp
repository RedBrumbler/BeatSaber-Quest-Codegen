// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.AnimationCurve.Internal_Destroy
void UnityEngine::AnimationCurve::Internal_Destroy(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "AnimationCurve", "Internal_Destroy", ptr));
}
// Autogenerated method: UnityEngine.AnimationCurve.Internal_Create
System::IntPtr UnityEngine::AnimationCurve::Internal_Create(::Array<UnityEngine::Keyframe>* keys) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine", "AnimationCurve", "Internal_Create", keys));
}
// Autogenerated method: UnityEngine.AnimationCurve.Internal_Equals
bool UnityEngine::AnimationCurve::Internal_Equals(System::IntPtr other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Internal_Equals", other));
}
// Autogenerated method: UnityEngine.AnimationCurve.Evaluate
float UnityEngine::AnimationCurve::Evaluate(float time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "Evaluate", time));
}
// Autogenerated method: UnityEngine.AnimationCurve.get_keys
::Array<UnityEngine::Keyframe>* UnityEngine::AnimationCurve::get_keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Keyframe>*>(this, "get_keys"));
}
// Autogenerated method: UnityEngine.AnimationCurve.set_keys
void UnityEngine::AnimationCurve::set_keys(::Array<UnityEngine::Keyframe>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_keys", value));
}
// Autogenerated method: UnityEngine.AnimationCurve.AddKey
int UnityEngine::AnimationCurve::AddKey(float time, float value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "AddKey", time, value));
}
// Autogenerated method: UnityEngine.AnimationCurve.get_length
int UnityEngine::AnimationCurve::get_length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_length"));
}
// Autogenerated method: UnityEngine.AnimationCurve.SetKeys
void UnityEngine::AnimationCurve::SetKeys(::Array<UnityEngine::Keyframe>* keys) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetKeys", keys));
}
// Autogenerated method: UnityEngine.AnimationCurve.GetKeys
::Array<UnityEngine::Keyframe>* UnityEngine::AnimationCurve::GetKeys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Keyframe>*>(this, "GetKeys"));
}
// Autogenerated method: UnityEngine.AnimationCurve.Linear
UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::Linear(float timeStart, float valueStart, float timeEnd, float valueEnd) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>("UnityEngine", "AnimationCurve", "Linear", timeStart, valueStart, timeEnd, valueEnd));
}
// Autogenerated method: UnityEngine.AnimationCurve.EaseInOut
UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::EaseInOut(float timeStart, float valueStart, float timeEnd, float valueEnd) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>("UnityEngine", "AnimationCurve", "EaseInOut", timeStart, valueStart, timeEnd, valueEnd));
}
// Autogenerated method: UnityEngine.AnimationCurve..ctor
UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor(::Array<UnityEngine::Keyframe>* keys) {
  return (AnimationCurve*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "AnimationCurve", keys));
}
// Autogenerated method: UnityEngine.AnimationCurve.Finalize
void UnityEngine::AnimationCurve::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: UnityEngine.AnimationCurve..ctor
UnityEngine::AnimationCurve* UnityEngine::AnimationCurve::New_ctor() {
  return (AnimationCurve*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "AnimationCurve"));
}
// Autogenerated method: UnityEngine.AnimationCurve.Equals
bool UnityEngine::AnimationCurve::Equals(::CsObject* o) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", o));
}
// Autogenerated method: UnityEngine.AnimationCurve.Equals
bool UnityEngine::AnimationCurve::Equals(UnityEngine::AnimationCurve* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: UnityEngine.AnimationCurve.GetHashCode
int UnityEngine::AnimationCurve::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
