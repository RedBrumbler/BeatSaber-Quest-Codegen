// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.CStreamReader
#include "System/IO/CStreamReader.hpp"
// Including type: System.TermInfoDriver
#include "System/TermInfoDriver.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.CStreamReader..ctor
System::IO::CStreamReader* System::IO::CStreamReader::New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
  return (CStreamReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "CStreamReader", stream, encoding));
}
// Autogenerated method: System.IO.CStreamReader.Peek
int System::IO::CStreamReader::Peek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Peek"));
}
// Autogenerated method: System.IO.CStreamReader.Read
int System::IO::CStreamReader::Read() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read"));
}
// Autogenerated method: System.IO.CStreamReader.Read
int System::IO::CStreamReader::Read(::Array<::Il2CppChar>*& dest, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", dest, index, count));
}
// Autogenerated method: System.IO.CStreamReader.ReadLine
::CsString* System::IO::CStreamReader::ReadLine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadLine"));
}
// Autogenerated method: System.IO.CStreamReader.ReadToEnd
::CsString* System::IO::CStreamReader::ReadToEnd() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadToEnd"));
}
