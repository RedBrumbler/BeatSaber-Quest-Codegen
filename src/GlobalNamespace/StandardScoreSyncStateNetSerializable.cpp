// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: StandardScoreSyncStateNetSerializable
#include "GlobalNamespace/StandardScoreSyncStateNetSerializable.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly PacketPool`1<StandardScoreSyncStateNetSerializable> pool
GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* GlobalNamespace::StandardScoreSyncStateNetSerializable::_get_pool() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>*>("", "StandardScoreSyncStateNetSerializable", "pool"));
}
// Autogenerated static field setter
// Set static field: static public readonly PacketPool`1<StandardScoreSyncStateNetSerializable> pool
void GlobalNamespace::StandardScoreSyncStateNetSerializable::_set_pool(GlobalNamespace::PacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "StandardScoreSyncStateNetSerializable", "pool", value));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.NoDomainReloadInit
void GlobalNamespace::StandardScoreSyncStateNetSerializable::NoDomainReloadInit() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "StandardScoreSyncStateNetSerializable", "NoDomainReloadInit"));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable..cctor
void GlobalNamespace::StandardScoreSyncStateNetSerializable::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "StandardScoreSyncStateNetSerializable", ".cctor"));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.ISyncStateSerializable<StandardScoreSyncState>.get_time
float GlobalNamespace::StandardScoreSyncStateNetSerializable::GlobalNamespace_ISyncStateSerializable_1_get_time() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<float>(this, "ISyncStateSerializable<StandardScoreSyncState>.get_time")));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.ISyncStateSerializable<StandardScoreSyncState>.set_time
void GlobalNamespace::StandardScoreSyncStateNetSerializable::GlobalNamespace_ISyncStateSerializable_1_set_time(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ISyncStateSerializable<StandardScoreSyncState>.set_time", value));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.ISyncStateSerializable<StandardScoreSyncState>.get_state
GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncStateNetSerializable::GlobalNamespace_ISyncStateSerializable_1_get_state() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<GlobalNamespace::StandardScoreSyncState>(this, "ISyncStateSerializable<StandardScoreSyncState>.get_state")));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.ISyncStateSerializable<StandardScoreSyncState>.set_state
void GlobalNamespace::StandardScoreSyncStateNetSerializable::GlobalNamespace_ISyncStateSerializable_1_set_state(GlobalNamespace::StandardScoreSyncState value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ISyncStateSerializable<StandardScoreSyncState>.set_state", value));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.Serialize
void GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::StandardScoreSyncStateNetSerializable::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize(writer);
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.Deserialize
void GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::StandardScoreSyncStateNetSerializable::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize(reader);
}
// Autogenerated method: StandardScoreSyncStateNetSerializable.Release
void GlobalNamespace::StandardScoreSyncStateNetSerializable::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: StandardScoreSyncStateNetSerializable..ctor
GlobalNamespace::StandardScoreSyncStateNetSerializable* GlobalNamespace::StandardScoreSyncStateNetSerializable::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<StandardScoreSyncStateNetSerializable*>());
}