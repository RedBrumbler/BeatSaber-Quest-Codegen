// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKConstraintBend
#include "RootMotion/FinalIK/IKConstraintBend.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: RootMotion.Warning/Logger
#include "RootMotion/Warning_Logger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.IsValid
bool RootMotion::FinalIK::IKConstraintBend::IsValid(RootMotion::FinalIK::IKSolverFullBody* solver, RootMotion::Warning::Logger* logger) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", solver, logger));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.get_initiated
bool RootMotion::FinalIK::IKConstraintBend::get_initiated() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_initiated"));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.set_initiated
void RootMotion::FinalIK::IKConstraintBend::set_initiated(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_initiated", value));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend..ctor
RootMotion::FinalIK::IKConstraintBend* RootMotion::FinalIK::IKConstraintBend::New_ctor(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3) {
  return (IKConstraintBend*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKConstraintBend", bone1, bone2, bone3));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.SetBones
void RootMotion::FinalIK::IKConstraintBend::SetBones(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBones", bone1, bone2, bone3));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.Initiate
void RootMotion::FinalIK::IKConstraintBend::Initiate(RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.SetLimbOrientation
void RootMotion::FinalIK::IKConstraintBend::SetLimbOrientation(UnityEngine::Vector3 upper, UnityEngine::Vector3 lower, UnityEngine::Vector3 last) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLimbOrientation", upper, lower, last));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.LimitBend
void RootMotion::FinalIK::IKConstraintBend::LimitBend(float solverWeight, float positionWeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LimitBend", solverWeight, positionWeight));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.GetDir
UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::GetDir(RootMotion::FinalIK::IKSolverFullBody* solver) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetDir", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.OrthoToLimb
UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::OrthoToLimb(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 tangent) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "OrthoToLimb", solver, tangent));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend.OrthoToBone1
UnityEngine::Vector3 RootMotion::FinalIK::IKConstraintBend::OrthoToBone1(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Vector3 tangent) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "OrthoToBone1", solver, tangent));
}
// Autogenerated method: RootMotion.FinalIK.IKConstraintBend..ctor
RootMotion::FinalIK::IKConstraintBend* RootMotion::FinalIK::IKConstraintBend::New_ctor() {
  return (IKConstraintBend*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKConstraintBend"));
}
