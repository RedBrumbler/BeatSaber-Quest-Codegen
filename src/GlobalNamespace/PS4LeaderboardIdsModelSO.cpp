// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PS4LeaderboardIdsModelSO
#include "GlobalNamespace/PS4LeaderboardIdsModelSO.hpp"
// Including type: PS4LeaderboardIdsModelSO/LeaderboardIdData
#include "GlobalNamespace/PS4LeaderboardIdsModelSO_LeaderboardIdData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PS4LeaderboardIdsModelSO.get_leaderboardIds
System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>* GlobalNamespace::PS4LeaderboardIdsModelSO::get_leaderboardIds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::PS4LeaderboardIdsModelSO::LeaderboardIdData*>*>(this, "get_leaderboardIds"));
}
// Autogenerated method: PS4LeaderboardIdsModelSO.GetPS4LeaderboardId
bool GlobalNamespace::PS4LeaderboardIdsModelSO::GetPS4LeaderboardId(::Il2CppString* leaderboardId, uint& ps4LeaderboardId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetPS4LeaderboardId", leaderboardId, ps4LeaderboardId));
}
// Autogenerated method: PS4LeaderboardIdsModelSO.OnEnable
void GlobalNamespace::PS4LeaderboardIdsModelSO::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: PS4LeaderboardIdsModelSO..ctor
GlobalNamespace::PS4LeaderboardIdsModelSO* GlobalNamespace::PS4LeaderboardIdsModelSO::New_ctor() {
  return (PS4LeaderboardIdsModelSO*)THROW_UNLESS(il2cpp_utils::New("", "PS4LeaderboardIdsModelSO"));
}