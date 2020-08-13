// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int16
#include "System/Int16.hpp"
// Including type: System.Globalization.NumberFormatInfo
#include "System/Globalization/NumberFormatInfo.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.NumberStyles
#include "System/Globalization/NumberStyles.hpp"
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
// Get static field: static public System.Int16 MaxValue
int16_t System::Int16::_get_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int16_t>("System", "Int16", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Int16 MaxValue
void System::Int16::_set_MaxValue(int16_t value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Int16", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int16 MinValue
int16_t System::Int16::_get_MinValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int16_t>("System", "Int16", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Int16 MinValue
void System::Int16::_set_MinValue(int16_t value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Int16", "MinValue", value));
}
// Autogenerated method: System.Int16.ToString
::CsString* System::Int16::ToString(::CsString* format, System::Globalization::NumberFormatInfo* info) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format, info));
}
// Autogenerated method: System.Int16.Parse
int16_t System::Int16::Parse(::CsString* s, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>("System", "Int16", "Parse", s, provider));
}
// Autogenerated method: System.Int16.Parse
int16_t System::Int16::Parse(::CsString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>("System", "Int16", "Parse", s, style, provider));
}
// Autogenerated method: System.Int16.Parse
int16_t System::Int16::Parse(::CsString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>("System", "Int16", "Parse", s, style, info));
}
// Autogenerated method: System.Int16.CompareTo
int System::Int16::CompareTo(::CsObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::Int16::System_IComparable_CompareTo(::CsObject* value) {
  return CompareTo(value);
}
// Autogenerated method: System.Int16.CompareTo
int System::Int16::CompareTo(int16_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.Int16.Equals
bool System::Int16::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Int16.Equals
bool System::Int16::Equals(int16_t obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Int16.GetHashCode
int System::Int16::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.Int16.ToString
::CsString* System::Int16::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
}
// Autogenerated method: System.Int16.ToString
::CsString* System::Int16::ToString(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", provider));
}
// Autogenerated method: System.Int16.ToString
::CsString* System::Int16::ToString(::CsString* format, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format, provider));
}
// Autogenerated method: System.Int16.GetTypeCode
System::TypeCode System::Int16::GetTypeCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeCode>(*this, "GetTypeCode"));
}
// Autogenerated method: System.Int16.System.IConvertible.ToBoolean
bool System::Int16::System_IConvertible_ToBoolean(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "System.IConvertible.ToBoolean", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToChar
::Il2CppChar System::Int16::System_IConvertible_ToChar(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(*this, "System.IConvertible.ToChar", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToSByte
int8_t System::Int16::System_IConvertible_ToSByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int8_t>(*this, "System.IConvertible.ToSByte", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToByte
uint8_t System::Int16::System_IConvertible_ToByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "System.IConvertible.ToByte", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToInt16
int16_t System::Int16::System_IConvertible_ToInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>(*this, "System.IConvertible.ToInt16", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToUInt16
uint16_t System::Int16::System_IConvertible_ToUInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint16_t>(*this, "System.IConvertible.ToUInt16", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToInt32
int System::Int16::System_IConvertible_ToInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.IConvertible.ToInt32", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToUInt32
uint System::Int16::System_IConvertible_ToUInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(*this, "System.IConvertible.ToUInt32", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToInt64
int64_t System::Int16::System_IConvertible_ToInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "System.IConvertible.ToInt64", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToUInt64
uint64_t System::Int16::System_IConvertible_ToUInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(*this, "System.IConvertible.ToUInt64", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToSingle
float System::Int16::System_IConvertible_ToSingle(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "System.IConvertible.ToSingle", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToDouble
double System::Int16::System_IConvertible_ToDouble(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "System.IConvertible.ToDouble", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToDecimal
System::Decimal System::Int16::System_IConvertible_ToDecimal(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Decimal>(*this, "System.IConvertible.ToDecimal", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToDateTime
System::DateTime System::Int16::System_IConvertible_ToDateTime(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(*this, "System.IConvertible.ToDateTime", provider));
}
// Autogenerated method: System.Int16.System.IConvertible.ToType
::CsObject* System::Int16::System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "System.IConvertible.ToType", type, provider));
}
