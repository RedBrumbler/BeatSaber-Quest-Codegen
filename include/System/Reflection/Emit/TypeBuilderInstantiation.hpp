// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: TypeBuilderInstantiation
  class TypeBuilderInstantiation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::TypeBuilderInstantiation);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::TypeBuilderInstantiation*, "System.Reflection.Emit", "TypeBuilderInstantiation");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.TypeBuilderInstantiation
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeBuilderInstantiation : public ::System::Reflection::TypeInfo {
    public:
    // static System.Type MakeGenericType(System.Type type, System.Type[] typeArguments)
    // Offset: 0x22E13D0
    static ::System::Type* MakeGenericType(::System::Type* type, ::ArrayW<::System::Type*> typeArguments);
  }; // System.Reflection.Emit.TypeBuilderInstantiation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::TypeBuilderInstantiation::MakeGenericType
// Il2CppName: MakeGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&System::Reflection::Emit::TypeBuilderInstantiation::MakeGenericType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* typeArguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::TypeBuilderInstantiation*), "MakeGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, typeArguments});
  }
};
