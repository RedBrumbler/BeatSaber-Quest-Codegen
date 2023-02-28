// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/TextDataProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: JsonAssetProvider
  class JsonAssetProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "JsonAssetProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: 1110A9C
  class JsonAssetProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F8E334
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
    // Base method: System.Void TextDataProvider::.ctor()
    // Base method: System.Void ResourceProviderBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonAssetProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonAssetProvider*, creationType>()));
    }
    // public override System.Object Convert(System.Type type, System.String text)
    // Offset: 0x1F8E328
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
    // Base method: System.Object TextDataProvider::Convert(System.Type type, System.String text)
    ::Il2CppObject* Convert(::System::Type* type, ::StringW text);
  }; // UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::*)(::System::Type*, ::StringW)>(&UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider::Convert)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, text});
  }
};
