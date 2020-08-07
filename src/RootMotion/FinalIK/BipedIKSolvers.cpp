// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.BipedIKSolvers
#include "RootMotion/FinalIK/BipedIKSolvers.hpp"
// Including type: RootMotion.FinalIK.IKSolverLimb
#include "RootMotion/FinalIK/IKSolverLimb.hpp"
// Including type: RootMotion.FinalIK.IKSolverFABRIK
#include "RootMotion/FinalIK/IKSolverFABRIK.hpp"
// Including type: RootMotion.FinalIK.IKSolverLookAt
#include "RootMotion/FinalIK/IKSolverLookAt.hpp"
// Including type: RootMotion.FinalIK.IKSolverAim
#include "RootMotion/FinalIK/IKSolverAim.hpp"
// Including type: RootMotion.FinalIK.Constraints
#include "RootMotion/FinalIK/Constraints.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.BipedReferences
#include "RootMotion/BipedReferences.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.BipedIKSolvers.get_limbs
::Array<RootMotion::FinalIK::IKSolverLimb*>* RootMotion::FinalIK::BipedIKSolvers::get_limbs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolverLimb*>*>(this, "get_limbs"));
}
// Autogenerated method: RootMotion.FinalIK.BipedIKSolvers.get_ikSolvers
::Array<RootMotion::FinalIK::IKSolver*>* RootMotion::FinalIK::BipedIKSolvers::get_ikSolvers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver*>*>(this, "get_ikSolvers"));
}
// Autogenerated method: RootMotion.FinalIK.BipedIKSolvers.AssignReferences
void RootMotion::FinalIK::BipedIKSolvers::AssignReferences(RootMotion::BipedReferences* references) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AssignReferences", references));
}
// Autogenerated method: RootMotion.FinalIK.BipedIKSolvers..ctor
RootMotion::FinalIK::BipedIKSolvers* RootMotion::FinalIK::BipedIKSolvers::New_ctor() {
  return (BipedIKSolvers*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "BipedIKSolvers"));
}