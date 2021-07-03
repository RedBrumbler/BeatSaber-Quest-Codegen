// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeNames
#include "System/TypeNames.hpp"
// Including type: System.TypeName
#include "System/TypeName.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeNames/ATypeName
  class TypeNames::ATypeName : public ::Il2CppObject/*, public System::TypeName*/ {
    public:
    // Creating value type constructor for type: ATypeName
    ATypeName() noexcept {}
    // Creating interface conversion operator: operator System::TypeName
    operator System::TypeName() noexcept {
      return *reinterpret_cast<System::TypeName*>(this);
    }
    // public System.String get_DisplayName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_DisplayName();
    // public System.Boolean Equals(System.TypeName other)
    // Offset: 0x232C2F4
    bool Equals(System::TypeName* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x232C3E0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x232C40C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // protected System.Void .ctor()
    // Offset: 0x232B108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeNames::ATypeName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::TypeNames::ATypeName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeNames::ATypeName*, creationType>()));
    }
  }; // System.TypeNames/ATypeName
  #pragma pack(pop)
  // Writing MetadataGetter for method: TypeNames::ATypeName::get_DisplayName
  // Il2CppName: get_DisplayName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TypeNames::ATypeName::*)()>(&TypeNames::ATypeName::get_DisplayName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: TypeNames::ATypeName::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TypeNames::ATypeName::*)(System::TypeName*)>(&TypeNames::ATypeName::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::TypeName*>()});
    }
  };
  // Writing MetadataGetter for method: TypeNames::ATypeName::GetHashCode
  // Il2CppName: GetHashCode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (TypeNames::ATypeName::*)()>(&TypeNames::ATypeName::GetHashCode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: TypeNames::ATypeName::Equals
  // Il2CppName: Equals
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (TypeNames::ATypeName::*)(::Il2CppObject*)>(&TypeNames::ATypeName::Equals)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: TypeNames::ATypeName::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TypeNames::ATypeName::*)()>(&TypeNames::ATypeName::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TypeNames::ATypeName::*)()>(&TypeNames::ATypeName::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(TypeNames::ATypeName*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::TypeNames::ATypeName*, "System", "TypeNames/ATypeName");
