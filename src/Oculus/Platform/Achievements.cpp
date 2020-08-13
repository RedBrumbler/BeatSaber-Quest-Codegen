// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Achievements
#include "Oculus/Platform/Achievements.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.AchievementUpdate
#include "Oculus/Platform/Models/AchievementUpdate.hpp"
// Including type: Oculus.Platform.Models.AchievementDefinitionList
#include "Oculus/Platform/Models/AchievementDefinitionList.hpp"
// Including type: Oculus.Platform.Models.AchievementProgressList
#include "Oculus/Platform/Models/AchievementProgressList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Achievements.AddCount
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::AddCount(::CsString* name, uint64_t count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>*>("Oculus.Platform", "Achievements", "AddCount", name, count));
}
// Autogenerated method: Oculus.Platform.Achievements.AddFields
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::AddFields(::CsString* name, ::CsString* fields) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>*>("Oculus.Platform", "Achievements", "AddFields", name, fields));
}
// Autogenerated method: Oculus.Platform.Achievements.GetAllDefinitions
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* Oculus::Platform::Achievements::GetAllDefinitions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>*>("Oculus.Platform", "Achievements", "GetAllDefinitions"));
}
// Autogenerated method: Oculus.Platform.Achievements.GetAllProgress
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* Oculus::Platform::Achievements::GetAllProgress() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>*>("Oculus.Platform", "Achievements", "GetAllProgress"));
}
// Autogenerated method: Oculus.Platform.Achievements.GetDefinitionsByName
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* Oculus::Platform::Achievements::GetDefinitionsByName(::Array<::CsString*>* names) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>*>("Oculus.Platform", "Achievements", "GetDefinitionsByName", names));
}
// Autogenerated method: Oculus.Platform.Achievements.GetProgressByName
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* Oculus::Platform::Achievements::GetProgressByName(::Array<::CsString*>* names) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>*>("Oculus.Platform", "Achievements", "GetProgressByName", names));
}
// Autogenerated method: Oculus.Platform.Achievements.Unlock
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>* Oculus::Platform::Achievements::Unlock(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementUpdate*>*>("Oculus.Platform", "Achievements", "Unlock", name));
}
// Autogenerated method: Oculus.Platform.Achievements.GetNextAchievementDefinitionListPage
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>* Oculus::Platform::Achievements::GetNextAchievementDefinitionListPage(Oculus::Platform::Models::AchievementDefinitionList* list) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementDefinitionList*>*>("Oculus.Platform", "Achievements", "GetNextAchievementDefinitionListPage", list));
}
// Autogenerated method: Oculus.Platform.Achievements.GetNextAchievementProgressListPage
Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>* Oculus::Platform::Achievements::GetNextAchievementProgressListPage(Oculus::Platform::Models::AchievementProgressList* list) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::AchievementProgressList*>*>("Oculus.Platform", "Achievements", "GetNextAchievementProgressListPage", list));
}
