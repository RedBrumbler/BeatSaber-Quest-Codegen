// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Packet
#include "Oculus/Platform/Packet.hpp"
// Including type: Oculus.Platform.SendPolicy
#include "Oculus/Platform/SendPolicy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Packet..ctor
Oculus::Platform::Packet* Oculus::Platform::Packet::New_ctor(System::IntPtr packetHandle) {
  return (Packet*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "Packet", packetHandle));
}
// Autogenerated method: Oculus.Platform.Packet.ReadBytes
uint64_t Oculus::Platform::Packet::ReadBytes(::Array<uint8_t>* destination) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "ReadBytes", destination));
}
// Autogenerated method: Oculus.Platform.Packet.get_SenderID
uint64_t Oculus::Platform::Packet::get_SenderID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "get_SenderID"));
}
// Autogenerated method: Oculus.Platform.Packet.get_Size
uint64_t Oculus::Platform::Packet::get_Size() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(this, "get_Size"));
}
// Autogenerated method: Oculus.Platform.Packet.get_Policy
Oculus::Platform::SendPolicy Oculus::Platform::Packet::get_Policy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::SendPolicy>(this, "get_Policy"));
}
// Autogenerated method: Oculus.Platform.Packet.Finalize
void Oculus::Platform::Packet::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: Oculus.Platform.Packet.Dispose
void Oculus::Platform::Packet::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void Oculus::Platform::Packet::System_IDisposable_Dispose() {
  Dispose();
}
