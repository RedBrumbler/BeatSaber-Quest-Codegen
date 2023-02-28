// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Forward declaring type: CVRTrackedCamera
  class CVRTrackedCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Valve::VR::CVRTrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::Valve::VR::CVRTrackedCamera*, "Valve.VR", "CVRTrackedCamera");
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRTrackedCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRTrackedCamera : public ::Il2CppObject {
    public:
    public:
    // private Valve.VR.IVRTrackedCamera FnTable
    // Size: 0x60
    // Offset: 0x10
    ::Valve::VR::IVRTrackedCamera FnTable;
    // Field size check
    static_assert(sizeof(::Valve::VR::IVRTrackedCamera) == 0x60);
    public:
    // Creating conversion operator: operator ::Valve::VR::IVRTrackedCamera
    constexpr operator ::Valve::VR::IVRTrackedCamera() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private Valve.VR.IVRTrackedCamera FnTable
    [[deprecated("Use field access instead!")]] ::Valve::VR::IVRTrackedCamera& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1C8D970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRTrackedCamera* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Valve::VR::CVRTrackedCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRTrackedCamera*, creationType>(pInterface)));
    }
    // public System.String GetCameraErrorNameFromEnum(Valve.VR.EVRTrackedCameraError eCameraError)
    // Offset: 0x1C8DA78
    ::StringW GetCameraErrorNameFromEnum(::Valve::VR::EVRTrackedCameraError eCameraError);
    // public Valve.VR.EVRTrackedCameraError HasCamera(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera)
    // Offset: 0x1C7BB50
    ::Valve::VR::EVRTrackedCameraError HasCamera(uint nDeviceIndex, ByRef<bool> pHasCamera);
    // public Valve.VR.EVRTrackedCameraError GetCameraFrameSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize)
    // Offset: 0x1C8DB0C
    ::Valve::VR::EVRTrackedCameraError GetCameraFrameSize(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pnWidth, ByRef<uint> pnHeight, ByRef<uint> pnFrameBufferSize);
    // public Valve.VR.EVRTrackedCameraError GetCameraIntrinsics(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.HmdVector2_t pFocalLength, ref Valve.VR.HmdVector2_t pCenter)
    // Offset: 0x1C8DB34
    ::Valve::VR::EVRTrackedCameraError GetCameraIntrinsics(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<::Valve::VR::HmdVector2_t> pFocalLength, ByRef<::Valve::VR::HmdVector2_t> pCenter);
    // public Valve.VR.EVRTrackedCameraError GetCameraProjection(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref Valve.VR.HmdMatrix44_t pProjection)
    // Offset: 0x1C8DB50
    ::Valve::VR::EVRTrackedCameraError GetCameraProjection(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, ByRef<::Valve::VR::HmdMatrix44_t> pProjection);
    // public Valve.VR.EVRTrackedCameraError AcquireVideoStreamingService(System.UInt32 nDeviceIndex, ref System.UInt64 pHandle)
    // Offset: 0x1C7BC2C
    ::Valve::VR::EVRTrackedCameraError AcquireVideoStreamingService(uint nDeviceIndex, ByRef<uint64_t> pHandle);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamingService(System.UInt64 hTrackedCamera)
    // Offset: 0x1C7BCFC
    ::Valve::VR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamFrameBuffer(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1C8DB6C
    ::Valve::VR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pFrameBuffer, uint nFrameBufferSize, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1C7C5AC
    ::Valve::VR::EVRTrackedCameraError GetVideoStreamTextureSize(uint nDeviceIndex, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<::Valve::VR::VRTextureBounds_t> pTextureBounds, ByRef<uint> pnWidth, ByRef<uint> pnHeight);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureD3D11(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1C7C590
    ::Valve::VR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ::System::IntPtr pD3D11DeviceOrResource, ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureGL(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0x1C7C570
    ::Valve::VR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, ::Valve::VR::EVRTrackedCameraFrameType eFrameType, ByRef<uint> pglTextureId, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t> pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamTextureGL(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0x1C7C554
    ::Valve::VR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId);
  }; // Valve.VR.CVRTrackedCamera
  #pragma pack(pop)
  static check_size<sizeof(CVRTrackedCamera), 16 + sizeof(::Valve::VR::IVRTrackedCamera)> __Valve_VR_CVRTrackedCameraSizeCheck;
  static_assert(sizeof(CVRTrackedCamera) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetCameraErrorNameFromEnum
// Il2CppName: GetCameraErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Valve::VR::CVRTrackedCamera::*)(::Valve::VR::EVRTrackedCameraError)>(&Valve::VR::CVRTrackedCamera::GetCameraErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* eCameraError = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetCameraErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eCameraError});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::HasCamera
// Il2CppName: HasCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ByRef<bool>)>(&Valve::VR::CVRTrackedCamera::HasCamera)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHasCamera = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "HasCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHasCamera});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetCameraFrameSize
// Il2CppName: GetCameraFrameSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::CVRTrackedCamera::GetCameraFrameSize)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetCameraFrameSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetCameraIntrinsics
// Il2CppName: GetCameraIntrinsics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<::Valve::VR::HmdVector2_t>, ByRef<::Valve::VR::HmdVector2_t>)>(&Valve::VR::CVRTrackedCamera::GetCameraIntrinsics)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFocalLength = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdVector2_t")->this_arg;
    static auto* pCenter = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdVector2_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetCameraIntrinsics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pFocalLength, pCenter});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetCameraProjection
// Il2CppName: GetCameraProjection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, float, float, ByRef<::Valve::VR::HmdMatrix44_t>)>(&Valve::VR::CVRTrackedCamera::GetCameraProjection)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* flZNear = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flZFar = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pProjection = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix44_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetCameraProjection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, flZNear, flZFar, pProjection});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::AcquireVideoStreamingService
// Il2CppName: AcquireVideoStreamingService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ByRef<uint64_t>)>(&Valve::VR::CVRTrackedCamera::AcquireVideoStreamingService)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "AcquireVideoStreamingService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, pHandle});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::ReleaseVideoStreamingService
// Il2CppName: ReleaseVideoStreamingService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint64_t)>(&Valve::VR::CVRTrackedCamera::ReleaseVideoStreamingService)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "ReleaseVideoStreamingService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetVideoStreamFrameBuffer
// Il2CppName: GetVideoStreamFrameBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint64_t, ::Valve::VR::EVRTrackedCameraFrameType, ::System::IntPtr, uint, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t>, uint)>(&Valve::VR::CVRTrackedCamera::GetVideoStreamFrameBuffer)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pFrameBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* nFrameBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetVideoStreamFrameBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetVideoStreamTextureSize
// Il2CppName: GetVideoStreamTextureSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<::Valve::VR::VRTextureBounds_t>, ByRef<uint>, ByRef<uint>)>(&Valve::VR::CVRTrackedCamera::GetVideoStreamTextureSize)> {
  static const MethodInfo* get() {
    static auto* nDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pTextureBounds = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetVideoStreamTextureSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetVideoStreamTextureD3D11
// Il2CppName: GetVideoStreamTextureD3D11
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint64_t, ::Valve::VR::EVRTrackedCameraFrameType, ::System::IntPtr, ByRef<::System::IntPtr>, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t>, uint)>(&Valve::VR::CVRTrackedCamera::GetVideoStreamTextureD3D11)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pD3D11DeviceOrResource = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* ppD3D11ShaderResourceView = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetVideoStreamTextureD3D11", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::GetVideoStreamTextureGL
// Il2CppName: GetVideoStreamTextureGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint64_t, ::Valve::VR::EVRTrackedCameraFrameType, ByRef<uint>, ByRef<::Valve::VR::CameraVideoStreamFrameHeader_t>, uint)>(&Valve::VR::CVRTrackedCamera::GetVideoStreamTextureGL)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eFrameType = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVRTrackedCameraFrameType")->byval_arg;
    static auto* pglTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pFrameHeader = &::il2cpp_utils::GetClassFromName("Valve.VR", "CameraVideoStreamFrameHeader_t")->this_arg;
    static auto* nFrameHeaderSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "GetVideoStreamTextureGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize});
  }
};
// Writing MetadataGetter for method: Valve::VR::CVRTrackedCamera::ReleaseVideoStreamTextureGL
// Il2CppName: ReleaseVideoStreamTextureGL
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraError (Valve::VR::CVRTrackedCamera::*)(uint64_t, uint)>(&Valve::VR::CVRTrackedCamera::ReleaseVideoStreamTextureGL)> {
  static const MethodInfo* get() {
    static auto* hTrackedCamera = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* glTextureId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::CVRTrackedCamera*), "ReleaseVideoStreamTextureGL", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hTrackedCamera, glTextureId});
  }
};
