// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Protocol.Ntlm.Type2Message
#include "Mono/Security/Protocol/Ntlm/Type2Message.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message..ctor
Mono::Security::Protocol::Ntlm::Type2Message* Mono::Security::Protocol::Ntlm::Type2Message::New_ctor(::Array<uint8_t>* message) {
  return THROW_UNLESS(il2cpp_utils::New<Type2Message*>(message));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_Nonce
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::get_Nonce() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Nonce"));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_TargetName
::Il2CppString* Mono::Security::Protocol::Ntlm::Type2Message::get_TargetName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TargetName"));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.get_TargetInfo
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::get_TargetInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_TargetInfo"));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.Finalize
void Mono::Security::Protocol::Ntlm::Type2Message::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.Decode
void Mono::Security::Protocol::Ntlm::Type2Message::Decode(::Array<uint8_t>* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Decode", message));
}
// Autogenerated method: Mono.Security.Protocol.Ntlm.Type2Message.GetBytes
::Array<uint8_t>* Mono::Security::Protocol::Ntlm::Type2Message::GetBytes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBytes"));
}