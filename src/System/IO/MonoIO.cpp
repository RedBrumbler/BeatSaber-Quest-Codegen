// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.MonoIO
#include "System/IO/MonoIO.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.IO.MonoIOError
#include "System/IO/MonoIOError.hpp"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Including type: System.IO.MonoFileType
#include "System/IO/MonoFileType.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
// Including type: System.IO.MonoIOStat
#include "System/IO/MonoIOStat.hpp"
// Including type: System.IO.FileMode
#include "System/IO/FileMode.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
// Including type: System.IO.FileShare
#include "System/IO/FileShare.hpp"
// Including type: System.IO.FileOptions
#include "System/IO/FileOptions.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.IntPtr InvalidHandle
System::IntPtr System::IO::MonoIO::_get_InvalidHandle() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::IntPtr>("System.IO", "MonoIO", "InvalidHandle"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.IntPtr InvalidHandle
void System::IO::MonoIO::_set_InvalidHandle(System::IntPtr value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "MonoIO", "InvalidHandle", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean dump_handles
bool System::IO::MonoIO::_get_dump_handles() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.IO", "MonoIO", "dump_handles"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean dump_handles
void System::IO::MonoIO::_set_dump_handles(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.IO", "MonoIO", "dump_handles", value));
}
// Autogenerated method: System.IO.MonoIO.GetException
System::Exception* System::IO::MonoIO::GetException(System::IO::MonoIOError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("System.IO", "MonoIO", "GetException", error));
}
// Autogenerated method: System.IO.MonoIO.GetException
System::Exception* System::IO::MonoIO::GetException(::Il2CppString* path, System::IO::MonoIOError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>("System.IO", "MonoIO", "GetException", path, error));
}
// Autogenerated method: System.IO.MonoIO.CreateDirectory
bool System::IO::MonoIO::CreateDirectory(::Il2CppChar* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "CreateDirectory", path, error));
}
// Autogenerated method: System.IO.MonoIO.CreateDirectory
bool System::IO::MonoIO::CreateDirectory(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "CreateDirectory", path, error));
}
// Autogenerated method: System.IO.MonoIO.RemoveDirectory
bool System::IO::MonoIO::RemoveDirectory(::Il2CppChar* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "RemoveDirectory", path, error));
}
// Autogenerated method: System.IO.MonoIO.RemoveDirectory
bool System::IO::MonoIO::RemoveDirectory(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "RemoveDirectory", path, error));
}
// Autogenerated method: System.IO.MonoIO.GetCurrentDirectory
::Il2CppString* System::IO::MonoIO::GetCurrentDirectory(System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.IO", "MonoIO", "GetCurrentDirectory", error));
}
// Autogenerated method: System.IO.MonoIO.DeleteFile
bool System::IO::MonoIO::DeleteFile(::Il2CppChar* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "DeleteFile", path, error));
}
// Autogenerated method: System.IO.MonoIO.DeleteFile
bool System::IO::MonoIO::DeleteFile(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "DeleteFile", path, error));
}
// Autogenerated method: System.IO.MonoIO.ReplaceFile
bool System::IO::MonoIO::ReplaceFile(::Il2CppChar* sourceFileName, ::Il2CppChar* destinationFileName, ::Il2CppChar* destinationBackupFileName, bool ignoreMetadataErrors, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "ReplaceFile", sourceFileName, destinationFileName, destinationBackupFileName, ignoreMetadataErrors, error));
}
// Autogenerated method: System.IO.MonoIO.ReplaceFile
bool System::IO::MonoIO::ReplaceFile(::Il2CppString* sourceFileName, ::Il2CppString* destinationFileName, ::Il2CppString* destinationBackupFileName, bool ignoreMetadataErrors, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "ReplaceFile", sourceFileName, destinationFileName, destinationBackupFileName, ignoreMetadataErrors, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileAttributes
System::IO::FileAttributes System::IO::MonoIO::GetFileAttributes(::Il2CppChar* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::FileAttributes>("System.IO", "MonoIO", "GetFileAttributes", path, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileAttributes
System::IO::FileAttributes System::IO::MonoIO::GetFileAttributes(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::FileAttributes>("System.IO", "MonoIO", "GetFileAttributes", path, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileType
System::IO::MonoFileType System::IO::MonoIO::GetFileType(System::IntPtr handle, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::MonoFileType>("System.IO", "MonoIO", "GetFileType", handle, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileType
System::IO::MonoFileType System::IO::MonoIO::GetFileType(System::Runtime::InteropServices::SafeHandle* safeHandle, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::MonoFileType>("System.IO", "MonoIO", "GetFileType", safeHandle, error));
}
// Autogenerated method: System.IO.MonoIO.FindFirstFile
System::IntPtr System::IO::MonoIO::FindFirstFile(::Il2CppChar* pathWithPattern, ::Il2CppString*& fileName, int& fileAttr, int& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "FindFirstFile", pathWithPattern, fileName, fileAttr, error));
}
// Autogenerated method: System.IO.MonoIO.FindFirstFile
System::IntPtr System::IO::MonoIO::FindFirstFile(::Il2CppString* pathWithPattern, ::Il2CppString*& fileName, int& fileAttr, int& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "FindFirstFile", pathWithPattern, fileName, fileAttr, error));
}
// Autogenerated method: System.IO.MonoIO.FindNextFile
bool System::IO::MonoIO::FindNextFile(System::IntPtr hnd, ::Il2CppString*& fileName, int& fileAttr, int& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "FindNextFile", hnd, fileName, fileAttr, error));
}
// Autogenerated method: System.IO.MonoIO.FindCloseFile
bool System::IO::MonoIO::FindCloseFile(System::IntPtr hnd) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "FindCloseFile", hnd));
}
// Autogenerated method: System.IO.MonoIO.ExistsFile
bool System::IO::MonoIO::ExistsFile(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "ExistsFile", path, error));
}
// Autogenerated method: System.IO.MonoIO.ExistsDirectory
bool System::IO::MonoIO::ExistsDirectory(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "ExistsDirectory", path, error));
}
// Autogenerated method: System.IO.MonoIO.ExistsSymlink
bool System::IO::MonoIO::ExistsSymlink(::Il2CppString* path, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "ExistsSymlink", path, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileStat
bool System::IO::MonoIO::GetFileStat(::Il2CppChar* path, System::IO::MonoIOStat& stat, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "GetFileStat", path, stat, error));
}
// Autogenerated method: System.IO.MonoIO.GetFileStat
bool System::IO::MonoIO::GetFileStat(::Il2CppString* path, System::IO::MonoIOStat& stat, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "GetFileStat", path, stat, error));
}
// Autogenerated method: System.IO.MonoIO.Open
System::IntPtr System::IO::MonoIO::Open(::Il2CppChar* filename, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, System::IO::FileOptions options, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "Open", filename, mode, access, share, options, error));
}
// Autogenerated method: System.IO.MonoIO.Open
System::IntPtr System::IO::MonoIO::Open(::Il2CppString* filename, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, System::IO::FileOptions options, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "Open", filename, mode, access, share, options, error));
}
// Autogenerated method: System.IO.MonoIO.Close
bool System::IO::MonoIO::Close(System::IntPtr handle, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "Close", handle, error));
}
// Autogenerated method: System.IO.MonoIO.Read
int System::IO::MonoIO::Read(System::IntPtr handle, ::Array<uint8_t>* dest, int dest_offset, int count, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "MonoIO", "Read", handle, dest, dest_offset, count, error));
}
// Autogenerated method: System.IO.MonoIO.Read
int System::IO::MonoIO::Read(System::Runtime::InteropServices::SafeHandle* safeHandle, ::Array<uint8_t>* dest, int dest_offset, int count, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "MonoIO", "Read", safeHandle, dest, dest_offset, count, error));
}
// Autogenerated method: System.IO.MonoIO.Write
int System::IO::MonoIO::Write(System::IntPtr handle, ::Array<uint8_t>*& src, int src_offset, int count, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "MonoIO", "Write", handle, src, src_offset, count, error));
}
// Autogenerated method: System.IO.MonoIO.Write
int System::IO::MonoIO::Write(System::Runtime::InteropServices::SafeHandle* safeHandle, ::Array<uint8_t>* src, int src_offset, int count, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.IO", "MonoIO", "Write", safeHandle, src, src_offset, count, error));
}
// Autogenerated method: System.IO.MonoIO.Seek
int64_t System::IO::MonoIO::Seek(System::IntPtr handle, int64_t offset, System::IO::SeekOrigin origin, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.IO", "MonoIO", "Seek", handle, offset, origin, error));
}
// Autogenerated method: System.IO.MonoIO.Seek
int64_t System::IO::MonoIO::Seek(System::Runtime::InteropServices::SafeHandle* safeHandle, int64_t offset, System::IO::SeekOrigin origin, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.IO", "MonoIO", "Seek", safeHandle, offset, origin, error));
}
// Autogenerated method: System.IO.MonoIO.GetLength
int64_t System::IO::MonoIO::GetLength(System::IntPtr handle, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.IO", "MonoIO", "GetLength", handle, error));
}
// Autogenerated method: System.IO.MonoIO.GetLength
int64_t System::IO::MonoIO::GetLength(System::Runtime::InteropServices::SafeHandle* safeHandle, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>("System.IO", "MonoIO", "GetLength", safeHandle, error));
}
// Autogenerated method: System.IO.MonoIO.get_ConsoleOutput
System::IntPtr System::IO::MonoIO::get_ConsoleOutput() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "get_ConsoleOutput"));
}
// Autogenerated method: System.IO.MonoIO.get_ConsoleInput
System::IntPtr System::IO::MonoIO::get_ConsoleInput() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "get_ConsoleInput"));
}
// Autogenerated method: System.IO.MonoIO.get_ConsoleError
System::IntPtr System::IO::MonoIO::get_ConsoleError() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("System.IO", "MonoIO", "get_ConsoleError"));
}
// Autogenerated method: System.IO.MonoIO.DuplicateHandle
bool System::IO::MonoIO::DuplicateHandle(System::IntPtr source_process_handle, System::IntPtr source_handle, System::IntPtr target_process_handle, System::IntPtr& target_handle, int access, int inherit, int options, System::IO::MonoIOError& error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "DuplicateHandle", source_process_handle, source_handle, target_process_handle, target_handle, access, inherit, options, error));
}
// Autogenerated method: System.IO.MonoIO.get_VolumeSeparatorChar
::Il2CppChar System::IO::MonoIO::get_VolumeSeparatorChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.IO", "MonoIO", "get_VolumeSeparatorChar"));
}
// Autogenerated method: System.IO.MonoIO.get_DirectorySeparatorChar
::Il2CppChar System::IO::MonoIO::get_DirectorySeparatorChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.IO", "MonoIO", "get_DirectorySeparatorChar"));
}
// Autogenerated method: System.IO.MonoIO.get_AltDirectorySeparatorChar
::Il2CppChar System::IO::MonoIO::get_AltDirectorySeparatorChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.IO", "MonoIO", "get_AltDirectorySeparatorChar"));
}
// Autogenerated method: System.IO.MonoIO.get_PathSeparator
::Il2CppChar System::IO::MonoIO::get_PathSeparator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.IO", "MonoIO", "get_PathSeparator"));
}
// Autogenerated method: System.IO.MonoIO.DumpHandles
void System::IO::MonoIO::DumpHandles() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "MonoIO", "DumpHandles"));
}
// Autogenerated method: System.IO.MonoIO.RemapPath
bool System::IO::MonoIO::RemapPath(::Il2CppString* path, ::Il2CppString*& newPath) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.IO", "MonoIO", "RemapPath", path, newPath));
}
// Autogenerated method: System.IO.MonoIO..cctor
void System::IO::MonoIO::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "MonoIO", ".cctor"));
}