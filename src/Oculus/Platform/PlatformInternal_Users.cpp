// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.PlatformInternal/Users
#include "Oculus/Platform/PlatformInternal_Users.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.LinkedAccountList
#include "Oculus/Platform/Models/LinkedAccountList.hpp"
// Including type: Oculus.Platform.ServiceProvider
#include "Oculus/Platform/ServiceProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.PlatformInternal/Users.GetLinkedAccounts
Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList*>* Oculus::Platform::PlatformInternal::Users::GetLinkedAccounts(::Array<Oculus::Platform::ServiceProvider>* providers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList*>*>("Oculus.Platform", "PlatformInternal/Users", "GetLinkedAccounts", providers));
}
