// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo
#include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
#include "UnityEngine/Analytics/AnalyticsSessionInfo_SessionStateChanged.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
#include "UnityEngine/Analytics/AnalyticsSessionInfo_IdentityTokenChanged.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionState
#include "UnityEngine/Analytics/AnalyticsSessionState.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged sessionStateChanged
UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo::_get_sessionStateChanged() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*>("UnityEngine.Analytics", "AnalyticsSessionInfo", "sessionStateChanged"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged sessionStateChanged
void UnityEngine::Analytics::AnalyticsSessionInfo::_set_sessionStateChanged(UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Analytics", "AnalyticsSessionInfo", "sessionStateChanged", value));
}
// Autogenerated static field getter
// Get static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged identityTokenChanged
UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged* UnityEngine::Analytics::AnalyticsSessionInfo::_get_identityTokenChanged() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged*>("UnityEngine.Analytics", "AnalyticsSessionInfo", "identityTokenChanged"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged identityTokenChanged
void UnityEngine::Analytics::AnalyticsSessionInfo::_set_identityTokenChanged(UnityEngine::Analytics::AnalyticsSessionInfo::IdentityTokenChanged* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Analytics", "AnalyticsSessionInfo", "identityTokenChanged", value));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo.CallSessionStateChanged
void UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Analytics", "AnalyticsSessionInfo", "CallSessionStateChanged", sessionState, sessionId, sessionElapsedTime, sessionChanged));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo.get_sessionId
int64_t UnityEngine::Analytics::AnalyticsSessionInfo::get_sessionId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("UnityEngine.Analytics", "AnalyticsSessionInfo", "get_sessionId"));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo.get_userId
::Il2CppString* UnityEngine::Analytics::AnalyticsSessionInfo::get_userId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("UnityEngine.Analytics", "AnalyticsSessionInfo", "get_userId"));
}
// Autogenerated method: UnityEngine.Analytics.AnalyticsSessionInfo.CallIdentityTokenChanged
void UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged(::Il2CppString* token) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Analytics", "AnalyticsSessionInfo", "CallIdentityTokenChanged", token));
}