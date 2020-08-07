// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ImageEffectController
#include "GlobalNamespace/ImageEffectController.hpp"
// Including type: ImageEffectController/RenderImageCallback
#include "GlobalNamespace/ImageEffectController_RenderImageCallback.hpp"
// Including type: UnityEngine.RenderTexture
#include "UnityEngine/RenderTexture.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ImageEffectController.SetCallback
void GlobalNamespace::ImageEffectController::SetCallback(GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCallback", renderImageCallback));
}
// Autogenerated method: ImageEffectController.OnRenderImage
void GlobalNamespace::ImageEffectController::OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnRenderImage", src, dest));
}
// Autogenerated method: ImageEffectController..ctor
GlobalNamespace::ImageEffectController* GlobalNamespace::ImageEffectController::New_ctor() {
  return (ImageEffectController*)THROW_UNLESS(il2cpp_utils::New("", "ImageEffectController"));
}