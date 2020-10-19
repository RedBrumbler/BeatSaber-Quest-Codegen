// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Authentication.AuthenticationException
#include "System/Security/Authentication/AuthenticationException.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Authentication.AuthenticationException..ctor
System::Security::Authentication::AuthenticationException* System::Security::Authentication::AuthenticationException::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticationException*>());
}
// Autogenerated method: System.Security.Authentication.AuthenticationException..ctor
System::Security::Authentication::AuthenticationException* System::Security::Authentication::AuthenticationException::New_ctor(::Il2CppString* message) {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticationException*>(message));
}
// Autogenerated method: System.Security.Authentication.AuthenticationException..ctor
System::Security::Authentication::AuthenticationException* System::Security::Authentication::AuthenticationException::New_ctor(::Il2CppString* message, System::Exception* innerException) {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticationException*>(message, innerException));
}
// Autogenerated method: System.Security.Authentication.AuthenticationException..ctor
System::Security::Authentication::AuthenticationException* System::Security::Authentication::AuthenticationException::New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticationException*>(serializationInfo, streamingContext));
}