// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StringExtensions
  class StringExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringExtensions*, "", "StringExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: StringExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StringExtensions : public ::Il2CppObject {
    public:
    // static public System.String Truncate(System.String s, System.Int32 length, System.Boolean appendEllipsis)
    // Offset: 0x2AE839C
    static ::StringW Truncate(::StringW s, int length, bool appendEllipsis);
  }; // StringExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StringExtensions::Truncate
// Il2CppName: Truncate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, bool)>(&GlobalNamespace::StringExtensions::Truncate)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* appendEllipsis = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringExtensions*), "Truncate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, length, appendEllipsis});
  }
};
