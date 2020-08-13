// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.MemoryStream..ctor
System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(int capacity) {
  return (MemoryStream*)THROW_UNLESS(il2cpp_utils::New("System.IO", "MemoryStream", capacity));
}
// Autogenerated method: System.IO.MemoryStream..ctor
System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::Array<uint8_t>* buffer) {
  return (MemoryStream*)THROW_UNLESS(il2cpp_utils::New("System.IO", "MemoryStream", buffer));
}
// Autogenerated method: System.IO.MemoryStream..ctor
System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::Array<uint8_t>* buffer, bool writable) {
  return (MemoryStream*)THROW_UNLESS(il2cpp_utils::New("System.IO", "MemoryStream", buffer, writable));
}
// Autogenerated method: System.IO.MemoryStream.EnsureWriteable
void System::IO::MemoryStream::EnsureWriteable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureWriteable"));
}
// Autogenerated method: System.IO.MemoryStream.EnsureCapacity
bool System::IO::MemoryStream::EnsureCapacity(int value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnsureCapacity", value));
}
// Autogenerated method: System.IO.MemoryStream.GetBuffer
::Array<uint8_t>* System::IO::MemoryStream::GetBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetBuffer"));
}
// Autogenerated method: System.IO.MemoryStream.InternalGetBuffer
::Array<uint8_t>* System::IO::MemoryStream::InternalGetBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "InternalGetBuffer"));
}
// Autogenerated method: System.IO.MemoryStream.InternalGetPosition
int System::IO::MemoryStream::InternalGetPosition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalGetPosition"));
}
// Autogenerated method: System.IO.MemoryStream.InternalReadInt32
int System::IO::MemoryStream::InternalReadInt32() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalReadInt32"));
}
// Autogenerated method: System.IO.MemoryStream.InternalEmulateRead
int System::IO::MemoryStream::InternalEmulateRead(int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "InternalEmulateRead", count));
}
// Autogenerated method: System.IO.MemoryStream.get_Capacity
int System::IO::MemoryStream::get_Capacity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Capacity"));
}
// Autogenerated method: System.IO.MemoryStream.set_Capacity
void System::IO::MemoryStream::set_Capacity(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Capacity", value));
}
// Autogenerated method: System.IO.MemoryStream.ToArray
::Array<uint8_t>* System::IO::MemoryStream::ToArray() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "ToArray"));
}
// Autogenerated method: System.IO.MemoryStream..ctor
System::IO::MemoryStream* System::IO::MemoryStream::New_ctor() {
  return (MemoryStream*)THROW_UNLESS(il2cpp_utils::New("System.IO", "MemoryStream"));
}
// Autogenerated method: System.IO.MemoryStream.get_CanRead
bool System::IO::MemoryStream::get_CanRead() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanRead"));
}
// Autogenerated method: System.IO.MemoryStream.get_CanSeek
bool System::IO::MemoryStream::get_CanSeek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanSeek"));
}
// Autogenerated method: System.IO.MemoryStream.get_CanWrite
bool System::IO::MemoryStream::get_CanWrite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanWrite"));
}
// Autogenerated method: System.IO.MemoryStream.Dispose
void System::IO::MemoryStream::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.MemoryStream.Flush
void System::IO::MemoryStream::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.IO.MemoryStream.get_Length
int64_t System::IO::MemoryStream::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Length"));
}
// Autogenerated method: System.IO.MemoryStream.get_Position
int64_t System::IO::MemoryStream::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Position"));
}
// Autogenerated method: System.IO.MemoryStream.set_Position
void System::IO::MemoryStream::set_Position(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: System.IO.MemoryStream.Read
int System::IO::MemoryStream::Read(::Array<uint8_t>*& buffer, int offset, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, offset, count));
}
// Autogenerated method: System.IO.MemoryStream.ReadByte
int System::IO::MemoryStream::ReadByte() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadByte"));
}
// Autogenerated method: System.IO.MemoryStream.Seek
int64_t System::IO::MemoryStream::Seek(int64_t offset, System::IO::SeekOrigin loc) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Seek", offset, loc));
}
// Autogenerated method: System.IO.MemoryStream.Write
void System::IO::MemoryStream::Write(::Array<uint8_t>* buffer, int offset, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, offset, count));
}
// Autogenerated method: System.IO.MemoryStream.WriteByte
void System::IO::MemoryStream::WriteByte(uint8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteByte", value));
}
