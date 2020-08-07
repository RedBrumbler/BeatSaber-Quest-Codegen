// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
// Including type: System.Text.EncoderNLS
#include "System/Text/EncoderNLS.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.EncoderFallbackBuffer.Fallback
bool System::Text::EncoderFallbackBuffer::Fallback(::Il2CppChar charUnknown, int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Fallback", charUnknown, index));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.Fallback
bool System::Text::EncoderFallbackBuffer::Fallback(::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Fallback", charUnknownHigh, charUnknownLow, index));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.GetNextChar
::Il2CppChar System::Text::EncoderFallbackBuffer::GetNextChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "GetNextChar"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.MovePrevious
bool System::Text::EncoderFallbackBuffer::MovePrevious() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MovePrevious"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.get_Remaining
int System::Text::EncoderFallbackBuffer::get_Remaining() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Remaining"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.Reset
void System::Text::EncoderFallbackBuffer::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.InternalReset
void System::Text::EncoderFallbackBuffer::InternalReset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalReset"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.InternalInitialize
void System::Text::EncoderFallbackBuffer::InternalInitialize(::Il2CppChar* charStart, ::Il2CppChar* charEnd, System::Text::EncoderNLS* encoder, bool setEncoder) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalInitialize", charStart, charEnd, encoder, setEncoder));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.InternalGetNextChar
::Il2CppChar System::Text::EncoderFallbackBuffer::InternalGetNextChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "InternalGetNextChar"));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.InternalFallback
bool System::Text::EncoderFallbackBuffer::InternalFallback(::Il2CppChar ch, ::Il2CppChar*& chars) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "InternalFallback", ch, chars));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer.ThrowLastCharRecursive
void System::Text::EncoderFallbackBuffer::ThrowLastCharRecursive(int charRecursive) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ThrowLastCharRecursive", charRecursive));
}
// Autogenerated method: System.Text.EncoderFallbackBuffer..ctor
System::Text::EncoderFallbackBuffer* System::Text::EncoderFallbackBuffer::New_ctor() {
  return (EncoderFallbackBuffer*)THROW_UNLESS(il2cpp_utils::New("System.Text", "EncoderFallbackBuffer"));
}