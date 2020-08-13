// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
#include "System/Diagnostics/Tracing/ActivityFilter_-GetFilterAsTuple-d__7.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass11_0
#include "System/Diagnostics/Tracing/ActivityFilter_--c__DisplayClass11_0.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass13_0
#include "System/Diagnostics/Tracing/ActivityFilter_--c__DisplayClass13_0.hpp"
// Including type: System.Collections.Concurrent.ConcurrentDictionary`2
#include "System/Collections/Concurrent/ConcurrentDictionary_2.hpp"
// Including type: System.Tuple`2
#include "System/Tuple_2.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.DisableFilter
void System::Diagnostics::Tracing::ActivityFilter::DisableFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "DisableFilter", filterList, source));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.UpdateFilter
void System::Diagnostics::Tracing::ActivityFilter::UpdateFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, ::CsString* startEvents) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "UpdateFilter", filterList, source, perEventSourceSessionId, startEvents));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.PassesActivityFilter
bool System::Diagnostics::Tracing::ActivityFilter::PassesActivityFilter(System::Diagnostics::Tracing::ActivityFilter* filterList, System::Guid* childActivityID, bool triggeringEvent, System::Diagnostics::Tracing::EventSource* source, int eventId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics.Tracing", "ActivityFilter", "PassesActivityFilter", filterList, childActivityID, triggeringEvent, source, eventId));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.FlowActivityIfNeeded
void System::Diagnostics::Tracing::ActivityFilter::FlowActivityIfNeeded(System::Diagnostics::Tracing::ActivityFilter* filterList, System::Guid* currentActivityId, System::Guid* childActivityID) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "FlowActivityIfNeeded", filterList, currentActivityId, childActivityID));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.UpdateKwdTriggers
void System::Diagnostics::Tracing::ActivityFilter::UpdateKwdTriggers(System::Diagnostics::Tracing::ActivityFilter* activityFilter, System::Guid sourceGuid, System::Diagnostics::Tracing::EventSource* source, System::Diagnostics::Tracing::EventKeywords sessKeywords) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "UpdateKwdTriggers", activityFilter, sourceGuid, source, sessKeywords));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.GetFilterAsTuple
System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>* System::Diagnostics::Tracing::ActivityFilter::GetFilterAsTuple(System::Guid sourceGuid) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Tuple_2<int, int>*>*>(this, "GetFilterAsTuple", sourceGuid)));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter..ctor
System::Diagnostics::Tracing::ActivityFilter* System::Diagnostics::Tracing::ActivityFilter::New_ctor(System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, int eventId, int samplingFreq, System::Diagnostics::Tracing::ActivityFilter* existingFilter) {
  return (ActivityFilter*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "ActivityFilter", source, perEventSourceSessionId, eventId, samplingFreq, existingFilter));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.EnsureActivityCleanupDelegate
void System::Diagnostics::Tracing::ActivityFilter::EnsureActivityCleanupDelegate(System::Diagnostics::Tracing::ActivityFilter* filterList) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "EnsureActivityCleanupDelegate", filterList));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.GetActivityDyingDelegate
System::Action_1<System::Guid>* System::Diagnostics::Tracing::ActivityFilter::GetActivityDyingDelegate(System::Diagnostics::Tracing::ActivityFilter* filterList) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Action_1<System::Guid>*>("System.Diagnostics.Tracing", "ActivityFilter", "GetActivityDyingDelegate", filterList));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.EnableFilter
bool System::Diagnostics::Tracing::ActivityFilter::EnableFilter(System::Diagnostics::Tracing::ActivityFilter*& filterList, System::Diagnostics::Tracing::EventSource* source, int perEventSourceSessionId, int eventId, int samplingFreq) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Diagnostics.Tracing", "ActivityFilter", "EnableFilter", filterList, source, perEventSourceSessionId, eventId, samplingFreq));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.TrimActiveActivityStore
void System::Diagnostics::Tracing::ActivityFilter::TrimActiveActivityStore(System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>* activities) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "ActivityFilter", "TrimActiveActivityStore", activities));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.GetActiveActivities
System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>* System::Diagnostics::Tracing::ActivityFilter::GetActiveActivities(System::Diagnostics::Tracing::ActivityFilter* filterList) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Concurrent::ConcurrentDictionary_2<System::Guid, int>*>("System.Diagnostics.Tracing", "ActivityFilter", "GetActiveActivities", filterList)));
}
// Autogenerated method: System.Diagnostics.Tracing.ActivityFilter.Dispose
void System::Diagnostics::Tracing::ActivityFilter::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Diagnostics::Tracing::ActivityFilter::System_IDisposable_Dispose() {
  Dispose();
}
