// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.UInt64ArrayTypeInfo
#include "System/Diagnostics/Tracing/UInt64ArrayTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.UInt64ArrayTypeInfo.WriteData
void System::Diagnostics::Tracing::UInt64ArrayTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<uint64_t>*& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.UInt64ArrayTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::UInt64ArrayTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.UInt64ArrayTypeInfo..ctor
System::Diagnostics::Tracing::UInt64ArrayTypeInfo* System::Diagnostics::Tracing::UInt64ArrayTypeInfo::New_ctor() {
  return (UInt64ArrayTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "UInt64ArrayTypeInfo"));
}
