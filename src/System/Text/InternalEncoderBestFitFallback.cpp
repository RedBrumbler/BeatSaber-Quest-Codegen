// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.InternalEncoderBestFitFallback
#include "System/Text/InternalEncoderBestFitFallback.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Text.EncoderFallbackBuffer
#include "System/Text/EncoderFallbackBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Text.InternalEncoderBestFitFallback..ctor
System::Text::InternalEncoderBestFitFallback* System::Text::InternalEncoderBestFitFallback::New_ctor(System::Text::Encoding* encoding) {
  return (InternalEncoderBestFitFallback*)THROW_UNLESS(il2cpp_utils::New("System.Text", "InternalEncoderBestFitFallback", encoding));
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallback.CreateFallbackBuffer
System::Text::EncoderFallbackBuffer* System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::EncoderFallbackBuffer*>(this, "CreateFallbackBuffer"));
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallback.get_MaxCharCount
int System::Text::InternalEncoderBestFitFallback::get_MaxCharCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_MaxCharCount"));
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallback.Equals
bool System::Text::InternalEncoderBestFitFallback::Equals(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", value));
}
// Autogenerated method: System.Text.InternalEncoderBestFitFallback.GetHashCode
int System::Text::InternalEncoderBestFitFallback::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}