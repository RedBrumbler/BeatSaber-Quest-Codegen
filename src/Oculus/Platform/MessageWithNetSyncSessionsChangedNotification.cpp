// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification
#include "Oculus/Platform/MessageWithNetSyncSessionsChangedNotification.hpp"
// Including type: Oculus.Platform.Models.NetSyncSessionsChangedNotification
#include "Oculus/Platform/Models/NetSyncSessionsChangedNotification.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification.GetDataFromMessage
Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification..ctor
Oculus::Platform::MessageWithNetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::New_ctor(System::IntPtr c_message) {
  return (MessageWithNetSyncSessionsChangedNotification*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithNetSyncSessionsChangedNotification", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithNetSyncSessionsChangedNotification.GetNetSyncSessionsChangedNotification
Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, "GetNetSyncSessionsChangedNotification"));
}