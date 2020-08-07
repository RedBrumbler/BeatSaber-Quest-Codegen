// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Audio.AudioPlayableOutput
#include "UnityEngine/Audio/AudioPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.AudioSource
#include "UnityEngine/AudioSource.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.Create
UnityEngine::Audio::AudioPlayableOutput UnityEngine::Audio::AudioPlayableOutput::Create(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name, UnityEngine::AudioSource* target) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Audio::AudioPlayableOutput>("UnityEngine.Audio", "AudioPlayableOutput", "Create", graph, name, target));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput..ctor
UnityEngine::Audio::AudioPlayableOutput* UnityEngine::Audio::AudioPlayableOutput::New_ctor(UnityEngine::Playables::PlayableOutputHandle handle) {
  return (AudioPlayableOutput*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Audio", "AudioPlayableOutput", handle));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.get_Null
UnityEngine::Audio::AudioPlayableOutput UnityEngine::Audio::AudioPlayableOutput::get_Null() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Audio::AudioPlayableOutput>("UnityEngine.Audio", "AudioPlayableOutput", "get_Null"));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.SetTarget
void UnityEngine::Audio::AudioPlayableOutput::SetTarget(UnityEngine::AudioSource* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetTarget", value));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.SetEvaluateOnSeek
void UnityEngine::Audio::AudioPlayableOutput::SetEvaluateOnSeek(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetEvaluateOnSeek", value));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.InternalSetTarget
void UnityEngine::Audio::AudioPlayableOutput::InternalSetTarget(UnityEngine::Playables::PlayableOutputHandle& output, UnityEngine::AudioSource* target) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Audio", "AudioPlayableOutput", "InternalSetTarget", output, target));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.InternalSetEvaluateOnSeek
void UnityEngine::Audio::AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine::Playables::PlayableOutputHandle& output, bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Audio", "AudioPlayableOutput", "InternalSetEvaluateOnSeek", output, value));
}
// Autogenerated method: UnityEngine.Audio.AudioPlayableOutput.GetHandle
UnityEngine::Playables::PlayableOutputHandle UnityEngine::Audio::AudioPlayableOutput::GetHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableOutputHandle>(*this, "GetHandle"));
}