// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_28_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_28_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/Handedness
#include "GlobalNamespace/OVRPlugin_Handedness.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/LayerDesc
#include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_28_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_28_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_28_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_28_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0.ovrp_GetDominantHand
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetDominantHand(GlobalNamespace::OVRPlugin::Handedness& dominantHand) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_28_0", "ovrp_GetDominantHand", dominantHand));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0.ovrp_GetReorientHMDOnControllerRecenter
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_GetReorientHMDOnControllerRecenter(GlobalNamespace::OVRPlugin::Bool& recenter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_28_0", "ovrp_GetReorientHMDOnControllerRecenter", recenter));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0.ovrp_SetReorientHMDOnControllerRecenter
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SetReorientHMDOnControllerRecenter(GlobalNamespace::OVRPlugin::Bool recenter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_28_0", "ovrp_SetReorientHMDOnControllerRecenter", recenter));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0.ovrp_SendEvent
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_SendEvent(::Il2CppString* name, ::Il2CppString* param) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_28_0", "ovrp_SendEvent", name, param));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0.ovrp_EnqueueSetupLayer2
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_28_0::ovrp_EnqueueSetupLayer2(GlobalNamespace::OVRPlugin::LayerDesc& desc, int compositionDepth, System::IntPtr layerId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_28_0", "ovrp_EnqueueSetupLayer2", desc, compositionDepth, layerId));
}
// Autogenerated method: OVRPlugin/OVRP_1_28_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_28_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_28_0", ".cctor"));
}