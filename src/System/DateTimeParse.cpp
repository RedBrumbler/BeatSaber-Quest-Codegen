// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
// Including type: System.DateTimeParse/MatchNumberDelegate
#include "System/DateTimeParse_MatchNumberDelegate.hpp"
// Including type: System.DateTimeParse/DTT
#include "System/DateTimeParse_DTT.hpp"
// Including type: System.DateTimeParse/TM
#include "System/DateTimeParse_TM.hpp"
// Including type: System.DateTimeParse/DS
#include "System/DateTimeParse_DS.hpp"
// Including type: System.__DTString
#include "System/__DTString.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.DateTimeResult
#include "System/DateTimeResult.hpp"
// Including type: System.DateTimeToken
#include "System/DateTimeToken.hpp"
// Including type: System.DateTimeRawInfo
#include "System/DateTimeRawInfo.hpp"
// Including type: System.Globalization.DateTimeFormatInfo
#include "System/Globalization/DateTimeFormatInfo.hpp"
// Including type: System.Globalization.DateTimeStyles
#include "System/Globalization/DateTimeStyles.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.DateTimeParse/MatchNumberDelegate m_hebrewNumberParser
System::DateTimeParse::MatchNumberDelegate* System::DateTimeParse::_get_m_hebrewNumberParser() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::DateTimeParse::MatchNumberDelegate*>("System", "DateTimeParse", "m_hebrewNumberParser"));
}
// Autogenerated static field setter
// Set static field: static System.DateTimeParse/MatchNumberDelegate m_hebrewNumberParser
void System::DateTimeParse::_set_m_hebrewNumberParser(System::DateTimeParse::MatchNumberDelegate* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "DateTimeParse", "m_hebrewNumberParser", value));
}
// Autogenerated static field getter
// Get static field: static private System.DateTimeParse/DS[][] dateParsingStates
::Array<::Array<System::DateTimeParse::DS>*>* System::DateTimeParse::_get_dateParsingStates() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Array<System::DateTimeParse::DS>*>*>("System", "DateTimeParse", "dateParsingStates"));
}
// Autogenerated static field setter
// Set static field: static private System.DateTimeParse/DS[][] dateParsingStates
void System::DateTimeParse::_set_dateParsingStates(::Array<::Array<System::DateTimeParse::DS>*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "DateTimeParse", "dateParsingStates", value));
}
// Autogenerated method: System.DateTimeParse.IsDigit
bool System::DateTimeParse::IsDigit(::Il2CppChar ch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "IsDigit", ch));
}
// Autogenerated method: System.DateTimeParse.ParseFraction
bool System::DateTimeParse::ParseFraction(System::__DTString& str, double& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ParseFraction", str, result));
}
// Autogenerated method: System.DateTimeParse.ParseTimeZone
bool System::DateTimeParse::ParseTimeZone(System::__DTString& str, System::TimeSpan& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ParseTimeZone", str, result));
}
// Autogenerated method: System.DateTimeParse.HandleTimeZone
bool System::DateTimeParse::HandleTimeZone(System::__DTString& str, System::DateTimeResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "HandleTimeZone", str, result));
}
// Autogenerated method: System.DateTimeParse.Lex
bool System::DateTimeParse::Lex(System::DateTimeParse::DS dps, System::__DTString& str, System::DateTimeToken& dtok, System::DateTimeRawInfo& raw, System::DateTimeResult& result, System::Globalization::DateTimeFormatInfo*& dtfi, System::Globalization::DateTimeStyles styles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "Lex", dps, str, dtok, raw, result, dtfi, styles));
}
// Autogenerated method: System.DateTimeParse.VerifyValidPunctuation
bool System::DateTimeParse::VerifyValidPunctuation(System::__DTString& str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "VerifyValidPunctuation", str));
}
// Autogenerated method: System.DateTimeParse.GetYearMonthDayOrder
bool System::DateTimeParse::GetYearMonthDayOrder(::CsString* datePattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetYearMonthDayOrder", datePattern, dtfi, order));
}
// Autogenerated method: System.DateTimeParse.GetYearMonthOrder
bool System::DateTimeParse::GetYearMonthOrder(::CsString* pattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetYearMonthOrder", pattern, dtfi, order));
}
// Autogenerated method: System.DateTimeParse.GetMonthDayOrder
bool System::DateTimeParse::GetMonthDayOrder(::CsString* pattern, System::Globalization::DateTimeFormatInfo* dtfi, int& order) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetMonthDayOrder", pattern, dtfi, order));
}
// Autogenerated method: System.DateTimeParse.TryAdjustYear
bool System::DateTimeParse::TryAdjustYear(System::DateTimeResult& result, int year, int& adjustedYear) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "TryAdjustYear", result, year, adjustedYear));
}
// Autogenerated method: System.DateTimeParse.SetDateYMD
bool System::DateTimeParse::SetDateYMD(System::DateTimeResult& result, int year, int month, int day) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "SetDateYMD", result, year, month, day));
}
// Autogenerated method: System.DateTimeParse.SetDateMDY
bool System::DateTimeParse::SetDateMDY(System::DateTimeResult& result, int month, int day, int year) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "SetDateMDY", result, month, day, year));
}
// Autogenerated method: System.DateTimeParse.SetDateDMY
bool System::DateTimeParse::SetDateDMY(System::DateTimeResult& result, int day, int month, int year) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "SetDateDMY", result, day, month, year));
}
// Autogenerated method: System.DateTimeParse.SetDateYDM
bool System::DateTimeParse::SetDateYDM(System::DateTimeResult& result, int year, int day, int month) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "SetDateYDM", result, year, day, month));
}
// Autogenerated method: System.DateTimeParse.GetDefaultYear
void System::DateTimeParse::GetDefaultYear(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "DateTimeParse", "GetDefaultYear", result, styles));
}
// Autogenerated method: System.DateTimeParse.GetDayOfNN
bool System::DateTimeParse::GetDayOfNN(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfNN", result, styles, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfNNN
bool System::DateTimeParse::GetDayOfNNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfNNN", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfMN
bool System::DateTimeParse::GetDayOfMN(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfMN", result, styles, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetHebrewDayOfNM
bool System::DateTimeParse::GetHebrewDayOfNM(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetHebrewDayOfNM", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfNM
bool System::DateTimeParse::GetDayOfNM(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfNM", result, styles, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfMNN
bool System::DateTimeParse::GetDayOfMNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfMNN", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfYNN
bool System::DateTimeParse::GetDayOfYNN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfYNN", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfNNY
bool System::DateTimeParse::GetDayOfNNY(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfNNY", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfYMN
bool System::DateTimeParse::GetDayOfYMN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfYMN", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfYN
bool System::DateTimeParse::GetDayOfYN(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfYN", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.GetDayOfYM
bool System::DateTimeParse::GetDayOfYM(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDayOfYM", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.AdjustTimeMark
void System::DateTimeParse::AdjustTimeMark(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeRawInfo& raw) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "DateTimeParse", "AdjustTimeMark", dtfi, raw));
}
// Autogenerated method: System.DateTimeParse.AdjustHour
bool System::DateTimeParse::AdjustHour(int& hour, System::DateTimeParse::TM timeMark) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "AdjustHour", hour, timeMark));
}
// Autogenerated method: System.DateTimeParse.GetTimeOfN
bool System::DateTimeParse::GetTimeOfN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetTimeOfN", dtfi, result, raw));
}
// Autogenerated method: System.DateTimeParse.GetTimeOfNN
bool System::DateTimeParse::GetTimeOfNN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetTimeOfNN", dtfi, result, raw));
}
// Autogenerated method: System.DateTimeParse.GetTimeOfNNN
bool System::DateTimeParse::GetTimeOfNNN(System::Globalization::DateTimeFormatInfo* dtfi, System::DateTimeResult& result, System::DateTimeRawInfo& raw) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetTimeOfNNN", dtfi, result, raw));
}
// Autogenerated method: System.DateTimeParse.GetDateOfDSN
bool System::DateTimeParse::GetDateOfDSN(System::DateTimeResult& result, System::DateTimeRawInfo& raw) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDateOfDSN", result, raw));
}
// Autogenerated method: System.DateTimeParse.GetDateOfNDS
bool System::DateTimeParse::GetDateOfNDS(System::DateTimeResult& result, System::DateTimeRawInfo& raw) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDateOfNDS", result, raw));
}
// Autogenerated method: System.DateTimeParse.GetDateOfNNDS
bool System::DateTimeParse::GetDateOfNNDS(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "GetDateOfNNDS", result, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.ProcessDateTimeSuffix
bool System::DateTimeParse::ProcessDateTimeSuffix(System::DateTimeResult& result, System::DateTimeRawInfo& raw, System::DateTimeToken& dtok) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ProcessDateTimeSuffix", result, raw, dtok));
}
// Autogenerated method: System.DateTimeParse.ProcessHebrewTerminalState
bool System::DateTimeParse::ProcessHebrewTerminalState(System::DateTimeParse::DS dps, System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ProcessHebrewTerminalState", dps, result, styles, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.ProcessTerminaltState
bool System::DateTimeParse::ProcessTerminaltState(System::DateTimeParse::DS dps, System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles, System::DateTimeRawInfo& raw, System::Globalization::DateTimeFormatInfo* dtfi) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ProcessTerminaltState", dps, result, styles, raw, dtfi));
}
// Autogenerated method: System.DateTimeParse.Parse
System::DateTime System::DateTimeParse::Parse(::CsString* s, System::Globalization::DateTimeFormatInfo* dtfi, System::Globalization::DateTimeStyles styles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "DateTimeParse", "Parse", s, dtfi, styles));
}
// Autogenerated method: System.DateTimeParse.TryParse
bool System::DateTimeParse::TryParse(::CsString* s, System::Globalization::DateTimeFormatInfo* dtfi, System::Globalization::DateTimeStyles styles, System::DateTimeResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "TryParse", s, dtfi, styles, result));
}
// Autogenerated method: System.DateTimeParse.DetermineTimeZoneAdjustments
bool System::DateTimeParse::DetermineTimeZoneAdjustments(System::DateTimeResult& result, System::Globalization::DateTimeStyles styles, bool bTimeOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "DetermineTimeZoneAdjustments", result, styles, bTimeOnly));
}
// Autogenerated method: System.DateTimeParse.DateTimeOffsetTimeZonePostProcessing
bool System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(System::DateTimeResult& result, System::Globalization::DateTimeStyles styles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "DateTimeOffsetTimeZonePostProcessing", result, styles));
}
// Autogenerated method: System.DateTimeParse.AdjustTimeZoneToUniversal
bool System::DateTimeParse::AdjustTimeZoneToUniversal(System::DateTimeResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "AdjustTimeZoneToUniversal", result));
}
// Autogenerated method: System.DateTimeParse.AdjustTimeZoneToLocal
bool System::DateTimeParse::AdjustTimeZoneToLocal(System::DateTimeResult& result, bool bTimeOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "AdjustTimeZoneToLocal", result, bTimeOnly));
}
// Autogenerated method: System.DateTimeParse.ParseISO8601
bool System::DateTimeParse::ParseISO8601(System::DateTimeRawInfo& raw, System::__DTString& str, System::Globalization::DateTimeStyles styles, System::DateTimeResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ParseISO8601", raw, str, styles, result));
}
// Autogenerated method: System.DateTimeParse.MatchHebrewDigits
bool System::DateTimeParse::MatchHebrewDigits(System::__DTString& str, int digitLen, int& number) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "MatchHebrewDigits", str, digitLen, number));
}
// Autogenerated method: System.DateTimeParse.ParseDigits
bool System::DateTimeParse::ParseDigits(System::__DTString& str, int digitLen, int& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ParseDigits", str, digitLen, result));
}
// Autogenerated method: System.DateTimeParse.ParseDigits
bool System::DateTimeParse::ParseDigits(System::__DTString& str, int minDigitLen, int maxDigitLen, int& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "ParseDigits", str, minDigitLen, maxDigitLen, result));
}
// Autogenerated method: System.DateTimeParse.GetDateTimeNow
System::DateTime System::DateTimeParse::GetDateTimeNow(System::DateTimeResult& result, System::Globalization::DateTimeStyles& styles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>("System", "DateTimeParse", "GetDateTimeNow", result, styles));
}
// Autogenerated method: System.DateTimeParse.CheckDefaultDateTime
bool System::DateTimeParse::CheckDefaultDateTime(System::DateTimeResult& result, System::Globalization::Calendar*& cal, System::Globalization::DateTimeStyles styles) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "DateTimeParse", "CheckDefaultDateTime", result, cal, styles));
}
// Autogenerated method: System.DateTimeParse.GetDateTimeParseException
System::Exception* System::DateTimeParse::GetDateTimeParseException(System::DateTimeResult& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("System", "DateTimeParse", "GetDateTimeParseException", result));
}
// Autogenerated method: System.DateTimeParse..cctor
void System::DateTimeParse::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "DateTimeParse", ".cctor"));
}
