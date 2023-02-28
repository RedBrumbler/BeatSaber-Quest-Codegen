// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Events.BaseInvokableCall
#include "UnityEngine/Events/BaseInvokableCall.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: InvokableCall`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class InvokableCall_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::InvokableCall_4, "UnityEngine.Events", "InvokableCall`4");
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Events.InvokableCall`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4>
  class InvokableCall_4 : public ::UnityEngine::Events::BaseInvokableCall {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x1097940
    // private UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> Delegate
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>* Delegate;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*
    constexpr operator ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*() const noexcept {
      return Delegate;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> Delegate
    [[deprecated("Use field access instead!")]] ::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>*& dyn_Delegate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_4::dyn_Delegate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Delegate"))->offset;
      return *reinterpret_cast<::UnityEngine::Events::UnityAction_4<T1, T2, T3, T4>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::.ctor(System.Object target, System.Reflection.MethodInfo theFunction)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvokableCall_4<T1, T2, T3, T4>* New_ctor(::Il2CppObject* target, ::System::Reflection::MethodInfo* theFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvokableCall_4<T1, T2, T3, T4>*, creationType>(target, theFunction)));
    }
    // public override System.Void Invoke(System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Void BaseInvokableCall::Invoke(System.Object[] args)
    void Invoke(::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_4::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(args)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, args);
    }
    // public override System.Boolean Find(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Events.BaseInvokableCall
    // Base method: System.Boolean BaseInvokableCall::Find(System.Object targetObj, System.Reflection.MethodInfo method)
    bool Find(::Il2CppObject* targetObj, ::System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Events::InvokableCall_4::Find");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Find", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(targetObj), ::il2cpp_utils::ExtractType(method)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, targetObj, method);
    }
  }; // UnityEngine.Events.InvokableCall`4
  // Could not write size check! Type: UnityEngine.Events.InvokableCall`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
