// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.ConnectToServerRequest
#include "MasterServer/ConnectToServerRequest.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.ConnectToServerRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::ConnectToServerRequest*>* MasterServer::ConnectToServerRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::ConnectToServerRequest*>*>("MasterServer", "ConnectToServerRequest", "get_pool"));
}
// Autogenerated method: MasterServer.ConnectToServerRequest.Init
MasterServer::ConnectToServerRequest* MasterServer::ConnectToServerRequest::Init(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* code, ::Il2CppString* password, bool useRelay) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::ConnectToServerRequest*>(this, "Init", userId, userName, secret, code, password, useRelay));
}
// Autogenerated method: MasterServer.ConnectToServerRequest.Serialize
void MasterServer::ConnectToServerRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::ConnectToServerRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::ConnectToServerRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.ConnectToServerRequest.Deserialize
void MasterServer::ConnectToServerRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::ConnectToServerRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::ConnectToServerRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.ConnectToServerRequest.Release
void MasterServer::ConnectToServerRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.ConnectToServerRequest..ctor
MasterServer::ConnectToServerRequest* MasterServer::ConnectToServerRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ConnectToServerRequest*>());
}