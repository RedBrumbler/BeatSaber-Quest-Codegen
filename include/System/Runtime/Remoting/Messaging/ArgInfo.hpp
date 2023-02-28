// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.ArgInfoType
#include "System/Runtime/Remoting/Messaging/ArgInfoType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ArgInfo
  class ArgInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ArgInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ArgInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ArgInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int32[] _paramMap
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> paramMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private System.Int32 _inoutArgCount
    // Size: 0x4
    // Offset: 0x18
    int inoutArgCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: inoutArgCount and: method
    char __padding1[0x4] = {};
    // private System.Reflection.MethodBase _method
    // Size: 0x8
    // Offset: 0x20
    ::System::Reflection::MethodBase* method;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodBase*) == 0x8);
    public:
    // Get instance field reference: private System.Int32[] _paramMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__paramMap();
    // Get instance field reference: private System.Int32 _inoutArgCount
    [[deprecated("Use field access instead!")]] int& dyn__inoutArgCount();
    // Get instance field reference: private System.Reflection.MethodBase _method
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodBase*& dyn__method();
    // public System.Void .ctor(System.Reflection.MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
    // Offset: 0x1D4F26C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgInfo* New_ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ArgInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgInfo*, creationType>(method, type)));
    }
    // public System.Object[] GetInOutArgs(System.Object[] args)
    // Offset: 0x1D4F430
    ::ArrayW<::Il2CppObject*> GetInOutArgs(::ArrayW<::Il2CppObject*> args);
  }; // System.Runtime.Remoting.Messaging.ArgInfo
  #pragma pack(pop)
  static check_size<sizeof(ArgInfo), 32 + sizeof(::System::Reflection::MethodBase*)> __System_Runtime_Remoting_Messaging_ArgInfoSizeCheck;
  static_assert(sizeof(ArgInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ArgInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs
// Il2CppName: GetInOutArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::ArgInfo::*)(::ArrayW<::Il2CppObject*>)>(&System::Runtime::Remoting::Messaging::ArgInfo::GetInOutArgs)> {
  static const MethodInfo* get() {
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ArgInfo*), "GetInOutArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
