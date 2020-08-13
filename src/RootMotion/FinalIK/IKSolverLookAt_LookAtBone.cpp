// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverLookAt/LookAtBone
#include "RootMotion/FinalIK/IKSolverLookAt_LookAtBone.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverLookAt/LookAtBone.Initiate
void RootMotion::FinalIK::IKSolverLookAt::LookAtBone::Initiate(UnityEngine::Transform* root) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", root));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLookAt/LookAtBone.LookAt
void RootMotion::FinalIK::IKSolverLookAt::LookAtBone::LookAt(UnityEngine::Vector3 direction, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LookAt", direction, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLookAt/LookAtBone.get_forward
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverLookAt::LookAtBone::get_forward() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "get_forward"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLookAt/LookAtBone..ctor
RootMotion::FinalIK::IKSolverLookAt::LookAtBone* RootMotion::FinalIK::IKSolverLookAt::LookAtBone::New_ctor() {
  return (IKSolverLookAt::LookAtBone*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverLookAt/LookAtBone"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverLookAt/LookAtBone..ctor
RootMotion::FinalIK::IKSolverLookAt::LookAtBone* RootMotion::FinalIK::IKSolverLookAt::LookAtBone::New_ctor(UnityEngine::Transform* transform) {
  return (IKSolverLookAt::LookAtBone*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverLookAt/LookAtBone", transform));
}
