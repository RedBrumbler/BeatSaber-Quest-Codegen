// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.RuntimeWrappedException
#include "System/Runtime/CompilerServices/RuntimeWrappedException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.CompilerServices.RuntimeWrappedException..ctor
System::Runtime::CompilerServices::RuntimeWrappedException* System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor(::Il2CppObject* thrownObject) {
  return (RuntimeWrappedException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.CompilerServices", "RuntimeWrappedException", thrownObject));
}
// Autogenerated method: System.Runtime.CompilerServices.RuntimeWrappedException.GetObjectData
void System::Runtime::CompilerServices::RuntimeWrappedException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Runtime::CompilerServices::RuntimeWrappedException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
// Autogenerated method: System.Runtime.CompilerServices.RuntimeWrappedException..ctor
System::Runtime::CompilerServices::RuntimeWrappedException* System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (RuntimeWrappedException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.CompilerServices", "RuntimeWrappedException", info, context));
}
// Autogenerated method: System.Runtime.CompilerServices.RuntimeWrappedException..ctor
System::Runtime::CompilerServices::RuntimeWrappedException* System::Runtime::CompilerServices::RuntimeWrappedException::New_ctor() {
  return (RuntimeWrappedException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.CompilerServices", "RuntimeWrappedException"));
}