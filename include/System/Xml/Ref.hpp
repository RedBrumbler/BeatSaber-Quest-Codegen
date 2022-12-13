// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Ref
  class Ref;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Ref);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ref*, "System.Xml", "Ref");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Ref
  // [TokenAttribute] Offset: FFFFFFFF
  class Ref : public ::Il2CppObject {
    public:
    // static public System.Boolean Equal(System.String strA, System.String strB)
    // Offset: 0x1B0B99C
    static bool Equal(::StringW strA, ::StringW strB);
  }; // System.Xml.Ref
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Ref::Equal
// Il2CppName: Equal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&System::Xml::Ref::Equal)> {
  static const MethodInfo* get() {
    static auto* strA = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* strB = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ref*), "Equal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strA, strB});
  }
};
