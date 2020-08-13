// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformLeaderboardsHandler
#include "GlobalNamespace/TestPlatformLeaderboardsHandler.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: PlatformLeaderboardsModel/ScoresScope
#include "GlobalNamespace/PlatformLeaderboardsModel_ScoresScope.hpp"
// Including type: PlatformLeaderboardsModel/GetScoresCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_GetScoresCompletionHandler.hpp"
// Including type: LeaderboardScoreUploader/ScoreData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoreData.hpp"
// Including type: PlatformLeaderboardsModel/UploadScoreCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_UploadScoreCompletionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TestPlatformLeaderboardsHandler.GetScores
GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores(GlobalNamespace::IDifficultyBeatmap* beatmap, int count, int fromRank, GlobalNamespace::PlatformLeaderboardsModel::ScoresScope scope, ::CsString* referencePlayerId, GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "GetScores", beatmap, count, fromRank, scope, referencePlayerId, completionHandler));
}
// Autogenerated method: TestPlatformLeaderboardsHandler.UploadScore
GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "UploadScore", scoreData, completionHandler));
}
// Autogenerated method: TestPlatformLeaderboardsHandler..ctor
GlobalNamespace::TestPlatformLeaderboardsHandler* GlobalNamespace::TestPlatformLeaderboardsHandler::New_ctor() {
  return (TestPlatformLeaderboardsHandler*)THROW_UNLESS(il2cpp_utils::New("", "TestPlatformLeaderboardsHandler"));
}
