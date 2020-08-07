// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Notifications
#include "Oculus/Platform/Notifications.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.RoomInviteNotificationList
#include "Oculus/Platform/Models/RoomInviteNotificationList.hpp"
// Including type: Oculus.Platform.Request
#include "Oculus/Platform/Request.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Notifications.GetRoomInviteNotifications
Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* Oculus::Platform::Notifications::GetRoomInviteNotifications() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>*>("Oculus.Platform", "Notifications", "GetRoomInviteNotifications"));
}
// Autogenerated method: Oculus.Platform.Notifications.MarkAsRead
Oculus::Platform::Request* Oculus::Platform::Notifications::MarkAsRead(uint64_t notificationID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request*>("Oculus.Platform", "Notifications", "MarkAsRead", notificationID));
}
// Autogenerated method: Oculus.Platform.Notifications.GetNextRoomInviteNotificationListPage
Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>* Oculus::Platform::Notifications::GetNextRoomInviteNotificationListPage(Oculus::Platform::Models::RoomInviteNotificationList* list) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::RoomInviteNotificationList*>*>("Oculus.Platform", "Notifications", "GetNextRoomInviteNotificationListPage", list));
}