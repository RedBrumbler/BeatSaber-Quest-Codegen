// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.UIntPtrArrayTypeInfo
#include "System/Diagnostics/Tracing/UIntPtrArrayTypeInfo.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingDataCollector
#include "System/Diagnostics/Tracing/TraceLoggingDataCollector.hpp"
// Including type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
#include "System/Diagnostics/Tracing/TraceLoggingMetadataCollector.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrArrayTypeInfo.WriteData
void System::Diagnostics::Tracing::UIntPtrArrayTypeInfo::WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<System::UIntPtr>*& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
}
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrArrayTypeInfo.WriteMetadata
void System::Diagnostics::Tracing::UIntPtrArrayTypeInfo::WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
}
// Autogenerated method: System.Diagnostics.Tracing.UIntPtrArrayTypeInfo..ctor
System::Diagnostics::Tracing::UIntPtrArrayTypeInfo* System::Diagnostics::Tracing::UIntPtrArrayTypeInfo::New_ctor() {
  return (UIntPtrArrayTypeInfo*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "UIntPtrArrayTypeInfo"));
}
