// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SafeSerializationEventArgs
  class SafeSerializationEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SafeSerializationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SafeSerializationEventArgs*, "System.Runtime.Serialization", "SafeSerializationEventArgs");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SafeSerializationEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeSerializationEventArgs : public ::System::EventArgs {
    public:
    public:
    // private System.Runtime.Serialization.StreamingContext m_streamingContext
    // Size: 0xC
    // Offset: 0x10
    ::System::Runtime::Serialization::StreamingContext m_streamingContext;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::StreamingContext) == 0xC);
    // Padding between fields: m_streamingContext and: m_serializedStates
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<System.Object> m_serializedStates
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Il2CppObject*>* m_serializedStates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    public:
    // Get instance field reference: private System.Runtime.Serialization.StreamingContext m_streamingContext
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::StreamingContext& dyn_m_streamingContext();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Object> m_serializedStates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Il2CppObject*>*& dyn_m_serializedStates();
    // System.Collections.Generic.IList`1<System.Object> get_SerializedStates()
    // Offset: 0x169518C
    ::System::Collections::Generic::IList_1<::Il2CppObject*>* get_SerializedStates();
    // System.Void .ctor(System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16950E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeSerializationEventArgs* New_ctor(::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SafeSerializationEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeSerializationEventArgs*, creationType>(streamingContext)));
    }
  }; // System.Runtime.Serialization.SafeSerializationEventArgs
  #pragma pack(pop)
  static check_size<sizeof(SafeSerializationEventArgs), 32 + sizeof(::System::Collections::Generic::List_1<::Il2CppObject*>*)> __System_Runtime_Serialization_SafeSerializationEventArgsSizeCheck;
  static_assert(sizeof(SafeSerializationEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates
// Il2CppName: get_SerializedStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::Il2CppObject*>* (System::Runtime::Serialization::SafeSerializationEventArgs::*)()>(&System::Runtime::Serialization::SafeSerializationEventArgs::get_SerializedStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SafeSerializationEventArgs*), "get_SerializedStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SafeSerializationEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
