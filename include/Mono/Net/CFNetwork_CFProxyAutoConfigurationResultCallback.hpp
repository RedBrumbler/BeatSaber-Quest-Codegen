// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFNetwork
#include "Mono/Net/CFNetwork.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback*, "Mono.Net", "CFNetwork/CFProxyAutoConfigurationResultCallback");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFNetwork/Mono.Net.CFProxyAutoConfigurationResultCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class CFNetwork::CFProxyAutoConfigurationResultCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B14420
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFNetwork::CFProxyAutoConfigurationResultCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFNetwork::CFProxyAutoConfigurationResultCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr client, System.IntPtr proxyList, System.IntPtr error)
    // Offset: 0x1B14DA8
    void Invoke(::System::IntPtr client, ::System::IntPtr proxyList, ::System::IntPtr error);
    // public System.IAsyncResult BeginInvoke(System.IntPtr client, System.IntPtr proxyList, System.IntPtr error, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B1503C
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr client, ::System::IntPtr proxyList, ::System::IntPtr error, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B150F4
    void EndInvoke(::System::IAsyncResult* result);
  }; // Mono.Net.CFNetwork/Mono.Net.CFProxyAutoConfigurationResultCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, proxyList, error});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* client = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* proxyList = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{client, proxyList, error, callback, object});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::*)(::System::IAsyncResult*)>(&Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFNetwork::CFProxyAutoConfigurationResultCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
