// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`4<T0, T1, T2, T3>
  template<typename T0, typename T1, typename T2, typename T3>
  class UnityAction_4;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCall`4
  template<typename T1, typename T2, typename T3, typename T4>
  class InvokableCall_4 : public UnityEngine::Events::BaseInvokableCall {
    public:
    // private UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> Delegate
    // Offset: 0x0
    UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate;
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    static InvokableCall_4<T1, T2, T3, T4>* New_ctor(::CsObject* target, System::Reflection::MethodInfo* theFunction) {
      return (InvokableCall_4<T1, T2, T3, T4>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<InvokableCall_4<T1, T2, T3, T4>*>::get(), target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::Array<::CsObject*>* args) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", args));
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::CsObject* targetObj, System::Reflection::MethodInfo* method) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Find", targetObj, method));
    }
  }; // UnityEngine.Events.InvokableCall`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
#pragma pack(pop)
