// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoProperty/StaticGetter`1
  template<typename R>
  class MonoProperty::StaticGetter_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static MonoProperty::StaticGetter_1<R>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (MonoProperty::StaticGetter_1<R>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoProperty::StaticGetter_1<R>*>::get(), object, method));
    }
    // public R Invoke()
    // Offset: 0xFFFFFFFF
    R Invoke() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<R>(this, "Invoke"));
    }
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
    }
    // public R EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    R EndInvoke(System::IAsyncResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<R>(this, "EndInvoke", result));
    }
  }; // System.Reflection.MonoProperty/StaticGetter`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Reflection::MonoProperty::StaticGetter_1, "System.Reflection", "MonoProperty/StaticGetter`1");
#pragma pack(pop)