// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithSystemPermission
#include "Oculus/Platform/MessageWithSystemPermission.hpp"
// Including type: Oculus.Platform.Models.SystemPermission
#include "Oculus/Platform/Models/SystemPermission.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithSystemPermission.GetDataFromMessage
Oculus::Platform::Models::SystemPermission* Oculus::Platform::MessageWithSystemPermission::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::SystemPermission*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithSystemPermission..ctor
Oculus::Platform::MessageWithSystemPermission* Oculus::Platform::MessageWithSystemPermission::New_ctor(System::IntPtr c_message) {
  return (MessageWithSystemPermission*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithSystemPermission", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithSystemPermission.GetSystemPermission
Oculus::Platform::Models::SystemPermission* Oculus::Platform::MessageWithSystemPermission::GetSystemPermission() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::SystemPermission*>(this, "GetSystemPermission"));
}