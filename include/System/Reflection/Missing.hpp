// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Missing
  // [ComVisibleAttribute] Offset: D7BED8
  class Missing : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: Missing
    Missing() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static public readonly System.Reflection.Missing Value
    static System::Reflection::Missing* _get_Value();
    // Set static field: static public readonly System.Reflection.Missing Value
    static void _set_Value(System::Reflection::Missing* value);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C7D974
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0x1C7DA0C
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1C7D970
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Missing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::Missing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Missing*, creationType>()));
    }
  }; // System.Reflection.Missing
  #pragma pack(pop)
  // Writing MetadataGetter for method: Missing::System_Runtime_Serialization_ISerializable_GetObjectData
  // Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Missing::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&Missing::System_Runtime_Serialization_ISerializable_GetObjectData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Missing*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::SerializationInfo*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  // Writing MetadataGetter for method: Missing::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Missing::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Missing*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Missing::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Missing::*)()>(&Missing::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Missing*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Missing::*)()>(&Missing::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Missing*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Missing*, "System.Reflection", "Missing");
