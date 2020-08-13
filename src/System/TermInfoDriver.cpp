// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TermInfoDriver
#include "System/TermInfoDriver.hpp"
// Including type: System.TermInfoReader
#include "System/TermInfoReader.hpp"
// Including type: System.IO.StreamReader
#include "System/IO/StreamReader.hpp"
// Including type: System.IO.CStreamWriter
#include "System/IO/CStreamWriter.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.ByteMatcher
#include "System/ByteMatcher.hpp"
// Including type: System.ConsoleKeyInfo
#include "System/ConsoleKeyInfo.hpp"
// Including type: System.TermInfoStrings
#include "System/TermInfoStrings.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32* native_terminal_size
int* System::TermInfoDriver::_get_native_terminal_size() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int*>("System", "TermInfoDriver", "native_terminal_size"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32* native_terminal_size
void System::TermInfoDriver::_set_native_terminal_size(int* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TermInfoDriver", "native_terminal_size", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 terminal_size
int System::TermInfoDriver::_get_terminal_size() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System", "TermInfoDriver", "terminal_size"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 terminal_size
void System::TermInfoDriver::_set_terminal_size(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TermInfoDriver", "terminal_size", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.String[] locations
::Array<::CsString*>* System::TermInfoDriver::_get_locations() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::CsString*>*>("System", "TermInfoDriver", "locations"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String[] locations
void System::TermInfoDriver::_set_locations(::Array<::CsString*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TermInfoDriver", "locations", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32[] _consoleColorToAnsiCode
::Array<int>* System::TermInfoDriver::_get__consoleColorToAnsiCode() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("System", "TermInfoDriver", "_consoleColorToAnsiCode"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32[] _consoleColorToAnsiCode
void System::TermInfoDriver::_set__consoleColorToAnsiCode(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "TermInfoDriver", "_consoleColorToAnsiCode", value));
}
// Autogenerated method: System.TermInfoDriver.TryTermInfoDir
::CsString* System::TermInfoDriver::TryTermInfoDir(::CsString* dir, ::CsString* term) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TermInfoDriver", "TryTermInfoDir", dir, term));
}
// Autogenerated method: System.TermInfoDriver.SearchTerminfo
::CsString* System::TermInfoDriver::SearchTerminfo(::CsString* term) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System", "TermInfoDriver", "SearchTerminfo", term));
}
// Autogenerated method: System.TermInfoDriver.WriteConsole
void System::TermInfoDriver::WriteConsole(::CsString* str) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteConsole", str));
}
// Autogenerated method: System.TermInfoDriver..ctor
System::TermInfoDriver* System::TermInfoDriver::New_ctor(::CsString* term) {
  return (TermInfoDriver*)THROW_UNLESS(il2cpp_utils::New("System", "TermInfoDriver", term));
}
// Autogenerated method: System.TermInfoDriver.get_Initialized
bool System::TermInfoDriver::get_Initialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Initialized"));
}
// Autogenerated method: System.TermInfoDriver.Init
void System::TermInfoDriver::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: System.TermInfoDriver.IncrementX
void System::TermInfoDriver::IncrementX() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "IncrementX"));
}
// Autogenerated method: System.TermInfoDriver.WriteSpecialKey
void System::TermInfoDriver::WriteSpecialKey(System::ConsoleKeyInfo key) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSpecialKey", key));
}
// Autogenerated method: System.TermInfoDriver.WriteSpecialKey
void System::TermInfoDriver::WriteSpecialKey(::Il2CppChar c) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteSpecialKey", c));
}
// Autogenerated method: System.TermInfoDriver.IsSpecialKey
bool System::TermInfoDriver::IsSpecialKey(System::ConsoleKeyInfo key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsSpecialKey", key));
}
// Autogenerated method: System.TermInfoDriver.IsSpecialKey
bool System::TermInfoDriver::IsSpecialKey(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsSpecialKey", c));
}
// Autogenerated method: System.TermInfoDriver.GetCursorPosition
void System::TermInfoDriver::GetCursorPosition() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetCursorPosition"));
}
// Autogenerated method: System.TermInfoDriver.CheckWindowDimensions
void System::TermInfoDriver::CheckWindowDimensions() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckWindowDimensions"));
}
// Autogenerated method: System.TermInfoDriver.get_WindowHeight
int System::TermInfoDriver::get_WindowHeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_WindowHeight"));
}
// Autogenerated method: System.TermInfoDriver.get_WindowWidth
int System::TermInfoDriver::get_WindowWidth() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_WindowWidth"));
}
// Autogenerated method: System.TermInfoDriver.AddToBuffer
void System::TermInfoDriver::AddToBuffer(int b) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddToBuffer", b));
}
// Autogenerated method: System.TermInfoDriver.AdjustBuffer
void System::TermInfoDriver::AdjustBuffer() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdjustBuffer"));
}
// Autogenerated method: System.TermInfoDriver.CreateKeyInfoFromInt
System::ConsoleKeyInfo System::TermInfoDriver::CreateKeyInfoFromInt(int n, bool alt) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ConsoleKeyInfo>(this, "CreateKeyInfoFromInt", n, alt));
}
// Autogenerated method: System.TermInfoDriver.GetKeyFromBuffer
::CsObject* System::TermInfoDriver::GetKeyFromBuffer(bool cooked) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetKeyFromBuffer", cooked));
}
// Autogenerated method: System.TermInfoDriver.ReadKeyInternal
System::ConsoleKeyInfo System::TermInfoDriver::ReadKeyInternal(bool& fresh) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ConsoleKeyInfo>(this, "ReadKeyInternal", fresh));
}
// Autogenerated method: System.TermInfoDriver.InputPending
bool System::TermInfoDriver::InputPending() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "InputPending"));
}
// Autogenerated method: System.TermInfoDriver.QueueEcho
void System::TermInfoDriver::QueueEcho(::Il2CppChar c) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "QueueEcho", c));
}
// Autogenerated method: System.TermInfoDriver.Echo
void System::TermInfoDriver::Echo(System::ConsoleKeyInfo key) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Echo", key));
}
// Autogenerated method: System.TermInfoDriver.EchoFlush
void System::TermInfoDriver::EchoFlush() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EchoFlush"));
}
// Autogenerated method: System.TermInfoDriver.Read
int System::TermInfoDriver::Read(::Array<::Il2CppChar>*& dest, int index, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Read", dest, index, count));
}
// Autogenerated method: System.TermInfoDriver.ReadLine
::CsString* System::TermInfoDriver::ReadLine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadLine"));
}
// Autogenerated method: System.TermInfoDriver.ReadToEnd
::CsString* System::TermInfoDriver::ReadToEnd() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadToEnd"));
}
// Autogenerated method: System.TermInfoDriver.ReadUntilConditionInternal
::CsString* System::TermInfoDriver::ReadUntilConditionInternal(bool haltOnNewLine) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ReadUntilConditionInternal", haltOnNewLine));
}
// Autogenerated method: System.TermInfoDriver.SetCursorPosition
void System::TermInfoDriver::SetCursorPosition(int left, int top) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCursorPosition", left, top));
}
// Autogenerated method: System.TermInfoDriver.CreateKeyMap
void System::TermInfoDriver::CreateKeyMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CreateKeyMap"));
}
// Autogenerated method: System.TermInfoDriver.InitKeys
void System::TermInfoDriver::InitKeys() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitKeys"));
}
// Autogenerated method: System.TermInfoDriver.AddStringMapping
void System::TermInfoDriver::AddStringMapping(System::TermInfoStrings s) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddStringMapping", s));
}
// Autogenerated method: System.TermInfoDriver..cctor
void System::TermInfoDriver::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System", "TermInfoDriver", ".cctor"));
}
// Autogenerated method: System.TermInfoDriver.ReadKey
System::ConsoleKeyInfo System::TermInfoDriver::ReadKey(bool intercept) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::ConsoleKeyInfo>(this, "ReadKey", intercept));
}
