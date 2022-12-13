// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GlobalJavaObjectRef);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GlobalJavaObjectRef*, "UnityEngine", "GlobalJavaObjectRef");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GlobalJavaObjectRef
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalJavaObjectRef : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x10
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_disposed and: m_jobject
    char __padding0[0x7] = {};
    // protected System.IntPtr m_jobject
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr m_jobject;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // Get instance field reference: protected System.IntPtr m_jobject
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_jobject();
    // public System.Void .ctor(System.IntPtr jobject)
    // Offset: 0x2B117A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GlobalJavaObjectRef* New_ctor(::System::IntPtr jobject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GlobalJavaObjectRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GlobalJavaObjectRef*, creationType>(jobject)));
    }
    // public System.Void Dispose()
    // Offset: 0x2B12750
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0x2B15368
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.GlobalJavaObjectRef
  #pragma pack(pop)
  static check_size<sizeof(GlobalJavaObjectRef), 24 + sizeof(::System::IntPtr)> __UnityEngine_GlobalJavaObjectRefSizeCheck;
  static_assert(sizeof(GlobalJavaObjectRef) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GlobalJavaObjectRef*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GlobalJavaObjectRef::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GlobalJavaObjectRef::*)()>(&UnityEngine::GlobalJavaObjectRef::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GlobalJavaObjectRef*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
