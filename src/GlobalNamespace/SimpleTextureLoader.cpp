// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleTextureLoader
#include "GlobalNamespace/SimpleTextureLoader.hpp"
// Including type: SimpleTextureLoader/<LoadTextureCoroutine>d__3
#include "GlobalNamespace/SimpleTextureLoader_-LoadTextureCoroutine-d__3.hpp"
// Including type: HMCache`2
#include "GlobalNamespace/HMCache_2.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
GlobalNamespace::HMCache_2<::CsString*, UnityEngine::Texture2D*>* GlobalNamespace::SimpleTextureLoader::_get__cache() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<GlobalNamespace::HMCache_2<::CsString*, UnityEngine::Texture2D*>*>("", "SimpleTextureLoader", "_cache")));
}
// Autogenerated static field setter
// Set static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
void GlobalNamespace::SimpleTextureLoader::_set__cache(GlobalNamespace::HMCache_2<::CsString*, UnityEngine::Texture2D*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SimpleTextureLoader", "_cache", value));
}
// Autogenerated method: SimpleTextureLoader.NoDomainReloadInit
void GlobalNamespace::SimpleTextureLoader::NoDomainReloadInit() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleTextureLoader", "NoDomainReloadInit"));
}
// Autogenerated method: SimpleTextureLoader.LoadTexture
void GlobalNamespace::SimpleTextureLoader::LoadTexture(::CsString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleTextureLoader", "LoadTexture", filePath, useCache, finishedCallback));
}
// Autogenerated method: SimpleTextureLoader.LoadTextureCoroutine
System::Collections::IEnumerator* GlobalNamespace::SimpleTextureLoader::LoadTextureCoroutine(::CsString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("", "SimpleTextureLoader", "LoadTextureCoroutine", filePath, useCache, finishedCallback));
}
// Autogenerated method: SimpleTextureLoader..cctor
void GlobalNamespace::SimpleTextureLoader::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SimpleTextureLoader", ".cctor"));
}
