// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelInfoSaveData/DifficultyBeatmap
#include "GlobalNamespace/StandardLevelInfoSaveData_DifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap.get_difficulty
::Il2CppString* GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficulty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_difficulty"));
}
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap.get_difficultyRank
int GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_difficultyRank() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_difficultyRank"));
}
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap.get_beatmapFilename
::Il2CppString* GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_beatmapFilename() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_beatmapFilename"));
}
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap.get_noteJumpMovementSpeed
float GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpMovementSpeed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_noteJumpMovementSpeed"));
}
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap.get_noteJumpStartBeatOffset
float GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::get_noteJumpStartBeatOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_noteJumpStartBeatOffset"));
}
// Autogenerated method: StandardLevelInfoSaveData/DifficultyBeatmap..ctor
GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap* GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap::New_ctor(::Il2CppString* difficultyName, int difficultyRank, ::Il2CppString* beatmapFilename, float noteJumpMovementSpeed, float noteJumpStartBeatOffset) {
  return (StandardLevelInfoSaveData::DifficultyBeatmap*)THROW_UNLESS(il2cpp_utils::New("", "StandardLevelInfoSaveData/DifficultyBeatmap", difficultyName, difficultyRank, beatmapFilename, noteJumpMovementSpeed, noteJumpStartBeatOffset));
}