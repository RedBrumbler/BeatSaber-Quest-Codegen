// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithAchievementProgressList
#include "Oculus/Platform/MessageWithAchievementProgressList.hpp"
// Including type: Oculus.Platform.Models.AchievementProgressList
#include "Oculus/Platform/Models/AchievementProgressList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithAchievementProgressList.GetDataFromMessage
Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AchievementProgressList*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAchievementProgressList..ctor
Oculus::Platform::MessageWithAchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::New_ctor(System::IntPtr c_message) {
  return (MessageWithAchievementProgressList*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithAchievementProgressList", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAchievementProgressList.GetAchievementProgressList
Oculus::Platform::Models::AchievementProgressList* Oculus::Platform::MessageWithAchievementProgressList::GetAchievementProgressList() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AchievementProgressList*>(this, "GetAchievementProgressList"));
}
