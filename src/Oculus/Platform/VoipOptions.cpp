// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.VoipOptions
#include "Oculus/Platform/VoipOptions.hpp"
// Including type: Oculus.Platform.VoipBitrate
#include "Oculus/Platform/VoipBitrate.hpp"
// Including type: Oculus.Platform.VoipDtxState
#include "Oculus/Platform/VoipDtxState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.VoipOptions.SetBitrateForNewConnections
void Oculus::Platform::VoipOptions::SetBitrateForNewConnections(Oculus::Platform::VoipBitrate value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBitrateForNewConnections", value));
}
// Autogenerated method: Oculus.Platform.VoipOptions.SetCreateNewConnectionUseDtx
void Oculus::Platform::VoipOptions::SetCreateNewConnectionUseDtx(Oculus::Platform::VoipDtxState value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCreateNewConnectionUseDtx", value));
}
// Autogenerated method: Oculus.Platform.VoipOptions..ctor
Oculus::Platform::VoipOptions* Oculus::Platform::VoipOptions::New_ctor() {
  return (VoipOptions*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "VoipOptions"));
}
// Autogenerated method: Oculus.Platform.VoipOptions.Finalize
void Oculus::Platform::VoipOptions::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
