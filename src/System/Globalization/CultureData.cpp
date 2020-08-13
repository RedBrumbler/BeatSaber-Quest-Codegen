// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.CultureData
#include "System/Globalization/CultureData.hpp"
// Including type: System.Globalization.CalendarData
#include "System/Globalization/CalendarData.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Globalization.CultureData s_Invariant
System::Globalization::CultureData* System::Globalization::CultureData::_get_s_Invariant() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::CultureData*>("System.Globalization", "CultureData", "s_Invariant"));
}
// Autogenerated static field setter
// Set static field: static private System.Globalization.CultureData s_Invariant
void System::Globalization::CultureData::_set_s_Invariant(System::Globalization::CultureData* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "CultureData", "s_Invariant", value));
}
// Autogenerated method: System.Globalization.CultureData..ctor
System::Globalization::CultureData* System::Globalization::CultureData::New_ctor(::CsString* name) {
  return (CultureData*)THROW_UNLESS(il2cpp_utils::New("System.Globalization", "CultureData", name));
}
// Autogenerated method: System.Globalization.CultureData.get_Invariant
System::Globalization::CultureData* System::Globalization::CultureData::get_Invariant() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "get_Invariant"));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::CsString* cultureName, bool useUserOverride) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", cultureName, useUserOverride));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::CsString* cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, ::CsString* iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, ::CsString* listSeparator) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang, ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator));
}
// Autogenerated method: System.Globalization.CultureData.GetCultureData
System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(int culture, bool bUseUserOverride) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CultureData*>("System.Globalization", "CultureData", "GetCultureData", culture, bUseUserOverride));
}
// Autogenerated method: System.Globalization.CultureData.fill_culture_data
void System::Globalization::CultureData::fill_culture_data(int datetimeIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "fill_culture_data", datetimeIndex));
}
// Autogenerated method: System.Globalization.CultureData.GetCalendar
System::Globalization::CalendarData* System::Globalization::CultureData::GetCalendar(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::CalendarData*>(this, "GetCalendar", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.get_LongTimes
::Array<::CsString*>* System::Globalization::CultureData::get_LongTimes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "get_LongTimes"));
}
// Autogenerated method: System.Globalization.CultureData.get_ShortTimes
::Array<::CsString*>* System::Globalization::CultureData::get_ShortTimes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "get_ShortTimes"));
}
// Autogenerated method: System.Globalization.CultureData.get_SISO639LANGNAME
::CsString* System::Globalization::CultureData::get_SISO639LANGNAME() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_SISO639LANGNAME"));
}
// Autogenerated method: System.Globalization.CultureData.get_IFIRSTDAYOFWEEK
int System::Globalization::CultureData::get_IFIRSTDAYOFWEEK() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_IFIRSTDAYOFWEEK"));
}
// Autogenerated method: System.Globalization.CultureData.get_IFIRSTWEEKOFYEAR
int System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_IFIRSTWEEKOFYEAR"));
}
// Autogenerated method: System.Globalization.CultureData.get_SAM1159
::CsString* System::Globalization::CultureData::get_SAM1159() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_SAM1159"));
}
// Autogenerated method: System.Globalization.CultureData.get_SPM2359
::CsString* System::Globalization::CultureData::get_SPM2359() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_SPM2359"));
}
// Autogenerated method: System.Globalization.CultureData.get_TimeSeparator
::CsString* System::Globalization::CultureData::get_TimeSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_TimeSeparator"));
}
// Autogenerated method: System.Globalization.CultureData.get_CalendarIds
::Array<int>* System::Globalization::CultureData::get_CalendarIds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_CalendarIds"));
}
// Autogenerated method: System.Globalization.CultureData.get_IsInvariantCulture
bool System::Globalization::CultureData::get_IsInvariantCulture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsInvariantCulture"));
}
// Autogenerated method: System.Globalization.CultureData.get_CultureName
::CsString* System::Globalization::CultureData::get_CultureName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_CultureName"));
}
// Autogenerated method: System.Globalization.CultureData.get_SCOMPAREINFO
::CsString* System::Globalization::CultureData::get_SCOMPAREINFO() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_SCOMPAREINFO"));
}
// Autogenerated method: System.Globalization.CultureData.get_STEXTINFO
::CsString* System::Globalization::CultureData::get_STEXTINFO() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_STEXTINFO"));
}
// Autogenerated method: System.Globalization.CultureData.get_ILANGUAGE
int System::Globalization::CultureData::get_ILANGUAGE() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ILANGUAGE"));
}
// Autogenerated method: System.Globalization.CultureData.get_UseUserOverride
bool System::Globalization::CultureData::get_UseUserOverride() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_UseUserOverride"));
}
// Autogenerated method: System.Globalization.CultureData.EraNames
::Array<::CsString*>* System::Globalization::CultureData::EraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "EraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbrevEraNames
::Array<::CsString*>* System::Globalization::CultureData::AbbrevEraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "AbbrevEraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedEnglishEraNames
::Array<::CsString*>* System::Globalization::CultureData::AbbreviatedEnglishEraNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "AbbreviatedEnglishEraNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.ShortDates
::Array<::CsString*>* System::Globalization::CultureData::ShortDates(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "ShortDates", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.LongDates
::Array<::CsString*>* System::Globalization::CultureData::LongDates(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "LongDates", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.YearMonths
::Array<::CsString*>* System::Globalization::CultureData::YearMonths(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "YearMonths", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.DayNames
::Array<::CsString*>* System::Globalization::CultureData::DayNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "DayNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedDayNames
::Array<::CsString*>* System::Globalization::CultureData::AbbreviatedDayNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "AbbreviatedDayNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.MonthNames
::Array<::CsString*>* System::Globalization::CultureData::MonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "MonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.GenitiveMonthNames
::Array<::CsString*>* System::Globalization::CultureData::GenitiveMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "GenitiveMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedMonthNames
::Array<::CsString*>* System::Globalization::CultureData::AbbreviatedMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "AbbreviatedMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.AbbreviatedGenitiveMonthNames
::Array<::CsString*>* System::Globalization::CultureData::AbbreviatedGenitiveMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "AbbreviatedGenitiveMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.LeapYearMonthNames
::Array<::CsString*>* System::Globalization::CultureData::LeapYearMonthNames(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "LeapYearMonthNames", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.MonthDay
::CsString* System::Globalization::CultureData::MonthDay(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "MonthDay", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.DateSeparator
::CsString* System::Globalization::CultureData::DateSeparator(int calendarId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "DateSeparator", calendarId));
}
// Autogenerated method: System.Globalization.CultureData.GetDateSeparator
::CsString* System::Globalization::CultureData::GetDateSeparator(::CsString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "CultureData", "GetDateSeparator", format));
}
// Autogenerated method: System.Globalization.CultureData.GetSeparator
::CsString* System::Globalization::CultureData::GetSeparator(::CsString* format, ::CsString* timeParts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "CultureData", "GetSeparator", format, timeParts));
}
// Autogenerated method: System.Globalization.CultureData.IndexOfTimePart
int System::Globalization::CultureData::IndexOfTimePart(::CsString* format, int startIndex, ::CsString* timeParts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "CultureData", "IndexOfTimePart", format, startIndex, timeParts));
}
// Autogenerated method: System.Globalization.CultureData.UnescapeNlsString
::CsString* System::Globalization::CultureData::UnescapeNlsString(::CsString* str, int start, int end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "CultureData", "UnescapeNlsString", str, start, end));
}
// Autogenerated method: System.Globalization.CultureData.ReescapeWin32Strings
::Array<::CsString*>* System::Globalization::CultureData::ReescapeWin32Strings(::Array<::CsString*>* array) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>("System.Globalization", "CultureData", "ReescapeWin32Strings", array));
}
// Autogenerated method: System.Globalization.CultureData.ReescapeWin32String
::CsString* System::Globalization::CultureData::ReescapeWin32String(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Globalization", "CultureData", "ReescapeWin32String", str));
}
// Autogenerated method: System.Globalization.CultureData.GetNFIValues
void System::Globalization::CultureData::GetNFIValues(System::Globalization::NumberFormatInfo* nfi) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetNFIValues", nfi));
}
// Autogenerated method: System.Globalization.CultureData.fill_number_data
void System::Globalization::CultureData::fill_number_data(System::Globalization::NumberFormatInfo* nfi, int numberIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "CultureData", "fill_number_data", nfi, numberIndex));
}
