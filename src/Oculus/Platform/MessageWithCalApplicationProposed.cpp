// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithCalApplicationProposed
#include "Oculus/Platform/MessageWithCalApplicationProposed.hpp"
// Including type: Oculus.Platform.Models.CalApplicationProposed
#include "Oculus/Platform/Models/CalApplicationProposed.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithCalApplicationProposed.GetDataFromMessage
Oculus::Platform::Models::CalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::CalApplicationProposed*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithCalApplicationProposed..ctor
Oculus::Platform::MessageWithCalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::New_ctor(System::IntPtr c_message) {
  return (MessageWithCalApplicationProposed*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithCalApplicationProposed", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithCalApplicationProposed.GetCalApplicationProposed
Oculus::Platform::Models::CalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::GetCalApplicationProposed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::CalApplicationProposed*>(this, "GetCalApplicationProposed"));
}
