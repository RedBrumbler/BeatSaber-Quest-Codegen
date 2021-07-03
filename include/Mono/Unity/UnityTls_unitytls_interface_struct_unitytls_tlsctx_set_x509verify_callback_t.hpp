// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
  // [UnmanagedFunctionPointerAttribute] Offset: D87348
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_set_x509verify_callback_t
    unitytls_tlsctx_set_x509verify_callback_t() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F9FE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*, creationType>(object, method)));
    }
    // public System.Void Invoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx, Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15F9FF4
    void Invoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx, Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback cb, System.Void* userData, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FA298
    System::IAsyncResult* BeginInvoke(Mono::Unity::UnityTls::unitytls_tlsctx* ctx, Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback* cb, void* userData, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FA2CC
    void EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t
  #pragma pack(pop)
  // Writing MetadataGetter for method: UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::*)(::Il2CppObject*, System::IntPtr)>(&UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::*)(::Il2CppObject*, System::IntPtr)>(&UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::IntPtr>()});
    }
  };
  // Writing MetadataGetter for method: UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::Invoke
  // Il2CppName: Invoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::*)(Mono::Unity::UnityTls::unitytls_tlsctx*, Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*)>(&UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::Invoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_tlsctx*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*>(), ::il2cpp_utils::ExtractIndependentType<void*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_errorstate*>()});
    }
  };
  // Writing MetadataGetter for method: UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke
  // Il2CppName: BeginInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::*)(Mono::Unity::UnityTls::unitytls_tlsctx*, Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*, void*, Mono::Unity::UnityTls::unitytls_errorstate*, System::AsyncCallback*, ::Il2CppObject*)>(&UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::BeginInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_tlsctx*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*>(), ::il2cpp_utils::ExtractIndependentType<void*>(), ::il2cpp_utils::ExtractIndependentType<Mono::Unity::UnityTls::unitytls_errorstate*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
    }
  };
  // Writing MetadataGetter for method: UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::EndInvoke
  // Il2CppName: EndInvoke
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::*)(System::IAsyncResult*)>(&UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t::EndInvoke)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_set_x509verify_callback_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_set_x509verify_callback_t");
