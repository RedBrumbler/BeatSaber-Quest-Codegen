// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithRoomInviteNotificationList
#include "Oculus/Platform/MessageWithRoomInviteNotificationList.hpp"
// Including type: Oculus.Platform.Models.RoomInviteNotificationList
#include "Oculus/Platform/Models/RoomInviteNotificationList.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithRoomInviteNotificationList.GetDataFromMessage
Oculus::Platform::Models::RoomInviteNotificationList* Oculus::Platform::MessageWithRoomInviteNotificationList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::RoomInviteNotificationList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithRoomInviteNotificationList..ctor
Oculus::Platform::MessageWithRoomInviteNotificationList* Oculus::Platform::MessageWithRoomInviteNotificationList::New_ctor(System::IntPtr c_message) {
  return (MessageWithRoomInviteNotificationList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithRoomInviteNotificationList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithRoomInviteNotificationList.GetRoomInviteNotificationList
Oculus::Platform::Models::RoomInviteNotificationList* Oculus::Platform::MessageWithRoomInviteNotificationList::GetRoomInviteNotificationList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::RoomInviteNotificationList*>(this, "GetRoomInviteNotificationList"));
}