// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: IReadonlyBeatmapLineData
#include "GlobalNamespace/IReadonlyBeatmapLineData.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
// Including type: BeatmapData
#include "GlobalNamespace/BeatmapData.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IReadonlyBeatmapData.get_beatmapLinesData
System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>* GlobalNamespace::IReadonlyBeatmapData::get_beatmapLinesData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IReadonlyBeatmapLineData*>*>(this, "get_beatmapLinesData"));
}
// Autogenerated method: IReadonlyBeatmapData.get_beatmapEventsData
System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>* GlobalNamespace::IReadonlyBeatmapData::get_beatmapEventsData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapEventData*>*>(this, "get_beatmapEventsData"));
}
// Autogenerated method: IReadonlyBeatmapData.get_numberOfLines
int GlobalNamespace::IReadonlyBeatmapData::get_numberOfLines() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_numberOfLines"));
}
// Autogenerated method: IReadonlyBeatmapData.get_cuttableNotesType
int GlobalNamespace::IReadonlyBeatmapData::get_cuttableNotesType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_cuttableNotesType"));
}
// Autogenerated method: IReadonlyBeatmapData.get_obstaclesCount
int GlobalNamespace::IReadonlyBeatmapData::get_obstaclesCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_obstaclesCount"));
}
// Autogenerated method: IReadonlyBeatmapData.get_bombsCount
int GlobalNamespace::IReadonlyBeatmapData::get_bombsCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_bombsCount"));
}
// Autogenerated method: IReadonlyBeatmapData.get_spawnRotationEventsCount
int GlobalNamespace::IReadonlyBeatmapData::get_spawnRotationEventsCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_spawnRotationEventsCount"));
}
// Autogenerated method: IReadonlyBeatmapData.GetCopy
GlobalNamespace::BeatmapData* GlobalNamespace::IReadonlyBeatmapData::GetCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetCopy"));
}
// Autogenerated method: IReadonlyBeatmapData.GetCopyWithoutEvents
GlobalNamespace::BeatmapData* GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutEvents() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetCopyWithoutEvents"));
}
// Autogenerated method: IReadonlyBeatmapData.GetCopyWithoutBeatmapObjects
GlobalNamespace::BeatmapData* GlobalNamespace::IReadonlyBeatmapData::GetCopyWithoutBeatmapObjects() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetCopyWithoutBeatmapObjects"));
}
// Autogenerated method: IReadonlyBeatmapData.get_beatmapObjectsData
System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>* GlobalNamespace::IReadonlyBeatmapData::get_beatmapObjectsData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<GlobalNamespace::BeatmapObjectData*>*>(this, "get_beatmapObjectsData"));
}