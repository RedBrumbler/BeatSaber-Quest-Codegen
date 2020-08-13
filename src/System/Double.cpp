// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Double
#include "System/Double.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.NumberStyles
#include "System/Globalization/NumberStyles.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Double MinValue
double System::Double::_get_MinValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Double MinValue
void System::Double::_set_MinValue(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "MinValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Double MaxValue
double System::Double::_get_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Double MaxValue
void System::Double::_set_MaxValue(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Double Epsilon
double System::Double::_get_Epsilon() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "Epsilon"));
}
// Autogenerated static field setter
// Set static field: static public System.Double Epsilon
void System::Double::_set_Epsilon(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "Epsilon", value));
}
// Autogenerated static field getter
// Get static field: static public System.Double NegativeInfinity
double System::Double::_get_NegativeInfinity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "NegativeInfinity"));
}
// Autogenerated static field setter
// Set static field: static public System.Double NegativeInfinity
void System::Double::_set_NegativeInfinity(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "NegativeInfinity", value));
}
// Autogenerated static field getter
// Get static field: static public System.Double PositiveInfinity
double System::Double::_get_PositiveInfinity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "PositiveInfinity"));
}
// Autogenerated static field setter
// Set static field: static public System.Double PositiveInfinity
void System::Double::_set_PositiveInfinity(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "PositiveInfinity", value));
}
// Autogenerated static field getter
// Get static field: static public System.Double NaN
double System::Double::_get_NaN() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "NaN"));
}
// Autogenerated static field setter
// Set static field: static public System.Double NaN
void System::Double::_set_NaN(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "NaN", value));
}
// Autogenerated static field getter
// Get static field: static System.Double NegativeZero
double System::Double::_get_NegativeZero() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("System", "Double", "NegativeZero"));
}
// Autogenerated static field setter
// Set static field: static System.Double NegativeZero
void System::Double::_set_NegativeZero(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Double", "NegativeZero", value));
}
// Autogenerated method: System.Double.IsInfinity
bool System::Double::IsInfinity(double d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "IsInfinity", d));
}
// Autogenerated method: System.Double.IsPositiveInfinity
bool System::Double::IsPositiveInfinity(double d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "IsPositiveInfinity", d));
}
// Autogenerated method: System.Double.IsNegativeInfinity
bool System::Double::IsNegativeInfinity(double d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "IsNegativeInfinity", d));
}
// Autogenerated method: System.Double.IsNaN
bool System::Double::IsNaN(double d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "IsNaN", d));
}
// Autogenerated method: System.Double.ToString
::CsString* System::Double::ToString(::CsString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format));
}
// Autogenerated method: System.Double.Parse
double System::Double::Parse(::CsString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("System", "Double", "Parse", s));
}
// Autogenerated method: System.Double.Parse
double System::Double::Parse(::CsString* s, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("System", "Double", "Parse", s, provider));
}
// Autogenerated method: System.Double.Parse
double System::Double::Parse(::CsString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("System", "Double", "Parse", s, style, provider));
}
// Autogenerated method: System.Double.Parse
double System::Double::Parse(::CsString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("System", "Double", "Parse", s, style, info));
}
// Autogenerated method: System.Double.TryParse
bool System::Double::TryParse(::CsString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, double& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "TryParse", s, style, provider, result));
}
// Autogenerated method: System.Double.TryParse
bool System::Double::TryParse(::CsString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, double& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Double", "TryParse", s, style, info, result));
}
// Autogenerated method: System.Double..cctor
void System::Double::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "Double", ".cctor"));
}
// Autogenerated method: System.Double.CompareTo
int System::Double::CompareTo(::CsObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::Double::System_IComparable_CompareTo(::CsObject* value) {
  return CompareTo(value);
}
// Autogenerated method: System.Double.CompareTo
int System::Double::CompareTo(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.Double.Equals
bool System::Double::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Double.Equals
bool System::Double::Equals(double obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Double.GetHashCode
int System::Double::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.Double.ToString
::CsString* System::Double::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
}
// Autogenerated method: System.Double.ToString
::CsString* System::Double::ToString(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", provider));
}
// Autogenerated method: System.Double.ToString
::CsString* System::Double::ToString(::CsString* format, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format, provider));
}
// Autogenerated method: System.Double.GetTypeCode
System::TypeCode System::Double::GetTypeCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeCode>(*this, "GetTypeCode"));
}
// Autogenerated method: System.Double.System.IConvertible.ToBoolean
bool System::Double::System_IConvertible_ToBoolean(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "System.IConvertible.ToBoolean", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToChar
::Il2CppChar System::Double::System_IConvertible_ToChar(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(*this, "System.IConvertible.ToChar", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToSByte
int8_t System::Double::System_IConvertible_ToSByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int8_t>(*this, "System.IConvertible.ToSByte", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToByte
uint8_t System::Double::System_IConvertible_ToByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "System.IConvertible.ToByte", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToInt16
int16_t System::Double::System_IConvertible_ToInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>(*this, "System.IConvertible.ToInt16", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToUInt16
uint16_t System::Double::System_IConvertible_ToUInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint16_t>(*this, "System.IConvertible.ToUInt16", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToInt32
int System::Double::System_IConvertible_ToInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.IConvertible.ToInt32", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToUInt32
uint System::Double::System_IConvertible_ToUInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(*this, "System.IConvertible.ToUInt32", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToInt64
int64_t System::Double::System_IConvertible_ToInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "System.IConvertible.ToInt64", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToUInt64
uint64_t System::Double::System_IConvertible_ToUInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(*this, "System.IConvertible.ToUInt64", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToSingle
float System::Double::System_IConvertible_ToSingle(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "System.IConvertible.ToSingle", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToDouble
double System::Double::System_IConvertible_ToDouble(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "System.IConvertible.ToDouble", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToDecimal
System::Decimal System::Double::System_IConvertible_ToDecimal(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Decimal>(*this, "System.IConvertible.ToDecimal", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToDateTime
System::DateTime System::Double::System_IConvertible_ToDateTime(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(*this, "System.IConvertible.ToDateTime", provider));
}
// Autogenerated method: System.Double.System.IConvertible.ToType
::CsObject* System::Double::System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "System.IConvertible.ToType", type, provider));
}
