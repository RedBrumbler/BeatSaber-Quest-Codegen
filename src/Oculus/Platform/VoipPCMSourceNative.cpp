// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.VoipPCMSourceNative
#include "Oculus/Platform/VoipPCMSourceNative.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.VoipPCMSourceNative.GetPCM
int Oculus::Platform::VoipPCMSourceNative::GetPCM(::Array<float>* dest, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetPCM", dest, length));
}
// Autogenerated method: Oculus.Platform.VoipPCMSourceNative.SetSenderID
void Oculus::Platform::VoipPCMSourceNative::SetSenderID(uint64_t senderID) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSenderID", senderID));
}
// Autogenerated method: Oculus.Platform.VoipPCMSourceNative.PeekSizeElements
int Oculus::Platform::VoipPCMSourceNative::PeekSizeElements() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "PeekSizeElements"));
}
// Autogenerated method: Oculus.Platform.VoipPCMSourceNative.Update
void Oculus::Platform::VoipPCMSourceNative::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: Oculus.Platform.VoipPCMSourceNative..ctor
Oculus::Platform::VoipPCMSourceNative* Oculus::Platform::VoipPCMSourceNative::New_ctor() {
  return (VoipPCMSourceNative*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "VoipPCMSourceNative"));
}