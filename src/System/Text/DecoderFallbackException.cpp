// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.DecoderFallbackException
#include "System/Text/DecoderFallbackException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.DecoderFallbackException..ctor
System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(::CsString* message, ::Array<uint8_t>* bytesUnknown, int index) {
  return (DecoderFallbackException*)THROW_UNLESS(il2cpp_utils::New("System.Text", "DecoderFallbackException", message, bytesUnknown, index));
}
// Autogenerated method: System.Text.DecoderFallbackException..ctor
System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor() {
  return (DecoderFallbackException*)THROW_UNLESS(il2cpp_utils::New("System.Text", "DecoderFallbackException"));
}
// Autogenerated method: System.Text.DecoderFallbackException..ctor
System::Text::DecoderFallbackException* System::Text::DecoderFallbackException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (DecoderFallbackException*)THROW_UNLESS(il2cpp_utils::New("System.Text", "DecoderFallbackException", info, context));
}
