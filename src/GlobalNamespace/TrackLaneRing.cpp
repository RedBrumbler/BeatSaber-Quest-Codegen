// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TrackLaneRing
#include "GlobalNamespace/TrackLaneRing.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TrackLaneRing.get_destRotZ
float GlobalNamespace::TrackLaneRing::get_destRotZ() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_destRotZ"));
}
// Autogenerated method: TrackLaneRing.Init
void GlobalNamespace::TrackLaneRing::Init(UnityEngine::Vector3 position, UnityEngine::Vector3 positionOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", position, positionOffset));
}
// Autogenerated method: TrackLaneRing.FixedUpdateRing
void GlobalNamespace::TrackLaneRing::FixedUpdateRing(float fixedDeltaTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdateRing", fixedDeltaTime));
}
// Autogenerated method: TrackLaneRing.LateUpdateRing
void GlobalNamespace::TrackLaneRing::LateUpdateRing(float interpolationFactor) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdateRing", interpolationFactor));
}
// Autogenerated method: TrackLaneRing.SetDestRotation
void GlobalNamespace::TrackLaneRing::SetDestRotation(float destRotZ, float rotateSpeed) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDestRotation", destRotZ, rotateSpeed));
}
// Autogenerated method: TrackLaneRing.GetRotation
float GlobalNamespace::TrackLaneRing::GetRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetRotation"));
}
// Autogenerated method: TrackLaneRing.GetDestinationRotation
float GlobalNamespace::TrackLaneRing::GetDestinationRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetDestinationRotation"));
}
// Autogenerated method: TrackLaneRing.SetPosition
void GlobalNamespace::TrackLaneRing::SetPosition(float destPosZ, float moveSpeed) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPosition", destPosZ, moveSpeed));
}
// Autogenerated method: TrackLaneRing..ctor
GlobalNamespace::TrackLaneRing* GlobalNamespace::TrackLaneRing::New_ctor() {
  return (TrackLaneRing*)THROW_UNLESS(il2cpp_utils::New("", "TrackLaneRing"));
}
