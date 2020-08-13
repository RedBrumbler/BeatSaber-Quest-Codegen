// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: UnityEngine.Playables.PlayableBinding/CreateOutputMethod
#include "UnityEngine/Playables/PlayableBinding_CreateOutputMethod.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
::Array<UnityEngine::Playables::PlayableBinding>* UnityEngine::Playables::PlayableBinding::_get_None() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<UnityEngine::Playables::PlayableBinding>*>("UnityEngine.Playables", "PlayableBinding", "None"));
}
// Autogenerated static field setter
// Set static field: static public readonly UnityEngine.Playables.PlayableBinding[] None
void UnityEngine::Playables::PlayableBinding::_set_None(::Array<UnityEngine::Playables::PlayableBinding>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Playables", "PlayableBinding", "None", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Double DefaultDuration
double UnityEngine::Playables::PlayableBinding::_get_DefaultDuration() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Playables", "PlayableBinding", "DefaultDuration"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Double DefaultDuration
void UnityEngine::Playables::PlayableBinding::_set_DefaultDuration(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Playables", "PlayableBinding", "DefaultDuration", value));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.get_sourceObject
UnityEngine::Object* UnityEngine::Playables::PlayableBinding::get_sourceObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(*this, "get_sourceObject"));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.CreateOutput
UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutput(UnityEngine::Playables::PlayableGraph graph) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableOutput>(*this, "CreateOutput", graph));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding.CreateInternal
UnityEngine::Playables::PlayableBinding UnityEngine::Playables::PlayableBinding::CreateInternal(::CsString* name, UnityEngine::Object* sourceObject, System::Type* sourceType, UnityEngine::Playables::PlayableBinding::CreateOutputMethod* createFunction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableBinding>("UnityEngine.Playables", "PlayableBinding", "CreateInternal", name, sourceObject, sourceType, createFunction));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding..cctor
void UnityEngine::Playables::PlayableBinding::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Playables", "PlayableBinding", ".cctor"));
}
