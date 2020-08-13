// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.OffsetModifier/OffsetLimits
#include "RootMotion/FinalIK/OffsetModifier_OffsetLimits.hpp"
// Including type: RootMotion.FinalIK.IKEffector
#include "RootMotion/FinalIK/IKEffector.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.OffsetModifier/OffsetLimits.Apply
void RootMotion::FinalIK::OffsetModifier::OffsetLimits::Apply(RootMotion::FinalIK::IKEffector* e, UnityEngine::Quaternion rootRotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Apply", e, rootRotation));
}
// Autogenerated method: RootMotion.FinalIK.OffsetModifier/OffsetLimits.SpringAxis
float RootMotion::FinalIK::OffsetModifier::OffsetLimits::SpringAxis(float value, float min, float max) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "SpringAxis", value, min, max));
}
// Autogenerated method: RootMotion.FinalIK.OffsetModifier/OffsetLimits.Spring
float RootMotion::FinalIK::OffsetModifier::OffsetLimits::Spring(float value, float limit, bool negative) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "Spring", value, limit, negative));
}
// Autogenerated method: RootMotion.FinalIK.OffsetModifier/OffsetLimits..ctor
RootMotion::FinalIK::OffsetModifier::OffsetLimits* RootMotion::FinalIK::OffsetModifier::OffsetLimits::New_ctor() {
  return (OffsetModifier::OffsetLimits*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "OffsetModifier/OffsetLimits"));
}
