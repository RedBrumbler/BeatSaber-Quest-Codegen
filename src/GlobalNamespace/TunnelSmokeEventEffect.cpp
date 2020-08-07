// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TunnelSmokeEventEffect
#include "GlobalNamespace/TunnelSmokeEventEffect.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Including type: UnityEngine.ParticleSystem/Particle
#include "UnityEngine/ParticleSystem_Particle.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kSpeedMultiplier
float GlobalNamespace::TunnelSmokeEventEffect::_get_kSpeedMultiplier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "TunnelSmokeEventEffect", "kSpeedMultiplier"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSpeedMultiplier
void GlobalNamespace::TunnelSmokeEventEffect::_set_kSpeedMultiplier(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "TunnelSmokeEventEffect", "kSpeedMultiplier", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxParticles
int GlobalNamespace::TunnelSmokeEventEffect::_get_kMaxParticles() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "TunnelSmokeEventEffect", "kMaxParticles"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxParticles
void GlobalNamespace::TunnelSmokeEventEffect::_set_kMaxParticles(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "TunnelSmokeEventEffect", "kMaxParticles", value));
}
// Autogenerated method: TunnelSmokeEventEffect.Start
void GlobalNamespace::TunnelSmokeEventEffect::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: TunnelSmokeEventEffect.OnDestroy
void GlobalNamespace::TunnelSmokeEventEffect::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: TunnelSmokeEventEffect.HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
void GlobalNamespace::TunnelSmokeEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", beatmapEventData));
}
// Autogenerated method: TunnelSmokeEventEffect..ctor
GlobalNamespace::TunnelSmokeEventEffect* GlobalNamespace::TunnelSmokeEventEffect::New_ctor() {
  return (TunnelSmokeEventEffect*)THROW_UNLESS(il2cpp_utils::New("", "TunnelSmokeEventEffect"));
}