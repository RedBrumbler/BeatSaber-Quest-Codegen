// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AddressableAssets.AddressablesImpl
#include "UnityEngine/AddressableAssets/AddressablesImpl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Forward declaring type: AsyncOperationHandle`1<TObject>
  template<typename TObject>
  struct AsyncOperationHandle_1;
  // Forward declaring type: AsyncOperationHandle
  struct AsyncOperationHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass100_0
  // [CompilerGeneratedAttribute] Offset: E026E4
  class AddressablesImpl::$$c__DisplayClass100_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.AddressableAssets.AddressablesImpl <>4__this
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AddressableAssets::AddressablesImpl* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::AddressableAssets::AddressablesImpl*) == 0x8);
    // public System.Collections.IEnumerable keys
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IEnumerable* keys;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerable*) == 0x8);
    // public System.Boolean autoReleaseHandle
    // Size: 0x1
    // Offset: 0x20
    bool autoReleaseHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass100_0
    $$c__DisplayClass100_0(UnityEngine::AddressableAssets::AddressablesImpl* $$4__this_ = {}, System::Collections::IEnumerable* keys_ = {}, bool autoReleaseHandle_ = {}) noexcept : $$4__this{$$4__this_}, keys{keys_}, autoReleaseHandle{autoReleaseHandle_} {}
    // UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Boolean> <ClearDependencyCacheAsync>b__0(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle op)
    // Offset: 0x13EF104
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> $ClearDependencyCacheAsync$b__0(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle op);
    // public System.Void .ctor()
    // Offset: 0x13ED118
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddressablesImpl::$$c__DisplayClass100_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass100_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddressablesImpl::$$c__DisplayClass100_0*, creationType>()));
    }
  }; // UnityEngine.AddressableAssets.AddressablesImpl/<>c__DisplayClass100_0
  #pragma pack(pop)
  static check_size<sizeof(AddressablesImpl::$$c__DisplayClass100_0), 32 + sizeof(bool)> __UnityEngine_AddressableAssets_AddressablesImpl_$$c__DisplayClass100_0SizeCheck;
  static_assert(sizeof(AddressablesImpl::$$c__DisplayClass100_0) == 0x21);
  // Writing MetadataGetter for method: AddressablesImpl::$$c__DisplayClass100_0::$ClearDependencyCacheAsync$b__0
  // Il2CppName: <ClearDependencyCacheAsync>b__0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> (AddressablesImpl::$$c__DisplayClass100_0::*)(UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&AddressablesImpl::$$c__DisplayClass100_0::$ClearDependencyCacheAsync$b__0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AddressablesImpl::$$c__DisplayClass100_0*), "<ClearDependencyCacheAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()});
    }
  };
  // Writing MetadataGetter for method: AddressablesImpl::$$c__DisplayClass100_0::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AddressablesImpl::$$c__DisplayClass100_0::*)()>(&AddressablesImpl::$$c__DisplayClass100_0::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AddressablesImpl::$$c__DisplayClass100_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AddressablesImpl::$$c__DisplayClass100_0::*)()>(&AddressablesImpl::$$c__DisplayClass100_0::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AddressablesImpl::$$c__DisplayClass100_0*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AddressablesImpl::$$c__DisplayClass100_0*, "UnityEngine.AddressableAssets", "AddressablesImpl/<>c__DisplayClass100_0");
