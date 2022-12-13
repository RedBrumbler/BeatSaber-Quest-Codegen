// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: PlatformLeaderboardsModel
  class PlatformLeaderboardsModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResultsHelper
  class LevelCompletionResultsHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsHelper*, "", "LevelCompletionResultsHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LevelCompletionResultsHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelCompletionResultsHelper : public ::Il2CppObject {
    public:
    // static public LevelCompletionResults Create(IReadonlyBeatmapData beatmapData, BeatmapObjectExecutionRating[] beatmapObjectExecutionRatings, GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel, System.Int32 multipliedScore, System.Int32 modifiedScore, System.Int32 maxCombo, System.Single[] saberActivityValues, System.Single leftSaberMovementDistance, System.Single rightSaberMovementDistance, System.Single[] handActivityValues, System.Single leftHandMovementDistance, System.Single rightHandMovementDistance, LevelCompletionResults/LevelEndStateType levelEndStateType, LevelCompletionResults/LevelEndAction levelEndAction, System.Single energy, System.Single songTime)
    // Offset: 0x1511B84
    static ::GlobalNamespace::LevelCompletionResults* Create(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*> beatmapObjectExecutionRatings, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, int multipliedScore, int modifiedScore, int maxCombo, ::ArrayW<float> saberActivityValues, float leftSaberMovementDistance, float rightSaberMovementDistance, ::ArrayW<float> handActivityValues, float leftHandMovementDistance, float rightHandMovementDistance, ::GlobalNamespace::LevelCompletionResults::LevelEndStateType levelEndStateType, ::GlobalNamespace::LevelCompletionResults::LevelEndAction levelEndAction, float energy, float songTime);
    // static public System.Void ProcessScore(PlayerData playerData, PlayerLevelStatsData playerLevelStats, LevelCompletionResults levelCompletionResults, IReadonlyBeatmapData transformedBeatmapData, IDifficultyBeatmap difficultyBeatmap, PlatformLeaderboardsModel platformLeaderboardsModel)
    // Offset: 0x1511FD0
    static void ProcessScore(::GlobalNamespace::PlayerData* playerData, ::GlobalNamespace::PlayerLevelStatsData* playerLevelStats, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::PlatformLeaderboardsModel* platformLeaderboardsModel);
  }; // LevelCompletionResultsHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResultsHelper::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::ArrayW<::GlobalNamespace::BeatmapObjectExecutionRating*>, ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::GameplayModifiersModelSO*, int, int, int, ::ArrayW<float>, float, float, ::ArrayW<float>, float, float, ::GlobalNamespace::LevelCompletionResults::LevelEndStateType, ::GlobalNamespace::LevelCompletionResults::LevelEndAction, float, float)>(&GlobalNamespace::LevelCompletionResultsHelper::Create)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* beatmapObjectExecutionRatings = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BeatmapObjectExecutionRating"), 1)->byval_arg;
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    static auto* gameplayModifiersModel = &::il2cpp_utils::GetClassFromName("", "GameplayModifiersModelSO")->byval_arg;
    static auto* multipliedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* modifiedScore = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* maxCombo = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* saberActivityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* leftSaberMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightSaberMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* handActivityValues = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* leftHandMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rightHandMovementDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* levelEndStateType = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndStateType")->byval_arg;
    static auto* levelEndAction = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults/LevelEndAction")->byval_arg;
    static auto* energy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResultsHelper*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, beatmapObjectExecutionRatings, gameplayModifiers, gameplayModifiersModel, multipliedScore, modifiedScore, maxCombo, saberActivityValues, leftSaberMovementDistance, rightSaberMovementDistance, handActivityValues, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCompletionResultsHelper::ProcessScore
// Il2CppName: ProcessScore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::PlayerData*, ::GlobalNamespace::PlayerLevelStatsData*, ::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::PlatformLeaderboardsModel*)>(&GlobalNamespace::LevelCompletionResultsHelper::ProcessScore)> {
  static const MethodInfo* get() {
    static auto* playerData = &::il2cpp_utils::GetClassFromName("", "PlayerData")->byval_arg;
    static auto* playerLevelStats = &::il2cpp_utils::GetClassFromName("", "PlayerLevelStatsData")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    static auto* transformedBeatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* platformLeaderboardsModel = &::il2cpp_utils::GetClassFromName("", "PlatformLeaderboardsModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCompletionResultsHelper*), "ProcessScore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerData, playerLevelStats, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, platformLeaderboardsModel});
  }
};
