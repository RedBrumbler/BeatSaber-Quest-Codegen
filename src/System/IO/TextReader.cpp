// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
// Including type: System.IO.TextReader/NullTextReader
#include "System/IO/TextReader_NullTextReader.hpp"
// Including type: System.IO.TextReader/SyncTextReader
#include "System/IO/TextReader_SyncTextReader.hpp"
// Including type: System.IO.TextReader/<>c
#include "System/IO/TextReader_--c.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Func`2<System.Object,System.String> _ReadLineDelegate
System::Func_2<::CsObject*, ::CsString*>* System::IO::TextReader::_get__ReadLineDelegate() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<::CsObject*, ::CsString*>*>("System.IO", "TextReader", "_ReadLineDelegate")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<System.Object,System.String> _ReadLineDelegate
void System::IO::TextReader::_set__ReadLineDelegate(System::Func_2<::CsObject*, ::CsString*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "TextReader", "_ReadLineDelegate", value));
}
// Autogenerated static field getter
// Get static field: static private System.Func`2<System.Object,System.Int32> _ReadDelegate
System::Func_2<::CsObject*, int>* System::IO::TextReader::_get__ReadDelegate() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<::CsObject*, int>*>("System.IO", "TextReader", "_ReadDelegate")));
}
// Autogenerated static field setter
// Set static field: static private System.Func`2<System.Object,System.Int32> _ReadDelegate
void System::IO::TextReader::_set__ReadDelegate(System::Func_2<::CsObject*, int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "TextReader", "_ReadDelegate", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.IO.TextReader Null
System::IO::TextReader* System::IO::TextReader::_get_Null() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IO::TextReader*>("System.IO", "TextReader", "Null"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.IO.TextReader Null
void System::IO::TextReader::_set_Null(System::IO::TextReader* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "TextReader", "Null", value));
}
// Autogenerated method: System.IO.TextReader.Close
void System::IO::TextReader::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.IO.TextReader.Dispose
void System::IO::TextReader::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.TextReader.Peek
int System::IO::TextReader::Peek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Peek"));
}
// Autogenerated method: System.IO.TextReader.Read
int System::IO::TextReader::Read() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read"));
}
// Autogenerated method: System.IO.TextReader.Read
int System::IO::TextReader::Read(::Array<::Il2CppChar>*& buffer, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, index, count));
}
// Autogenerated method: System.IO.TextReader.ReadToEnd
::CsString* System::IO::TextReader::ReadToEnd() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadToEnd"));
}
// Autogenerated method: System.IO.TextReader.ReadLine
::CsString* System::IO::TextReader::ReadLine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadLine"));
}
// Autogenerated method: System.IO.TextReader.Synchronized
System::IO::TextReader* System::IO::TextReader::Synchronized(System::IO::TextReader* reader) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::TextReader*>("System.IO", "TextReader", "Synchronized", reader));
}
// Autogenerated method: System.IO.TextReader..cctor
void System::IO::TextReader::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "TextReader", ".cctor"));
}
// Autogenerated method: System.IO.TextReader..ctor
System::IO::TextReader* System::IO::TextReader::New_ctor() {
  return (TextReader*)THROW_UNLESS(il2cpp_utils::New("System.IO", "TextReader"));
}
// Autogenerated method: System.IO.TextReader.Dispose
void System::IO::TextReader::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::IO::TextReader::System_IDisposable_Dispose() {
  Dispose();
}
