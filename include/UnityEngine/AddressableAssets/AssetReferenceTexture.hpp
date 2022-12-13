// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.AssetReferenceT`1
#include "UnityEngine/AddressableAssets/AssetReferenceT_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // Forward declaring type: AssetReferenceTexture
  class AssetReferenceTexture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceTexture*, "UnityEngine.AddressableAssets", "AssetReferenceTexture");
// Type namespace: UnityEngine.AddressableAssets
namespace UnityEngine::AddressableAssets {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.AddressableAssets.AssetReferenceTexture
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetReferenceTexture : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Texture*> {
    public:
    // public System.Void .ctor(System.String guid)
    // Offset: 0x18FD120
    // Implemented from: UnityEngine.AddressableAssets.AssetReferenceT`1
    // Base method: System.Void AssetReferenceT_1::.ctor(System.String guid)
    // Base method: System.Void AssetReference::.ctor(System.String guid)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetReferenceTexture* New_ctor(::StringW guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::AssetReferenceTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetReferenceTexture*, creationType>(guid)));
    }
  }; // UnityEngine.AddressableAssets.AssetReferenceTexture
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::AssetReferenceTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
