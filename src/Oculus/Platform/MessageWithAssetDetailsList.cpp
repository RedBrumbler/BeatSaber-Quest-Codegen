// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithAssetDetailsList
#include "Oculus/Platform/MessageWithAssetDetailsList.hpp"
// Including type: Oculus.Platform.Models.AssetDetailsList
#include "Oculus/Platform/Models/AssetDetailsList.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithAssetDetailsList.GetDataFromMessage
Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetDetailsList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetDetailsList..ctor
Oculus::Platform::MessageWithAssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::New_ctor(System::IntPtr c_message) {
  return (MessageWithAssetDetailsList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithAssetDetailsList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetDetailsList.GetAssetDetailsList
Oculus::Platform::Models::AssetDetailsList* Oculus::Platform::MessageWithAssetDetailsList::GetAssetDetailsList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetDetailsList*>(this, "GetAssetDetailsList"));
}