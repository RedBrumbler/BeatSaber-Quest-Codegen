// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FogSwitchEventEffect
#include "GlobalNamespace/FogSwitchEventEffect.hpp"
// Including type: FogSwitchEventEffect/<AnimateToFogCoroutine>d__8
#include "GlobalNamespace/FogSwitchEventEffect_-AnimateToFogCoroutine-d__8.hpp"
// Including type: BloomFogSO
#include "GlobalNamespace/BloomFogSO.hpp"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kTransitionDuration
float GlobalNamespace::FogSwitchEventEffect::_get_kTransitionDuration() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "FogSwitchEventEffect", "kTransitionDuration"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kTransitionDuration
void GlobalNamespace::FogSwitchEventEffect::_set_kTransitionDuration(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "FogSwitchEventEffect", "kTransitionDuration", value));
}
// Autogenerated method: FogSwitchEventEffect.Start
void GlobalNamespace::FogSwitchEventEffect::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: FogSwitchEventEffect.OnDestroy
void GlobalNamespace::FogSwitchEventEffect::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: FogSwitchEventEffect.HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger
void GlobalNamespace::FogSwitchEventEffect::HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger", beatmapEventData));
}
// Autogenerated method: FogSwitchEventEffect.AnimateToFog
void GlobalNamespace::FogSwitchEventEffect::AnimateToFog(float duration, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AnimateToFog", duration, value));
}
// Autogenerated method: FogSwitchEventEffect.AnimateToFogCoroutine
System::Collections::IEnumerator* GlobalNamespace::FogSwitchEventEffect::AnimateToFogCoroutine(float duration, float value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "AnimateToFogCoroutine", duration, value));
}
// Autogenerated method: FogSwitchEventEffect..ctor
GlobalNamespace::FogSwitchEventEffect* GlobalNamespace::FogSwitchEventEffect::New_ctor() {
  return (FogSwitchEventEffect*)THROW_UNLESS(il2cpp_utils::New("", "FogSwitchEventEffect"));
}