// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardPlayerInfo
#include "GlobalNamespace/LeaderboardPlayerInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LeaderboardPlayerInfo.get_playerId
::CsString* GlobalNamespace::LeaderboardPlayerInfo::get_playerId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_playerId"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_playerId
void GlobalNamespace::LeaderboardPlayerInfo::set_playerId(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerId", value));
}
// Autogenerated method: LeaderboardPlayerInfo.get_playerName
::CsString* GlobalNamespace::LeaderboardPlayerInfo::get_playerName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_playerName"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_playerName
void GlobalNamespace::LeaderboardPlayerInfo::set_playerName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerName", value));
}
// Autogenerated method: LeaderboardPlayerInfo.get_playerKey
::CsString* GlobalNamespace::LeaderboardPlayerInfo::get_playerKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_playerKey"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_playerKey
void GlobalNamespace::LeaderboardPlayerInfo::set_playerKey(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerKey", value));
}
// Autogenerated method: LeaderboardPlayerInfo.get_authType
::CsString* GlobalNamespace::LeaderboardPlayerInfo::get_authType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_authType"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_authType
void GlobalNamespace::LeaderboardPlayerInfo::set_authType(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_authType", value));
}
// Autogenerated method: LeaderboardPlayerInfo.get_playerFriends
::CsString* GlobalNamespace::LeaderboardPlayerInfo::get_playerFriends() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_playerFriends"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_playerFriends
void GlobalNamespace::LeaderboardPlayerInfo::set_playerFriends(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerFriends", value));
}
// Autogenerated method: LeaderboardPlayerInfo.get_succeeded
bool GlobalNamespace::LeaderboardPlayerInfo::get_succeeded() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_succeeded"));
}
// Autogenerated method: LeaderboardPlayerInfo.set_succeeded
void GlobalNamespace::LeaderboardPlayerInfo::set_succeeded(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_succeeded", value));
}
// Autogenerated method: LeaderboardPlayerInfo..ctor
GlobalNamespace::LeaderboardPlayerInfo* GlobalNamespace::LeaderboardPlayerInfo::New_ctor(bool succeeded, ::CsString* playerId, ::CsString* playerName, ::CsString* playerKey, ::CsString* authType, ::CsString* playerFriends) {
  return (LeaderboardPlayerInfo*)THROW_UNLESS(il2cpp_utils::New("", "LeaderboardPlayerInfo", succeeded, playerId, playerName, playerKey, authType, playerFriends));
}
