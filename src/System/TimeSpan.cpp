// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.TimeSpan Zero
System::TimeSpan System::TimeSpan::_get_Zero() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System", "TimeSpan", "Zero"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.TimeSpan Zero
void System::TimeSpan::_set_Zero(System::TimeSpan value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeSpan", "Zero", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.TimeSpan MaxValue
System::TimeSpan System::TimeSpan::_get_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System", "TimeSpan", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.TimeSpan MaxValue
void System::TimeSpan::_set_MaxValue(System::TimeSpan value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeSpan", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.TimeSpan MinValue
System::TimeSpan System::TimeSpan::_get_MinValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::TimeSpan>("System", "TimeSpan", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.TimeSpan MinValue
void System::TimeSpan::_set_MinValue(System::TimeSpan value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeSpan", "MinValue", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean _legacyConfigChecked
bool System::TimeSpan::_get__legacyConfigChecked() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "TimeSpan", "_legacyConfigChecked"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean _legacyConfigChecked
void System::TimeSpan::_set__legacyConfigChecked(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeSpan", "_legacyConfigChecked", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean _legacyMode
bool System::TimeSpan::_get__legacyMode() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "TimeSpan", "_legacyMode"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean _legacyMode
void System::TimeSpan::_set__legacyMode(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TimeSpan", "_legacyMode", value));
}
// Autogenerated method: System.TimeSpan..ctor
System::TimeSpan* System::TimeSpan::New_ctor(int64_t ticks) {
  return (TimeSpan*)THROW_UNLESS(il2cpp_utils::New("System", "TimeSpan", ticks));
}
// Autogenerated method: System.TimeSpan..ctor
System::TimeSpan* System::TimeSpan::New_ctor(int hours, int minutes, int seconds) {
  return (TimeSpan*)THROW_UNLESS(il2cpp_utils::New("System", "TimeSpan", hours, minutes, seconds));
}
// Autogenerated method: System.TimeSpan..ctor
System::TimeSpan* System::TimeSpan::New_ctor(int days, int hours, int minutes, int seconds, int milliseconds) {
  return (TimeSpan*)THROW_UNLESS(il2cpp_utils::New("System", "TimeSpan", days, hours, minutes, seconds, milliseconds));
}
// Autogenerated method: System.TimeSpan.get_Ticks
int64_t System::TimeSpan::get_Ticks() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "get_Ticks"));
}
// Autogenerated method: System.TimeSpan.get_Hours
int System::TimeSpan::get_Hours() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Hours"));
}
// Autogenerated method: System.TimeSpan.get_Minutes
int System::TimeSpan::get_Minutes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Minutes"));
}
// Autogenerated method: System.TimeSpan.get_Seconds
int System::TimeSpan::get_Seconds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Seconds"));
}
// Autogenerated method: System.TimeSpan.get_TotalHours
double System::TimeSpan::get_TotalHours() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "get_TotalHours"));
}
// Autogenerated method: System.TimeSpan.get_TotalMilliseconds
double System::TimeSpan::get_TotalMilliseconds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "get_TotalMilliseconds"));
}
// Autogenerated method: System.TimeSpan.get_TotalMinutes
double System::TimeSpan::get_TotalMinutes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "get_TotalMinutes"));
}
// Autogenerated method: System.TimeSpan.get_TotalSeconds
double System::TimeSpan::get_TotalSeconds() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "get_TotalSeconds"));
}
// Autogenerated method: System.TimeSpan.Add
System::TimeSpan System::TimeSpan::Add(System::TimeSpan ts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(*this, "Add", ts));
}
// Autogenerated method: System.TimeSpan.FromDays
System::TimeSpan System::TimeSpan::FromDays(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromDays", value));
}
// Autogenerated method: System.TimeSpan.Duration
System::TimeSpan System::TimeSpan::Duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(*this, "Duration"));
}
// Autogenerated method: System.TimeSpan.FromHours
System::TimeSpan System::TimeSpan::FromHours(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromHours", value));
}
// Autogenerated method: System.TimeSpan.Interval
System::TimeSpan System::TimeSpan::Interval(double value, int scale) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "Interval", value, scale));
}
// Autogenerated method: System.TimeSpan.FromMilliseconds
System::TimeSpan System::TimeSpan::FromMilliseconds(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromMilliseconds", value));
}
// Autogenerated method: System.TimeSpan.FromMinutes
System::TimeSpan System::TimeSpan::FromMinutes(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromMinutes", value));
}
// Autogenerated method: System.TimeSpan.Negate
System::TimeSpan System::TimeSpan::Negate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(*this, "Negate"));
}
// Autogenerated method: System.TimeSpan.FromSeconds
System::TimeSpan System::TimeSpan::FromSeconds(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromSeconds", value));
}
// Autogenerated method: System.TimeSpan.Subtract
System::TimeSpan System::TimeSpan::Subtract(System::TimeSpan ts) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(*this, "Subtract", ts));
}
// Autogenerated method: System.TimeSpan.FromTicks
System::TimeSpan System::TimeSpan::FromTicks(int64_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "FromTicks", value));
}
// Autogenerated method: System.TimeSpan.TimeToTicks
int64_t System::TimeSpan::TimeToTicks(int hour, int minute, int second) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System", "TimeSpan", "TimeToTicks", hour, minute, second));
}
// Autogenerated method: System.TimeSpan.ToString
::Il2CppString* System::TimeSpan::ToString(::Il2CppString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", format));
}
// Autogenerated method: System.TimeSpan.GetLegacyFormatMode
bool System::TimeSpan::GetLegacyFormatMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "GetLegacyFormatMode"));
}
// Autogenerated method: System.TimeSpan.get_LegacyMode
bool System::TimeSpan::get_LegacyMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "get_LegacyMode"));
}
// Autogenerated method: System.TimeSpan..cctor
void System::TimeSpan::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TimeSpan", ".cctor"));
}
// Autogenerated method: System.TimeSpan.CompareTo
int System::TimeSpan::CompareTo(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::TimeSpan::System_IComparable_CompareTo(::Il2CppObject* value) {
  return CompareTo(value);
}
// Autogenerated method: System.TimeSpan.CompareTo
int System::TimeSpan::CompareTo(System::TimeSpan value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.TimeSpan.Equals
bool System::TimeSpan::Equals(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", value));
}
// Autogenerated method: System.TimeSpan.Equals
bool System::TimeSpan::Equals(System::TimeSpan obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.TimeSpan.GetHashCode
int System::TimeSpan::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.TimeSpan.ToString
::Il2CppString* System::TimeSpan::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
// Autogenerated method: System.TimeSpan.ToString
::Il2CppString* System::TimeSpan::ToString(::Il2CppString* format, System::IFormatProvider* formatProvider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", format, formatProvider));
}
// Autogenerated method: System.TimeSpan.op_Subtraction
System::TimeSpan System::operator-(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "op_Subtraction", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_Addition
System::TimeSpan System::operator+(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>("System", "TimeSpan", "op_Addition", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_Equality
bool System::operator ==(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_Equality", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_Inequality
bool System::operator !=(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_Inequality", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_LessThan
bool System::operator <(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_LessThan", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_LessThanOrEqual
bool System::operator <=(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_LessThanOrEqual", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_GreaterThan
bool System::operator >(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_GreaterThan", t1, t2));
}
// Autogenerated method: System.TimeSpan.op_GreaterThanOrEqual
bool System::operator >=(const System::TimeSpan& t1, const System::TimeSpan& t2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "TimeSpan", "op_GreaterThanOrEqual", t1, t2));
}