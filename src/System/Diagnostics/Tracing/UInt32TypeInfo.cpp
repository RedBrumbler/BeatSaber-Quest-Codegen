// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.UInt32TypeInfo
#include "System/Diagnostics/Tracing/UInt32TypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.UInt32TypeInfo.WriteData
void System::Diagnostics::Tracing::UInt32TypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, uint& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.UInt32TypeInfo.WriteMetadata
void System::Diagnostics::Tracing::UInt32TypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.UInt32TypeInfo..ctor
System::Diagnostics::Tracing::UInt32TypeInfo* System::Diagnostics::Tracing::UInt32TypeInfo::New_ctor() {
  return (UInt32TypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "UInt32TypeInfo"));
}