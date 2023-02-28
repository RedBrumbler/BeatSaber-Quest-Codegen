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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: ResourceRequest
  class ResourceRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Resources
  class Resources;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Resources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Resources*, "UnityEngine", "Resources");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Resources
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1093400
  // [NativeHeaderAttribute] Offset: 1093400
  class Resources : public ::Il2CppObject {
    public:
    // static T[] ConvertObjects(UnityEngine.Object[] rawObjects)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> ConvertObjects(::ArrayW<::UnityEngine::Object*> rawObjects) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Resources::ConvertObjects");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Resources", "ConvertObjects", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rawObjects)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, rawObjects);
    }
    // static public UnityEngine.Object[] FindObjectsOfTypeAll(System.Type type)
    // Offset: 0x216EBC8
    static ::ArrayW<::UnityEngine::Object*> FindObjectsOfTypeAll(::System::Type* type);
    // static public T[] FindObjectsOfTypeAll()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> FindObjectsOfTypeAll() {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Resources::FindObjectsOfTypeAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Resources", "FindObjectsOfTypeAll", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public UnityEngine.Object Load(System.String path)
    // Offset: 0x216EC08
    static ::UnityEngine::Object* Load(::StringW path);
    // static public T Load(System.String path)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Load(::StringW path) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Resources::Load");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Resources", "Load", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, path);
    }
    // static public UnityEngine.Object Load(System.String path, System.Type systemTypeInstance)
    // Offset: 0x216EB70
    static ::UnityEngine::Object* Load(::StringW path, ::System::Type* systemTypeInstance);
    // static public UnityEngine.ResourceRequest LoadAsync(System.String path, System.Type type)
    // Offset: 0x216ECB4
    static ::UnityEngine::ResourceRequest* LoadAsync(::StringW path, ::System::Type* type);
    // static UnityEngine.ResourceRequest LoadAsyncInternal(System.String path, System.Type type)
    // Offset: 0x216ED14
    static ::UnityEngine::ResourceRequest* LoadAsyncInternal(::StringW path, ::System::Type* type);
    // static public UnityEngine.Object[] LoadAll(System.String path, System.Type systemTypeInstance)
    // Offset: 0x216ED64
    static ::ArrayW<::UnityEngine::Object*> LoadAll(::StringW path, ::System::Type* systemTypeInstance);
    // static public UnityEngine.Object[] LoadAll(System.String path)
    // Offset: 0x216EDB4
    static ::ArrayW<::UnityEngine::Object*> LoadAll(::StringW path);
    // static public UnityEngine.Object GetBuiltinResource(System.Type type, System.String path)
    // Offset: 0x216EE60
    static ::UnityEngine::Object* GetBuiltinResource(::System::Type* type, ::StringW path);
    // static public T GetBuiltinResource(System.String path)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetBuiltinResource(::StringW path) {
      static_assert(std::is_convertible_v<T, ::UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Resources::GetBuiltinResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "Resources", "GetBuiltinResource", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, path);
    }
    // static public System.Void UnloadAsset(UnityEngine.Object assetToUnload)
    // Offset: 0x216EEB0
    static void UnloadAsset(::UnityEngine::Object* assetToUnload);
    // static public UnityEngine.AsyncOperation UnloadUnusedAssets()
    // Offset: 0x216EEF0
    static ::UnityEngine::AsyncOperation* UnloadUnusedAssets();
  }; // UnityEngine.Resources
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Resources::ConvertObjects
// Il2CppName: ConvertObjects
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Resources::FindObjectsOfTypeAll
// Il2CppName: FindObjectsOfTypeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::System::Type*)>(&UnityEngine::Resources::FindObjectsOfTypeAll)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "FindObjectsOfTypeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::FindObjectsOfTypeAll
// Il2CppName: FindObjectsOfTypeAll
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Resources::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::StringW)>(&UnityEngine::Resources::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::Load
// Il2CppName: Load
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Resources::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::StringW, ::System::Type*)>(&UnityEngine::Resources::Load)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemTypeInstance = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, systemTypeInstance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::LoadAsync
// Il2CppName: LoadAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceRequest* (*)(::StringW, ::System::Type*)>(&UnityEngine::Resources::LoadAsync)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "LoadAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::LoadAsyncInternal
// Il2CppName: LoadAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceRequest* (*)(::StringW, ::System::Type*)>(&UnityEngine::Resources::LoadAsyncInternal)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "LoadAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, type});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::LoadAll
// Il2CppName: LoadAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::StringW, ::System::Type*)>(&UnityEngine::Resources::LoadAll)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* systemTypeInstance = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "LoadAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, systemTypeInstance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::LoadAll
// Il2CppName: LoadAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Object*> (*)(::StringW)>(&UnityEngine::Resources::LoadAll)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "LoadAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::GetBuiltinResource
// Il2CppName: GetBuiltinResource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (*)(::System::Type*, ::StringW)>(&UnityEngine::Resources::GetBuiltinResource)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "GetBuiltinResource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, path});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::GetBuiltinResource
// Il2CppName: GetBuiltinResource
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::Resources::UnloadAsset
// Il2CppName: UnloadAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Object*)>(&UnityEngine::Resources::UnloadAsset)> {
  static const MethodInfo* get() {
    static auto* assetToUnload = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "UnloadAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assetToUnload});
  }
};
// Writing MetadataGetter for method: UnityEngine::Resources::UnloadUnusedAssets
// Il2CppName: UnloadUnusedAssets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (*)()>(&UnityEngine::Resources::UnloadUnusedAssets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Resources*), "UnloadUnusedAssets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
