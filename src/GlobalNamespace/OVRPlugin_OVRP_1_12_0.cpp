// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_12_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_12_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: OVRPlugin/PoseStatef
#include "GlobalNamespace/OVRPlugin_PoseStatef.hpp"
// Including type: OVRPlugin/Step
#include "GlobalNamespace/OVRPlugin_Step.hpp"
// Including type: OVRPlugin/Node
#include "GlobalNamespace/OVRPlugin_Node.hpp"
// Including type: OVRPlugin/ControllerState2
#include "GlobalNamespace/OVRPlugin_ControllerState2.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_12_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_12_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_12_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_12_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetAppFramerate
float GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetAppFramerate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetAppFramerate"));
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetNodePoseState
GlobalNamespace::OVRPlugin::PoseStatef GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetNodePoseState(GlobalNamespace::OVRPlugin::Step stepId, GlobalNamespace::OVRPlugin::Node nodeId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::PoseStatef>("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetNodePoseState", stepId, nodeId));
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0.ovrp_GetControllerState2
GlobalNamespace::OVRPlugin::ControllerState2 GlobalNamespace::OVRPlugin::OVRP_1_12_0::ovrp_GetControllerState2(uint controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::ControllerState2>("", "OVRPlugin/OVRP_1_12_0", "ovrp_GetControllerState2", controllerMask));
}
// Autogenerated method: OVRPlugin/OVRP_1_12_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_12_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_12_0", ".cctor"));
}