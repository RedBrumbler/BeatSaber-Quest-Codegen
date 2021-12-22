// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AssetReference
#include "UnityEngine/AddressableAssets/AssetReference.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetReferenceT`1<TObject>
  template<typename TObject>
  class AssetReferenceT_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::AddressableAssets::AssetReferenceT_1, "UnityEngine.AddressableAssets", "AssetReferenceT`1");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceT`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TObject>
  class AssetReferenceT_1 : public UnityEngine::AddressableAssets::AssetReference {
    public:
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAssetAsync()
    // Offset: 0xFFFFFFFF
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceT_1::LoadAssetAsync");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAssetAsync", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.String guid)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.AddressableAssets.AssetReference
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceT_1<TObject>* New_ctor(::Il2CppString* guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceT_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceT_1<TObject>*, creationType>(guid)));
    }
    // public UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> LoadAsset()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.AddressableAssets.AssetReference
    // Base method: UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject> AssetReference::LoadAsset()
    UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceT_1::LoadAsset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LoadAsset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>, false>(this, ___internal__method);
    }
    // public override System.Boolean ValidateAsset(UnityEngine.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.AddressableAssets.AssetReference
    // Base method: System.Boolean AssetReference::ValidateAsset(UnityEngine.Object obj)
    bool ValidateAsset(UnityEngine::Object* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceT_1::ValidateAsset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ValidateAsset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Boolean ValidateAsset(System.String mainAssetPath)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.AddressableAssets.AssetReference
    // Base method: System.Boolean AssetReference::ValidateAsset(System.String mainAssetPath)
    bool ValidateAsset(::Il2CppString* mainAssetPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AddressableAssets::AssetReferenceT_1::ValidateAsset");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ValidateAsset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mainAssetPath)})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, mainAssetPath);
    }
  }; // UnityEngine.AddressableAssets.AssetReferenceT`1
  // Could not write size check! Type: UnityEngine.AddressableAssets.AssetReferenceT`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
