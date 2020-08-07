// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_34_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_34_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/Vector3f
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/TextureRectMatrixf
#include "GlobalNamespace/OVRPlugin_TextureRectMatrixf.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_34_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_34_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_34_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_34_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_34_0.ovrp_EnqueueSubmitLayer2
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_34_0::ovrp_EnqueueSubmitLayer2(uint flags, System::IntPtr textureLeft, System::IntPtr textureRight, int layerId, int frameIndex, GlobalNamespace::OVRPlugin::Posef& pose, GlobalNamespace::OVRPlugin::Vector3f& scale, int layerIndex, GlobalNamespace::OVRPlugin::Bool overrideTextureRectMatrix, GlobalNamespace::OVRPlugin::TextureRectMatrixf& textureRectMatrix, GlobalNamespace::OVRPlugin::Bool overridePerLayerColorScaleAndOffset, UnityEngine::Vector4& colorScale, UnityEngine::Vector4& colorOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_34_0", "ovrp_EnqueueSubmitLayer2", flags, textureLeft, textureRight, layerId, frameIndex, pose, scale, layerIndex, overrideTextureRectMatrix, textureRectMatrix, overridePerLayerColorScaleAndOffset, colorScale, colorOffset));
}
// Autogenerated method: OVRPlugin/OVRP_1_34_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_34_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_34_0", ".cctor"));
}