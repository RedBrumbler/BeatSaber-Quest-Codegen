// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: BeatmapSaveData/EventData
#include "GlobalNamespace/BeatmapSaveData_EventData.hpp"
// Including type: BeatmapSaveData/NoteData
#include "GlobalNamespace/BeatmapSaveData_NoteData.hpp"
// Including type: BeatmapSaveData/ObstacleData
#include "GlobalNamespace/BeatmapSaveData_ObstacleData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kCurrentVersion
::CsString* GlobalNamespace::BeatmapSaveData::_get_kCurrentVersion() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "BeatmapSaveData", "kCurrentVersion"));
}
// Autogenerated static field setter
// Set static field: static private System.String kCurrentVersion
void GlobalNamespace::BeatmapSaveData::_set_kCurrentVersion(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "BeatmapSaveData", "kCurrentVersion", value));
}
// Autogenerated method: BeatmapSaveData.get_version
::CsString* GlobalNamespace::BeatmapSaveData::get_version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_version"));
}
// Autogenerated method: BeatmapSaveData.get_events
System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* GlobalNamespace::BeatmapSaveData::get_events() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*>(this, "get_events"));
}
// Autogenerated method: BeatmapSaveData.get_notes
System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* GlobalNamespace::BeatmapSaveData::get_notes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*>(this, "get_notes"));
}
// Autogenerated method: BeatmapSaveData.get_obstacles
System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* GlobalNamespace::BeatmapSaveData::get_obstacles() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*>(this, "get_obstacles"));
}
// Autogenerated method: BeatmapSaveData..ctor
GlobalNamespace::BeatmapSaveData* GlobalNamespace::BeatmapSaveData::New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* events, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notes, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstacles) {
  return (BeatmapSaveData*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapSaveData", events, notes, obstacles));
}
// Autogenerated method: BeatmapSaveData.SerializeToBinary
::Array<uint8_t>* GlobalNamespace::BeatmapSaveData::SerializeToBinary() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "SerializeToBinary"));
}
// Autogenerated method: BeatmapSaveData.DeserializeFromFromBinary
GlobalNamespace::BeatmapSaveData* GlobalNamespace::BeatmapSaveData::DeserializeFromFromBinary(::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapSaveData*>("", "BeatmapSaveData", "DeserializeFromFromBinary", data));
}
// Autogenerated method: BeatmapSaveData.SerializeToJSONString
::CsString* GlobalNamespace::BeatmapSaveData::SerializeToJSONString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "SerializeToJSONString"));
}
// Autogenerated method: BeatmapSaveData.DeserializeFromJSONString
GlobalNamespace::BeatmapSaveData* GlobalNamespace::BeatmapSaveData::DeserializeFromJSONString(::CsString* stringData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapSaveData*>("", "BeatmapSaveData", "DeserializeFromJSONString", stringData));
}
