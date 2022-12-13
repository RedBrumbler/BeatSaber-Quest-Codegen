// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
// Including type: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1
#include "UnityEngine/ResourceManagement/AsyncOperations/AsyncOperationHandle_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: IResourceLocator
  class IResourceLocator;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Skipping declaration: AsyncOperationHandle because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass60_0");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass60_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AddressablesImpl::$$c__DisplayClass60_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.String catalogPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW catalogPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean autoReleaseHandle
    // Size: 0x1
    // Offset: 0x20
    bool autoReleaseHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.String providerSuffix
    // Size: 0x8
    // Offset: 0x28
    ::StringW providerSuffix;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> handle
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> handle;
    public:
    // Get instance field reference: public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::AddressablesImpl*& dyn_$$4__this();
    // Get instance field reference: public System.String catalogPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_catalogPath();
    // Get instance field reference: public System.Boolean autoReleaseHandle
    [[deprecated("Use field access instead!")]] bool& dyn_autoReleaseHandle();
    // Get instance field reference: public System.String providerSuffix
    [[deprecated("Use field access instead!")]] ::StringW& dyn_providerSuffix();
    // Get instance field reference: public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>& dyn_handle();
    // public System.Void .ctor()
    // Offset: 0x18F7324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass60_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass60_0*, creationType>()));
    }
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> <LoadContentCatalogAsync>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x18FB9E0
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> $LoadContentCatalogAsync$b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // System.Void <LoadContentCatalogAsync>b__1(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.AddressableAssets.ResourceLocators.IResourceLocator> obj)
    // Offset: 0x18FBA08
    void $LoadContentCatalogAsync$b__1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> obj);
  }; // UnityEngine.AddressableAssets.AddressablesImpl/UnityEngine.AddressableAssets.<>c__DisplayClass60_0
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::$LoadContentCatalogAsync$b__0
// Il2CppName: <LoadContentCatalogAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::$LoadContentCatalogAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0*), "<LoadContentCatalogAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::$LoadContentCatalogAsync$b__1
// Il2CppName: <LoadContentCatalogAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>)>(&UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0::$LoadContentCatalogAsync$b__1)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationHandle`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "IResourceLocator")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass60_0*), "<LoadContentCatalogAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
