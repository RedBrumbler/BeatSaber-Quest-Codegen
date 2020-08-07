// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeMarshal
#include "Mono/RuntimeMarshal.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Mono.SafeStringMarshal
#include "Mono/SafeStringMarshal.hpp"
// Including type: Mono.MonoAssemblyName
#include "Mono/MonoAssemblyName.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.RuntimeMarshal.PtrToUtf8String
::Il2CppString* Mono::RuntimeMarshal::PtrToUtf8String(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Mono", "RuntimeMarshal", "PtrToUtf8String", ptr));
}
// Autogenerated method: Mono.RuntimeMarshal.MarshalString
Mono::SafeStringMarshal Mono::RuntimeMarshal::MarshalString(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::SafeStringMarshal>("Mono", "RuntimeMarshal", "MarshalString", str));
}
// Autogenerated method: Mono.RuntimeMarshal.DecodeBlobSize
int Mono::RuntimeMarshal::DecodeBlobSize(System::IntPtr in_ptr, System::IntPtr& out_ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Mono", "RuntimeMarshal", "DecodeBlobSize", in_ptr, out_ptr));
}
// Autogenerated method: Mono.RuntimeMarshal.DecodeBlobArray
::Array<uint8_t>* Mono::RuntimeMarshal::DecodeBlobArray(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("Mono", "RuntimeMarshal", "DecodeBlobArray", ptr));
}
// Autogenerated method: Mono.RuntimeMarshal.AsciHexDigitValue
int Mono::RuntimeMarshal::AsciHexDigitValue(int c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Mono", "RuntimeMarshal", "AsciHexDigitValue", c));
}
// Autogenerated method: Mono.RuntimeMarshal.FreeAssemblyName
void Mono::RuntimeMarshal::FreeAssemblyName(Mono::MonoAssemblyName& name, bool freeStruct) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono", "RuntimeMarshal", "FreeAssemblyName", name, freeStruct));
}