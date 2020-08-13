// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_6_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_6_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/HapticsDesc
#include "GlobalNamespace/OVRPlugin_HapticsDesc.hpp"
// Including type: OVRPlugin/HapticsState
#include "GlobalNamespace/OVRPlugin_HapticsState.hpp"
// Including type: OVRPlugin/HapticsBuffer
#include "GlobalNamespace/OVRPlugin_HapticsBuffer.hpp"
// Including type: OVRPlugin/Vector3f
#include "GlobalNamespace/OVRPlugin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_6_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_6_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_6_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_6_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetTrackingIPDEnabled
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetTrackingIPDEnabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetTrackingIPDEnabled"));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_SetTrackingIPDEnabled
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetTrackingIPDEnabled(GlobalNamespace::OVRPlugin::Bool value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_6_0", "ovrp_SetTrackingIPDEnabled", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetControllerHapticsDesc
GlobalNamespace::OVRPlugin::HapticsDesc GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsDesc(uint controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::HapticsDesc>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetControllerHapticsDesc", controllerMask));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetControllerHapticsState
GlobalNamespace::OVRPlugin::HapticsState GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetControllerHapticsState(uint controllerMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::HapticsState>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetControllerHapticsState", controllerMask));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_SetControllerHaptics
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetControllerHaptics(uint controllerMask, GlobalNamespace::OVRPlugin::HapticsBuffer hapticsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_6_0", "ovrp_SetControllerHaptics", controllerMask, hapticsBuffer));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_SetOverlayQuad3
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_SetOverlayQuad3(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, System::IntPtr device, GlobalNamespace::OVRPlugin::Posef pose, GlobalNamespace::OVRPlugin::Vector3f scale, int layerIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_6_0", "ovrp_SetOverlayQuad3", flags, textureLeft, textureRight, device, pose, scale, layerIndex));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetEyeRecommendedResolutionScale
float GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetEyeRecommendedResolutionScale() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetEyeRecommendedResolutionScale"));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetAppCpuStartToGpuEndTime
float GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetAppCpuStartToGpuEndTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetAppCpuStartToGpuEndTime"));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0.ovrp_GetSystemRecommendedMSAALevel
int GlobalNamespace::OVRPlugin::OVRP_1_6_0::ovrp_GetSystemRecommendedMSAALevel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("", "OVRPlugin/OVRP_1_6_0", "ovrp_GetSystemRecommendedMSAALevel"));
}
// Autogenerated method: OVRPlugin/OVRP_1_6_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_6_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_6_0", ".cctor"));
}
