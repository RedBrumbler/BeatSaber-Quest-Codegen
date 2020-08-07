// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.GregorianCalendarHelper
#include "System/Globalization/GregorianCalendarHelper.hpp"
// Including type: System.Globalization.Calendar
#include "System/Globalization/Calendar.hpp"
// Including type: System.Globalization.EraInfo
#include "System/Globalization/EraInfo.hpp"
// Including type: System.DayOfWeek
#include "System/DayOfWeek.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Int32[] DaysToMonth365
::Array<int>* System::Globalization::GregorianCalendarHelper::_get_DaysToMonth365() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("System.Globalization", "GregorianCalendarHelper", "DaysToMonth365"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Int32[] DaysToMonth365
void System::Globalization::GregorianCalendarHelper::_set_DaysToMonth365(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "GregorianCalendarHelper", "DaysToMonth365", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Int32[] DaysToMonth366
::Array<int>* System::Globalization::GregorianCalendarHelper::_get_DaysToMonth366() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("System.Globalization", "GregorianCalendarHelper", "DaysToMonth366"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Int32[] DaysToMonth366
void System::Globalization::GregorianCalendarHelper::_set_DaysToMonth366(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "GregorianCalendarHelper", "DaysToMonth366", value));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.get_MaxYear
int System::Globalization::GregorianCalendarHelper::get_MaxYear() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_MaxYear"));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper..ctor
System::Globalization::GregorianCalendarHelper* System::Globalization::GregorianCalendarHelper::New_ctor(System::Globalization::Calendar* cal, ::Array<System::Globalization::EraInfo*>* eraInfo) {
  return (GregorianCalendarHelper*)THROW_UNLESS(il2cpp_utils::New("System.Globalization", "GregorianCalendarHelper", cal, eraInfo));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetGregorianYear
int System::Globalization::GregorianCalendarHelper::GetGregorianYear(int year, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetGregorianYear", year, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.IsValidYear
bool System::Globalization::GregorianCalendarHelper::IsValidYear(int year, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValidYear", year, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetDatePart
int System::Globalization::GregorianCalendarHelper::GetDatePart(int64_t ticks, int part) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetDatePart", ticks, part));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetAbsoluteDate
int64_t System::Globalization::GregorianCalendarHelper::GetAbsoluteDate(int year, int month, int day) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.Globalization", "GregorianCalendarHelper", "GetAbsoluteDate", year, month, day));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.DateToTicks
int64_t System::Globalization::GregorianCalendarHelper::DateToTicks(int year, int month, int day) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.Globalization", "GregorianCalendarHelper", "DateToTicks", year, month, day));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.TimeToTicks
int64_t System::Globalization::GregorianCalendarHelper::TimeToTicks(int hour, int minute, int second, int millisecond) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.Globalization", "GregorianCalendarHelper", "TimeToTicks", hour, minute, second, millisecond));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.CheckTicksRange
void System::Globalization::GregorianCalendarHelper::CheckTicksRange(int64_t ticks) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckTicksRange", ticks));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetDayOfMonth
int System::Globalization::GregorianCalendarHelper::GetDayOfMonth(System::DateTime time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetDayOfMonth", time));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetDayOfWeek
System::DayOfWeek System::Globalization::GregorianCalendarHelper::GetDayOfWeek(System::DateTime time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DayOfWeek>(this, "GetDayOfWeek", time));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetDaysInMonth
int System::Globalization::GregorianCalendarHelper::GetDaysInMonth(int year, int month, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetDaysInMonth", year, month, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetEra
int System::Globalization::GregorianCalendarHelper::GetEra(System::DateTime time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetEra", time));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.get_Eras
::Array<int>* System::Globalization::GregorianCalendarHelper::get_Eras() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>(this, "get_Eras"));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetMonth
int System::Globalization::GregorianCalendarHelper::GetMonth(System::DateTime time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMonth", time));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetMonthsInYear
int System::Globalization::GregorianCalendarHelper::GetMonthsInYear(int year, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMonthsInYear", year, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.GetYear
int System::Globalization::GregorianCalendarHelper::GetYear(System::DateTime time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetYear", time));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.IsLeapYear
bool System::Globalization::GregorianCalendarHelper::IsLeapYear(int year, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsLeapYear", year, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper.ToDateTime
System::DateTime System::Globalization::GregorianCalendarHelper::ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "ToDateTime", year, month, day, hour, minute, second, millisecond, era));
}
// Autogenerated method: System.Globalization.GregorianCalendarHelper..cctor
void System::Globalization::GregorianCalendarHelper::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Globalization", "GregorianCalendarHelper", ".cctor"));
}