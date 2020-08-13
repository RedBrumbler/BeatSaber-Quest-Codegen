// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventDescriptor
#include "System/Diagnostics/Tracing/EventDescriptor.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.Diagnostics.Tracing.EventSource/EventData
#include "System/Diagnostics/Tracing/EventSource_EventData.hpp"
// Including type: System.Diagnostics.Tracing.EventSource/Sha1ForNonSecretPurposes
#include "System/Diagnostics/Tracing/EventSource_Sha1ForNonSecretPurposes.hpp"
// Including type: System.Diagnostics.Tracing.EventSource/OverideEventProvider
#include "System/Diagnostics/Tracing/EventSource_OverideEventProvider.hpp"
// Including type: System.Diagnostics.Tracing.EventSource/EventMetadata
#include "System/Diagnostics/Tracing/EventSource_EventMetadata.hpp"
// Including type: System.EventHandler`1
#include "System/EventHandler_1.hpp"
// Including type: System.Diagnostics.Tracing.EventCommandEventArgs
#include "System/Diagnostics/Tracing/EventCommandEventArgs.hpp"
// Including type: System.Diagnostics.Tracing.EventDispatcher
#include "System/Diagnostics/Tracing/EventDispatcher.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Diagnostics.Tracing.EtwSession
#include "System/Diagnostics/Tracing/EtwSession.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Diagnostics.Tracing.ActivityTracker
#include "System/Diagnostics/Tracing/ActivityTracker.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Diagnostics.Tracing.EventSourceOptions
#include "System/Diagnostics/Tracing/EventSourceOptions.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingEventTypes
#include "System/Diagnostics/Tracing/TraceLoggingEventTypes.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: System.Diagnostics.Tracing.NameInfo
#include "System/Diagnostics/Tracing/NameInfo.hpp"
// Including type: System.Diagnostics.Tracing.EventChannel
#include "System/Diagnostics/Tracing/EventChannel.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Diagnostics.Tracing.EventListener
#include "System/Diagnostics/Tracing/EventListener.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Diagnostics.Tracing.EventManifestOptions
#include "System/Diagnostics/Tracing/EventManifestOptions.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
// Including type: System.Diagnostics.Tracing.EventWrittenEventArgs
#include "System/Diagnostics/Tracing/EventWrittenEventArgs.hpp"
// Including type: System.Diagnostics.Tracing.EventOpcode
#include "System/Diagnostics/Tracing/EventOpcode.hpp"
// Including type: System.Diagnostics.Tracing.EventCommand
#include "System/Diagnostics/Tracing/EventCommand.hpp"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Diagnostics.Tracing.ManifestBuilder
#include "System/Diagnostics/Tracing/ManifestBuilder.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.Diagnostics.Tracing.EventAttribute
#include "System/Diagnostics/Tracing/EventAttribute.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.UInt32 s_currentPid
uint System::Diagnostics::Tracing::EventSource::_get_s_currentPid() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("System.Diagnostics.Tracing", "EventSource", "s_currentPid"));
}
// Autogenerated static field setter
// Set static field: static System.UInt32 s_currentPid
void System::Diagnostics::Tracing::EventSource::_set_s_currentPid(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventSource", "s_currentPid", value));
}
// Autogenerated static field getter
// Get static field: static private System.Byte m_EventSourceExceptionRecurenceCount
uint8_t System::Diagnostics::Tracing::EventSource::_get_m_EventSourceExceptionRecurenceCount() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint8_t>("System.Diagnostics.Tracing", "EventSource", "m_EventSourceExceptionRecurenceCount"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte m_EventSourceExceptionRecurenceCount
void System::Diagnostics::Tracing::EventSource::_set_m_EventSourceExceptionRecurenceCount(uint8_t value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventSource", "m_EventSourceExceptionRecurenceCount", value));
}
// Autogenerated static field getter
// Get static field: static System.Action`1<System.Guid> s_activityDying
System::Action_1<System::Guid>* System::Diagnostics::Tracing::EventSource::_get_s_activityDying() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<System::Guid>*>("System.Diagnostics.Tracing", "EventSource", "s_activityDying"));
}
// Autogenerated static field setter
// Set static field: static System.Action`1<System.Guid> s_activityDying
void System::Diagnostics::Tracing::EventSource::_set_s_activityDying(System::Action_1<System::Guid>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventSource", "s_activityDying", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Byte[] namespaceBytes
::Array<uint8_t>* System::Diagnostics::Tracing::EventSource::_get_namespaceBytes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Diagnostics.Tracing", "EventSource", "namespaceBytes"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Byte[] namespaceBytes
void System::Diagnostics::Tracing::EventSource::_set_namespaceBytes(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventSource", "namespaceBytes", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Guid AspNetEventSourceGuid
System::Guid System::Diagnostics::Tracing::EventSource::_get_AspNetEventSourceGuid() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Guid>("System.Diagnostics.Tracing", "EventSource", "AspNetEventSourceGuid"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Guid AspNetEventSourceGuid
void System::Diagnostics::Tracing::EventSource::_set_AspNetEventSourceGuid(System::Guid value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EventSource", "AspNetEventSourceGuid", value));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteMultiMerge
void System::Diagnostics::Tracing::EventSource::WriteMultiMerge(::CsString* eventName, System::Diagnostics::Tracing::EventSourceOptions& options, System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, System::Guid* activityID, System::Guid* childActivityID, ::Array<::CsObject*>* values) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMultiMerge", eventName, options, eventTypes, activityID, childActivityID, values));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteMultiMergeInner
void System::Diagnostics::Tracing::EventSource::WriteMultiMergeInner(::CsString* eventName, System::Diagnostics::Tracing::EventSourceOptions& options, System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, System::Guid* activityID, System::Guid* childActivityID, ::Array<::CsObject*>* values) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMultiMergeInner", eventName, options, eventTypes, activityID, childActivityID, values));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteMultiMerge
void System::Diagnostics::Tracing::EventSource::WriteMultiMerge(::CsString* eventName, System::Diagnostics::Tracing::EventSourceOptions& options, System::Diagnostics::Tracing::TraceLoggingEventTypes* eventTypes, System::Guid* activityID, System::Guid* childActivityID, System::Diagnostics::Tracing::EventSource::EventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMultiMerge", eventName, options, eventTypes, activityID, childActivityID, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteCleanup
void System::Diagnostics::Tracing::EventSource::WriteCleanup(System::Runtime::InteropServices::GCHandle* pPins, int cPins) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteCleanup", pPins, cPins));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.InitializeProviderMetadata
void System::Diagnostics::Tracing::EventSource::InitializeProviderMetadata() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitializeProviderMetadata"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AddValueToMetaData
int System::Diagnostics::Tracing::EventSource::AddValueToMetaData(System::Collections::Generic::List_1<uint8_t>* metaData, ::CsString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Diagnostics.Tracing", "EventSource", "AddValueToMetaData", metaData, value));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.HexDigit
int System::Diagnostics::Tracing::EventSource::HexDigit(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Diagnostics.Tracing", "EventSource", "HexDigit", c));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.UpdateDescriptor
System::Diagnostics::Tracing::NameInfo* System::Diagnostics::Tracing::EventSource::UpdateDescriptor(::CsString* name, System::Diagnostics::Tracing::TraceLoggingEventTypes* eventInfo, System::Diagnostics::Tracing::EventSourceOptions& options, System::Diagnostics::Tracing::EventDescriptor& descriptor) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::NameInfo*>(this, "UpdateDescriptor", name, eventInfo, options, descriptor));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_Name
::CsString* System::Diagnostics::Tracing::EventSource::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_Guid
System::Guid System::Diagnostics::Tracing::EventSource::get_Guid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>(this, "get_Guid"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.IsEnabled
bool System::Diagnostics::Tracing::EventSource::IsEnabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsEnabled"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.IsEnabled
bool System::Diagnostics::Tracing::EventSource::IsEnabled(System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventKeywords keywords) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsEnabled", level, keywords));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.IsEnabled
bool System::Diagnostics::Tracing::EventSource::IsEnabled(System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventKeywords keywords, System::Diagnostics::Tracing::EventChannel channel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsEnabled", level, keywords, channel));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetGuid
System::Guid System::Diagnostics::Tracing::EventSource::GetGuid(System::Type* eventSourceType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System.Diagnostics.Tracing", "EventSource", "GetGuid", eventSourceType));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetName
::CsString* System::Diagnostics::Tracing::EventSource::GetName(System::Type* eventSourceType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Diagnostics.Tracing", "EventSource", "GetName", eventSourceType));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.SetCurrentThreadActivityId
void System::Diagnostics::Tracing::EventSource::SetCurrentThreadActivityId(System::Guid activityId) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", "SetCurrentThreadActivityId", activityId));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_CurrentThreadActivityId
System::Guid System::Diagnostics::Tracing::EventSource::get_CurrentThreadActivityId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System.Diagnostics.Tracing", "EventSource", "get_CurrentThreadActivityId"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_InternalCurrentThreadActivityId
System::Guid System::Diagnostics::Tracing::EventSource::get_InternalCurrentThreadActivityId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System.Diagnostics.Tracing", "EventSource", "get_InternalCurrentThreadActivityId"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_FallbackActivityId
System::Guid System::Diagnostics::Tracing::EventSource::get_FallbackActivityId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System.Diagnostics.Tracing", "EventSource", "get_FallbackActivityId"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource..ctor
System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor(System::Diagnostics::Tracing::EventSourceSettings settings) {
  return (EventSource*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EventSource", settings));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource..ctor
System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor(System::Diagnostics::Tracing::EventSourceSettings settings, ::Array<::CsString*>* traits) {
  return (EventSource*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EventSource", settings, traits));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.OnEventCommand
void System::Diagnostics::Tracing::EventSource::OnEventCommand(System::Diagnostics::Tracing::EventCommandEventArgs* command) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEventCommand", command));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEvent
void System::Diagnostics::Tracing::EventSource::WriteEvent(int eventId, int arg1) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEvent", eventId, arg1));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEvent
void System::Diagnostics::Tracing::EventSource::WriteEvent(int eventId, ::CsString* arg1, ::CsString* arg2) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEvent", eventId, arg1, arg2));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEvent
void System::Diagnostics::Tracing::EventSource::WriteEvent(int eventId, ::CsString* arg1, ::CsString* arg2, ::CsString* arg3) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEvent", eventId, arg1, arg2, arg3));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEventCore
void System::Diagnostics::Tracing::EventSource::WriteEventCore(int eventId, int eventDataCount, System::Diagnostics::Tracing::EventSource::EventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEventCore", eventId, eventDataCount, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEventWithRelatedActivityIdCore
void System::Diagnostics::Tracing::EventSource::WriteEventWithRelatedActivityIdCore(int eventId, System::Guid* relatedActivityId, int eventDataCount, System::Diagnostics::Tracing::EventSource::EventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEventWithRelatedActivityIdCore", eventId, relatedActivityId, eventDataCount, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEvent
void System::Diagnostics::Tracing::EventSource::WriteEvent(int eventId, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEvent", eventId, args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.Dispose
void System::Diagnostics::Tracing::EventSource::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteStringToListener
void System::Diagnostics::Tracing::EventSource::WriteStringToListener(System::Diagnostics::Tracing::EventListener* listener, ::CsString* msg, System::Diagnostics::Tracing::SessionMask m) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStringToListener", listener, msg, m));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEventRaw
void System::Diagnostics::Tracing::EventSource::WriteEventRaw(::CsString* eventName, System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid* activityID, System::Guid* relatedActivityID, int dataCount, System::IntPtr data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEventRaw", eventName, eventDescriptor, activityID, relatedActivityID, dataCount, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.Initialize
void System::Diagnostics::Tracing::EventSource::Initialize(System::Guid eventSourceGuid, ::CsString* eventSourceName, ::Array<::CsString*>* traits) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize", eventSourceGuid, eventSourceName, traits));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetName
::CsString* System::Diagnostics::Tracing::EventSource::GetName(System::Type* eventSourceType, System::Diagnostics::Tracing::EventManifestOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>("System.Diagnostics.Tracing", "EventSource", "GetName", eventSourceType, flags));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GenerateGuidFromName
System::Guid System::Diagnostics::Tracing::EventSource::GenerateGuidFromName(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>("System.Diagnostics.Tracing", "EventSource", "GenerateGuidFromName", name));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.DecodeObject
::CsObject* System::Diagnostics::Tracing::EventSource::DecodeObject(int eventId, int parameterId, System::Diagnostics::Tracing::EventSource::EventData*& data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "DecodeObject", eventId, parameterId, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetDispatcher
System::Diagnostics::Tracing::EventDispatcher* System::Diagnostics::Tracing::EventSource::GetDispatcher(System::Diagnostics::Tracing::EventListener* listener) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::EventDispatcher*>(this, "GetDispatcher", listener));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEventVarargs
void System::Diagnostics::Tracing::EventSource::WriteEventVarargs(int eventId, System::Guid* childActivityID, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEventVarargs", eventId, childActivityID, args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.SerializeEventArgs
::Array<::CsObject*>* System::Diagnostics::Tracing::EventSource::SerializeEventArgs(int eventId, ::Array<::CsObject*>* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsObject*>*>(this, "SerializeEventArgs", eventId, args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.LogEventArgsMismatches
void System::Diagnostics::Tracing::EventSource::LogEventArgsMismatches(::Array<System::Reflection::ParameterInfo*>* infos, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LogEventArgsMismatches", infos, args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetParamLengthIncludingByteArray
int System::Diagnostics::Tracing::EventSource::GetParamLengthIncludingByteArray(::Array<System::Reflection::ParameterInfo*>* parameters) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetParamLengthIncludingByteArray", parameters));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteToAllListeners
void System::Diagnostics::Tracing::EventSource::WriteToAllListeners(int eventId, System::Guid* childActivityID, int eventDataCount, System::Diagnostics::Tracing::EventSource::EventData* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteToAllListeners", eventId, childActivityID, eventDataCount, data));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteToAllListeners
void System::Diagnostics::Tracing::EventSource::WriteToAllListeners(int eventId, System::Guid* childActivityID, ::Array<::CsObject*>* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteToAllListeners", eventId, childActivityID, args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.DispatchToAllListeners
void System::Diagnostics::Tracing::EventSource::DispatchToAllListeners(int eventId, System::Guid* childActivityID, System::Diagnostics::Tracing::EventWrittenEventArgs* eventCallbackArgs) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DispatchToAllListeners", eventId, childActivityID, eventCallbackArgs));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteEventString
void System::Diagnostics::Tracing::EventSource::WriteEventString(System::Diagnostics::Tracing::EventLevel level, int64_t keywords, ::CsString* msgString) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteEventString", level, keywords, msgString));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.WriteStringToAllListeners
void System::Diagnostics::Tracing::EventSource::WriteStringToAllListeners(::CsString* eventName, ::CsString* msg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteStringToAllListeners", eventName, msg));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetEtwSessionMask
System::Diagnostics::Tracing::SessionMask System::Diagnostics::Tracing::EventSource::GetEtwSessionMask(int eventId, System::Guid* childActivityID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::SessionMask>(this, "GetEtwSessionMask", eventId, childActivityID));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.IsEnabledByDefault
bool System::Diagnostics::Tracing::EventSource::IsEnabledByDefault(int eventNum, bool enable, System::Diagnostics::Tracing::EventLevel currentLevel, System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsEnabledByDefault", eventNum, enable, currentLevel, currentMatchAnyKeyword));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.IsEnabledCommon
bool System::Diagnostics::Tracing::EventSource::IsEnabledCommon(bool enabled, System::Diagnostics::Tracing::EventLevel currentLevel, System::Diagnostics::Tracing::EventKeywords currentMatchAnyKeyword, System::Diagnostics::Tracing::EventLevel eventLevel, System::Diagnostics::Tracing::EventKeywords eventKeywords, System::Diagnostics::Tracing::EventChannel eventChannel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsEnabledCommon", enabled, currentLevel, currentMatchAnyKeyword, eventLevel, eventKeywords, eventChannel));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ThrowEventSourceException
void System::Diagnostics::Tracing::EventSource::ThrowEventSourceException(::CsString* eventName, System::Exception* innerEx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ThrowEventSourceException", eventName, innerEx));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ValidateEventOpcodeForTransfer
void System::Diagnostics::Tracing::EventSource::ValidateEventOpcodeForTransfer(System::Diagnostics::Tracing::EventSource::EventMetadata& eventData, ::CsString* eventName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ValidateEventOpcodeForTransfer", eventData, eventName));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetOpcodeWithDefault
System::Diagnostics::Tracing::EventOpcode System::Diagnostics::Tracing::EventSource::GetOpcodeWithDefault(System::Diagnostics::Tracing::EventOpcode opcode, ::CsString* eventName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::EventOpcode>("System.Diagnostics.Tracing", "EventSource", "GetOpcodeWithDefault", opcode, eventName));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.SendCommand
void System::Diagnostics::Tracing::EventSource::SendCommand(System::Diagnostics::Tracing::EventListener* listener, int perEventSourceSessionId, int etwSessionId, System::Diagnostics::Tracing::EventCommand command, bool enable, System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventKeywords matchAnyKeyword, System::Collections::Generic::IDictionary_2<::CsString*, ::CsString*>* commandArguments) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendCommand", listener, perEventSourceSessionId, etwSessionId, command, enable, level, matchAnyKeyword, commandArguments));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.DoCommand
void System::Diagnostics::Tracing::EventSource::DoCommand(System::Diagnostics::Tracing::EventCommandEventArgs* commandArgs) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoCommand", commandArgs));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.UpdateEtwSession
void System::Diagnostics::Tracing::EventSource::UpdateEtwSession(int sessionIdBit, int etwSessionId, bool bEnable, ::CsString* activityFilters, bool participateInSampling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateEtwSession", sessionIdBit, etwSessionId, bEnable, activityFilters, participateInSampling));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ParseCommandArgs
bool System::Diagnostics::Tracing::EventSource::ParseCommandArgs(System::Collections::Generic::IDictionary_2<::CsString*, ::CsString*>* commandArguments, bool& participateInSampling, ::CsString*& activityFilters, int& sessionIdBit) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics.Tracing", "EventSource", "ParseCommandArgs", commandArguments, participateInSampling, activityFilters, sessionIdBit));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.UpdateKwdTriggers
void System::Diagnostics::Tracing::EventSource::UpdateKwdTriggers(bool enable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateKwdTriggers", enable));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.EnableEventForDispatcher
bool System::Diagnostics::Tracing::EventSource::EnableEventForDispatcher(System::Diagnostics::Tracing::EventDispatcher* dispatcher, int eventId, bool value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnableEventForDispatcher", dispatcher, eventId, value));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AnyEventEnabled
bool System::Diagnostics::Tracing::EventSource::AnyEventEnabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AnyEventEnabled"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_IsDisposed
bool System::Diagnostics::Tracing::EventSource::get_IsDisposed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsDisposed"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.EnsureDescriptorsInitialized
void System::Diagnostics::Tracing::EventSource::EnsureDescriptorsInitialized() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnsureDescriptorsInitialized"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.SendManifest
bool System::Diagnostics::Tracing::EventSource::SendManifest(::Array<uint8_t>* rawManifest) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SendManifest", rawManifest));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetCustomAttributeHelper
System::Attribute* System::Diagnostics::Tracing::EventSource::GetCustomAttributeHelper(System::Reflection::MemberInfo* member, System::Type* attributeType, System::Diagnostics::Tracing::EventManifestOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Attribute*>("System.Diagnostics.Tracing", "EventSource", "GetCustomAttributeHelper", member, attributeType, flags));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AttributeTypeNamesMatch
bool System::Diagnostics::Tracing::EventSource::AttributeTypeNamesMatch(System::Type* attributeType, System::Type* reflectedAttributeType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics.Tracing", "EventSource", "AttributeTypeNamesMatch", attributeType, reflectedAttributeType));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetEventSourceBaseType
System::Type* System::Diagnostics::Tracing::EventSource::GetEventSourceBaseType(System::Type* eventSourceType, bool allowEventSourceOverride, bool reflectionOnly) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>("System.Diagnostics.Tracing", "EventSource", "GetEventSourceBaseType", eventSourceType, allowEventSourceOverride, reflectionOnly));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.CreateManifestAndDescriptors
::Array<uint8_t>* System::Diagnostics::Tracing::EventSource::CreateManifestAndDescriptors(System::Type* eventSourceType, ::CsString* eventSourceDllName, System::Diagnostics::Tracing::EventSource* source, System::Diagnostics::Tracing::EventManifestOptions flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Diagnostics.Tracing", "EventSource", "CreateManifestAndDescriptors", eventSourceType, eventSourceDllName, source, flags));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.RemoveFirstArgIfRelatedActivityId
bool System::Diagnostics::Tracing::EventSource::RemoveFirstArgIfRelatedActivityId(::Array<System::Reflection::ParameterInfo*>*& args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics.Tracing", "EventSource", "RemoveFirstArgIfRelatedActivityId", args));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AddProviderEnumKind
void System::Diagnostics::Tracing::EventSource::AddProviderEnumKind(System::Diagnostics::Tracing::ManifestBuilder* manifest, System::Reflection::FieldInfo* staticField, ::CsString* providerEnumKind) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", "AddProviderEnumKind", manifest, staticField, providerEnumKind));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AddEventDescriptor
void System::Diagnostics::Tracing::EventSource::AddEventDescriptor(::Array<System::Diagnostics::Tracing::EventSource::EventMetadata>*& eventData, ::CsString* eventName, System::Diagnostics::Tracing::EventAttribute* eventAttribute, ::Array<System::Reflection::ParameterInfo*>* eventParameters, bool hasRelatedActivityID) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", "AddEventDescriptor", eventData, eventName, eventAttribute, eventParameters, hasRelatedActivityID));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.TrimEventDescriptors
void System::Diagnostics::Tracing::EventSource::TrimEventDescriptors(::Array<System::Diagnostics::Tracing::EventSource::EventMetadata>*& eventData) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", "TrimEventDescriptors", eventData));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.AddListener
void System::Diagnostics::Tracing::EventSource::AddListener(System::Diagnostics::Tracing::EventListener* listener) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddListener", listener));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.DebugCheckEvent
void System::Diagnostics::Tracing::EventSource::DebugCheckEvent(System::Collections::Generic::Dictionary_2<::CsString*, ::CsString*>*& eventsByName, ::Array<System::Diagnostics::Tracing::EventSource::EventMetadata>* eventData, System::Reflection::MethodInfo* method, System::Diagnostics::Tracing::EventAttribute* eventAttribute, System::Diagnostics::Tracing::ManifestBuilder* manifest, System::Diagnostics::Tracing::EventManifestOptions options) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", "DebugCheckEvent", eventsByName, eventData, method, eventAttribute, manifest, options));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.GetHelperCallFirstArg
int System::Diagnostics::Tracing::EventSource::GetHelperCallFirstArg(System::Reflection::MethodInfo* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Diagnostics.Tracing", "EventSource", "GetHelperCallFirstArg", method));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ReportOutOfBandMessage
void System::Diagnostics::Tracing::EventSource::ReportOutOfBandMessage(::CsString* msg, bool flush) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReportOutOfBandMessage", msg, flush));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ValidateSettings
System::Diagnostics::Tracing::EventSourceSettings System::Diagnostics::Tracing::EventSource::ValidateSettings(System::Diagnostics::Tracing::EventSourceSettings settings) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::EventSourceSettings>(this, "ValidateSettings", settings));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_ThrowOnEventWriteErrors
bool System::Diagnostics::Tracing::EventSource::get_ThrowOnEventWriteErrors() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ThrowOnEventWriteErrors"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.get_SelfDescribingEvents
bool System::Diagnostics::Tracing::EventSource::get_SelfDescribingEvents() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SelfDescribingEvents"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ReportActivitySamplingInfo
void System::Diagnostics::Tracing::EventSource::ReportActivitySamplingInfo(System::Diagnostics::Tracing::EventListener* listener, System::Diagnostics::Tracing::SessionMask sessions) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReportActivitySamplingInfo", listener, sessions));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource..cctor
void System::Diagnostics::Tracing::EventSource::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EventSource", ".cctor"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.ToString
::CsString* System::Diagnostics::Tracing::EventSource::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource..ctor
System::Diagnostics::Tracing::EventSource* System::Diagnostics::Tracing::EventSource::New_ctor() {
  return (EventSource*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EventSource"));
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.Dispose
void System::Diagnostics::Tracing::EventSource::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Diagnostics::Tracing::EventSource::System_IDisposable_Dispose() {
  Dispose();
}
// Autogenerated method: System.Diagnostics.Tracing.EventSource.Finalize
void System::Diagnostics::Tracing::EventSource::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
