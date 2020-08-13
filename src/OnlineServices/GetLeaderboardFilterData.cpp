// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.GetLeaderboardFilterData..ctor
OnlineServices::GetLeaderboardFilterData* OnlineServices::GetLeaderboardFilterData::New_ctor(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, OnlineServices::ScoresScope scope, bool includeScoreWithModifiers) {
  return (GetLeaderboardFilterData*)THROW_UNLESS(il2cpp_utils::New("OnlineServices", "GetLeaderboardFilterData", beatmap, count, fromRank, scope, includeScoreWithModifiers));
}
