// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Quaternion identityQuaternion
UnityEngine::Quaternion UnityEngine::Quaternion::_get_identityQuaternion() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "identityQuaternion"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Quaternion identityQuaternion
void UnityEngine::Quaternion::_set_identityQuaternion(UnityEngine::Quaternion value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Quaternion", "identityQuaternion", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single kEpsilon
float UnityEngine::Quaternion::_get_kEpsilon() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("UnityEngine", "Quaternion", "kEpsilon"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kEpsilon
void UnityEngine::Quaternion::_set_kEpsilon(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine", "Quaternion", "kEpsilon", value));
}
// Autogenerated method: UnityEngine.Quaternion.FromToRotation
UnityEngine::Quaternion UnityEngine::Quaternion::FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "FromToRotation", fromDirection, toDirection));
}
// Autogenerated method: UnityEngine.Quaternion.Inverse
UnityEngine::Quaternion UnityEngine::Quaternion::Inverse(UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Inverse", rotation));
}
// Autogenerated method: UnityEngine.Quaternion.Slerp
UnityEngine::Quaternion UnityEngine::Quaternion::Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Slerp", a, b, t));
}
// Autogenerated method: UnityEngine.Quaternion.SlerpUnclamped
UnityEngine::Quaternion UnityEngine::Quaternion::SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "SlerpUnclamped", a, b, t));
}
// Autogenerated method: UnityEngine.Quaternion.Lerp
UnityEngine::Quaternion UnityEngine::Quaternion::Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Lerp", a, b, t));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_FromEulerRad
UnityEngine::Quaternion UnityEngine::Quaternion::Internal_FromEulerRad(UnityEngine::Vector3 euler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Internal_FromEulerRad", euler));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_ToEulerRad
UnityEngine::Vector3 UnityEngine::Quaternion::Internal_ToEulerRad(UnityEngine::Quaternion rotation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Quaternion", "Internal_ToEulerRad", rotation));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_ToAxisAngleRad
void UnityEngine::Quaternion::Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Internal_ToAxisAngleRad", q, axis, angle));
}
// Autogenerated method: UnityEngine.Quaternion.AngleAxis
UnityEngine::Quaternion UnityEngine::Quaternion::AngleAxis(float angle, UnityEngine::Vector3 axis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "AngleAxis", angle, axis));
}
// Autogenerated method: UnityEngine.Quaternion.LookRotation
UnityEngine::Quaternion UnityEngine::Quaternion::LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "LookRotation", forward, upwards));
}
// Autogenerated method: UnityEngine.Quaternion.LookRotation
UnityEngine::Quaternion UnityEngine::Quaternion::LookRotation(UnityEngine::Vector3 forward) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "LookRotation", forward));
}
// Autogenerated method: UnityEngine.Quaternion..ctor
UnityEngine::Quaternion* UnityEngine::Quaternion::New_ctor(float x, float y, float z, float w) {
  return (Quaternion*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Quaternion", x, y, z, w));
}
// Autogenerated method: UnityEngine.Quaternion.get_identity
UnityEngine::Quaternion UnityEngine::Quaternion::get_identity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "get_identity"));
}
// Autogenerated method: UnityEngine.Quaternion.IsEqualUsingDot
bool UnityEngine::Quaternion::IsEqualUsingDot(float dot) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Quaternion", "IsEqualUsingDot", dot));
}
// Autogenerated method: UnityEngine.Quaternion.Dot
float UnityEngine::Quaternion::Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("UnityEngine", "Quaternion", "Dot", a, b));
}
// Autogenerated method: UnityEngine.Quaternion.SetLookRotation
void UnityEngine::Quaternion::SetLookRotation(UnityEngine::Vector3 view) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetLookRotation", view));
}
// Autogenerated method: UnityEngine.Quaternion.SetLookRotation
void UnityEngine::Quaternion::SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetLookRotation", view, up));
}
// Autogenerated method: UnityEngine.Quaternion.Angle
float UnityEngine::Quaternion::Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("UnityEngine", "Quaternion", "Angle", a, b));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_MakePositive
UnityEngine::Vector3 UnityEngine::Quaternion::Internal_MakePositive(UnityEngine::Vector3 euler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Quaternion", "Internal_MakePositive", euler));
}
// Autogenerated method: UnityEngine.Quaternion.get_eulerAngles
UnityEngine::Vector3 UnityEngine::Quaternion::get_eulerAngles() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(*this, "get_eulerAngles"));
}
// Autogenerated method: UnityEngine.Quaternion.set_eulerAngles
void UnityEngine::Quaternion::set_eulerAngles(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_eulerAngles", value));
}
// Autogenerated method: UnityEngine.Quaternion.Euler
UnityEngine::Quaternion UnityEngine::Quaternion::Euler(float x, float y, float z) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Euler", x, y, z));
}
// Autogenerated method: UnityEngine.Quaternion.Euler
UnityEngine::Quaternion UnityEngine::Quaternion::Euler(UnityEngine::Vector3 euler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Euler", euler));
}
// Autogenerated method: UnityEngine.Quaternion.ToAngleAxis
void UnityEngine::Quaternion::ToAngleAxis(float& angle, UnityEngine::Vector3& axis) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "ToAngleAxis", angle, axis));
}
// Autogenerated method: UnityEngine.Quaternion.RotateTowards
UnityEngine::Quaternion UnityEngine::Quaternion::RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "RotateTowards", from, to, maxDegreesDelta));
}
// Autogenerated method: UnityEngine.Quaternion.Normalize
UnityEngine::Quaternion UnityEngine::Quaternion::Normalize(UnityEngine::Quaternion q) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "Normalize", q));
}
// Autogenerated method: UnityEngine.Quaternion..cctor
void UnityEngine::Quaternion::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", ".cctor"));
}
// Autogenerated method: UnityEngine.Quaternion.FromToRotation_Injected
void UnityEngine::Quaternion::FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "FromToRotation_Injected", fromDirection, toDirection, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Inverse_Injected
void UnityEngine::Quaternion::Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Inverse_Injected", rotation, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Slerp_Injected
void UnityEngine::Quaternion::Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Slerp_Injected", a, b, t, ret));
}
// Autogenerated method: UnityEngine.Quaternion.SlerpUnclamped_Injected
void UnityEngine::Quaternion::SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "SlerpUnclamped_Injected", a, b, t, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Lerp_Injected
void UnityEngine::Quaternion::Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Lerp_Injected", a, b, t, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_FromEulerRad_Injected
void UnityEngine::Quaternion::Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Internal_FromEulerRad_Injected", euler, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_ToEulerRad_Injected
void UnityEngine::Quaternion::Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Internal_ToEulerRad_Injected", rotation, ret));
}
// Autogenerated method: UnityEngine.Quaternion.Internal_ToAxisAngleRad_Injected
void UnityEngine::Quaternion::Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "Internal_ToAxisAngleRad_Injected", q, axis, angle));
}
// Autogenerated method: UnityEngine.Quaternion.AngleAxis_Injected
void UnityEngine::Quaternion::AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "AngleAxis_Injected", angle, axis, ret));
}
// Autogenerated method: UnityEngine.Quaternion.LookRotation_Injected
void UnityEngine::Quaternion::LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Quaternion", "LookRotation_Injected", forward, upwards, ret));
}
// Autogenerated method: UnityEngine.Quaternion.GetHashCode
int UnityEngine::Quaternion::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: UnityEngine.Quaternion.Equals
bool UnityEngine::Quaternion::Equals(::Il2CppObject* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: UnityEngine.Quaternion.Equals
bool UnityEngine::Quaternion::Equals(UnityEngine::Quaternion other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: UnityEngine.Quaternion.ToString
::Il2CppString* UnityEngine::Quaternion::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
// Autogenerated method: UnityEngine.Quaternion.op_Multiply
UnityEngine::Quaternion UnityEngine::operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>("UnityEngine", "Quaternion", "op_Multiply", lhs, rhs));
}
// Autogenerated method: UnityEngine.Quaternion.op_Multiply
UnityEngine::Vector3 UnityEngine::operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Quaternion", "op_Multiply", rotation, point));
}
// Autogenerated method: UnityEngine.Quaternion.op_Equality
bool UnityEngine::operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Quaternion", "op_Equality", lhs, rhs));
}
// Autogenerated method: UnityEngine.Quaternion.op_Inequality
bool UnityEngine::operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Quaternion", "op_Inequality", lhs, rhs));
}