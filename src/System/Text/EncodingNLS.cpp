// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncodingNLS
#include "System/Text/EncodingNLS.hpp"
// Including type: System.Text.Decoder
#include "System/Text/Decoder.hpp"
// Including type: System.Text.Encoder
#include "System/Text/Encoder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.EncodingNLS..ctor
System::Text::EncodingNLS* System::Text::EncodingNLS::New_ctor(int codePage) {
  return (EncodingNLS*)THROW_UNLESS(il2cpp_utils::New("System.Text", "EncodingNLS", codePage));
}
// Autogenerated method: System.Text.EncodingNLS.GetByteCount
int System::Text::EncodingNLS::GetByteCount(::Array<::Il2CppChar>* chars, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, index, count));
}
// Autogenerated method: System.Text.EncodingNLS.GetByteCount
int System::Text::EncodingNLS::GetByteCount(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", s));
}
// Autogenerated method: System.Text.EncodingNLS.GetByteCount
int System::Text::EncodingNLS::GetByteCount(::Il2CppChar* chars, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetByteCount", chars, count));
}
// Autogenerated method: System.Text.EncodingNLS.GetBytes
int System::Text::EncodingNLS::GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", s, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.EncodingNLS.GetBytes
int System::Text::EncodingNLS::GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charIndex, charCount, bytes, byteIndex));
}
// Autogenerated method: System.Text.EncodingNLS.GetBytes
int System::Text::EncodingNLS::GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBytes", chars, charCount, bytes, byteCount));
}
// Autogenerated method: System.Text.EncodingNLS.GetCharCount
int System::Text::EncodingNLS::GetCharCount(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, index, count));
}
// Autogenerated method: System.Text.EncodingNLS.GetCharCount
int System::Text::EncodingNLS::GetCharCount(uint8_t* bytes, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCharCount", bytes, count));
}
// Autogenerated method: System.Text.EncodingNLS.GetChars
int System::Text::EncodingNLS::GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteIndex, byteCount, chars, charIndex));
}
// Autogenerated method: System.Text.EncodingNLS.GetChars
int System::Text::EncodingNLS::GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChars", bytes, byteCount, chars, charCount));
}
// Autogenerated method: System.Text.EncodingNLS.GetString
::Il2CppString* System::Text::EncodingNLS::GetString(::Array<uint8_t>* bytes, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetString", bytes, index, count));
}
// Autogenerated method: System.Text.EncodingNLS.GetDecoder
System::Text::Decoder* System::Text::EncodingNLS::GetDecoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Decoder*>(this, "GetDecoder"));
}
// Autogenerated method: System.Text.EncodingNLS.GetEncoder
System::Text::Encoder* System::Text::EncodingNLS::GetEncoder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoder*>(this, "GetEncoder"));
}