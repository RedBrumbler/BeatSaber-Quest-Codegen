// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.XteaEngine
#include "Org/BouncyCastle/Crypto/Engines/XteaEngine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.setKey
void Org::BouncyCastle::Crypto::Engines::XteaEngine::setKey(::Array<uint8_t>* key) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "setKey", key));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.encryptBlock
int Org::BouncyCastle::Crypto::Engines::XteaEngine::encryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "encryptBlock", inBytes, inOff, outBytes, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.decryptBlock
int Org::BouncyCastle::Crypto::Engines::XteaEngine::decryptBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "decryptBlock", inBytes, inOff, outBytes, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine..ctor
Org::BouncyCastle::Crypto::Engines::XteaEngine* Org::BouncyCastle::Crypto::Engines::XteaEngine::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<XteaEngine*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::XteaEngine::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::Engines::XteaEngine::get_IsPartialBlockOkay() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPartialBlockOkay"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.GetBlockSize
int Org::BouncyCastle::Crypto::Engines::XteaEngine::GetBlockSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBlockSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.Init
void Org::BouncyCastle::Crypto::Engines::XteaEngine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.ProcessBlock
int Org::BouncyCastle::Crypto::Engines::XteaEngine::ProcessBlock(::Array<uint8_t>* inBytes, int inOff, ::Array<uint8_t>* outBytes, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ProcessBlock", inBytes, inOff, outBytes, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.XteaEngine.Reset
void Org::BouncyCastle::Crypto::Engines::XteaEngine::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}