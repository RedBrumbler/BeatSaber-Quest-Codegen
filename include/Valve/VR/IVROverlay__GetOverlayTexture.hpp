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
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
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
NEED_NO_BOX(::Valve::VR::IVROverlay::_GetOverlayTexture);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVROverlay::_GetOverlayTexture*, "Valve.VR", "IVROverlay/_GetOverlayTexture");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._GetOverlayTexture
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D5C24
  class IVROverlay::_GetOverlayTexture : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2723DF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTexture* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVROverlay::_GetOverlayTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTexture*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x2723E04
    ::Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::Valve::VR::ETextureType> pAPIType, ByRef<::Valve::VR::EColorSpace> pColorSpace, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2724128
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::Valve::VR::ETextureType> pAPIType, ByRef<::Valve::VR::EColorSpace> pColorSpace, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.IntPtr pNativeTextureHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds, System.IAsyncResult result)
    // Offset: 0x27242B4
    ::Valve::VR::EVROverlayError EndInvoke(ByRef<::System::IntPtr> pNativeTextureHandle, ByRef<uint> pWidth, ByRef<uint> pHeight, ByRef<uint> pNativeFormat, ByRef<::Valve::VR::ETextureType> pAPIType, ByRef<::Valve::VR::EColorSpace> pColorSpace, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ::System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._GetOverlayTexture
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexture::*)(uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::Valve::VR::ETextureType>, ByRef<::Valve::VR::EColorSpace>, ByRef<::Valve::VR::VRTextureBounds_t>)>(&Valve::VR::IVROverlay::_GetOverlayTexture::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pNativeTextureRef = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("Valve.VR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayTexture::*)(uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::Valve::VR::ETextureType>, ByRef<::Valve::VR::EColorSpace>, ByRef<::Valve::VR::VRTextureBounds_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayTexture::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pNativeTextureRef = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("Valve.VR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTexture::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTexture::*)(ByRef<::System::IntPtr>, ByRef<uint>, ByRef<uint>, ByRef<uint>, ByRef<::Valve::VR::ETextureType>, ByRef<::Valve::VR::EColorSpace>, ByRef<::Valve::VR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayTexture::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pNativeTextureHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pNativeFormat = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pAPIType = &::il2cpp_utils::GetClassFromName("Valve.VR", "ETextureType")->this_arg;
    static auto* pColorSpace = &::il2cpp_utils::GetClassFromName("Valve.VR", "EColorSpace")->this_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTexture*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace, pTextureBounds, result});
  }
};
