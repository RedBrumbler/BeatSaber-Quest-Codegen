// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.BaseInvokableCall
  class BaseInvokableCall : public ::CsObject {
    public:
    // protected System.Void .ctor(System.Object target, System.Reflection.MethodInfo function)
    // Offset: 0x1305B60
    static BaseInvokableCall* New_ctor(::CsObject* target, System::Reflection::MethodInfo* function);
    // public System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    void Invoke(::Array<::CsObject*>* args);
    // static protected System.Void ThrowOnInvalidArg(System.Object arg)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ThrowOnInvalidArg(::CsObject* arg) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Events", "BaseInvokableCall", "ThrowOnInvalidArg", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, arg));
    }
    // static protected System.Boolean AllowInvoke(System.Delegate delegate)
    // Offset: 0x1305C1C
    static bool AllowInvoke(System::Delegate* delegate);
    // public System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    bool Find(::CsObject* targetObj, System::Reflection::MethodInfo* method);
    // protected System.Void .ctor()
    // Offset: 0x1305B58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseInvokableCall* New_ctor();
  }; // UnityEngine.Events.BaseInvokableCall
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::BaseInvokableCall*, "UnityEngine.Events", "BaseInvokableCall");
#pragma pack(pop)
