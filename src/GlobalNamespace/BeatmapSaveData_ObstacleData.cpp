// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData/ObstacleData
#include "GlobalNamespace/BeatmapSaveData_ObstacleData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapSaveData/ObstacleData.get_lineIndex
int GlobalNamespace::BeatmapSaveData::ObstacleData::get_lineIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_lineIndex"));
}
// Autogenerated method: BeatmapSaveData/ObstacleData.get_type
GlobalNamespace::ObstacleType GlobalNamespace::BeatmapSaveData::ObstacleData::get_type() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ObstacleType>(this, "get_type"));
}
// Autogenerated method: BeatmapSaveData/ObstacleData.get_duration
float GlobalNamespace::BeatmapSaveData::ObstacleData::get_duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_duration"));
}
// Autogenerated method: BeatmapSaveData/ObstacleData.get_width
int GlobalNamespace::BeatmapSaveData::ObstacleData::get_width() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_width"));
}
// Autogenerated method: BeatmapSaveData/ObstacleData..ctor
GlobalNamespace::BeatmapSaveData::ObstacleData* GlobalNamespace::BeatmapSaveData::ObstacleData::New_ctor(float time, int lineIndex, GlobalNamespace::ObstacleType type, float duration, int width) {
  return (BeatmapSaveData::ObstacleData*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapSaveData/ObstacleData", time, lineIndex, type, duration, width));
}
// Autogenerated method: BeatmapSaveData/ObstacleData.get_time
float GlobalNamespace::BeatmapSaveData::ObstacleData::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_time"));
}
// Autogenerated method: BeatmapSaveData/ObstacleData.MoveTime
void GlobalNamespace::BeatmapSaveData::ObstacleData::MoveTime(float offset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveTime", offset));
}