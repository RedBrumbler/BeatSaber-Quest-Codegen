// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF7Encoding/Encoder
#include "System/Text/UTF7Encoding_Encoder.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.UTF7Encoding/Encoder..ctor
System::Text::UTF7Encoding::Encoder* System::Text::UTF7Encoding::Encoder::New_ctor(System::Text::UTF7Encoding* encoding) {
  return (UTF7Encoding::Encoder*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF7Encoding/Encoder", encoding));
}
// Autogenerated method: System.Text.UTF7Encoding/Encoder..ctor
System::Text::UTF7Encoding::Encoder* System::Text::UTF7Encoding::Encoder::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (UTF7Encoding::Encoder*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF7Encoding/Encoder", info, context));
}
// Autogenerated method: System.Text.UTF7Encoding/Encoder.System.Runtime.Serialization.ISerializable.GetObjectData
void System::Text::UTF7Encoding::Encoder::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", info, context));
}
// Autogenerated method: System.Text.UTF7Encoding/Encoder.Reset
void System::Text::UTF7Encoding::Encoder::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Text.UTF7Encoding/Encoder.get_HasState
bool System::Text::UTF7Encoding::Encoder::get_HasState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasState"));
}
