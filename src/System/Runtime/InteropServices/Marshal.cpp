// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.Marshal
#include "System/Runtime/InteropServices/Marshal.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 SystemMaxDBCSCharSize
int System::Runtime::InteropServices::Marshal::_get_SystemMaxDBCSCharSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Runtime.InteropServices", "Marshal", "SystemMaxDBCSCharSize"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 SystemMaxDBCSCharSize
void System::Runtime::InteropServices::Marshal::_set_SystemMaxDBCSCharSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.InteropServices", "Marshal", "SystemMaxDBCSCharSize", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Int32 SystemDefaultCharSize
int System::Runtime::InteropServices::Marshal::_get_SystemDefaultCharSize() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Runtime.InteropServices", "Marshal", "SystemDefaultCharSize"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32 SystemDefaultCharSize
void System::Runtime::InteropServices::Marshal::_set_SystemDefaultCharSize(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.InteropServices", "Marshal", "SystemDefaultCharSize", value));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.AllocCoTaskMem
System::IntPtr System::Runtime::InteropServices::Marshal::AllocCoTaskMem(int cb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "AllocCoTaskMem", cb));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.AllocHGlobal
System::IntPtr System::Runtime::InteropServices::Marshal::AllocHGlobal(System::IntPtr cb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "AllocHGlobal", cb));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.AllocHGlobal
System::IntPtr System::Runtime::InteropServices::Marshal::AllocHGlobal(int cb) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "AllocHGlobal", cb));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.copy_to_unmanaged
void System::Runtime::InteropServices::Marshal::copy_to_unmanaged(System::Array* source, int startIndex, System::IntPtr destination, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "copy_to_unmanaged", source, startIndex, destination, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.copy_from_unmanaged
void System::Runtime::InteropServices::Marshal::copy_from_unmanaged(System::IntPtr source, int startIndex, System::Array* destination, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "copy_from_unmanaged", source, startIndex, destination, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Copy
void System::Runtime::InteropServices::Marshal::Copy(::Array<uint8_t>* source, int startIndex, System::IntPtr destination, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "Copy", source, startIndex, destination, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Copy
void System::Runtime::InteropServices::Marshal::Copy(System::IntPtr source, ::Array<uint8_t>* destination, int startIndex, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "Copy", source, destination, startIndex, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Copy
void System::Runtime::InteropServices::Marshal::Copy(System::IntPtr source, ::Array<::Il2CppChar>* destination, int startIndex, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "Copy", source, destination, startIndex, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Copy
void System::Runtime::InteropServices::Marshal::Copy(System::IntPtr source, ::Array<int16_t>* destination, int startIndex, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "Copy", source, destination, startIndex, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Copy
void System::Runtime::InteropServices::Marshal::Copy(System::IntPtr source, ::Array<float>* destination, int startIndex, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "Copy", source, destination, startIndex, length));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.FreeBSTR
void System::Runtime::InteropServices::Marshal::FreeBSTR(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "FreeBSTR", ptr));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.FreeCoTaskMem
void System::Runtime::InteropServices::Marshal::FreeCoTaskMem(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "FreeCoTaskMem", ptr));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.FreeHGlobal
void System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr hglobal) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "FreeHGlobal", hglobal));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.GetHRForException
int System::Runtime::InteropServices::Marshal::GetHRForException(System::Exception* e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "GetHRForException", e));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.GetLastWin32Error
int System::Runtime::InteropServices::Marshal::GetLastWin32Error() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "GetLastWin32Error"));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.PtrToStringAnsi
::CsString* System::Runtime::InteropServices::Marshal::PtrToStringAnsi(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Runtime.InteropServices", "Marshal", "PtrToStringAnsi", ptr));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.PtrToStringUni
::CsString* System::Runtime::InteropServices::Marshal::PtrToStringUni(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Runtime.InteropServices", "Marshal", "PtrToStringUni", ptr));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.PtrToStructure
void System::Runtime::InteropServices::Marshal::PtrToStructure(System::IntPtr ptr, ::CsObject* structure) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "PtrToStructure", ptr, structure));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.PtrToStructure
::CsObject* System::Runtime::InteropServices::Marshal::PtrToStructure(System::IntPtr ptr, System::Type* structureType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>("System.Runtime.InteropServices", "Marshal", "PtrToStructure", ptr, structureType));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.ReadByte
uint8_t System::Runtime::InteropServices::Marshal::ReadByte(System::IntPtr ptr, int ofs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>("System.Runtime.InteropServices", "Marshal", "ReadByte", ptr, ofs));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.ReleaseInternal
int System::Runtime::InteropServices::Marshal::ReleaseInternal(System::IntPtr pUnk) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "ReleaseInternal", pUnk));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.Release
int System::Runtime::InteropServices::Marshal::Release(System::IntPtr pUnk) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "Release", pUnk));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.SizeOf
int System::Runtime::InteropServices::Marshal::SizeOf(::CsObject* structure) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "SizeOf", structure));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.SizeOf
int System::Runtime::InteropServices::Marshal::SizeOf(System::Type* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Runtime.InteropServices", "Marshal", "SizeOf", t));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.StructureToPtr
void System::Runtime::InteropServices::Marshal::StructureToPtr(::CsObject* structure, System::IntPtr ptr, bool fDeleteOld) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", "StructureToPtr", structure, ptr, fDeleteOld));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.UnsafeAddrOfPinnedArrayElement
System::IntPtr System::Runtime::InteropServices::Marshal::UnsafeAddrOfPinnedArrayElement(System::Array* arr, int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "UnsafeAddrOfPinnedArrayElement", arr, index));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal.GetFunctionPointerForDelegateInternal
System::IntPtr System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegateInternal(System::Delegate* d) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "GetFunctionPointerForDelegateInternal", d));
}
// Autogenerated method: System.Runtime.InteropServices.Marshal..cctor
void System::Runtime::InteropServices::Marshal::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.InteropServices", "Marshal", ".cctor"));
}
