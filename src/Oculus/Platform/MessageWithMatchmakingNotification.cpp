// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithMatchmakingNotification
#include "Oculus/Platform/MessageWithMatchmakingNotification.hpp"
// Including type: Oculus.Platform.Models.Room
#include "Oculus/Platform/Models/Room.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingNotification.GetDataFromMessage
Oculus::Platform::Models::Room* Oculus::Platform::MessageWithMatchmakingNotification::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::Room*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingNotification..ctor
Oculus::Platform::MessageWithMatchmakingNotification* Oculus::Platform::MessageWithMatchmakingNotification::New_ctor(System::IntPtr c_message) {
  return (MessageWithMatchmakingNotification*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithMatchmakingNotification", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithMatchmakingNotification.GetRoom
Oculus::Platform::Models::Room* Oculus::Platform::MessageWithMatchmakingNotification::GetRoom() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::Room*>(this, "GetRoom"));
}
