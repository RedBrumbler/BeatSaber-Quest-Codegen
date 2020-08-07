// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverVR/Leg
#include "RootMotion/FinalIK/IKSolverVR_Leg.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/VirtualBone
#include "RootMotion/FinalIK/IKSolverVR_VirtualBone.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_position
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::Leg::get_position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_position"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.set_position
void RootMotion::FinalIK::IKSolverVR::Leg::set_position(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_position", value));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_rotation
UnityEngine::Quaternion RootMotion::FinalIK::IKSolverVR::Leg::get_rotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "get_rotation"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.set_rotation
void RootMotion::FinalIK::IKSolverVR::Leg::set_rotation(UnityEngine::Quaternion value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_rotation", value));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_hasToes
bool RootMotion::FinalIK::IKSolverVR::Leg::get_hasToes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasToes"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.set_hasToes
void RootMotion::FinalIK::IKSolverVR::Leg::set_hasToes(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_hasToes", value));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_thigh
RootMotion::FinalIK::IKSolverVR::VirtualBone* RootMotion::FinalIK::IKSolverVR::Leg::get_thigh() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(this, "get_thigh"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_calf
RootMotion::FinalIK::IKSolverVR::VirtualBone* RootMotion::FinalIK::IKSolverVR::Leg::get_calf() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(this, "get_calf"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_foot
RootMotion::FinalIK::IKSolverVR::VirtualBone* RootMotion::FinalIK::IKSolverVR::Leg::get_foot() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(this, "get_foot"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_toes
RootMotion::FinalIK::IKSolverVR::VirtualBone* RootMotion::FinalIK::IKSolverVR::Leg::get_toes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(this, "get_toes"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_lastBone
RootMotion::FinalIK::IKSolverVR::VirtualBone* RootMotion::FinalIK::IKSolverVR::Leg::get_lastBone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolverVR::VirtualBone*>(this, "get_lastBone"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.get_thighRelativeToPelvis
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverVR::Leg::get_thighRelativeToPelvis() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_thighRelativeToPelvis"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.set_thighRelativeToPelvis
void RootMotion::FinalIK::IKSolverVR::Leg::set_thighRelativeToPelvis(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_thighRelativeToPelvis", value));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.ApplyPositionOffset
void RootMotion::FinalIK::IKSolverVR::Leg::ApplyPositionOffset(UnityEngine::Vector3 offset, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyPositionOffset", offset, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.ApplyRotationOffset
void RootMotion::FinalIK::IKSolverVR::Leg::ApplyRotationOffset(UnityEngine::Quaternion offset, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyRotationOffset", offset, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.Solve
void RootMotion::FinalIK::IKSolverVR::Leg::Solve(bool stretch) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Solve", stretch));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.FixTwistRotations
void RootMotion::FinalIK::IKSolverVR::Leg::FixTwistRotations() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTwistRotations"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.Stretching
void RootMotion::FinalIK::IKSolverVR::Leg::Stretching() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Stretching"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.OnRead
void RootMotion::FinalIK::IKSolverVR::Leg::OnRead(::Array<UnityEngine::Vector3>* positions, ::Array<UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int rootIndex, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnRead", positions, rotations, hasChest, hasNeck, hasShoulders, hasToes, hasLegs, rootIndex, index));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.PreSolve
void RootMotion::FinalIK::IKSolverVR::Leg::PreSolve() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PreSolve"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.ApplyOffsets
void RootMotion::FinalIK::IKSolverVR::Leg::ApplyOffsets() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyOffsets"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.Write
void RootMotion::FinalIK::IKSolverVR::Leg::Write(::Array<UnityEngine::Vector3>*& solvedPositions, ::Array<UnityEngine::Quaternion>*& solvedRotations) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", solvedPositions, solvedRotations));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg.ResetOffsets
void RootMotion::FinalIK::IKSolverVR::Leg::ResetOffsets() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetOffsets"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverVR/Leg..ctor
RootMotion::FinalIK::IKSolverVR::Leg* RootMotion::FinalIK::IKSolverVR::Leg::New_ctor() {
  return (IKSolverVR::Leg*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverVR/Leg"));
}