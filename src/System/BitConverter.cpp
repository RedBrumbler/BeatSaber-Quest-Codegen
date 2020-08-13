// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.BitConverter
#include "System/BitConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Boolean IsLittleEndian
bool System::BitConverter::_get_IsLittleEndian() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System", "BitConverter", "IsLittleEndian"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Boolean IsLittleEndian
void System::BitConverter::_set_IsLittleEndian(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "BitConverter", "IsLittleEndian", value));
}
// Autogenerated method: System.BitConverter.AmILittleEndian
bool System::BitConverter::AmILittleEndian() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "BitConverter", "AmILittleEndian"));
}
// Autogenerated method: System.BitConverter.GetBytes
::Array<uint8_t>* System::BitConverter::GetBytes(int16_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System", "BitConverter", "GetBytes", value));
}
// Autogenerated method: System.BitConverter.GetBytes
::Array<uint8_t>* System::BitConverter::GetBytes(int value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System", "BitConverter", "GetBytes", value));
}
// Autogenerated method: System.BitConverter.GetBytes
::Array<uint8_t>* System::BitConverter::GetBytes(int64_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System", "BitConverter", "GetBytes", value));
}
// Autogenerated method: System.BitConverter.GetBytes
::Array<uint8_t>* System::BitConverter::GetBytes(uint16_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System", "BitConverter", "GetBytes", value));
}
// Autogenerated method: System.BitConverter.GetBytes
::Array<uint8_t>* System::BitConverter::GetBytes(uint value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System", "BitConverter", "GetBytes", value));
}
// Autogenerated method: System.BitConverter.ToInt16
int16_t System::BitConverter::ToInt16(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>("System", "BitConverter", "ToInt16", value, startIndex));
}
// Autogenerated method: System.BitConverter.ToInt32
int System::BitConverter::ToInt32(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System", "BitConverter", "ToInt32", value, startIndex));
}
// Autogenerated method: System.BitConverter.ToInt64
int64_t System::BitConverter::ToInt64(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System", "BitConverter", "ToInt64", value, startIndex));
}
// Autogenerated method: System.BitConverter.ToUInt16
uint16_t System::BitConverter::ToUInt16(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint16_t>("System", "BitConverter", "ToUInt16", value, startIndex));
}
// Autogenerated method: System.BitConverter.ToUInt32
uint System::BitConverter::ToUInt32(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "BitConverter", "ToUInt32", value, startIndex));
}
// Autogenerated method: System.BitConverter.ToUInt64
uint64_t System::BitConverter::ToUInt64(::Array<uint8_t>* value, int startIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>("System", "BitConverter", "ToUInt64", value, startIndex));
}
// Autogenerated method: System.BitConverter.GetHexValue
::Il2CppChar System::BitConverter::GetHexValue(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System", "BitConverter", "GetHexValue", i));
}
// Autogenerated method: System.BitConverter.ToString
::CsString* System::BitConverter::ToString(::Array<uint8_t>* value, int startIndex, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "BitConverter", "ToString", value, startIndex, length));
}
// Autogenerated method: System.BitConverter.ToString
::CsString* System::BitConverter::ToString(::Array<uint8_t>* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "BitConverter", "ToString", value));
}
// Autogenerated method: System.BitConverter.DoubleToInt64Bits
int64_t System::BitConverter::DoubleToInt64Bits(double value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System", "BitConverter", "DoubleToInt64Bits", value));
}
// Autogenerated method: System.BitConverter.Int64BitsToDouble
double System::BitConverter::Int64BitsToDouble(int64_t value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("System", "BitConverter", "Int64BitsToDouble", value));
}
// Autogenerated method: System.BitConverter..cctor
void System::BitConverter::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "BitConverter", ".cctor"));
}
