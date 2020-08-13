// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRCubemapCapture
#include "GlobalNamespace/OVRCubemapCapture.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: UnityEngine.Cubemap
#include "UnityEngine/Cubemap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRCubemapCapture.Update
void GlobalNamespace::OVRCubemapCapture::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: OVRCubemapCapture.TriggerCubemapCapture
void GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture(UnityEngine::Vector3 capturePos, int cubemapSize, ::CsString* pathName) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRCubemapCapture", "TriggerCubemapCapture", capturePos, cubemapSize, pathName));
}
// Autogenerated method: OVRCubemapCapture.RenderIntoCubemap
void GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap(UnityEngine::Camera* ownerCamera, UnityEngine::Cubemap* outCubemap) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRCubemapCapture", "RenderIntoCubemap", ownerCamera, outCubemap));
}
// Autogenerated method: OVRCubemapCapture.SaveCubemapCapture
bool GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture(UnityEngine::Cubemap* cubemap, ::CsString* pathName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRCubemapCapture", "SaveCubemapCapture", cubemap, pathName));
}
// Autogenerated method: OVRCubemapCapture..ctor
GlobalNamespace::OVRCubemapCapture* GlobalNamespace::OVRCubemapCapture::New_ctor() {
  return (OVRCubemapCapture*)THROW_UNLESS(il2cpp_utils::New("", "OVRCubemapCapture"));
}
