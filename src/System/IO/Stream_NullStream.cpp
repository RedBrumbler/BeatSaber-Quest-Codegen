// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream/NullStream
#include "System/IO/Stream_NullStream.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.IO.SeekOrigin
#include "System/IO/SeekOrigin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Stream/NullStream..ctor
System::IO::Stream::NullStream* System::IO::Stream::NullStream::New_ctor() {
  return (Stream::NullStream*)THROW_UNLESS(il2cpp_utils::New("System.IO", "Stream/NullStream"));
}
// Autogenerated method: System.IO.Stream/NullStream.get_CanRead
bool System::IO::Stream::NullStream::get_CanRead() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanRead"));
}
// Autogenerated method: System.IO.Stream/NullStream.get_CanWrite
bool System::IO::Stream::NullStream::get_CanWrite() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanWrite"));
}
// Autogenerated method: System.IO.Stream/NullStream.get_CanSeek
bool System::IO::Stream::NullStream::get_CanSeek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CanSeek"));
}
// Autogenerated method: System.IO.Stream/NullStream.get_Length
int64_t System::IO::Stream::NullStream::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Length"));
}
// Autogenerated method: System.IO.Stream/NullStream.get_Position
int64_t System::IO::Stream::NullStream::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_Position"));
}
// Autogenerated method: System.IO.Stream/NullStream.set_Position
void System::IO::Stream::NullStream::set_Position(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: System.IO.Stream/NullStream.Dispose
void System::IO::Stream::NullStream::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.IO.Stream/NullStream.Flush
void System::IO::Stream::NullStream::Flush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Flush"));
}
// Autogenerated method: System.IO.Stream/NullStream.BeginRead
System::IAsyncResult* System::IO::Stream::NullStream::BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::CsObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginRead", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream/NullStream.EndRead
int System::IO::Stream::NullStream::EndRead(System::IAsyncResult* asyncResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndRead", asyncResult));
}
// Autogenerated method: System.IO.Stream/NullStream.BeginWrite
System::IAsyncResult* System::IO::Stream::NullStream::BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* callback, ::CsObject* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginWrite", buffer, offset, count, callback, state));
}
// Autogenerated method: System.IO.Stream/NullStream.EndWrite
void System::IO::Stream::NullStream::EndWrite(System::IAsyncResult* asyncResult) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndWrite", asyncResult));
}
// Autogenerated method: System.IO.Stream/NullStream.Read
int System::IO::Stream::NullStream::Read(::Array<uint8_t>*& buffer, int offset, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", buffer, offset, count));
}
// Autogenerated method: System.IO.Stream/NullStream.ReadByte
int System::IO::Stream::NullStream::ReadByte() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ReadByte"));
}
// Autogenerated method: System.IO.Stream/NullStream.Write
void System::IO::Stream::NullStream::Write(::Array<uint8_t>* buffer, int offset, int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", buffer, offset, count));
}
// Autogenerated method: System.IO.Stream/NullStream.WriteByte
void System::IO::Stream::NullStream::WriteByte(uint8_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteByte", value));
}
// Autogenerated method: System.IO.Stream/NullStream.Seek
int64_t System::IO::Stream::NullStream::Seek(int64_t offset, System::IO::SeekOrigin origin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "Seek", offset, origin));
}
