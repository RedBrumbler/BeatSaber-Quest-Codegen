// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.MessageWithUserProof
#include "Oculus/Platform/MessageWithUserProof.hpp"
// Including type: Oculus.Platform.Models.UserProof
#include "Oculus/Platform/Models/UserProof.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithUserProof.GetDataFromMessage
Oculus::Platform::Models::UserProof* Oculus::Platform::MessageWithUserProof::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::UserProof*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithUserProof..ctor
Oculus::Platform::MessageWithUserProof* Oculus::Platform::MessageWithUserProof::New_ctor(System::IntPtr c_message) {
  return (MessageWithUserProof*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithUserProof", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithUserProof.GetUserProof
Oculus::Platform::Models::UserProof* Oculus::Platform::MessageWithUserProof::GetUserProof() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::UserProof*>(this, "GetUserProof"));
}