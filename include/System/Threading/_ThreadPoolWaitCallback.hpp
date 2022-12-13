// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: _ThreadPoolWaitCallback
  class _ThreadPoolWaitCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::_ThreadPoolWaitCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::_ThreadPoolWaitCallback*, "System.Threading", "_ThreadPoolWaitCallback");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading._ThreadPoolWaitCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class _ThreadPoolWaitCallback : public ::Il2CppObject {
    public:
    // static System.Boolean PerformWaitCallback()
    // Offset: 0x2229CF0
    static bool PerformWaitCallback();
  }; // System.Threading._ThreadPoolWaitCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback
// Il2CppName: PerformWaitCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::_ThreadPoolWaitCallback*), "PerformWaitCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
