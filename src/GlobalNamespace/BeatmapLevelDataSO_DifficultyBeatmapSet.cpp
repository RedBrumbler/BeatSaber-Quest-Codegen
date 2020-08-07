// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataSO/DifficultyBeatmapSet
#include "GlobalNamespace/BeatmapLevelDataSO_DifficultyBeatmapSet.hpp"
// Including type: BeatmapLevelSO/DifficultyBeatmap
#include "GlobalNamespace/BeatmapLevelSO_DifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapLevelDataSO/DifficultyBeatmapSet.get_beatmapCharacteristicSerializedName
::Il2CppString* GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_beatmapCharacteristicSerializedName"));
}
// Autogenerated method: BeatmapLevelDataSO/DifficultyBeatmapSet.get_difficultyBeatmaps
::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::get_difficultyBeatmaps() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>*>(this, "get_difficultyBeatmaps"));
}
// Autogenerated method: BeatmapLevelDataSO/DifficultyBeatmapSet..ctor
GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataSO::DifficultyBeatmapSet::New_ctor(::Il2CppString* beatmapCharacteristicSerializedName, ::Array<GlobalNamespace::BeatmapLevelSO::DifficultyBeatmap*>* difficultyBeatmaps) {
  return (BeatmapLevelDataSO::DifficultyBeatmapSet*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelDataSO/DifficultyBeatmapSet", beatmapCharacteristicSerializedName, difficultyBeatmaps));
}