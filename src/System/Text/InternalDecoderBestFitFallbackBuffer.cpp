// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.InternalDecoderBestFitFallbackBuffer
#include "System/Text/InternalDecoderBestFitFallbackBuffer.hpp"
// Including type: System.Text.InternalDecoderBestFitFallback
#include "System/Text/InternalDecoderBestFitFallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Object s_InternalSyncObject
::CsObject* System::Text::InternalDecoderBestFitFallbackBuffer::_get_s_InternalSyncObject() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsObject*>("System.Text", "InternalDecoderBestFitFallbackBuffer", "s_InternalSyncObject"));
}
// Autogenerated static field setter
// Set static field: static private System.Object s_InternalSyncObject
void System::Text::InternalDecoderBestFitFallbackBuffer::_set_s_InternalSyncObject(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Text", "InternalDecoderBestFitFallbackBuffer", "s_InternalSyncObject", value));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.get_InternalSyncObject
::CsObject* System::Text::InternalDecoderBestFitFallbackBuffer::get_InternalSyncObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>("System.Text", "InternalDecoderBestFitFallbackBuffer", "get_InternalSyncObject"));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer..ctor
System::Text::InternalDecoderBestFitFallbackBuffer* System::Text::InternalDecoderBestFitFallbackBuffer::New_ctor(System::Text::InternalDecoderBestFitFallback* fallback) {
  return (InternalDecoderBestFitFallbackBuffer*)THROW_UNLESS(il2cpp_utils::New("System.Text", "InternalDecoderBestFitFallbackBuffer", fallback));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.TryBestFit
::Il2CppChar System::Text::InternalDecoderBestFitFallbackBuffer::TryBestFit(::Array<uint8_t>* bytesCheck) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "TryBestFit", bytesCheck));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.Fallback
bool System::Text::InternalDecoderBestFitFallbackBuffer::Fallback(::Array<uint8_t>* bytesUnknown, int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Fallback", bytesUnknown, index));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.GetNextChar
::Il2CppChar System::Text::InternalDecoderBestFitFallbackBuffer::GetNextChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "GetNextChar"));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.Reset
void System::Text::InternalDecoderBestFitFallbackBuffer::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Text.InternalDecoderBestFitFallbackBuffer.InternalFallback
int System::Text::InternalDecoderBestFitFallbackBuffer::InternalFallback(::Array<uint8_t>* bytes, uint8_t* pBytes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalFallback", bytes, pBytes));
}
