// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.GetLeaderboardEntriesResult
#include "OnlineServices/GetLeaderboardEntriesResult.hpp"
// Including type: OnlineServices.LeaderboardEntryData
#include "OnlineServices/LeaderboardEntryData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.GetLeaderboardEntriesResult..ctor
OnlineServices::GetLeaderboardEntriesResult* OnlineServices::GetLeaderboardEntriesResult::New_ctor(bool isError, ::Array<OnlineServices::LeaderboardEntryData*>* leaderboardEntries, int referencePlayerScoreIndex) {
  return (GetLeaderboardEntriesResult*)THROW_UNLESS(il2cpp_utils::New("OnlineServices", "GetLeaderboardEntriesResult", isError, leaderboardEntries, referencePlayerScoreIndex));
}
// Autogenerated method: OnlineServices.GetLeaderboardEntriesResult.get_resultWithError
OnlineServices::GetLeaderboardEntriesResult OnlineServices::GetLeaderboardEntriesResult::get_resultWithError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OnlineServices::GetLeaderboardEntriesResult>("OnlineServices", "GetLeaderboardEntriesResult", "get_resultWithError"));
}