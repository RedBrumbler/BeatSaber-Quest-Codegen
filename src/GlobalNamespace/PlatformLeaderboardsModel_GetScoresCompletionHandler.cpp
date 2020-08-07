// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformLeaderboardsModel/GetScoresCompletionHandler
#include "GlobalNamespace/PlatformLeaderboardsModel_GetScoresCompletionHandler.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: PlatformLeaderboardsModel/GetScoresResult
#include "GlobalNamespace/PlatformLeaderboardsModel_GetScoresResult.hpp"
// Including type: PlatformLeaderboardsModel/LeaderboardScore
#include "GlobalNamespace/PlatformLeaderboardsModel_LeaderboardScore.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PlatformLeaderboardsModel/GetScoresCompletionHandler..ctor
GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler* GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (PlatformLeaderboardsModel::GetScoresCompletionHandler*)THROW_UNLESS(il2cpp_utils::New("", "PlatformLeaderboardsModel/GetScoresCompletionHandler", object, method));
}
// Autogenerated method: PlatformLeaderboardsModel/GetScoresCompletionHandler.Invoke
void GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::Invoke(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int referencePlayerScoreIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", result, scores, referencePlayerScoreIndex));
}
// Autogenerated method: PlatformLeaderboardsModel/GetScoresCompletionHandler.BeginInvoke
System::IAsyncResult* GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::BeginInvoke(GlobalNamespace::PlatformLeaderboardsModel::GetScoresResult result, ::Array<GlobalNamespace::PlatformLeaderboardsModel::LeaderboardScore*>* scores, int referencePlayerScoreIndex, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", result, scores, referencePlayerScoreIndex, callback, object));
}
// Autogenerated method: PlatformLeaderboardsModel/GetScoresCompletionHandler.EndInvoke
void GlobalNamespace::PlatformLeaderboardsModel::GetScoresCompletionHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}