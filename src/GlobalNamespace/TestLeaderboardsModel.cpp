// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestLeaderboardsModel
#include "GlobalNamespace/TestLeaderboardsModel.hpp"
// Including type: TestLeaderboardsModel/<GetLeaderboardEntriesAsync>d__4
#include "GlobalNamespace/TestLeaderboardsModel_-GetLeaderboardEntriesAsync-d__4.hpp"
// Including type: TestLeaderboardsModel/<SendLevelScoreResultAsync>d__5
#include "GlobalNamespace/TestLeaderboardsModel_-SendLevelScoreResultAsync-d__5.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: OnlineServices.GetLeaderboardFilterData
#include "OnlineServices/GetLeaderboardFilterData.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: TestLeaderboardsModel.add_scoreForLeaderboardDidUploadEvent
void GlobalNamespace::TestLeaderboardsModel::add_scoreForLeaderboardDidUploadEvent(System::Action_1<::CsString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_scoreForLeaderboardDidUploadEvent", value));
}
// Autogenerated method: TestLeaderboardsModel.remove_scoreForLeaderboardDidUploadEvent
void GlobalNamespace::TestLeaderboardsModel::remove_scoreForLeaderboardDidUploadEvent(System::Action_1<::CsString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_scoreForLeaderboardDidUploadEvent", value));
}
// Autogenerated method: TestLeaderboardsModel.GetLeaderboardId
::CsString* GlobalNamespace::TestLeaderboardsModel::GetLeaderboardId(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetLeaderboardId", difficultyBeatmap));
}
// Autogenerated method: TestLeaderboardsModel.GetLeaderboardEntriesAsync
System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>* GlobalNamespace::TestLeaderboardsModel::GetLeaderboardEntriesAsync(OnlineServices::GetLeaderboardFilterData leaderboardFilterData, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::GetLeaderboardEntriesResult>*>(this, "GetLeaderboardEntriesAsync", leaderboardFilterData, cancellationToken));
}
// Autogenerated method: TestLeaderboardsModel.SendLevelScoreResultAsync
System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>* GlobalNamespace::TestLeaderboardsModel::SendLevelScoreResultAsync(OnlineServices::LevelScoreResultsData levelScoreResult, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::SendLeaderboardEntryResult>*>(this, "SendLevelScoreResultAsync", levelScoreResult, cancellationToken));
}
// Autogenerated method: TestLeaderboardsModel..ctor
GlobalNamespace::TestLeaderboardsModel* GlobalNamespace::TestLeaderboardsModel::New_ctor() {
  return (TestLeaderboardsModel*)THROW_UNLESS(il2cpp_utils::New("", "TestLeaderboardsModel"));
}
