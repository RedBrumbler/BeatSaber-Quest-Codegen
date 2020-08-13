// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Playables.PlayableAsset.get_outputs
System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* UnityEngine::Playables::PlayableAsset::get_outputs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this, "get_outputs"));
}
// Autogenerated method: UnityEngine.Playables.PlayableAsset.Internal_CreatePlayable
void UnityEngine::Playables::PlayableAsset::Internal_CreatePlayable(UnityEngine::Playables::PlayableAsset* asset, UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go, System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Playables", "PlayableAsset", "Internal_CreatePlayable", asset, graph, go, ptr));
}
// Autogenerated method: UnityEngine.Playables.PlayableAsset.Internal_GetPlayableAssetDuration
void UnityEngine::Playables::PlayableAsset::Internal_GetPlayableAssetDuration(UnityEngine::Playables::PlayableAsset* asset, System::IntPtr ptrToDouble) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Playables", "PlayableAsset", "Internal_GetPlayableAssetDuration", asset, ptrToDouble));
}
// Autogenerated method: UnityEngine.Playables.PlayableAsset.CreatePlayable
UnityEngine::Playables::Playable UnityEngine::Playables::PlayableAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::Playable>(this, "CreatePlayable", graph, owner));
}
// Autogenerated method: UnityEngine.Playables.PlayableAsset.get_duration
double UnityEngine::Playables::PlayableAsset::get_duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_duration"));
}
// Autogenerated method: UnityEngine.Playables.PlayableAsset..ctor
UnityEngine::Playables::PlayableAsset* UnityEngine::Playables::PlayableAsset::New_ctor() {
  return (PlayableAsset*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Playables", "PlayableAsset"));
}
