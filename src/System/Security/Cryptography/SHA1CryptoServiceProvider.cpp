// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SHA1CryptoServiceProvider
#include "System/Security/Cryptography/SHA1CryptoServiceProvider.hpp"
// Including type: System.Security.Cryptography.SHA1Internal
#include "System/Security/Cryptography/SHA1Internal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider..ctor
System::Security::Cryptography::SHA1CryptoServiceProvider* System::Security::Cryptography::SHA1CryptoServiceProvider::New_ctor() {
  return (SHA1CryptoServiceProvider*)THROW_UNLESS(il2cpp_utils::New("System.Security.Cryptography", "SHA1CryptoServiceProvider"));
}
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider.Finalize
void System::Security::Cryptography::SHA1CryptoServiceProvider::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider.Dispose
void System::Security::Cryptography::SHA1CryptoServiceProvider::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider.HashCore
void System::Security::Cryptography::SHA1CryptoServiceProvider::HashCore(::Array<uint8_t>* rgb, int ibStart, int cbSize) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HashCore", rgb, ibStart, cbSize));
}
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider.HashFinal
::Array<uint8_t>* System::Security::Cryptography::SHA1CryptoServiceProvider::HashFinal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "HashFinal"));
}
// Autogenerated method: System.Security.Cryptography.SHA1CryptoServiceProvider.Initialize
void System::Security::Cryptography::SHA1CryptoServiceProvider::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
