// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVROverlay
#include "GlobalNamespace/OVROverlay.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Renderer
#include "UnityEngine/Renderer.hpp"
// Including type: OVROverlay/ExternalSurfaceObjectCreated
#include "GlobalNamespace/OVROverlay_ExternalSurfaceObjectCreated.hpp"
// Including type: OVROverlay/LayerTexture
#include "GlobalNamespace/OVROverlay_LayerTexture.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Int32 maxInstances
int GlobalNamespace::OVROverlay::_get_maxInstances() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "OVROverlay", "maxInstances"));
}
// Autogenerated static field setter
// Set static field: static System.Int32 maxInstances
void GlobalNamespace::OVROverlay::_set_maxInstances(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "maxInstances", value));
}
// Autogenerated static field getter
// Get static field: static public OVROverlay[] instances
::Array<GlobalNamespace::OVROverlay*>* GlobalNamespace::OVROverlay::_get_instances() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<GlobalNamespace::OVROverlay*>*>("", "OVROverlay", "instances"));
}
// Autogenerated static field setter
// Set static field: static public OVROverlay[] instances
void GlobalNamespace::OVROverlay::_set_instances(::Array<GlobalNamespace::OVROverlay*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "instances", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Material tex2DMaterial
UnityEngine::Material* GlobalNamespace::OVROverlay::_get_tex2DMaterial() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Material*>("", "OVROverlay", "tex2DMaterial"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Material tex2DMaterial
void GlobalNamespace::OVROverlay::_set_tex2DMaterial(UnityEngine::Material* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "tex2DMaterial", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Material cubeMaterial
UnityEngine::Material* GlobalNamespace::OVROverlay::_get_cubeMaterial() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Material*>("", "OVROverlay", "cubeMaterial"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Material cubeMaterial
void GlobalNamespace::OVROverlay::_set_cubeMaterial(UnityEngine::Material* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVROverlay", "cubeMaterial", value));
}
// Autogenerated method: OVROverlay.OverrideOverlayTextureInfo
void GlobalNamespace::OVROverlay::OverrideOverlayTextureInfo(UnityEngine::Texture* srcTexture, System::IntPtr nativePtr, UnityEngine::XR::XRNode node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OverrideOverlayTextureInfo", srcTexture, nativePtr, node));
}
// Autogenerated method: OVROverlay.get_layout
GlobalNamespace::OVRPlugin::LayerLayout GlobalNamespace::OVROverlay::get_layout() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::LayerLayout>(this, "get_layout"));
}
// Autogenerated method: OVROverlay.get_texturesPerStage
int GlobalNamespace::OVROverlay::get_texturesPerStage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_texturesPerStage"));
}
// Autogenerated method: OVROverlay.CreateLayer
bool GlobalNamespace::OVROverlay::CreateLayer(int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat etFormat, int flags, GlobalNamespace::OVRPlugin::Sizei size, GlobalNamespace::OVRPlugin::OverlayShape shape) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CreateLayer", mipLevels, sampleCount, etFormat, flags, size, shape));
}
// Autogenerated method: OVROverlay.CreateLayerTextures
bool GlobalNamespace::OVROverlay::CreateLayerTextures(bool useMipmaps, GlobalNamespace::OVRPlugin::Sizei size, bool isHdr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CreateLayerTextures", useMipmaps, size, isHdr));
}
// Autogenerated method: OVROverlay.DestroyLayerTextures
void GlobalNamespace::OVROverlay::DestroyLayerTextures() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DestroyLayerTextures"));
}
// Autogenerated method: OVROverlay.DestroyLayer
void GlobalNamespace::OVROverlay::DestroyLayer() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DestroyLayer"));
}
// Autogenerated method: OVROverlay.SetSrcDestRects
void GlobalNamespace::OVROverlay::SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSrcDestRects", srcLeft, srcRight, destLeft, destRight));
}
// Autogenerated method: OVROverlay.UpdateTextureRectMatrix
void GlobalNamespace::OVROverlay::UpdateTextureRectMatrix() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateTextureRectMatrix"));
}
// Autogenerated method: OVROverlay.SetPerLayerColorScaleAndOffset
void GlobalNamespace::OVROverlay::SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPerLayerColorScaleAndOffset", scale, offset));
}
// Autogenerated method: OVROverlay.LatchLayerTextures
bool GlobalNamespace::OVROverlay::LatchLayerTextures() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "LatchLayerTextures"));
}
// Autogenerated method: OVROverlay.GetCurrentLayerDesc
GlobalNamespace::OVRPlugin::LayerDesc GlobalNamespace::OVROverlay::GetCurrentLayerDesc() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::LayerDesc>(this, "GetCurrentLayerDesc"));
}
// Autogenerated method: OVROverlay.PopulateLayer
bool GlobalNamespace::OVROverlay::PopulateLayer(int mipLevels, bool isHdr, GlobalNamespace::OVRPlugin::Sizei size, int sampleCount, int stage) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "PopulateLayer", mipLevels, isHdr, size, sampleCount, stage));
}
// Autogenerated method: OVROverlay.SubmitLayer
bool GlobalNamespace::OVROverlay::SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int frameIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SubmitLayer", overlay, headLocked, noDepthBufferTesting, pose, scale, frameIndex));
}
// Autogenerated method: OVROverlay.Awake
void GlobalNamespace::OVROverlay::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: OVROverlay.get_OpenVROverlayKey
::Il2CppString* GlobalNamespace::OVROverlay::get_OpenVROverlayKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("", "OVROverlay", "get_OpenVROverlayKey"));
}
// Autogenerated method: OVROverlay.OnEnable
void GlobalNamespace::OVROverlay::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: OVROverlay.InitOVROverlay
void GlobalNamespace::OVROverlay::InitOVROverlay() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitOVROverlay"));
}
// Autogenerated method: OVROverlay.OnDisable
void GlobalNamespace::OVROverlay::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: OVROverlay.OnDestroy
void GlobalNamespace::OVROverlay::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: OVROverlay.ComputeSubmit
bool GlobalNamespace::OVROverlay::ComputeSubmit(GlobalNamespace::OVRPose& pose, UnityEngine::Vector3& scale, bool& overlay, bool& headLocked) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ComputeSubmit", pose, scale, overlay, headLocked));
}
// Autogenerated method: OVROverlay.OpenVROverlayUpdate
void GlobalNamespace::OVROverlay::OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenVROverlayUpdate", scale, pose));
}
// Autogenerated method: OVROverlay.LateUpdate
void GlobalNamespace::OVROverlay::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: OVROverlay..ctor
GlobalNamespace::OVROverlay* GlobalNamespace::OVROverlay::New_ctor() {
  return (OVROverlay*)THROW_UNLESS(il2cpp_utils::New("", "OVROverlay"));
}
// Autogenerated method: OVROverlay..cctor
void GlobalNamespace::OVROverlay::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVROverlay", ".cctor"));
}