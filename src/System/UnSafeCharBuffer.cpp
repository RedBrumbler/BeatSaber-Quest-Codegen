// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UnSafeCharBuffer
#include "System/UnSafeCharBuffer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.UnSafeCharBuffer..ctor
System::UnSafeCharBuffer* System::UnSafeCharBuffer::New_ctor(::Il2CppChar* buffer, int bufferSize) {
  return (UnSafeCharBuffer*)THROW_UNLESS(il2cpp_utils::New("System", "UnSafeCharBuffer", buffer, bufferSize));
}
// Autogenerated method: System.UnSafeCharBuffer.AppendString
void System::UnSafeCharBuffer::AppendString(::CsString* stringToAppend) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "AppendString", stringToAppend));
}
