// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Animations.AnimationOffsetPlayable
#include "UnityEngine/Animations/AnimationOffsetPlayable.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Animations.AnimationOffsetPlayable m_NullPlayable
UnityEngine::Animations::AnimationOffsetPlayable UnityEngine::Animations::AnimationOffsetPlayable::_get_m_NullPlayable() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Animations::AnimationOffsetPlayable>("UnityEngine.Animations", "AnimationOffsetPlayable", "m_NullPlayable"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Animations.AnimationOffsetPlayable m_NullPlayable
void UnityEngine::Animations::AnimationOffsetPlayable::_set_m_NullPlayable(UnityEngine::Animations::AnimationOffsetPlayable value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Animations", "AnimationOffsetPlayable", "m_NullPlayable", value));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.Create
UnityEngine::Animations::AnimationOffsetPlayable UnityEngine::Animations::AnimationOffsetPlayable::Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, int inputCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Animations::AnimationOffsetPlayable>("UnityEngine.Animations", "AnimationOffsetPlayable", "Create", graph, position, rotation, inputCount));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.CreateHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationOffsetPlayable::CreateHandle(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, int inputCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>("UnityEngine.Animations", "AnimationOffsetPlayable", "CreateHandle", graph, position, rotation, inputCount));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable..ctor
UnityEngine::Animations::AnimationOffsetPlayable* UnityEngine::Animations::AnimationOffsetPlayable::New_ctor(UnityEngine::Playables::PlayableHandle handle) {
  return (AnimationOffsetPlayable*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Animations", "AnimationOffsetPlayable", handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.CreateHandleInternal
bool UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Playables::PlayableHandle& handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Animations", "AnimationOffsetPlayable", "CreateHandleInternal", graph, position, rotation, handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable..cctor
void UnityEngine::Animations::AnimationOffsetPlayable::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Animations", "AnimationOffsetPlayable", ".cctor"));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.CreateHandleInternal_Injected
bool UnityEngine::Animations::AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine::Playables::PlayableGraph& graph, UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation, UnityEngine::Playables::PlayableHandle& handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.Animations", "AnimationOffsetPlayable", "CreateHandleInternal_Injected", graph, position, rotation, handle));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.GetHandle
UnityEngine::Playables::PlayableHandle UnityEngine::Animations::AnimationOffsetPlayable::GetHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>(*this, "GetHandle"));
}
// Autogenerated method: UnityEngine.Animations.AnimationOffsetPlayable.Equals
bool UnityEngine::Animations::AnimationOffsetPlayable::Equals(UnityEngine::Animations::AnimationOffsetPlayable other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}