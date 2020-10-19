// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
#include "Org/BouncyCastle/Crypto/Engines/SkipjackEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int16[] ftable
::Array<int16_t>* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_get_ftable() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int16_t>*>("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", "ftable"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int16[] ftable
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_set_ftable(::Array<int16_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", "ftable", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.G
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::G(int k, int w) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "G", k, w));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.EncryptBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EncryptBlock", input, inOff, outBytes, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.H
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::H(int k, int w) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "H", k, w));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.DecryptBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DecryptBlock", input, inOff, outBytes, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine..cctor
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Crypto.Engines", "SkipjackEngine", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.Init
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::SkipjackEngine::get_IsPartialBlockOkay() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPartialBlockOkay"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::GetBlockSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBlockSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::SkipjackEngine::ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ProcessBlock", input, inOff, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine.Reset
void Org::BouncyCastle::Crypto::Engines::SkipjackEngine::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.SkipjackEngine..ctor
Org::BouncyCastle::Crypto::Engines::SkipjackEngine* Org::BouncyCastle::Crypto::Engines::SkipjackEngine::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SkipjackEngine*>());
}