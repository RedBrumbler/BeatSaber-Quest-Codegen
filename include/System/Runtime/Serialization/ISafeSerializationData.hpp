// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ISafeSerializationData
  class ISafeSerializationData {
    public:
    // Creating value type constructor for type: ISafeSerializationData
    ISafeSerializationData() noexcept {}
    // public System.Void CompleteDeserialization(System.Object deserialized)
    // Offset: 0xFFFFFFFF
    void CompleteDeserialization(::Il2CppObject* deserialized);
  }; // System.Runtime.Serialization.ISafeSerializationData
  #pragma pack(pop)
  // Writing MetadataGetter for method: ISafeSerializationData::CompleteDeserialization
  // Il2CppName: CompleteDeserialization
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ISafeSerializationData::*)(::Il2CppObject*)>(&ISafeSerializationData::CompleteDeserialization)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ISafeSerializationData*), "CompleteDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ISafeSerializationData*, "System.Runtime.Serialization", "ISafeSerializationData");
