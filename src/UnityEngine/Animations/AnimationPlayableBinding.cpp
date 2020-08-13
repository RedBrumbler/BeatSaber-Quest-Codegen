// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Animations.AnimationPlayableBinding
#include "UnityEngine/Animations/AnimationPlayableBinding.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Animations.AnimationPlayableBinding.Create
UnityEngine::Playables::PlayableBinding UnityEngine::Animations::AnimationPlayableBinding::Create(::CsString* name, UnityEngine::Object* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableBinding>("UnityEngine.Animations", "AnimationPlayableBinding", "Create", name, key));
}
// Autogenerated method: UnityEngine.Animations.AnimationPlayableBinding.CreateAnimationOutput
UnityEngine::Playables::PlayableOutput UnityEngine::Animations::AnimationPlayableBinding::CreateAnimationOutput(UnityEngine::Playables::PlayableGraph graph, ::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableOutput>("UnityEngine.Animations", "AnimationPlayableBinding", "CreateAnimationOutput", graph, name));
}
