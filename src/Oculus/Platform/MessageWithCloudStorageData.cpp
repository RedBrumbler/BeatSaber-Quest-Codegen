// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithCloudStorageData
#include "Oculus/Platform/MessageWithCloudStorageData.hpp"
// Including type: Oculus.Platform.Models.CloudStorageData
#include "Oculus/Platform/Models/CloudStorageData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithCloudStorageData.GetDataFromMessage
Oculus::Platform::Models::CloudStorageData* Oculus::Platform::MessageWithCloudStorageData::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::CloudStorageData*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithCloudStorageData..ctor
Oculus::Platform::MessageWithCloudStorageData* Oculus::Platform::MessageWithCloudStorageData::New_ctor(System::IntPtr c_message) {
  return (MessageWithCloudStorageData*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithCloudStorageData", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithCloudStorageData.GetCloudStorageData
Oculus::Platform::Models::CloudStorageData* Oculus::Platform::MessageWithCloudStorageData::GetCloudStorageData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::CloudStorageData*>(this, "GetCloudStorageData"));
}