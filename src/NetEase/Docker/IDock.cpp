// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NetEase.Docker.IDock
#include "NetEase/Docker/IDock.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: NetEase.Docker.UploadScoreData
#include "NetEase/Docker/UploadScoreData.hpp"
// Including type: NetEase.Docker.RequestHighscoreData
#include "NetEase/Docker/RequestHighscoreData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NetEase.Docker.IDock.SetInitializeCallback
void NetEase::Docker::IDock::SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callbackAction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetInitializeCallback", callbackAction));
}
// Autogenerated method: NetEase.Docker.IDock.Initialize
void NetEase::Docker::IDock::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: NetEase.Docker.IDock.SetLoginCallback
void NetEase::Docker::IDock::SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callbackAction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLoginCallback", callbackAction));
}
// Autogenerated method: NetEase.Docker.IDock.Login
void NetEase::Docker::IDock::Login() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Login"));
}
// Autogenerated method: NetEase.Docker.IDock.SetLogoutCallback
void NetEase::Docker::IDock::SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callbackAction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLogoutCallback", callbackAction));
}
// Autogenerated method: NetEase.Docker.IDock.Logout
void NetEase::Docker::IDock::Logout() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Logout"));
}
// Autogenerated method: NetEase.Docker.IDock.UploadScore
void NetEase::Docker::IDock::UploadScore(NetEase::Docker::UploadScoreData scoreData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UploadScore", scoreData));
}
// Autogenerated method: NetEase.Docker.IDock.WillProvideHighscore
bool NetEase::Docker::IDock::WillProvideHighscore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WillProvideHighscore"));
}
// Autogenerated method: NetEase.Docker.IDock.SetHighscoreReceivedCallback
void NetEase::Docker::IDock::SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetHighscoreReceivedCallback", callbackAction));
}
// Autogenerated method: NetEase.Docker.IDock.RequestHighscoreList
void NetEase::Docker::IDock::RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RequestHighscoreList", highscoreRequest));
}
// Autogenerated method: NetEase.Docker.IDock.UpdateLoop
void NetEase::Docker::IDock::UpdateLoop() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateLoop"));
}
