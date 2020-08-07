// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderData
#include "GlobalNamespace/VRControllersRecorderData.hpp"
// Including type: VRControllersRecorderData/PositionAndRotation
#include "GlobalNamespace/VRControllersRecorderData_PositionAndRotation.hpp"
// Including type: VRControllersRecorderData/Keyframe
#include "GlobalNamespace/VRControllersRecorderData_Keyframe.hpp"
// Including type: VRControllersRecorderData/NodeInfo
#include "GlobalNamespace/VRControllersRecorderData_NodeInfo.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VRControllersRecorderData..ctor
GlobalNamespace::VRControllersRecorderData* GlobalNamespace::VRControllersRecorderData::New_ctor(::Array<GlobalNamespace::VRControllersRecorderData::NodeInfo*>* nodesInfo) {
  return (VRControllersRecorderData*)THROW_UNLESS(il2cpp_utils::New("", "VRControllersRecorderData", nodesInfo));
}
// Autogenerated method: VRControllersRecorderData.AddKeyFrame
void GlobalNamespace::VRControllersRecorderData::AddKeyFrame(::Array<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>* positionsAndRotations, float time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddKeyFrame", positionsAndRotations, time));
}
// Autogenerated method: VRControllersRecorderData.GetPositionAndRotation
GlobalNamespace::VRControllersRecorderData::PositionAndRotation GlobalNamespace::VRControllersRecorderData::GetPositionAndRotation(int frameIdx, UnityEngine::XR::XRNode nodeType, int nodeIdx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>(this, "GetPositionAndRotation", frameIdx, nodeType, nodeIdx));
}
// Autogenerated method: VRControllersRecorderData.GetLerpedPositionAndRotation
GlobalNamespace::VRControllersRecorderData::PositionAndRotation GlobalNamespace::VRControllersRecorderData::GetLerpedPositionAndRotation(int frameIdx, float t, UnityEngine::XR::XRNode nodeType, int nodeIdx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::VRControllersRecorderData::PositionAndRotation>(this, "GetLerpedPositionAndRotation", frameIdx, t, nodeType, nodeIdx));
}
// Autogenerated method: VRControllersRecorderData.GetFrameTime
float GlobalNamespace::VRControllersRecorderData::GetFrameTime(int frameIdx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFrameTime", frameIdx));
}
// Autogenerated method: VRControllersRecorderData.get_numberOfKeyframes
int GlobalNamespace::VRControllersRecorderData::get_numberOfKeyframes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_numberOfKeyframes"));
}