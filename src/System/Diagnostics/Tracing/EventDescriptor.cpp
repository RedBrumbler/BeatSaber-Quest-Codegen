// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventDescriptor
#include "System/Diagnostics/Tracing/EventDescriptor.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor..ctor
System::Diagnostics::Tracing::EventDescriptor* System::Diagnostics::Tracing::EventDescriptor::New_ctor(int traceloggingId, uint8_t level, uint8_t opcode, int64_t keywords) {
  return (EventDescriptor*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EventDescriptor", traceloggingId, level, opcode, keywords));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor..ctor
System::Diagnostics::Tracing::EventDescriptor* System::Diagnostics::Tracing::EventDescriptor::New_ctor(int id, uint8_t version, uint8_t channel, uint8_t level, uint8_t opcode, int task, int64_t keywords) {
  return (EventDescriptor*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EventDescriptor", id, version, channel, level, opcode, task, keywords));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_EventId
int System::Diagnostics::Tracing::EventDescriptor::get_EventId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_EventId"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Version
uint8_t System::Diagnostics::Tracing::EventDescriptor::get_Version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "get_Version"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Channel
uint8_t System::Diagnostics::Tracing::EventDescriptor::get_Channel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "get_Channel"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Level
uint8_t System::Diagnostics::Tracing::EventDescriptor::get_Level() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "get_Level"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Opcode
uint8_t System::Diagnostics::Tracing::EventDescriptor::get_Opcode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "get_Opcode"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Task
int System::Diagnostics::Tracing::EventDescriptor::get_Task() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Task"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.get_Keywords
int64_t System::Diagnostics::Tracing::EventDescriptor::get_Keywords() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "get_Keywords"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.Equals
bool System::Diagnostics::Tracing::EventDescriptor::Equals(System::Diagnostics::Tracing::EventDescriptor other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.Equals
bool System::Diagnostics::Tracing::EventDescriptor::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Diagnostics.Tracing.EventDescriptor.GetHashCode
int System::Diagnostics::Tracing::EventDescriptor::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}