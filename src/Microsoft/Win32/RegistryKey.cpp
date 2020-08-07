// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.RegistryKey
#include "Microsoft/Win32/RegistryKey.hpp"
// Including type: Microsoft.Win32.SafeHandles.SafeRegistryHandle
#include "Microsoft/Win32/SafeHandles/SafeRegistryHandle.hpp"
// Including type: Microsoft.Win32.IRegistryApi
#include "Microsoft/Win32/IRegistryApi.hpp"
// Including type: Microsoft.Win32.RegistryHive
#include "Microsoft/Win32/RegistryHive.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
Microsoft::Win32::IRegistryApi* Microsoft::Win32::RegistryKey::_get_RegistryApi() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Microsoft::Win32::IRegistryApi*>("Microsoft.Win32", "RegistryKey", "RegistryApi"));
}
// Autogenerated static field setter
// Set static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
void Microsoft::Win32::RegistryKey::_set_RegistryApi(Microsoft::Win32::IRegistryApi* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Microsoft.Win32", "RegistryKey", "RegistryApi", value));
}
// Autogenerated method: Microsoft.Win32.RegistryKey..cctor
void Microsoft::Win32::RegistryKey::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Microsoft.Win32", "RegistryKey", ".cctor"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey..ctor
Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::New_ctor(Microsoft::Win32::RegistryHive hiveId) {
  return (RegistryKey*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "RegistryKey", hiveId));
}
// Autogenerated method: Microsoft.Win32.RegistryKey..ctor
Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::New_ctor(Microsoft::Win32::RegistryHive hiveId, System::IntPtr keyHandle, bool remoteRoot) {
  return (RegistryKey*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "RegistryKey", hiveId, keyHandle, remoteRoot));
}
// Autogenerated method: Microsoft.Win32.RegistryKey..ctor
Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::New_ctor(::Il2CppObject* data, ::Il2CppString* keyName, bool writable) {
  return (RegistryKey*)THROW_UNLESS(il2cpp_utils::New("Microsoft.Win32", "RegistryKey", data, keyName, writable));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.IsEquals
bool Microsoft::Win32::RegistryKey::IsEquals(Microsoft::Win32::RegistryKey* a, Microsoft::Win32::RegistryKey* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Microsoft.Win32", "RegistryKey", "IsEquals", a, b));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.get_Name
::Il2CppString* Microsoft::Win32::RegistryKey::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Name"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.Flush
void Microsoft::Win32::RegistryKey::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.Close
void Microsoft::Win32::RegistryKey::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.get_Handle
Microsoft::Win32::SafeHandles::SafeRegistryHandle* Microsoft::Win32::RegistryKey::get_Handle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::SafeHandles::SafeRegistryHandle*>(this, "get_Handle"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.OpenSubKey
Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::OpenSubKey(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>(this, "OpenSubKey", name));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.OpenSubKey
Microsoft::Win32::RegistryKey* Microsoft::Win32::RegistryKey::OpenSubKey(::Il2CppString* name, bool writable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryKey*>(this, "OpenSubKey", name, writable));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.GetValue
::Il2CppObject* Microsoft::Win32::RegistryKey::GetValue(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetValue", name));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.GetValue
::Il2CppObject* Microsoft::Win32::RegistryKey::GetValue(::Il2CppString* name, ::Il2CppObject* defaultValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetValue", name, defaultValue));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.GetSubKeyNames
::Array<::Il2CppString*>* Microsoft::Win32::RegistryKey::GetSubKeyNames() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "GetSubKeyNames"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.get_IsRoot
bool Microsoft::Win32::RegistryKey::get_IsRoot() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsRoot"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.get_Hive
Microsoft::Win32::RegistryHive Microsoft::Win32::RegistryKey::get_Hive() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Microsoft::Win32::RegistryHive>(this, "get_Hive"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.get_InternalHandle
::Il2CppObject* Microsoft::Win32::RegistryKey::get_InternalHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_InternalHandle"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.AssertKeyStillValid
void Microsoft::Win32::RegistryKey::AssertKeyStillValid() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AssertKeyStillValid"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.AssertKeyNameLength
void Microsoft::Win32::RegistryKey::AssertKeyNameLength(::Il2CppString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AssertKeyNameLength", name));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.DecodeString
::Il2CppString* Microsoft::Win32::RegistryKey::DecodeString(::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Microsoft.Win32", "RegistryKey", "DecodeString", data));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.CreateMarkedForDeletionException
System::IO::IOException* Microsoft::Win32::RegistryKey::CreateMarkedForDeletionException() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::IOException*>("Microsoft.Win32", "RegistryKey", "CreateMarkedForDeletionException"));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.GetHiveName
::Il2CppString* Microsoft::Win32::RegistryKey::GetHiveName(Microsoft::Win32::RegistryHive hive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Microsoft.Win32", "RegistryKey", "GetHiveName", hive));
}
// Autogenerated method: Microsoft.Win32.RegistryKey.Dispose
void Microsoft::Win32::RegistryKey::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void Microsoft::Win32::RegistryKey::System_IDisposable_Dispose() {
  Dispose();
}
// Autogenerated method: Microsoft.Win32.RegistryKey.ToString
::Il2CppString* Microsoft::Win32::RegistryKey::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}