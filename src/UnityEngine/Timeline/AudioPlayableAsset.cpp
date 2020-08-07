// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AudioPlayableAsset
#include "UnityEngine/Timeline/AudioPlayableAsset.hpp"
// Including type: UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
#include "UnityEngine/Timeline/AudioPlayableAsset_-get_outputs-d__16.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: UnityEngine.Timeline.AudioClipProperties
#include "UnityEngine/Timeline/AudioClipProperties.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.Timeline.ClipCaps
#include "UnityEngine/Timeline/ClipCaps.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_bufferingTime
float UnityEngine::Timeline::AudioPlayableAsset::get_bufferingTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_bufferingTime"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.set_bufferingTime
void UnityEngine::Timeline::AudioPlayableAsset::set_bufferingTime(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_bufferingTime", value));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_clip
UnityEngine::AudioClip* UnityEngine::Timeline::AudioPlayableAsset::get_clip() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>(this, "get_clip"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.set_clip
void UnityEngine::Timeline::AudioPlayableAsset::set_clip(UnityEngine::AudioClip* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_clip", value));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_loop
bool UnityEngine::Timeline::AudioPlayableAsset::get_loop() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_loop"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.set_loop
void UnityEngine::Timeline::AudioPlayableAsset::set_loop(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_loop", value));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_duration
double UnityEngine::Timeline::AudioPlayableAsset::get_duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_duration"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_outputs
System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::AudioPlayableAsset::get_outputs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this, "get_outputs"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.CreatePlayable
UnityEngine::Playables::Playable UnityEngine::Timeline::AudioPlayableAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::Playable>(this, "CreatePlayable", graph, go));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset.get_clipCaps
UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::AudioPlayableAsset::get_clipCaps() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::ClipCaps>(this, "get_clipCaps"));
}
// Autogenerated method: UnityEngine.Timeline.AudioPlayableAsset..ctor
UnityEngine::Timeline::AudioPlayableAsset* UnityEngine::Timeline::AudioPlayableAsset::New_ctor() {
  return (AudioPlayableAsset*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "AudioPlayableAsset"));
}