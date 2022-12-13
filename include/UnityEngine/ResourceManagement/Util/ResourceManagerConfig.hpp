// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: ResourceManagerConfig
  class ResourceManagerConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::ResourceManagerConfig*, "UnityEngine.ResourceManagement.Util", "ResourceManagerConfig");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.ResourceManagerConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceManagerConfig : public ::Il2CppObject {
    public:
    // static System.Boolean ExtractKeyAndSubKey(System.Object keyObj, out System.String mainKey, out System.String subKey)
    // Offset: 0x1F7B59C
    static bool ExtractKeyAndSubKey(::Il2CppObject* keyObj, ByRef<::StringW> mainKey, ByRef<::StringW> subKey);
    // static public System.Boolean IsPathRemote(System.String path)
    // Offset: 0x1F79A9C
    static bool IsPathRemote(::StringW path);
    // static public System.Boolean ShouldPathUseWebRequest(System.String path)
    // Offset: 0x1F7A908
    static bool ShouldPathUseWebRequest(::StringW path);
    // static public System.Array CreateArrayResult(System.Type type, UnityEngine.Object[] allAssets)
    // Offset: 0x1F7C374
    static ::System::Array* CreateArrayResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*> allAssets);
    // static public TObject CreateArrayResult(UnityEngine.Object[] allAssets)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    static TObject CreateArrayResult(::ArrayW<::UnityEngine::Object*> allAssets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "CreateArrayResult", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(allAssets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TObject, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, allAssets);
    }
    // static public System.Collections.IList CreateListResult(System.Type type, UnityEngine.Object[] allAssets)
    // Offset: 0x1F7C544
    static ::System::Collections::IList* CreateListResult(::System::Type* type, ::ArrayW<::UnityEngine::Object*> allAssets);
    // static public TObject CreateListResult(UnityEngine.Object[] allAssets)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TObject>
    static TObject CreateListResult(::ArrayW<::UnityEngine::Object*> allAssets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "CreateListResult", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(allAssets)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TObject>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TObject, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, allAssets);
    }
    // static public System.Boolean IsInstance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T1, class T2>
    static bool IsInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.ResourceManagement.Util", "ResourceManagerConfig", "IsInstance", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
  }; // UnityEngine.ResourceManagement.Util.ResourceManagerConfig
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ExtractKeyAndSubKey
// Il2CppName: ExtractKeyAndSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ByRef<::StringW>, ByRef<::StringW>)>(&UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ExtractKeyAndSubKey)> {
  static const MethodInfo* get() {
    static auto* keyObj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* mainKey = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* subKey = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*), "ExtractKeyAndSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyObj, mainKey, subKey});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsPathRemote
// Il2CppName: IsPathRemote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsPathRemote)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*), "IsPathRemote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ShouldPathUseWebRequest
// Il2CppName: ShouldPathUseWebRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&UnityEngine::ResourceManagement::Util::ResourceManagerConfig::ShouldPathUseWebRequest)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*), "ShouldPathUseWebRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult
// Il2CppName: CreateArrayResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Array* (*)(::System::Type*, ::ArrayW<::UnityEngine::Object*>)>(&UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* allAssets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*), "CreateArrayResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, allAssets});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateArrayResult
// Il2CppName: CreateArrayResult
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult
// Il2CppName: CreateListResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IList* (*)(::System::Type*, ::ArrayW<::UnityEngine::Object*>)>(&UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* allAssets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::ResourceManagerConfig*), "CreateListResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, allAssets});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::CreateListResult
// Il2CppName: CreateListResult
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::ResourceManagerConfig::IsInstance
// Il2CppName: IsInstance
// Cannot write MetadataGetter for generic methods!
