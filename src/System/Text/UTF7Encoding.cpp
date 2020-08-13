// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.UTF7Encoding
#include "System/Text/UTF7Encoding.hpp"
// Including type: System.Text.UTF7Encoding/Decoder
#include "System/Text/UTF7Encoding_Decoder.hpp"
// Including type: System.Text.UTF7Encoding/Encoder
#include "System/Text/UTF7Encoding_Encoder.hpp"
// Including type: System.Text.UTF7Encoding/DecoderUTF7Fallback
#include "System/Text/UTF7Encoding_DecoderUTF7Fallback.hpp"
// Including type: System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
#include "System/Text/UTF7Encoding_DecoderUTF7FallbackBuffer.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.UTF7Encoding..ctor
System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor(bool allowOptionals) {
  return (UTF7Encoding*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF7Encoding", allowOptionals));
}
// Autogenerated method: System.Text.UTF7Encoding.MakeTables
void System::Text::UTF7Encoding::MakeTables() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MakeTables"));
}
// Autogenerated method: System.Text.UTF7Encoding..ctor
System::Text::UTF7Encoding* System::Text::UTF7Encoding::New_ctor() {
  return (UTF7Encoding*)THROW_UNLESS(il2cpp_utils::New("System.Text", "UTF7Encoding"));
}
// Autogenerated method: System.Text.UTF7Encoding.SetDefaultFallbacks
void System::Text::UTF7Encoding::SetDefaultFallbacks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetDefaultFallbacks"));
}
// Autogenerated method: System.Text.UTF7Encoding.OnDeserializing
void System::Text::UTF7Encoding::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializing", ctx));
}
// Autogenerated method: System.Text.UTF7Encoding.OnDeserialized
void System::Text::UTF7Encoding::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialized", ctx));
}
// Autogenerated method: System.Text.UTF7Encoding.Equals
bool System::Text::UTF7Encoding::Equals(::CsObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", value));
}
// Autogenerated method: System.Text.UTF7Encoding.GetHashCode
int System::Text::UTF7Encoding::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Text.UTF7Encoding.GetByteCount
int System::Text::UTF7Encoding::GetByteCount(::Array<::Il2CppChar>* chars, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, index, count));
}
// Autogenerated method: System.Text.UTF7Encoding.GetByteCount
int System::Text::UTF7Encoding::GetByteCount(::CsString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", s));
}
// Autogenerated method: System.Text.UTF7Encoding.GetByteCount
int System::Text::UTF7Encoding::GetByteCount(::Il2CppChar* chars, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count));
}
// Autogenerated method: System.Text.UTF7Encoding.GetBytes
int System::Text::UTF7Encoding::GetBytes(::CsString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", s, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF7Encoding.GetBytes
int System::Text::UTF7Encoding::GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.UTF7Encoding.GetBytes
int System::Text::UTF7Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount));
}
// Autogenerated method: System.Text.UTF7Encoding.GetCharCount
int System::Text::UTF7Encoding::GetCharCount(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, index, count));
}
// Autogenerated method: System.Text.UTF7Encoding.GetCharCount
int System::Text::UTF7Encoding::GetCharCount(uint8_t* bytes, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count));
}
// Autogenerated method: System.Text.UTF7Encoding.GetChars
int System::Text::UTF7Encoding::GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteIndex, byteCount, chars, charIndex));
}
// Autogenerated method: System.Text.UTF7Encoding.GetChars
int System::Text::UTF7Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount));
}
// Autogenerated method: System.Text.UTF7Encoding.GetString
::CsString* System::Text::UTF7Encoding::GetString(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetString", bytes, index, count));
}
// Autogenerated method: System.Text.UTF7Encoding.GetByteCount
int System::Text::UTF7Encoding::GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* baseEncoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count, baseEncoder));
}
// Autogenerated method: System.Text.UTF7Encoding.GetBytes
int System::Text::UTF7Encoding::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* baseEncoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount, baseEncoder));
}
// Autogenerated method: System.Text.UTF7Encoding.GetCharCount
int System::Text::UTF7Encoding::GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count, baseDecoder));
}
// Autogenerated method: System.Text.UTF7Encoding.GetChars
int System::Text::UTF7Encoding::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* baseDecoder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount, baseDecoder));
}
// Autogenerated method: System.Text.UTF7Encoding.GetDecoder
System::Text::Decoder* System::Text::UTF7Encoding::GetDecoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Decoder*>(this, "GetDecoder"));
}
// Autogenerated method: System.Text.UTF7Encoding.GetEncoder
System::Text::Encoder* System::Text::UTF7Encoding::GetEncoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoder*>(this, "GetEncoder"));
}
// Autogenerated method: System.Text.UTF7Encoding.GetMaxByteCount
int System::Text::UTF7Encoding::GetMaxByteCount(int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxByteCount", charCount));
}
// Autogenerated method: System.Text.UTF7Encoding.GetMaxCharCount
int System::Text::UTF7Encoding::GetMaxCharCount(int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMaxCharCount", byteCount));
}
