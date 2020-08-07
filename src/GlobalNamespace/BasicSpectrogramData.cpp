// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BasicSpectrogramData
#include "GlobalNamespace/BasicSpectrogramData.hpp"
// Including type: UnityEngine.AudioSource
#include "UnityEngine/AudioSource.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Int32 kNumberOfSamples
int GlobalNamespace::BasicSpectrogramData::_get_kNumberOfSamples() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "BasicSpectrogramData", "kNumberOfSamples"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kNumberOfSamples
void GlobalNamespace::BasicSpectrogramData::_set_kNumberOfSamples(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BasicSpectrogramData", "kNumberOfSamples", value));
}
// Autogenerated method: BasicSpectrogramData.get_Samples
::Array<float>* GlobalNamespace::BasicSpectrogramData::get_Samples() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<float>*>(this, "get_Samples"));
}
// Autogenerated method: BasicSpectrogramData.get_ProcessedSamples
System::Collections::Generic::List_1<float>* GlobalNamespace::BasicSpectrogramData::get_ProcessedSamples() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<float>*>(this, "get_ProcessedSamples"));
}
// Autogenerated method: BasicSpectrogramData.Awake
void GlobalNamespace::BasicSpectrogramData::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: BasicSpectrogramData.LateUpdate
void GlobalNamespace::BasicSpectrogramData::LateUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LateUpdate"));
}
// Autogenerated method: BasicSpectrogramData.ProcessSamples
void GlobalNamespace::BasicSpectrogramData::ProcessSamples(::Array<float>* sourceSamples, System::Collections::Generic::List_1<float>* processedSamples) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessSamples", sourceSamples, processedSamples));
}
// Autogenerated method: BasicSpectrogramData..ctor
GlobalNamespace::BasicSpectrogramData* GlobalNamespace::BasicSpectrogramData::New_ctor() {
  return (BasicSpectrogramData*)THROW_UNLESS(il2cpp_utils::New("", "BasicSpectrogramData"));
}