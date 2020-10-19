// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.SecureString
#include "System/Security/SecureString.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.SecureString..ctor
System::Security::SecureString* System::Security::SecureString::New_ctor(::Il2CppChar* value, int length) {
  return THROW_UNLESS(il2cpp_utils::New<SecureString*>(value, length));
}
// Autogenerated method: System.Security.SecureString.get_Length
int System::Security::SecureString::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Length"));
}
// Autogenerated method: System.Security.SecureString.Encrypt
void System::Security::SecureString::Encrypt() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Encrypt"));
}
// Autogenerated method: System.Security.SecureString.Decrypt
void System::Security::SecureString::Decrypt() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Decrypt"));
}
// Autogenerated method: System.Security.SecureString.Alloc
void System::Security::SecureString::Alloc(int length, bool realloc) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Alloc", length, realloc));
}
// Autogenerated method: System.Security.SecureString.GetBuffer
::Array<uint8_t>* System::Security::SecureString::GetBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBuffer"));
}
// Autogenerated method: System.Security.SecureString..ctor
System::Security::SecureString* System::Security::SecureString::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SecureString*>());
}
// Autogenerated method: System.Security.SecureString.Dispose
void System::Security::SecureString::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Security::SecureString::System_IDisposable_Dispose() {
  System::Security::SecureString::Dispose();
}