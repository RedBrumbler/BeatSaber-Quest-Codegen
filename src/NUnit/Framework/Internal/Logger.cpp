// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Logger
#include "NUnit/Framework/Internal/Logger.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.String TIME_FMT
::CsString* NUnit::Framework::Internal::Logger::_get_TIME_FMT() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("NUnit.Framework.Internal", "Logger", "TIME_FMT"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String TIME_FMT
void NUnit::Framework::Internal::Logger::_set_TIME_FMT(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Logger", "TIME_FMT", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.String TRACE_FMT
::CsString* NUnit::Framework::Internal::Logger::_get_TRACE_FMT() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("NUnit.Framework.Internal", "Logger", "TRACE_FMT"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String TRACE_FMT
void NUnit::Framework::Internal::Logger::_set_TRACE_FMT(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("NUnit.Framework.Internal", "Logger", "TRACE_FMT", value));
}
// Autogenerated method: NUnit.Framework.Internal.Logger..ctor
NUnit::Framework::Internal::Logger* NUnit::Framework::Internal::Logger::New_ctor(::CsString* name, NUnit::Framework::Internal::InternalTraceLevel level, System::IO::TextWriter* writer) {
  return (Logger*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "Logger", name, level, writer));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.Error
void NUnit::Framework::Internal::Logger::Error(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Error", message));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.Debug
void NUnit::Framework::Internal::Logger::Debug(::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Debug", message));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.Debug
void NUnit::Framework::Internal::Logger::Debug(::CsString* message, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Debug", message, args));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.Log
void NUnit::Framework::Internal::Logger::Log(NUnit::Framework::Internal::InternalTraceLevel level, ::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Log", level, message));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.Log
void NUnit::Framework::Internal::Logger::Log(NUnit::Framework::Internal::InternalTraceLevel level, ::CsString* format, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Log", level, format, args));
}
// Autogenerated method: NUnit.Framework.Internal.Logger.WriteLog
void NUnit::Framework::Internal::Logger::WriteLog(NUnit::Framework::Internal::InternalTraceLevel level, ::CsString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteLog", level, message));
}
// Autogenerated method: NUnit.Framework.Internal.Logger..cctor
void NUnit::Framework::Internal::Logger::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("NUnit.Framework.Internal", "Logger", ".cctor"));
}
