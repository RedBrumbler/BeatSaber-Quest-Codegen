// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.PlatformInternal
#include "Oculus/Platform/PlatformInternal.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ServiceProvider
  struct ServiceProvider;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LinkedAccountList
  class LinkedAccountList;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.PlatformInternal/Users
  class PlatformInternal::Users : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> GetLinkedAccounts(Oculus.Platform.ServiceProvider[] providers)
    // Offset: 0xE961B8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList*>* GetLinkedAccounts(::Array<Oculus::Platform::ServiceProvider>* providers);
  }; // Oculus.Platform.PlatformInternal/Users
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal::Users*, "Oculus.Platform", "PlatformInternal/Users");
#pragma pack(pop)