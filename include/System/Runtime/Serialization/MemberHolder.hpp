// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.MemberHolder
  class MemberHolder : public ::Il2CppObject {
    public:
    // System.Type memberType
    // Size: 0x8
    // Offset: 0x10
    System::Type* memberType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Creating value type constructor for type: MemberHolder
    MemberHolder(System::Type* memberType_ = {}, System::Runtime::Serialization::StreamingContext context_ = {}) noexcept : memberType{memberType_}, context{context_} {}
    // System.Void .ctor(System.Type type, System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x1693518
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberHolder* New_ctor(System::Type* type, System::Runtime::Serialization::StreamingContext ctx) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::MemberHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberHolder*, creationType>(type, ctx)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x1693558
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1693578
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.MemberHolder
  #pragma pack(pop)
  static check_size<sizeof(MemberHolder), 24 + sizeof(System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_MemberHolderSizeCheck;
  static_assert(sizeof(MemberHolder) == 0x24);
  // Writing MetadataGetter for method: MemberHolder::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MemberHolder::*)(System::Type*, System::Runtime::Serialization::StreamingContext)>(&MemberHolder::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MemberHolder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MemberHolder::*)(System::Type*, System::Runtime::Serialization::StreamingContext)>(&MemberHolder::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MemberHolder*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<System::Runtime::Serialization::StreamingContext>()});
    }
  };
  // Writing MetadataGetter for method: MemberHolder::GetHashCode
  // Il2CppName: GetHashCode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (MemberHolder::*)()>(&MemberHolder::GetHashCode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MemberHolder*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MemberHolder::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (MemberHolder::*)(::Il2CppObject*)>(&MemberHolder::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MemberHolder*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::MemberHolder*, "System.Runtime.Serialization", "MemberHolder");
