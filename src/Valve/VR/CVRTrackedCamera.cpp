// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.CVRTrackedCamera
#include "Valve/VR/CVRTrackedCamera.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: Valve.VR.EVRTrackedCameraFrameType
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
// Including type: Valve.VR.HmdVector2_t
#include "Valve/VR/HmdVector2_t.hpp"
// Including type: Valve.VR.HmdMatrix44_t
#include "Valve/VR/HmdMatrix44_t.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.CVRTrackedCamera..ctor
Valve::VR::CVRTrackedCamera* Valve::VR::CVRTrackedCamera::New_ctor(System::IntPtr pInterface) {
  return (CVRTrackedCamera*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "CVRTrackedCamera", pInterface));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetCameraErrorNameFromEnum
::CsString* Valve::VR::CVRTrackedCamera::GetCameraErrorNameFromEnum(Valve::VR::EVRTrackedCameraError eCameraError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetCameraErrorNameFromEnum", eCameraError));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.HasCamera
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::HasCamera(uint nDeviceIndex, bool& pHasCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "HasCamera", nDeviceIndex, pHasCamera));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetCameraFrameSize
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetCameraFrameSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetCameraFrameSize", nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetCameraIntrinsics
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetCameraIntrinsics(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetCameraIntrinsics", nDeviceIndex, eFrameType, pFocalLength, pCenter));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetCameraProjection
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetCameraProjection(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetCameraProjection", nDeviceIndex, eFrameType, flZNear, flZFar, pProjection));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.AcquireVideoStreamingService
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::AcquireVideoStreamingService(uint nDeviceIndex, uint64_t& pHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "AcquireVideoStreamingService", nDeviceIndex, pHandle));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.ReleaseVideoStreamingService
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::ReleaseVideoStreamingService(uint64_t hTrackedCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "ReleaseVideoStreamingService", hTrackedCamera));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetVideoStreamFrameBuffer
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetVideoStreamFrameBuffer", hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetVideoStreamTextureSize
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetVideoStreamTextureSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetVideoStreamTextureSize", nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetVideoStreamTextureD3D11
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetVideoStreamTextureD3D11", hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.GetVideoStreamTextureGL
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::GetVideoStreamTextureGL(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "GetVideoStreamTextureGL", hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize));
}
// Autogenerated method: Valve.VR.CVRTrackedCamera.ReleaseVideoStreamTextureGL
Valve::VR::EVRTrackedCameraError Valve::VR::CVRTrackedCamera::ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "ReleaseVideoStreamTextureGL", hTrackedCamera, glTextureId));
}
