// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.Error
#include "Oculus/Platform/Models/Error.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Models.Error..ctor
Oculus::Platform::Models::Error* Oculus::Platform::Models::Error::New_ctor(int code, ::Il2CppString* message, int httpCode) {
  return (Error*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform.Models", "Error", code, message, httpCode));
}