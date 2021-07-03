// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
  class IResourceLocation {
    public:
    // Creating value type constructor for type: IResourceLocation
    IResourceLocation() noexcept {}
    // public System.String get_InternalId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_InternalId();
    // public System.String get_ProviderId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_ProviderId();
    // public System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> get_Dependencies()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* get_Dependencies();
    // public System.Int32 Hash(System.Type resultType)
    // Offset: 0xFFFFFFFF
    int Hash(System::Type* resultType);
    // public System.Int32 get_DependencyHashCode()
    // Offset: 0xFFFFFFFF
    int get_DependencyHashCode();
    // public System.Boolean get_HasDependencies()
    // Offset: 0xFFFFFFFF
    bool get_HasDependencies();
    // public System.Object get_Data()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_Data();
    // public System.String get_PrimaryKey()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_PrimaryKey();
    // public System.Type get_ResourceType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ResourceType();
  }; // UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
  #pragma pack(pop)
  // Writing MetadataGetter for method: IResourceLocation::get_InternalId
  // Il2CppName: get_InternalId
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (IResourceLocation::*)()>(&IResourceLocation::get_InternalId)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_InternalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_ProviderId
  // Il2CppName: get_ProviderId
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (IResourceLocation::*)()>(&IResourceLocation::get_ProviderId)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_ProviderId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_Dependencies
  // Il2CppName: get_Dependencies
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>* (IResourceLocation::*)()>(&IResourceLocation::get_Dependencies)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_Dependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::Hash
  // Il2CppName: Hash
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (IResourceLocation::*)(System::Type*)>(&IResourceLocation::Hash)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_DependencyHashCode
  // Il2CppName: get_DependencyHashCode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (IResourceLocation::*)()>(&IResourceLocation::get_DependencyHashCode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_DependencyHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_HasDependencies
  // Il2CppName: get_HasDependencies
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (IResourceLocation::*)()>(&IResourceLocation::get_HasDependencies)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_HasDependencies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_Data
  // Il2CppName: get_Data
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (IResourceLocation::*)()>(&IResourceLocation::get_Data)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_Data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_PrimaryKey
  // Il2CppName: get_PrimaryKey
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (IResourceLocation::*)()>(&IResourceLocation::get_PrimaryKey)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_PrimaryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IResourceLocation::get_ResourceType
  // Il2CppName: get_ResourceType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (IResourceLocation::*)()>(&IResourceLocation::get_ResourceType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IResourceLocation*), "get_ResourceType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, "UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation");
