// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.UnityAction`2
  template<typename T0, typename T1>
  class UnityAction_2 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static UnityAction_2<T0, T1>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (UnityAction_2<T0, T1>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityAction_2<T0, T1>*>::get(), object, method)));
    }
    // public System.Void Invoke(T0 arg0, T1 arg1)
    // Offset: 0xFFFFFFFF
    void Invoke(T0 arg0, T1 arg1) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg0, arg1));
    }
    // public System.IAsyncResult BeginInvoke(T0 arg0, T1 arg1, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T0 arg0, T1 arg1, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg0, arg1, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // UnityEngine.Events.UnityAction`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityAction_2, "UnityEngine.Events", "UnityAction`2");
#pragma pack(pop)