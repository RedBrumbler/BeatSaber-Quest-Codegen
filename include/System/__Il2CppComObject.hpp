// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: __Il2CppComObject
  class __Il2CppComObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::__Il2CppComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::__Il2CppComObject*, "System", "__Il2CppComObject");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.__Il2CppComObject
  // [TokenAttribute] Offset: FFFFFFFF
  class __Il2CppComObject : public ::Il2CppObject {
    public:
    // protected override System.Void Finalize()
    // Offset: 0x2B7A5F4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.__Il2CppComObject
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::__Il2CppComObject::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::__Il2CppComObject::*)()>(&System::__Il2CppComObject::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::__Il2CppComObject*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
