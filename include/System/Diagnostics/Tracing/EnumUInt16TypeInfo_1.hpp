// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EnumUInt16TypeInfo`1
  template<typename EnumType>
  class EnumUInt16TypeInfo_1 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType> {
    public:
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::CsString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
    }
    // public override System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, EnumType value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, EnumType value)
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, EnumType& value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
    }
    // public override System.Object GetData(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Object TraceLoggingTypeInfo::GetData(System.Object value)
    ::CsObject* GetData(::CsObject* value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetData", value));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static EnumUInt16TypeInfo_1<EnumType>* New_ctor() {
      return (EnumUInt16TypeInfo_1<EnumType>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumUInt16TypeInfo_1<EnumType>*>::get()));
    }
  }; // System.Diagnostics.Tracing.EnumUInt16TypeInfo`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::EnumUInt16TypeInfo_1, "System.Diagnostics.Tracing", "EnumUInt16TypeInfo`1");
#pragma pack(pop)
