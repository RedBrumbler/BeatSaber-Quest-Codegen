// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.LockRecursionException
#include "System/Threading/LockRecursionException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.LockRecursionException..ctor
System::Threading::LockRecursionException* System::Threading::LockRecursionException::New_ctor() {
  return (LockRecursionException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "LockRecursionException"));
}
// Autogenerated method: System.Threading.LockRecursionException..ctor
System::Threading::LockRecursionException* System::Threading::LockRecursionException::New_ctor(::CsString* message) {
  return (LockRecursionException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "LockRecursionException", message));
}
// Autogenerated method: System.Threading.LockRecursionException..ctor
System::Threading::LockRecursionException* System::Threading::LockRecursionException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (LockRecursionException*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "LockRecursionException", info, context));
}
