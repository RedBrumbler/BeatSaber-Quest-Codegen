// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetEase.DockerWrap
#include "NetEase/DockerWrap.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: NetEase.Docker.UploadScoreData
#include "NetEase/Docker/UploadScoreData.hpp"
// Including type: NetEase.Docker.RequestHighscoreData
#include "NetEase/Docker/RequestHighscoreData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NetEase.DockerWrap.SetInitializeCallback
void NetEase::DockerWrap::SetInitializeCallback(System::Action_1<NetEase::Docker::InitializeData>* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "SetInitializeCallback", callback));
}
// Autogenerated method: NetEase.DockerWrap.Initialize
void NetEase::DockerWrap::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "Initialize"));
}
// Autogenerated method: NetEase.DockerWrap.SetLoginCallback
void NetEase::DockerWrap::SetLoginCallback(System::Action_1<NetEase::Docker::LoginData>* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "SetLoginCallback", callback));
}
// Autogenerated method: NetEase.DockerWrap.Login
void NetEase::DockerWrap::Login() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "Login"));
}
// Autogenerated method: NetEase.DockerWrap.SetLogoutCallback
void NetEase::DockerWrap::SetLogoutCallback(System::Action_1<NetEase::Docker::LogoutData>* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "SetLogoutCallback", callback));
}
// Autogenerated method: NetEase.DockerWrap.Logout
void NetEase::DockerWrap::Logout() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "Logout"));
}
// Autogenerated method: NetEase.DockerWrap.UploadScore
void NetEase::DockerWrap::UploadScore(NetEase::Docker::UploadScoreData scoreData) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "UploadScore", scoreData));
}
// Autogenerated method: NetEase.DockerWrap.WillProvideHighscore
bool NetEase::DockerWrap::WillProvideHighscore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("NetEase", "DockerWrap", "WillProvideHighscore"));
}
// Autogenerated method: NetEase.DockerWrap.SetHighscoreReceivedCallback
void NetEase::DockerWrap::SetHighscoreReceivedCallback(System::Action_1<NetEase::Docker::ReceivedHighscoreData>* callbackAction) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "SetHighscoreReceivedCallback", callbackAction));
}
// Autogenerated method: NetEase.DockerWrap.RequestHighscoreList
void NetEase::DockerWrap::RequestHighscoreList(NetEase::Docker::RequestHighscoreData highscoreRequest) {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "RequestHighscoreList", highscoreRequest));
}
// Autogenerated method: NetEase.DockerWrap.UpdateLoop
void NetEase::DockerWrap::UpdateLoop() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NetEase", "DockerWrap", "UpdateLoop"));
}
