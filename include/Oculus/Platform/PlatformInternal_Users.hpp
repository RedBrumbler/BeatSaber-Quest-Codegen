// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.PlatformInternal
#include "Oculus/Platform/PlatformInternal.hpp"
// Including type: Oculus.Platform.ServiceProvider
#include "Oculus/Platform/ServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LinkedAccountList
  class LinkedAccountList;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::PlatformInternal::Users);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInternal::Users*, "Oculus.Platform", "PlatformInternal/Users");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.PlatformInternal/Oculus.Platform.Users
  // [TokenAttribute] Offset: FFFFFFFF
  class PlatformInternal::Users : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LinkedAccountList> GetLinkedAccounts(Oculus.Platform.ServiceProvider[] providers)
    // Offset: 0x2B2A360
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider> providers);
  }; // Oculus.Platform.PlatformInternal/Oculus.Platform.Users
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::PlatformInternal::Users::GetLinkedAccounts
// Il2CppName: GetLinkedAccounts
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* (*)(::ArrayW<::Oculus::Platform::ServiceProvider>)>(&Oculus::Platform::PlatformInternal::Users::GetLinkedAccounts)> {
  static const MethodInfo* get() {
    static auto* providers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Oculus.Platform", "ServiceProvider"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::PlatformInternal::Users*), "GetLinkedAccounts", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providers});
  }
};
