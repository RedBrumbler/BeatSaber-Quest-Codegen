// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerLevelStatsData
#include "GlobalNamespace/PlayerLevelStatsData.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlayerLevelStatsData.get_levelID
::Il2CppString* GlobalNamespace::PlayerLevelStatsData::get_levelID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_levelID"));
}
// Autogenerated method: PlayerLevelStatsData.get_difficulty
GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerLevelStatsData::get_difficulty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapDifficulty>(this, "get_difficulty"));
}
// Autogenerated method: PlayerLevelStatsData.get_beatmapCharacteristic
GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::PlayerLevelStatsData::get_beatmapCharacteristic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicSO*>(this, "get_beatmapCharacteristic"));
}
// Autogenerated method: PlayerLevelStatsData.get_highScore
int GlobalNamespace::PlayerLevelStatsData::get_highScore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_highScore"));
}
// Autogenerated method: PlayerLevelStatsData.get_maxCombo
int GlobalNamespace::PlayerLevelStatsData::get_maxCombo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_maxCombo"));
}
// Autogenerated method: PlayerLevelStatsData.get_fullCombo
bool GlobalNamespace::PlayerLevelStatsData::get_fullCombo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_fullCombo"));
}
// Autogenerated method: PlayerLevelStatsData.get_maxRank
GlobalNamespace::RankModel::Rank GlobalNamespace::PlayerLevelStatsData::get_maxRank() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::RankModel::Rank>(this, "get_maxRank"));
}
// Autogenerated method: PlayerLevelStatsData.get_validScore
bool GlobalNamespace::PlayerLevelStatsData::get_validScore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_validScore"));
}
// Autogenerated method: PlayerLevelStatsData.get_playCount
int GlobalNamespace::PlayerLevelStatsData::get_playCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_playCount"));
}
// Autogenerated method: PlayerLevelStatsData..ctor
GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerLevelStatsData::New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return (PlayerLevelStatsData*)THROW_UNLESS(il2cpp_utils::New("", "PlayerLevelStatsData", levelID, difficulty, beatmapCharacteristic));
}
// Autogenerated method: PlayerLevelStatsData..ctor
GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerLevelStatsData::New_ctor(::Il2CppString* levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, int highScore, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank maxRank, bool validScore, int playCount) {
  return (PlayerLevelStatsData*)THROW_UNLESS(il2cpp_utils::New("", "PlayerLevelStatsData", levelID, difficulty, beatmapCharacteristic, highScore, maxCombo, fullCombo, maxRank, validScore, playCount));
}
// Autogenerated method: PlayerLevelStatsData.UpdateScoreData
void GlobalNamespace::PlayerLevelStatsData::UpdateScoreData(int score, int maxCombo, bool fullCombo, GlobalNamespace::RankModel::Rank rank) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateScoreData", score, maxCombo, fullCombo, rank));
}
// Autogenerated method: PlayerLevelStatsData.IncreaseNumberOfGameplays
void GlobalNamespace::PlayerLevelStatsData::IncreaseNumberOfGameplays() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IncreaseNumberOfGameplays"));
}