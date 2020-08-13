// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMapping/BoneMap
#include "RootMotion/FinalIK/IKMapping_BoneMap.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Node
#include "RootMotion/FinalIK/IKSolver_Node.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.Initiate
void RootMotion::FinalIK::IKMapping::BoneMap::Initiate(UnityEngine::Transform* transform, RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", transform, solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.get_swingDirection
UnityEngine::Vector3 RootMotion::FinalIK::IKMapping::BoneMap::get_swingDirection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_swingDirection"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.StoreDefaultLocalState
void RootMotion::FinalIK::IKMapping::BoneMap::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.FixTransform
void RootMotion::FinalIK::IKMapping::BoneMap::FixTransform(bool position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransform", position));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.get_isNodeBone
bool RootMotion::FinalIK::IKMapping::BoneMap::get_isNodeBone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isNodeBone"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetLength
void RootMotion::FinalIK::IKMapping::BoneMap::SetLength(RootMotion::FinalIK::IKMapping::BoneMap* nextBone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLength", nextBone));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetLocalSwingAxis
void RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* swingTarget) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLocalSwingAxis", swingTarget));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetLocalSwingAxis
void RootMotion::FinalIK::IKMapping::BoneMap::SetLocalSwingAxis(RootMotion::FinalIK::IKMapping::BoneMap* bone1, RootMotion::FinalIK::IKMapping::BoneMap* bone2) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLocalSwingAxis", bone1, bone2));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetLocalTwistAxis
void RootMotion::FinalIK::IKMapping::BoneMap::SetLocalTwistAxis(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLocalTwistAxis", twistDirection, normalDirection));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetPlane
void RootMotion::FinalIK::IKMapping::BoneMap::SetPlane(RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine::Transform* planeBone1, UnityEngine::Transform* planeBone2, UnityEngine::Transform* planeBone3) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPlane", solver, planeBone1, planeBone2, planeBone3));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.UpdatePlane
void RootMotion::FinalIK::IKMapping::BoneMap::UpdatePlane(bool rotation, bool position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdatePlane", rotation, position));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetIKPosition
void RootMotion::FinalIK::IKMapping::BoneMap::SetIKPosition() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKPosition"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.MaintainRotation
void RootMotion::FinalIK::IKMapping::BoneMap::MaintainRotation() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MaintainRotation"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.SetToIKPosition
void RootMotion::FinalIK::IKMapping::BoneMap::SetToIKPosition() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetToIKPosition"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.FixToNode
void RootMotion::FinalIK::IKMapping::BoneMap::FixToNode(RootMotion::FinalIK::IKSolverFullBody* solver, float weight, RootMotion::FinalIK::IKSolver::Node* fixNode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixToNode", solver, weight, fixNode));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.GetPlanePosition
UnityEngine::Vector3 RootMotion::FinalIK::IKMapping::BoneMap::GetPlanePosition(RootMotion::FinalIK::IKSolverFullBody* solver) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetPlanePosition", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.PositionToPlane
void RootMotion::FinalIK::IKMapping::BoneMap::PositionToPlane(RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PositionToPlane", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.RotateToPlane
void RootMotion::FinalIK::IKMapping::BoneMap::RotateToPlane(RootMotion::FinalIK::IKSolverFullBody* solver, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RotateToPlane", solver, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.Swing
void RootMotion::FinalIK::IKMapping::BoneMap::Swing(UnityEngine::Vector3 swingTarget, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Swing", swingTarget, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.Swing
void RootMotion::FinalIK::IKMapping::BoneMap::Swing(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Swing", pos1, pos2, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.Twist
void RootMotion::FinalIK::IKMapping::BoneMap::Twist(UnityEngine::Vector3 twistDirection, UnityEngine::Vector3 normalDirection, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Twist", twistDirection, normalDirection, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.RotateToMaintain
void RootMotion::FinalIK::IKMapping::BoneMap::RotateToMaintain(float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RotateToMaintain", weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.RotateToEffector
void RootMotion::FinalIK::IKMapping::BoneMap::RotateToEffector(RootMotion::FinalIK::IKSolverFullBody* solver, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RotateToEffector", solver, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.GetTargetRotation
UnityEngine::Quaternion RootMotion::FinalIK::IKMapping::BoneMap::GetTargetRotation(RootMotion::FinalIK::IKSolverFullBody* solver) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "GetTargetRotation", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap.get_lastAnimatedTargetRotation
UnityEngine::Quaternion RootMotion::FinalIK::IKMapping::BoneMap::get_lastAnimatedTargetRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "get_lastAnimatedTargetRotation"));
}
// Autogenerated method: RootMotion.FinalIK.IKMapping/BoneMap..ctor
RootMotion::FinalIK::IKMapping::BoneMap* RootMotion::FinalIK::IKMapping::BoneMap::New_ctor() {
  return (IKMapping::BoneMap*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKMapping/BoneMap"));
}
