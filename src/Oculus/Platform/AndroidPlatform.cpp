// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.AndroidPlatform
#include "Oculus/Platform/AndroidPlatform.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.PlatformInitialize
#include "Oculus/Platform/Models/PlatformInitialize.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.AndroidPlatform.Initialize
bool Oculus::Platform::AndroidPlatform::Initialize(::Il2CppString* appId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Initialize", appId));
}
// Autogenerated method: Oculus.Platform.AndroidPlatform.AsyncInitialize
Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::AndroidPlatform::AsyncInitialize(::Il2CppString* appId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>*>(this, "AsyncInitialize", appId));
}
// Autogenerated method: Oculus.Platform.AndroidPlatform..ctor
Oculus::Platform::AndroidPlatform* Oculus::Platform::AndroidPlatform::New_ctor() {
  return (AndroidPlatform*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "AndroidPlatform"));
}