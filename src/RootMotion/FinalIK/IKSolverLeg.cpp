// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverLeg
#include "RootMotion/FinalIK/IKSolverLeg.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR/Leg
#include "RootMotion/FinalIK/IKSolverVR_Leg.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.SetChain
bool RootMotion::FinalIK::IKSolverLeg::SetChain(UnityEngine::Transform* pelvis, UnityEngine::Transform* thigh, UnityEngine::Transform* calf, UnityEngine::Transform* foot, UnityEngine::Transform* toe, UnityEngine::Transform* root) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetChain", pelvis, thigh, calf, foot, toe, root));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.Solve
void RootMotion::FinalIK::IKSolverLeg::Solve() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Solve"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.Read
void RootMotion::FinalIK::IKSolverLeg::Read() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Read"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.Write
void RootMotion::FinalIK::IKSolverLeg::Write() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.IsValid
bool RootMotion::FinalIK::IKSolverLeg::IsValid(::CsString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.GetPoints
::Array<RootMotion::FinalIK::IKSolver::Point*>* RootMotion::FinalIK::IKSolverLeg::GetPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver::Point*>*>(this, "GetPoints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.GetPoint
RootMotion::FinalIK::IKSolver::Point* RootMotion::FinalIK::IKSolverLeg::GetPoint(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Point*>(this, "GetPoint", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.StoreDefaultLocalState
void RootMotion::FinalIK::IKSolverLeg::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.FixTransforms
void RootMotion::FinalIK::IKSolverLeg::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.OnInitiate
void RootMotion::FinalIK::IKSolverLeg::OnInitiate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg.OnUpdate
void RootMotion::FinalIK::IKSolverLeg::OnUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLeg..ctor
RootMotion::FinalIK::IKSolverLeg* RootMotion::FinalIK::IKSolverLeg::New_ctor() {
  return (IKSolverLeg*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverLeg"));
}
