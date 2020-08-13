// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.TimeSpanFormat
#include "System/Globalization/TimeSpanFormat.hpp"
// Including type: System.Globalization.TimeSpanFormat/Pattern
#include "System/Globalization/TimeSpanFormat_Pattern.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.DateTimeFormatInfo
#include "System/Globalization/DateTimeFormatInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
System::Globalization::TimeSpanFormat::FormatLiterals System::Globalization::TimeSpanFormat::_get_PositiveInvariantFormatLiterals() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::TimeSpanFormat::FormatLiterals>("System.Globalization", "TimeSpanFormat", "PositiveInvariantFormatLiterals"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals PositiveInvariantFormatLiterals
void System::Globalization::TimeSpanFormat::_set_PositiveInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "TimeSpanFormat", "PositiveInvariantFormatLiterals", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
System::Globalization::TimeSpanFormat::FormatLiterals System::Globalization::TimeSpanFormat::_get_NegativeInvariantFormatLiterals() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::TimeSpanFormat::FormatLiterals>("System.Globalization", "TimeSpanFormat", "NegativeInvariantFormatLiterals"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Globalization.TimeSpanFormat/FormatLiterals NegativeInvariantFormatLiterals
void System::Globalization::TimeSpanFormat::_set_NegativeInvariantFormatLiterals(System::Globalization::TimeSpanFormat::FormatLiterals value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "TimeSpanFormat", "NegativeInvariantFormatLiterals", value));
}
// Autogenerated method: System.Globalization.TimeSpanFormat.IntToString
::CsString* System::Globalization::TimeSpanFormat::IntToString(int n, int digits) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "TimeSpanFormat", "IntToString", n, digits));
}
// Autogenerated method: System.Globalization.TimeSpanFormat.Format
::CsString* System::Globalization::TimeSpanFormat::Format(System::TimeSpan value, ::CsString* format, System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "TimeSpanFormat", "Format", value, format, formatProvider));
}
// Autogenerated method: System.Globalization.TimeSpanFormat.FormatStandard
::CsString* System::Globalization::TimeSpanFormat::FormatStandard(System::TimeSpan value, bool isInvariant, ::CsString* format, System::Globalization::TimeSpanFormat::Pattern pattern) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "TimeSpanFormat", "FormatStandard", value, isInvariant, format, pattern));
}
// Autogenerated method: System.Globalization.TimeSpanFormat.FormatCustomized
::CsString* System::Globalization::TimeSpanFormat::FormatCustomized(System::TimeSpan value, ::CsString* format, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "TimeSpanFormat", "FormatCustomized", value, format, dtfi));
}
// Autogenerated method: System.Globalization.TimeSpanFormat..cctor
void System::Globalization::TimeSpanFormat::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "TimeSpanFormat", ".cctor"));
}
