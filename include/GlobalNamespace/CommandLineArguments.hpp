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
  // Forward declaring type: CommandLineArguments
  class CommandLineArguments;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CommandLineArguments);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandLineArguments*, "", "CommandLineArguments");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CommandLineArguments
  // [TokenAttribute] Offset: FFFFFFFF
  class CommandLineArguments : public ::Il2CppObject {
    public:
    // static public System.Boolean Contains(System.String argument)
    // Offset: 0x161EFE0
    static bool Contains(::StringW argument);
  }; // CommandLineArguments
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CommandLineArguments::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&GlobalNamespace::CommandLineArguments::Contains)> {
  static const MethodInfo* get() {
    static auto* argument = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CommandLineArguments*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argument});
  }
};
