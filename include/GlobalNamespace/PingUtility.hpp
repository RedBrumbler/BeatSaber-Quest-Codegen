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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PingUtility
  class PingUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PingUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PingUtility*, "", "PingUtility");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PingUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class PingUtility : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::PingUtility::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::PingUtility::$PingAsync$d__0
    struct $PingAsync$d__0;
    // static public System.Threading.Tasks.Task`1<System.Int64> PingAsync(System.String url)
    // Offset: 0x269E36C
    static ::System::Threading::Tasks::Task_1<int64_t>* PingAsync(::StringW url);
  }; // PingUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PingUtility::PingAsync
// Il2CppName: PingAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int64_t>* (*)(::StringW)>(&GlobalNamespace::PingUtility::PingAsync)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PingUtility*), "PingAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url});
  }
};
