// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: AuthenticationSchemes
  struct AuthenticationSchemes;
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.AuthenticationSchemeSelector
  class AuthenticationSchemeSelector : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AuthenticationSchemeSelector
    AuthenticationSchemeSelector() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AA348
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationSchemeSelector* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::AuthenticationSchemeSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationSchemeSelector*, creationType>(object, method)));
    }
    // public System.Net.AuthenticationSchemes Invoke(System.Net.HttpListenerRequest httpRequest)
    // Offset: 0x16AA358
    System::Net::AuthenticationSchemes Invoke(System::Net::HttpListenerRequest* httpRequest);
    // public System.IAsyncResult BeginInvoke(System.Net.HttpListenerRequest httpRequest, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AA6F4
    System::IAsyncResult* BeginInvoke(System::Net::HttpListenerRequest* httpRequest, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Net.AuthenticationSchemes EndInvoke(System.IAsyncResult result)
    // Offset: 0x16AA718
    System::Net::AuthenticationSchemes EndInvoke(System::IAsyncResult* result);
  }; // System.Net.AuthenticationSchemeSelector
  #pragma pack(pop)
  // Writing MetadataGetter for method: AuthenticationSchemeSelector::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AuthenticationSchemeSelector::*)(::Il2CppObject*, System::IntPtr)>(&AuthenticationSchemeSelector::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AuthenticationSchemeSelector*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (AuthenticationSchemeSelector::*)(::Il2CppObject*, System::IntPtr)>(&AuthenticationSchemeSelector::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AuthenticationSchemeSelector*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: AuthenticationSchemeSelector::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemes (AuthenticationSchemeSelector::*)(System::Net::HttpListenerRequest*)>(&AuthenticationSchemeSelector::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AuthenticationSchemeSelector*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::HttpListenerRequest*>()});
    }
  };
  // Writing MetadataGetter for method: AuthenticationSchemeSelector::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (AuthenticationSchemeSelector::*)(System::Net::HttpListenerRequest*, System::AsyncCallback*, ::Il2CppObject*)>(&AuthenticationSchemeSelector::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AuthenticationSchemeSelector*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Net::HttpListenerRequest*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: AuthenticationSchemeSelector::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::AuthenticationSchemes (AuthenticationSchemeSelector::*)(System::IAsyncResult*)>(&AuthenticationSchemeSelector::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(AuthenticationSchemeSelector*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::AuthenticationSchemeSelector*, "System.Net", "AuthenticationSchemeSelector");
