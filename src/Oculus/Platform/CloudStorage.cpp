// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CloudStorage
#include "Oculus/Platform/CloudStorage.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.CloudStorageUpdateResponse
#include "Oculus/Platform/Models/CloudStorageUpdateResponse.hpp"
// Including type: Oculus.Platform.Models.CloudStorageData
#include "Oculus/Platform/Models/CloudStorageData.hpp"
// Including type: Oculus.Platform.Models.CloudStorageMetadataList
#include "Oculus/Platform/Models/CloudStorageMetadataList.hpp"
// Including type: Oculus.Platform.Models.CloudStorageConflictMetadata
#include "Oculus/Platform/Models/CloudStorageConflictMetadata.hpp"
// Including type: Oculus.Platform.Models.CloudStorageMetadata
#include "Oculus/Platform/Models/CloudStorageMetadata.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.CloudStorage.Delete
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::Delete(::Il2CppString* bucket, ::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>*>("Oculus.Platform", "CloudStorage", "Delete", bucket, key));
}
// Autogenerated method: Oculus.Platform.CloudStorage.Load
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* Oculus::Platform::CloudStorage::Load(::Il2CppString* bucket, ::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>*>("Oculus.Platform", "CloudStorage", "Load", bucket, key));
}
// Autogenerated method: Oculus.Platform.CloudStorage.LoadBucketMetadata
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* Oculus::Platform::CloudStorage::LoadBucketMetadata(::Il2CppString* bucket) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>*>("Oculus.Platform", "CloudStorage", "LoadBucketMetadata", bucket));
}
// Autogenerated method: Oculus.Platform.CloudStorage.LoadConflictMetadata
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>* Oculus::Platform::CloudStorage::LoadConflictMetadata(::Il2CppString* bucket, ::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageConflictMetadata*>*>("Oculus.Platform", "CloudStorage", "LoadConflictMetadata", bucket, key));
}
// Autogenerated method: Oculus.Platform.CloudStorage.LoadHandle
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>* Oculus::Platform::CloudStorage::LoadHandle(::Il2CppString* handle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageData*>*>("Oculus.Platform", "CloudStorage", "LoadHandle", handle));
}
// Autogenerated method: Oculus.Platform.CloudStorage.LoadMetadata
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>* Oculus::Platform::CloudStorage::LoadMetadata(::Il2CppString* bucket, ::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadata*>*>("Oculus.Platform", "CloudStorage", "LoadMetadata", bucket, key));
}
// Autogenerated method: Oculus.Platform.CloudStorage.ResolveKeepLocal
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::ResolveKeepLocal(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>*>("Oculus.Platform", "CloudStorage", "ResolveKeepLocal", bucket, key, remoteHandle));
}
// Autogenerated method: Oculus.Platform.CloudStorage.ResolveKeepRemote
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::ResolveKeepRemote(::Il2CppString* bucket, ::Il2CppString* key, ::Il2CppString* remoteHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>*>("Oculus.Platform", "CloudStorage", "ResolveKeepRemote", bucket, key, remoteHandle));
}
// Autogenerated method: Oculus.Platform.CloudStorage.Save
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>* Oculus::Platform::CloudStorage::Save(::Il2CppString* bucket, ::Il2CppString* key, ::Array<uint8_t>* data, int64_t counter, ::Il2CppString* extraData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageUpdateResponse*>*>("Oculus.Platform", "CloudStorage", "Save", bucket, key, data, counter, extraData));
}
// Autogenerated method: Oculus.Platform.CloudStorage.GetNextCloudStorageMetadataListPage
Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>* Oculus::Platform::CloudStorage::GetNextCloudStorageMetadataListPage(Oculus::Platform::Models::CloudStorageMetadataList* list) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::CloudStorageMetadataList*>*>("Oculus.Platform", "CloudStorage", "GetNextCloudStorageMetadataListPage", list));
}