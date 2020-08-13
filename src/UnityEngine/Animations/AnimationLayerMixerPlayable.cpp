// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Animations.AnimationLayerMixerPlayable
#include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.AvatarMask
#include "UnityEngine/AvatarMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Animations::AnimationLayerMixerPlayable::_get_m_NullPlayable() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Animations::AnimationLayerMixerPlayable>("UnityEngine.Animations", "AnimationLayerMixerPlayable", "m_NullPlayable"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Animations.AnimationLayerMixerPlayable m_NullPlayable
void UnityEngine::Animations::AnimationLayerMixerPlayable::_set_m_NullPlayable(UnityEngine::Animations::AnimationLayerMixerPlayable value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Animations", "AnimationLayerMixerPlayable", "m_NullPlayable", value));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.Create
UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Animations::AnimationLayerMixerPlayable::Create(UnityEngine::Playables::PlayableGraph graph, int inputCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Animations::AnimationLayerMixerPlayable>("UnityEngine.Animations", "AnimationLayerMixerPlayable", "Create", graph, inputCount));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.CreateHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>("UnityEngine.Animations", "AnimationLayerMixerPlayable", "CreateHandle", graph, inputCount));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable..ctor
UnityEngine::Animations::AnimationLayerMixerPlayable* UnityEngine::Animations::AnimationLayerMixerPlayable::New_ctor(UnityEngine::Playables::PlayableHandle handle) {
  return (AnimationLayerMixerPlayable*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Animations", "AnimationLayerMixerPlayable", handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.SetLayerMaskFromAvatarMask
void UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMask(uint layerIndex, UnityEngine::AvatarMask* mask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetLayerMaskFromAvatarMask", layerIndex, mask));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.CreateHandleInternal
bool UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableHandle& handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Animations", "AnimationLayerMixerPlayable", "CreateHandleInternal", graph, handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.SetLayerMaskFromAvatarMaskInternal
void UnityEngine::Animations::AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine::Playables::PlayableHandle& handle, uint layerIndex, UnityEngine::AvatarMask* mask) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Animations", "AnimationLayerMixerPlayable", "SetLayerMaskFromAvatarMaskInternal", handle, layerIndex, mask));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable..cctor
void UnityEngine::Animations::AnimationLayerMixerPlayable::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Animations", "AnimationLayerMixerPlayable", ".cctor"));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.CreateHandleInternal_Injected
bool UnityEngine::Animations::AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::Playables::PlayableHandle& handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Animations", "AnimationLayerMixerPlayable", "CreateHandleInternal_Injected", graph, handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.GetHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationLayerMixerPlayable::GetHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>(*this, "GetHandle"));
}
// Autogenerated method: UnityEngine.Animations.AnimationLayerMixerPlayable.Equals
bool UnityEngine::Animations::AnimationLayerMixerPlayable::Equals(UnityEngine::Animations::AnimationLayerMixerPlayable other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
