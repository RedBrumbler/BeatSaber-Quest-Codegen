// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformAchievementHandler
#include "GlobalNamespace/OculusPlatformAchievementHandler.hpp"
// Including type: OculusPlatformAchievementHandler/<>c__DisplayClass2_0
#include "GlobalNamespace/OculusPlatformAchievementHandler_--c__DisplayClass2_0.hpp"
// Including type: OculusPlatformAchievementHandler/<>c__DisplayClass3_0
#include "GlobalNamespace/OculusPlatformAchievementHandler_--c__DisplayClass3_0.hpp"
// Including type: OculusPlatformAchievementHandler/<>c__DisplayClass3_1
#include "GlobalNamespace/OculusPlatformAchievementHandler_--c__DisplayClass3_1.hpp"
// Including type: AchievementIdsModelSO
#include "GlobalNamespace/AchievementIdsModelSO.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: PlatformAchievementsModelSO/UnlockAchievementCompletionHandler
#include "GlobalNamespace/PlatformAchievementsModelSO_UnlockAchievementCompletionHandler.hpp"
// Including type: PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler
#include "GlobalNamespace/PlatformAchievementsModelSO_GetUnlockedAchievementsCompletionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OculusPlatformAchievementHandler..ctor
GlobalNamespace::OculusPlatformAchievementHandler* GlobalNamespace::OculusPlatformAchievementHandler::New_ctor(GlobalNamespace::AchievementIdsModelSO* achievementIdsModel) {
  return (OculusPlatformAchievementHandler*)THROW_UNLESS(il2cpp_utils::New("", "OculusPlatformAchievementHandler", achievementIdsModel));
}
// Autogenerated method: OculusPlatformAchievementHandler.UnlockAchievement
GlobalNamespace::HMAsyncRequest* GlobalNamespace::OculusPlatformAchievementHandler::UnlockAchievement(::Il2CppString* achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "UnlockAchievement", achievementId, completionHandler));
}
// Autogenerated method: OculusPlatformAchievementHandler.GetUnlockedAchievements
GlobalNamespace::HMAsyncRequest* GlobalNamespace::OculusPlatformAchievementHandler::GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest*>(this, "GetUnlockedAchievements", completionHandler));
}