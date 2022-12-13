// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
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
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
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
NEED_NO_BOX(::Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize*, "Valve.VR", "IVRTrackedCamera/_GetVideoStreamTextureSize");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRTrackedCamera/Valve.VR._GetVideoStreamTextureSize
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10D4F04
  class IVRTrackedCamera::_GetVideoStreamTextureSize : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x231D8D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_GetVideoStreamTextureSize* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_GetVideoStreamTextureSize*, creationType>(object, method)));
    }
    // public Valve.VR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x231D8E0
    ::Valve::VR::EVRTrackedCameraError Invoke(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x231DBB8
    ::System::IAsyncResult* BeginInvoke(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ByRef<uint> pnWidth, ByRef<uint> pnHeight, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRTrackedCameraError EndInvoke(ref Valve.VR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x231DCC4
    ::Valve::VR::EVRTrackedCameraError EndInvoke(ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ByRef<uint> pnWidth, ByRef<uint> pnHeight, ::System::IAsyncResult* result);
  }; // Valve.VR.IVRTrackedCamera/Valve.VR._GetVideoStreamTextureSize
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<::Valve::VR::VRTextureBounds_t>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<::Valve::VR::VRTextureBounds_t>, ByRef<uint>, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::*)(ByRef<::Valve::VR::VRTextureBounds_t>, ByRef<uint>, ByRef<uint>, ::System::IAsyncResult*)>(&Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureSize*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTextureBounds, pnWidth, pnHeight, result});
  }
};
