// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityAnalyticsModel
#include "GlobalNamespace/UnityAnalyticsModel.hpp"
// Including type: UnityAnalyticsModel/<>c
#include "GlobalNamespace/UnityAnalyticsModel_--c.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityAnalyticsModel.get_supportsOpenDataPrivacyPage
bool GlobalNamespace::UnityAnalyticsModel::get_supportsOpenDataPrivacyPage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_supportsOpenDataPrivacyPage"));
}
// Autogenerated method: UnityAnalyticsModel.OpenDataPrivacyPage
void GlobalNamespace::UnityAnalyticsModel::OpenDataPrivacyPage() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenDataPrivacyPage"));
}
// Autogenerated method: UnityAnalyticsModel.LogEvent
void GlobalNamespace::UnityAnalyticsModel::LogEvent(::CsString* eventCategory, ::CsString* eventAction, ::CsString* eventLabel, int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogEvent", eventCategory, eventAction, eventLabel, value));
}
// Autogenerated method: UnityAnalyticsModel..ctor
GlobalNamespace::UnityAnalyticsModel* GlobalNamespace::UnityAnalyticsModel::New_ctor() {
  return (UnityAnalyticsModel*)THROW_UNLESS(il2cpp_utils::New("", "UnityAnalyticsModel"));
}
