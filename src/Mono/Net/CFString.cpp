// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFString
#include "Mono/Net/CFString.hpp"
// Including type: Mono.Net.CFRange
#include "Mono/Net/CFRange.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Net.CFString.CFStringCreateWithCharacters
System::IntPtr Mono::Net::CFString::CFStringCreateWithCharacters(System::IntPtr alloc, System::IntPtr chars, System::IntPtr length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Mono.Net", "CFString", "CFStringCreateWithCharacters", alloc, chars, length));
}
// Autogenerated method: Mono.Net.CFString.Create
Mono::Net::CFString* Mono::Net::CFString::Create(::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Net::CFString*>("Mono.Net", "CFString", "Create", value));
}
// Autogenerated method: Mono.Net.CFString.CFStringGetLength
System::IntPtr Mono::Net::CFString::CFStringGetLength(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Mono.Net", "CFString", "CFStringGetLength", handle));
}
// Autogenerated method: Mono.Net.CFString.CFStringGetCharactersPtr
System::IntPtr Mono::Net::CFString::CFStringGetCharactersPtr(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Mono.Net", "CFString", "CFStringGetCharactersPtr", handle));
}
// Autogenerated method: Mono.Net.CFString.CFStringGetCharacters
System::IntPtr Mono::Net::CFString::CFStringGetCharacters(System::IntPtr handle, Mono::Net::CFRange range, System::IntPtr buffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Mono.Net", "CFString", "CFStringGetCharacters", handle, range, buffer));
}
// Autogenerated method: Mono.Net.CFString.AsString
::Il2CppString* Mono::Net::CFString::AsString(System::IntPtr handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Mono.Net", "CFString", "AsString", handle));
}
// Autogenerated method: Mono.Net.CFString..ctor
Mono::Net::CFString* Mono::Net::CFString::New_ctor(System::IntPtr handle, bool own) {
  return THROW_UNLESS(il2cpp_utils::New<CFString*>(handle, own));
}
// Autogenerated method: Mono.Net.CFString.ToString
::Il2CppString* Mono::Net::CFString::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}