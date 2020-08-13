// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.RotationLimit
#include "RootMotion/FinalIK/RotationLimit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.RotationLimit.SetDefaultLocalRotation
void RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultLocalRotation"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.SetDefaultLocalRotation
void RootMotion::FinalIK::RotationLimit::SetDefaultLocalRotation(UnityEngine::Quaternion localRotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultLocalRotation", localRotation));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.GetLimitedLocalRotation
UnityEngine::Quaternion RootMotion::FinalIK::RotationLimit::GetLimitedLocalRotation(UnityEngine::Quaternion localRotation, bool& changed) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "GetLimitedLocalRotation", localRotation, changed));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.Apply
bool RootMotion::FinalIK::RotationLimit::Apply() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Apply"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.Disable
void RootMotion::FinalIK::RotationLimit::Disable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Disable"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.get_secondaryAxis
UnityEngine::Vector3 RootMotion::FinalIK::RotationLimit::get_secondaryAxis() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_secondaryAxis"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.get_crossAxis
UnityEngine::Vector3 RootMotion::FinalIK::RotationLimit::get_crossAxis() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_crossAxis"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.get_defaultLocalRotationOverride
bool RootMotion::FinalIK::RotationLimit::get_defaultLocalRotationOverride() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_defaultLocalRotationOverride"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.set_defaultLocalRotationOverride
void RootMotion::FinalIK::RotationLimit::set_defaultLocalRotationOverride(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_defaultLocalRotationOverride", value));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.LimitRotation
UnityEngine::Quaternion RootMotion::FinalIK::RotationLimit::LimitRotation(UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "LimitRotation", rotation));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.Awake
void RootMotion::FinalIK::RotationLimit::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.LateUpdate
void RootMotion::FinalIK::RotationLimit::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.LogWarning
void RootMotion::FinalIK::RotationLimit::LogWarning(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogWarning", message));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.Limit1DOF
UnityEngine::Quaternion RootMotion::FinalIK::RotationLimit::Limit1DOF(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion.FinalIK", "RotationLimit", "Limit1DOF", rotation, axis));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.LimitTwist
UnityEngine::Quaternion RootMotion::FinalIK::RotationLimit::LimitTwist(UnityEngine::Quaternion rotation, UnityEngine::Vector3 axis, UnityEngine::Vector3 orthoAxis, float twistLimit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("RootMotion.FinalIK", "RotationLimit", "LimitTwist", rotation, axis, orthoAxis, twistLimit));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit.GetOrthogonalAngle
float RootMotion::FinalIK::RotationLimit::GetOrthogonalAngle(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, UnityEngine::Vector3 normal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("RootMotion.FinalIK", "RotationLimit", "GetOrthogonalAngle", v1, v2, normal));
}
// Autogenerated method: RootMotion.FinalIK.RotationLimit..ctor
RootMotion::FinalIK::RotationLimit* RootMotion::FinalIK::RotationLimit::New_ctor() {
  return (RotationLimit*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "RotationLimit"));
}
