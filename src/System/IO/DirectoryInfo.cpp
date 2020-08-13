// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.DirectoryInfo
#include "System/IO/DirectoryInfo.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::CsString* path) {
  return (DirectoryInfo*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DirectoryInfo", path));
}
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(::CsString* path, bool simpleOriginalPath) {
  return (DirectoryInfo*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DirectoryInfo", path, simpleOriginalPath));
}
// Autogenerated method: System.IO.DirectoryInfo.Initialize
void System::IO::DirectoryInfo::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Parent
System::IO::DirectoryInfo* System::IO::DirectoryInfo::get_Parent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::DirectoryInfo*>(this, "get_Parent"));
}
// Autogenerated method: System.IO.DirectoryInfo.Create
void System::IO::DirectoryInfo::Create() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Create"));
}
// Autogenerated method: System.IO.DirectoryInfo.GetDirectories
::Array<System::IO::DirectoryInfo*>* System::IO::DirectoryInfo::GetDirectories() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::IO::DirectoryInfo*>*>(this, "GetDirectories"));
}
// Autogenerated method: System.IO.DirectoryInfo.GetDirectories
::Array<System::IO::DirectoryInfo*>* System::IO::DirectoryInfo::GetDirectories(::CsString* searchPattern) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::IO::DirectoryInfo*>*>(this, "GetDirectories", searchPattern));
}
// Autogenerated method: System.IO.DirectoryInfo.CheckPath
void System::IO::DirectoryInfo::CheckPath(::CsString* path) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckPath", path));
}
// Autogenerated method: System.IO.DirectoryInfo..ctor
System::IO::DirectoryInfo* System::IO::DirectoryInfo::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (DirectoryInfo*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DirectoryInfo", info, context));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Exists
bool System::IO::DirectoryInfo::get_Exists() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Exists"));
}
// Autogenerated method: System.IO.DirectoryInfo.get_Name
::CsString* System::IO::DirectoryInfo::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.IO.DirectoryInfo.ToString
::CsString* System::IO::DirectoryInfo::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
