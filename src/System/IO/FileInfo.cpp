// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileInfo
#include "System/IO/FileInfo.hpp"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.FileInfo..ctor
System::IO::FileInfo* System::IO::FileInfo::New_ctor(::CsString* fileName) {
  return (FileInfo*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileInfo", fileName));
}
// Autogenerated method: System.IO.FileInfo.Init
void System::IO::FileInfo::Init(::CsString* fileName, bool checkHost) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", fileName, checkHost));
}
// Autogenerated method: System.IO.FileInfo.GetDisplayPath
::CsString* System::IO::FileInfo::GetDisplayPath(::CsString* originalPath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetDisplayPath", originalPath));
}
// Autogenerated method: System.IO.FileInfo.get_DirectoryName
::CsString* System::IO::FileInfo::get_DirectoryName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_DirectoryName"));
}
// Autogenerated method: System.IO.FileInfo.CreateText
System::IO::StreamWriter* System::IO::FileInfo::CreateText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::StreamWriter*>(this, "CreateText"));
}
// Autogenerated method: System.IO.FileInfo.AppendText
System::IO::StreamWriter* System::IO::FileInfo::AppendText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::StreamWriter*>(this, "AppendText"));
}
// Autogenerated method: System.IO.FileInfo..ctor
System::IO::FileInfo* System::IO::FileInfo::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (FileInfo*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileInfo", info, context));
}
// Autogenerated method: System.IO.FileInfo.get_Name
::CsString* System::IO::FileInfo::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.IO.FileInfo.get_Exists
bool System::IO::FileInfo::get_Exists() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Exists"));
}
// Autogenerated method: System.IO.FileInfo.ToString
::CsString* System::IO::FileInfo::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
