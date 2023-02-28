// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CloudStorageUpdateResponse
  class CloudStorageUpdateResponse;
  // Forward declaring type: CloudStorageData
  class CloudStorageData;
  // Forward declaring type: CloudStorageMetadataList
  class CloudStorageMetadataList;
  // Forward declaring type: CloudStorageConflictMetadata
  class CloudStorageConflictMetadata;
  // Forward declaring type: CloudStorageMetadata
  class CloudStorageMetadata;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: CloudStorage
  class CloudStorage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::CloudStorage);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::CloudStorage*, "Oculus.Platform", "CloudStorage");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CloudStorage
  // [TokenAttribute] Offset: FFFFFFFF
  class CloudStorage : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Delete(System.String bucket, System.String key)
    // Offset: 0x1A32794
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Delete(::StringW bucket, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> Load(System.String bucket, System.String key)
    // Offset: 0x1A328B8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* Load(::StringW bucket, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> LoadBucketMetadata(System.String bucket)
    // Offset: 0x1A329DC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* LoadBucketMetadata(::StringW bucket);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageConflictMetadata> LoadConflictMetadata(System.String bucket, System.String key)
    // Offset: 0x1A32AF8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>* LoadConflictMetadata(::StringW bucket, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageData> LoadHandle(System.String handle)
    // Offset: 0x1A32C1C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* LoadHandle(::StringW handle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadata> LoadMetadata(System.String bucket, System.String key)
    // Offset: 0x1A32D38
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>* LoadMetadata(::StringW bucket, ::StringW key);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepLocal(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x1A32E5C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> ResolveKeepRemote(System.String bucket, System.String key, System.String remoteHandle)
    // Offset: 0x1A32F90
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageUpdateResponse> Save(System.String bucket, System.String key, System.Byte[] data, System.Int64 counter, System.String extraData)
    // Offset: 0x1A330C4
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t> data, int64_t counter, ::StringW extraData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.CloudStorageMetadataList> GetNextCloudStorageMetadataListPage(Oculus.Platform.Models.CloudStorageMetadataList list)
    // Offset: 0x1A33224
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* GetNextCloudStorageMetadataListPage(::Oculus::Platform::Models::CloudStorageMetadataList* list);
  }; // Oculus.Platform.CloudStorage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Delete
// Il2CppName: Delete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::Delete)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Delete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Load
// Il2CppName: Load
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* (*)(::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::Load)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Load", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadBucketMetadata
// Il2CppName: LoadBucketMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(::StringW)>(&Oculus::Platform::CloudStorage::LoadBucketMetadata)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadBucketMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadConflictMetadata
// Il2CppName: LoadConflictMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageConflictMetadata*>* (*)(::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::LoadConflictMetadata)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadConflictMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadHandle
// Il2CppName: LoadHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageData*>* (*)(::StringW)>(&Oculus::Platform::CloudStorage::LoadHandle)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::LoadMetadata
// Il2CppName: LoadMetadata
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadata*>* (*)(::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::LoadMetadata)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "LoadMetadata", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::ResolveKeepLocal
// Il2CppName: ResolveKeepLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::ResolveKeepLocal)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteHandle = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "ResolveKeepLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key, remoteHandle});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::ResolveKeepRemote
// Il2CppName: ResolveKeepRemote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::StringW)>(&Oculus::Platform::CloudStorage::ResolveKeepRemote)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteHandle = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "ResolveKeepRemote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key, remoteHandle});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageUpdateResponse*>* (*)(::StringW, ::StringW, ::ArrayW<uint8_t>, int64_t, ::StringW)>(&Oculus::Platform::CloudStorage::Save)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* counter = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* extraData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket, key, data, counter, extraData});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage
// Il2CppName: GetNextCloudStorageMetadataListPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::CloudStorageMetadataList*>* (*)(::Oculus::Platform::Models::CloudStorageMetadataList*)>(&Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "CloudStorageMetadataList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::CloudStorage*), "GetNextCloudStorageMetadataListPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
