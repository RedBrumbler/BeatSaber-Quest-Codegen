// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PreviewDifficultyBeatmapSet
#include "GlobalNamespace/PreviewDifficultyBeatmapSet.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicSO*>(this, "get_beatmapCharacteristic"));
}
// Autogenerated method: PreviewDifficultyBeatmapSet.get_beatmapDifficulties
::Array<GlobalNamespace::BeatmapDifficulty>* GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::BeatmapDifficulty>*>(this, "get_beatmapDifficulties"));
}
// Autogenerated method: PreviewDifficultyBeatmapSet..ctor
GlobalNamespace::PreviewDifficultyBeatmapSet* GlobalNamespace::PreviewDifficultyBeatmapSet::New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::BeatmapDifficulty>* beatmapDifficulties) {
  return (PreviewDifficultyBeatmapSet*)THROW_UNLESS(il2cpp_utils::New("", "PreviewDifficultyBeatmapSet", beatmapCharacteristic, beatmapDifficulties));
}
