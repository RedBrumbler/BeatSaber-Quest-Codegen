// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.IntPtrArrayTypeInfo
#include "System/Diagnostics/Tracing/IntPtrArrayTypeInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.IntPtrArrayTypeInfo.WriteData
void System::Diagnostics::Tracing::IntPtrArrayTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<System::IntPtr>*& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.IntPtrArrayTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::IntPtrArrayTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.IntPtrArrayTypeInfo..ctor
System::Diagnostics::Tracing::IntPtrArrayTypeInfo* System::Diagnostics::Tracing::IntPtrArrayTypeInfo::New_ctor() {
  return (IntPtrArrayTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "IntPtrArrayTypeInfo"));
}
