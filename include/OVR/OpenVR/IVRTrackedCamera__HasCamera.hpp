// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRTrackedCamera
#include "OVR/OpenVR/IVRTrackedCamera.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRTrackedCamera::_HasCamera);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRTrackedCamera::_HasCamera*, "OVR.OpenVR", "IVRTrackedCamera/_HasCamera");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._HasCamera
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 10CED44
  class IVRTrackedCamera::_HasCamera : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16A66A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRTrackedCamera::_HasCamera* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRTrackedCamera::_HasCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRTrackedCamera::_HasCamera*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRTrackedCameraError Invoke(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera)
    // Offset: 0x16A66B0
    ::OVR::OpenVR::EVRTrackedCameraError Invoke(uint nDeviceIndex, ByRef<bool> pHasCamera);
    // public System.IAsyncResult BeginInvoke(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16A6934
    ::System::IAsyncResult* BeginInvoke(uint nDeviceIndex, ByRef<bool> pHasCamera, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRTrackedCameraError EndInvoke(ref System.Boolean pHasCamera, System.IAsyncResult result)
    // Offset: 0x16A69E8
    ::OVR::OpenVR::EVRTrackedCameraError EndInvoke(ByRef<bool> pHasCamera, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRTrackedCamera/OVR.OpenVR._HasCamera
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_HasCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_HasCamera::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_HasCamera::*)(uint, ByRef<bool>)>(&OVR::OpenVR::IVRTrackedCamera::_HasCamera::Invoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHasCamera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_HasCamera*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHasCamera});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_HasCamera::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRTrackedCamera::_HasCamera::*)(uint, ByRef<bool>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRTrackedCamera::_HasCamera::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHasCamera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_HasCamera*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHasCamera, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRTrackedCamera::_HasCamera::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRTrackedCameraError (OVR::OpenVR::IVRTrackedCamera::_HasCamera::*)(ByRef<bool>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRTrackedCamera::_HasCamera::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pHasCamera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRTrackedCamera::_HasCamera*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pHasCamera, result});
  }
};
