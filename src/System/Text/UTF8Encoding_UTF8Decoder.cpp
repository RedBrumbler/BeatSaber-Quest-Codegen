// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF8Encoding/UTF8Decoder
#include "System/Text/UTF8Encoding_UTF8Decoder.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.UTF8Encoding/UTF8Decoder..ctor
System::Text::UTF8Encoding::UTF8Decoder* System::Text::UTF8Encoding::UTF8Decoder::New_ctor(System::Text::UTF8Encoding* encoding) {
  return (UTF8Encoding::UTF8Decoder*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF8Encoding/UTF8Decoder", encoding));
}
// Autogenerated method: System.Text.UTF8Encoding/UTF8Decoder..ctor
System::Text::UTF8Encoding::UTF8Decoder* System::Text::UTF8Encoding::UTF8Decoder::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (UTF8Encoding::UTF8Decoder*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF8Encoding/UTF8Decoder", info, context));
}
// Autogenerated method: System.Text.UTF8Encoding/UTF8Decoder.System.Runtime.Serialization.ISerializable.GetObjectData
void System::Text::UTF8Encoding::UTF8Decoder::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", info, context));
}
// Autogenerated method: System.Text.UTF8Encoding/UTF8Decoder.Reset
void System::Text::UTF8Encoding::UTF8Decoder::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Text.UTF8Encoding/UTF8Decoder.get_HasState
bool System::Text::UTF8Encoding::UTF8Decoder::get_HasState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasState"));
}