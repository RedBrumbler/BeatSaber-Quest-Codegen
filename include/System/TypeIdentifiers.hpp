// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeIdentifier
  class TypeIdentifier;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: TypeIdentifiers
  class TypeIdentifiers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TypeIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifiers*, "System", "TypeIdentifiers");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeIdentifiers
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeIdentifiers : public ::Il2CppObject {
    public:
    // Nested type: ::System::TypeIdentifiers::Display
    class Display;
    // static System.TypeIdentifier FromDisplay(System.String displayName)
    // Offset: 0x2249EC0
    static ::System::TypeIdentifier* FromDisplay(::StringW displayName);
  }; // System.TypeIdentifiers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeIdentifiers::FromDisplay
// Il2CppName: FromDisplay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&System::TypeIdentifiers::FromDisplay)> {
  static const MethodInfo* get() {
    static auto* displayName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers*), "FromDisplay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{displayName});
  }
};
