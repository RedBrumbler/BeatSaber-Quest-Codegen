// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.ArgumentCache
#include "UnityEngine/Events/ArgumentCache.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_unityObjectArgument
UnityEngine::Object* UnityEngine::Events::ArgumentCache::get_unityObjectArgument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "get_unityObjectArgument"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_unityObjectArgumentAssemblyTypeName
::CsString* UnityEngine::Events::ArgumentCache::get_unityObjectArgumentAssemblyTypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_unityObjectArgumentAssemblyTypeName"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_intArgument
int UnityEngine::Events::ArgumentCache::get_intArgument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_intArgument"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_floatArgument
float UnityEngine::Events::ArgumentCache::get_floatArgument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_floatArgument"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_stringArgument
::CsString* UnityEngine::Events::ArgumentCache::get_stringArgument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_stringArgument"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.get_boolArgument
bool UnityEngine::Events::ArgumentCache::get_boolArgument() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_boolArgument"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.TidyAssemblyTypeName
void UnityEngine::Events::ArgumentCache::TidyAssemblyTypeName() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "TidyAssemblyTypeName"));
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.OnBeforeSerialize
void UnityEngine::Events::ArgumentCache::OnBeforeSerialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnBeforeSerialize"));
}
void UnityEngine::Events::ArgumentCache::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  OnBeforeSerialize();
}
// Autogenerated method: UnityEngine.Events.ArgumentCache.OnAfterDeserialize
void UnityEngine::Events::ArgumentCache::OnAfterDeserialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnAfterDeserialize"));
}
void UnityEngine::Events::ArgumentCache::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  OnAfterDeserialize();
}
// Autogenerated method: UnityEngine.Events.ArgumentCache..ctor
UnityEngine::Events::ArgumentCache* UnityEngine::Events::ArgumentCache::New_ctor() {
  return (ArgumentCache*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Events", "ArgumentCache"));
}
