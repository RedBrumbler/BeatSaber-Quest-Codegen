// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: Texture_t
  struct Texture_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::IVROverlay::_SetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_SetOverlayTexture*, "Valve.VR", "IVROverlay/_SetOverlayTexture");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._SetOverlayTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10DB7C4
  class IVROverlay::_SetOverlayTexture : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2316B04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_SetOverlayTexture* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_SetOverlayTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_SetOverlayTexture*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref Valve.VR.Texture_t pTexture)
    // Offset: 0x2316B14
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::Texture_t> pTexture);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref Valve.VR.Texture_t pTexture, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2316D98
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::Valve::VR::Texture_t> pTexture, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref Valve.VR.Texture_t pTexture, System.IAsyncResult result)
    // Offset: 0x2316E48
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<::Valve::VR::Texture_t> pTexture, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._SetOverlayTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayTexture::*)(uint64_t, ByRef<::Valve::VR::Texture_t>)>(&Valve::VR::IVROverlay::_SetOverlayTexture::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pTexture});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_SetOverlayTexture::*)(uint64_t, ByRef<::Valve::VR::Texture_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_SetOverlayTexture::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pTexture, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_SetOverlayTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_SetOverlayTexture::*)(ByRef<::Valve::VR::Texture_t>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_SetOverlayTexture::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pTexture = &::il2cpp_utils::GetClassFromName("Valve.VR", "Texture_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_SetOverlayTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTexture, result});
  }
};
