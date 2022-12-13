// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase/BaseInitAsyncOp");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/UnityEngine.ResourceManagement.ResourceProviders.BaseInitAsyncOp
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceProviderBase::BaseInitAsyncOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
    public:
    public:
    // private System.Func`1<System.Boolean> m_CallBack
    // Size: 0x8
    // Offset: 0x80
    ::System::Func_1<bool>* m_CallBack;
    // Field size check
    static_assert(sizeof(::System::Func_1<bool>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Func_1<bool>*
    constexpr operator ::System::Func_1<bool>*() const noexcept {
      return m_CallBack;
    }
    // Get instance field reference: private System.Func`1<System.Boolean> m_CallBack
    [[deprecated("Use field access instead!")]] ::System::Func_1<bool>*& dyn_m_CallBack();
    // public System.Void Init(System.Func`1<System.Boolean> callback)
    // Offset: 0x1F7D914
    void Init(::System::Func_1<bool>* callback);
    // public System.Void .ctor()
    // Offset: 0x1F7D890
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceProviderBase::BaseInitAsyncOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceProviderBase::BaseInitAsyncOp*, creationType>()));
    }
    // override System.Boolean InvokeWaitForCompletion()
    // Offset: 0x1F7D91C
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Boolean AsyncOperationBase_1::InvokeWaitForCompletion()
    bool InvokeWaitForCompletion();
    // protected override System.Void Execute()
    // Offset: 0x1F7D994
    // Implemented from: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1
    // Base method: System.Void AsyncOperationBase_1::Execute()
    void Execute();
  }; // UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/UnityEngine.ResourceManagement.ResourceProviders.BaseInitAsyncOp
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)(::System::Func_1<bool>*)>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Init)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::InvokeWaitForCompletion
// Il2CppName: InvokeWaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::InvokeWaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "InvokeWaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase::BaseInitAsyncOp*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
