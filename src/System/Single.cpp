// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
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
// Get static field: static public System.Single MinValue
float System::Single::_get_MinValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Single MinValue
void System::Single::_set_MinValue(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "MinValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single Epsilon
float System::Single::_get_Epsilon() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "Epsilon"));
}
// Autogenerated static field setter
// Set static field: static public System.Single Epsilon
void System::Single::_set_Epsilon(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "Epsilon", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single MaxValue
float System::Single::_get_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public System.Single MaxValue
void System::Single::_set_MaxValue(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single PositiveInfinity
float System::Single::_get_PositiveInfinity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "PositiveInfinity"));
}
// Autogenerated static field setter
// Set static field: static public System.Single PositiveInfinity
void System::Single::_set_PositiveInfinity(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "PositiveInfinity", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single NegativeInfinity
float System::Single::_get_NegativeInfinity() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "NegativeInfinity"));
}
// Autogenerated static field setter
// Set static field: static public System.Single NegativeInfinity
void System::Single::_set_NegativeInfinity(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "NegativeInfinity", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single NaN
float System::Single::_get_NaN() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("System", "Single", "NaN"));
}
// Autogenerated static field setter
// Set static field: static public System.Single NaN
void System::Single::_set_NaN(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "Single", "NaN", value));
}
// Autogenerated method: System.Single.IsInfinity
bool System::Single::IsInfinity(float f) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "IsInfinity", f));
}
// Autogenerated method: System.Single.IsPositiveInfinity
bool System::Single::IsPositiveInfinity(float f) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "IsPositiveInfinity", f));
}
// Autogenerated method: System.Single.IsNegativeInfinity
bool System::Single::IsNegativeInfinity(float f) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "IsNegativeInfinity", f));
}
// Autogenerated method: System.Single.IsNaN
bool System::Single::IsNaN(float f) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "IsNaN", f));
}
// Autogenerated method: System.Single.ToString
::CsString* System::Single::ToString(::CsString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format));
}
// Autogenerated method: System.Single.Parse
float System::Single::Parse(::CsString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("System", "Single", "Parse", s));
}
// Autogenerated method: System.Single.Parse
float System::Single::Parse(::CsString* s, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("System", "Single", "Parse", s, provider));
}
// Autogenerated method: System.Single.Parse
float System::Single::Parse(::CsString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("System", "Single", "Parse", s, style, provider));
}
// Autogenerated method: System.Single.Parse
float System::Single::Parse(::CsString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("System", "Single", "Parse", s, style, info));
}
// Autogenerated method: System.Single.TryParse
bool System::Single::TryParse(::CsString* s, float& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "TryParse", s, result));
}
// Autogenerated method: System.Single.TryParse
bool System::Single::TryParse(::CsString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, float& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "TryParse", s, style, provider, result));
}
// Autogenerated method: System.Single.TryParse
bool System::Single::TryParse(::CsString* s, System::Globalization::NumberStyles style, System::Globalization::NumberFormatInfo* info, float& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "Single", "TryParse", s, style, info, result));
}
// Autogenerated method: System.Single.CompareTo
int System::Single::CompareTo(::CsObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::Single::System_IComparable_CompareTo(::CsObject* value) {
  return CompareTo(value);
}
// Autogenerated method: System.Single.CompareTo
int System::Single::CompareTo(float value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.Single.Equals
bool System::Single::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Single.Equals
bool System::Single::Equals(float obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Single.GetHashCode
int System::Single::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.Single.ToString
::CsString* System::Single::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString"));
}
// Autogenerated method: System.Single.ToString
::CsString* System::Single::ToString(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", provider));
}
// Autogenerated method: System.Single.ToString
::CsString* System::Single::ToString(::CsString* format, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "ToString", format, provider));
}
// Autogenerated method: System.Single.GetTypeCode
System::TypeCode System::Single::GetTypeCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeCode>(*this, "GetTypeCode"));
}
// Autogenerated method: System.Single.System.IConvertible.ToBoolean
bool System::Single::System_IConvertible_ToBoolean(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "System.IConvertible.ToBoolean", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToChar
::Il2CppChar System::Single::System_IConvertible_ToChar(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(*this, "System.IConvertible.ToChar", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToSByte
int8_t System::Single::System_IConvertible_ToSByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int8_t>(*this, "System.IConvertible.ToSByte", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToByte
uint8_t System::Single::System_IConvertible_ToByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "System.IConvertible.ToByte", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToInt16
int16_t System::Single::System_IConvertible_ToInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>(*this, "System.IConvertible.ToInt16", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToUInt16
uint16_t System::Single::System_IConvertible_ToUInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint16_t>(*this, "System.IConvertible.ToUInt16", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToInt32
int System::Single::System_IConvertible_ToInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.IConvertible.ToInt32", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToUInt32
uint System::Single::System_IConvertible_ToUInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(*this, "System.IConvertible.ToUInt32", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToInt64
int64_t System::Single::System_IConvertible_ToInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "System.IConvertible.ToInt64", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToUInt64
uint64_t System::Single::System_IConvertible_ToUInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(*this, "System.IConvertible.ToUInt64", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToSingle
float System::Single::System_IConvertible_ToSingle(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "System.IConvertible.ToSingle", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToDouble
double System::Single::System_IConvertible_ToDouble(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "System.IConvertible.ToDouble", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToDecimal
System::Decimal System::Single::System_IConvertible_ToDecimal(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Decimal>(*this, "System.IConvertible.ToDecimal", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToDateTime
System::DateTime System::Single::System_IConvertible_ToDateTime(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(*this, "System.IConvertible.ToDateTime", provider));
}
// Autogenerated method: System.Single.System.IConvertible.ToType
::CsObject* System::Single::System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "System.IConvertible.ToType", type, provider));
}
