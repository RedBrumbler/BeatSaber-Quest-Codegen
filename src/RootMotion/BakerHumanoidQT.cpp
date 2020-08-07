// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BakerHumanoidQT
#include "RootMotion/BakerHumanoidQT.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: UnityEngine.Avatar
#include "UnityEngine/Avatar.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.AnimationClip
#include "UnityEngine/AnimationClip.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.BakerHumanoidQT..ctor
RootMotion::BakerHumanoidQT* RootMotion::BakerHumanoidQT::New_ctor(::Il2CppString* name) {
  return (BakerHumanoidQT*)THROW_UNLESS(il2cpp_utils::New("RootMotion", "BakerHumanoidQT", name));
}
// Autogenerated method: RootMotion.BakerHumanoidQT..ctor
RootMotion::BakerHumanoidQT* RootMotion::BakerHumanoidQT::New_ctor(UnityEngine::Transform* transform, UnityEngine::AvatarIKGoal goal, ::Il2CppString* name) {
  return (BakerHumanoidQT*)THROW_UNLESS(il2cpp_utils::New("RootMotion", "BakerHumanoidQT", transform, goal, name));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.Reset
void RootMotion::BakerHumanoidQT::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.SetIKKeyframes
void RootMotion::BakerHumanoidQT::SetIKKeyframes(float time, UnityEngine::Avatar* avatar, float humanScale, UnityEngine::Vector3 bodyPosition, UnityEngine::Quaternion bodyRotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKKeyframes", time, avatar, humanScale, bodyPosition, bodyRotation));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.SetKeyframes
void RootMotion::BakerHumanoidQT::SetKeyframes(float time, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetKeyframes", time, pos, rot));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.MoveLastKeyframes
void RootMotion::BakerHumanoidQT::MoveLastKeyframes(float time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLastKeyframes", time));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.SetLoopFrame
void RootMotion::BakerHumanoidQT::SetLoopFrame(float time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLoopFrame", time));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.MoveLastKeyframe
void RootMotion::BakerHumanoidQT::MoveLastKeyframe(float time, UnityEngine::AnimationCurve* curve) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveLastKeyframe", time, curve));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.MultiplyLength
void RootMotion::BakerHumanoidQT::MultiplyLength(UnityEngine::AnimationCurve* curve, float mlp) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MultiplyLength", curve, mlp));
}
// Autogenerated method: RootMotion.BakerHumanoidQT.SetCurves
void RootMotion::BakerHumanoidQT::SetCurves(UnityEngine::AnimationClip*& clip, float maxError, float lengthMlp) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCurves", clip, maxError, lengthMlp));
}