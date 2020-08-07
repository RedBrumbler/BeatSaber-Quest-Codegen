// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ByteArrayTypeInfo
#include "System/Diagnostics/Tracing/ByteArrayTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.ByteArrayTypeInfo.WriteData
void System::Diagnostics::Tracing::ByteArrayTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<uint8_t>*& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.ByteArrayTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::ByteArrayTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.ByteArrayTypeInfo..ctor
System::Diagnostics::Tracing::ByteArrayTypeInfo* System::Diagnostics::Tracing::ByteArrayTypeInfo::New_ctor() {
  return (ByteArrayTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "ByteArrayTypeInfo"));
}