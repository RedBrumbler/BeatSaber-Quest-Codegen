// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Analytics.CustomEventData
#include "UnityEngine/Analytics/CustomEventData.hpp"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Analytics.CustomEventData..ctor
UnityEngine::Analytics::CustomEventData* UnityEngine::Analytics::CustomEventData::New_ctor(::CsString* name) {
  return (CustomEventData*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Analytics", "CustomEventData", name));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.Destroy
void UnityEngine::Analytics::CustomEventData::Destroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Destroy"));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.Internal_Create
System::IntPtr UnityEngine::Analytics::CustomEventData::Internal_Create(UnityEngine::Analytics::CustomEventData* ced, ::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine.Analytics", "CustomEventData", "Internal_Create", ced, name));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.Internal_Destroy
void UnityEngine::Analytics::CustomEventData::Internal_Destroy(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Analytics", "CustomEventData", "Internal_Destroy", ptr));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddString
bool UnityEngine::Analytics::CustomEventData::AddString(::CsString* key, ::CsString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddString", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddInt32
bool UnityEngine::Analytics::CustomEventData::AddInt32(::CsString* key, int value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddInt32", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddUInt32
bool UnityEngine::Analytics::CustomEventData::AddUInt32(::CsString* key, uint value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddUInt32", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddInt64
bool UnityEngine::Analytics::CustomEventData::AddInt64(::CsString* key, int64_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddInt64", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddUInt64
bool UnityEngine::Analytics::CustomEventData::AddUInt64(::CsString* key, uint64_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddUInt64", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddBool
bool UnityEngine::Analytics::CustomEventData::AddBool(::CsString* key, bool value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddBool", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddDouble
bool UnityEngine::Analytics::CustomEventData::AddDouble(::CsString* key, double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddDouble", key, value));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.AddDictionary
bool UnityEngine::Analytics::CustomEventData::AddDictionary(System::Collections::Generic::IDictionary_2<::CsString*, ::CsObject*>* eventData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AddDictionary", eventData));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.Finalize
void UnityEngine::Analytics::CustomEventData::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: UnityEngine.Analytics.CustomEventData.Dispose
void UnityEngine::Analytics::CustomEventData::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void UnityEngine::Analytics::CustomEventData::System_IDisposable_Dispose() {
  Dispose();
}
