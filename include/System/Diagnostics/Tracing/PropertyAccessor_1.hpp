// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: PropertyAnalysis
  class PropertyAnalysis;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.PropertyAccessor`1
  template<typename ContainerType>
  class PropertyAccessor_1 : public ::CsObject {
    public:
    // public System.Void Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ContainerType value)
    // Offset: 0xFFFFFFFF
    void Write(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ContainerType& value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", collector, value));
    }
    // public System.Object GetData(ContainerType value)
    // Offset: 0xFFFFFFFF
    ::CsObject* GetData(ContainerType value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetData", value));
    }
    // static public System.Diagnostics.Tracing.PropertyAccessor`1<ContainerType> Create(System.Diagnostics.Tracing.PropertyAnalysis property)
    // Offset: 0xFFFFFFFF
    static System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>* Create(System::Diagnostics::Tracing::PropertyAnalysis* property) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertyAccessor_1<ContainerType>*>::get(), "Create", property));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PropertyAccessor_1<ContainerType>* New_ctor() {
      return (PropertyAccessor_1<ContainerType>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PropertyAccessor_1<ContainerType>*>::get()));
    }
  }; // System.Diagnostics.Tracing.PropertyAccessor`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::PropertyAccessor_1, "System.Diagnostics.Tracing", "PropertyAccessor`1");
#pragma pack(pop)
