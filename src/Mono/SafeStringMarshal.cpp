// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.SafeStringMarshal
#include "Mono/SafeStringMarshal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.SafeStringMarshal.StringToUtf8
System::IntPtr Mono::SafeStringMarshal::StringToUtf8(::CsString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Mono", "SafeStringMarshal", "StringToUtf8", str));
}
// Autogenerated method: Mono.SafeStringMarshal.GFree
void Mono::SafeStringMarshal::GFree(System::IntPtr ptr) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono", "SafeStringMarshal", "GFree", ptr));
}
// Autogenerated method: Mono.SafeStringMarshal..ctor
Mono::SafeStringMarshal* Mono::SafeStringMarshal::New_ctor(::CsString* str) {
  return (SafeStringMarshal*)THROW_UNLESS(il2cpp_utils::New("Mono", "SafeStringMarshal", str));
}
// Autogenerated method: Mono.SafeStringMarshal.get_Value
System::IntPtr Mono::SafeStringMarshal::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(*this, "get_Value"));
}
// Autogenerated method: Mono.SafeStringMarshal.Dispose
void Mono::SafeStringMarshal::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
}
void Mono::SafeStringMarshal::System_IDisposable_Dispose() {
  Dispose();
}
