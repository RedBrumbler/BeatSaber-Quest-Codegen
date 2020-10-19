// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.MD2Digest
#include "Org/BouncyCastle/Crypto/Digests/MD2Digest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[] S
::Array<uint8_t>* Org::BouncyCastle::Crypto::Digests::MD2Digest::_get_S() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("Org.BouncyCastle.Crypto.Digests", "MD2Digest", "S"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[] S
void Org::BouncyCastle::Crypto::Digests::MD2Digest::_set_S(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Digests", "MD2Digest", "S", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest..ctor
Org::BouncyCastle::Crypto::Digests::MD2Digest* Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor(Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
  return THROW_UNLESS(il2cpp_utils::New<MD2Digest*>(t));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.CopyIn
void Org::BouncyCastle::Crypto::Digests::MD2Digest::CopyIn(Org::BouncyCastle::Crypto::Digests::MD2Digest* t) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyIn", t));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.ProcessChecksum
void Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessChecksum(::Array<uint8_t>* m) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessChecksum", m));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.ProcessBlock
void Org::BouncyCastle::Crypto::Digests::MD2Digest::ProcessBlock(::Array<uint8_t>* m) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessBlock", m));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest..cctor
void Org::BouncyCastle::Crypto::Digests::MD2Digest::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Crypto.Digests", "MD2Digest", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest..ctor
Org::BouncyCastle::Crypto::Digests::MD2Digest* Org::BouncyCastle::Crypto::Digests::MD2Digest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MD2Digest*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Digests::MD2Digest::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.GetDigestSize
int Org::BouncyCastle::Crypto::Digests::MD2Digest::GetDigestSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetDigestSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.GetByteLength
int Org::BouncyCastle::Crypto::Digests::MD2Digest::GetByteLength() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteLength"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.DoFinal
int Org::BouncyCastle::Crypto::Digests::MD2Digest::DoFinal(::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.Reset
void Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.Update
void Org::BouncyCastle::Crypto::Digests::MD2Digest::Update(uint8_t input) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", input));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.BlockUpdate
void Org::BouncyCastle::Crypto::Digests::MD2Digest::BlockUpdate(::Array<uint8_t>* input, int inOff, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BlockUpdate", input, inOff, length));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.Copy
Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::MD2Digest::Copy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Utilities::IMemoable*>(this, "Copy"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Digests.MD2Digest.Reset
void Org::BouncyCastle::Crypto::Digests::MD2Digest::Reset(Org::BouncyCastle::Utilities::IMemoable* other) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", other));
}