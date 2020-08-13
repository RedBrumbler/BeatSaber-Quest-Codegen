// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.UIntPtrTypeInfo
#include "System/Diagnostics/Tracing/UIntPtrTypeInfo.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrTypeInfo.WriteData
void System::Diagnostics::Tracing::UIntPtrTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, System::UIntPtr& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::UIntPtrTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrTypeInfo..ctor
System::Diagnostics::Tracing::UIntPtrTypeInfo* System::Diagnostics::Tracing::UIntPtrTypeInfo::New_ctor() {
  return (UIntPtrTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "UIntPtrTypeInfo"));
}
