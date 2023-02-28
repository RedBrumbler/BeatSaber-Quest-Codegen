// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: WaitCallback
  class WaitCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: 107EA1C
  class AsyncMethodBuilderCore::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c <>9
    static ::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c* _get_$$9();
    // Set static field: static public readonly System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c <>9
    static void _set_$$9(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c* value);
    // Get static field: static public System.Threading.SendOrPostCallback <>9__6_0
    static ::System::Threading::SendOrPostCallback* _get_$$9__6_0();
    // Set static field: static public System.Threading.SendOrPostCallback <>9__6_0
    static void _set_$$9__6_0(::System::Threading::SendOrPostCallback* value);
    // Get static field: static public System.Threading.WaitCallback <>9__6_1
    static ::System::Threading::WaitCallback* _get_$$9__6_1();
    // Set static field: static public System.Threading.WaitCallback <>9__6_1
    static void _set_$$9__6_1(::System::Threading::WaitCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x1E4CB1C
    static void _cctor();
    // System.Void <ThrowAsync>b__6_0(System.Object state)
    // Offset: 0x1E4CB88
    void $ThrowAsync$b__6_0(::Il2CppObject* state);
    // System.Void <ThrowAsync>b__6_1(System.Object state)
    // Offset: 0x1E4CC48
    void $ThrowAsync$b__6_1(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x1E4CB80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncMethodBuilderCore::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncMethodBuilderCore::$$c*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::$ThrowAsync$b__6_0
// Il2CppName: <ThrowAsync>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::$ThrowAsync$b__6_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c*), "<ThrowAsync>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::$ThrowAsync$b__6_1
// Il2CppName: <ThrowAsync>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::$ThrowAsync$b__6_1)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c*), "<ThrowAsync>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
