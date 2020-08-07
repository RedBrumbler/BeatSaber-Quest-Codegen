// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL
#include "Valve/VR/IVRTrackedCamera__GetVideoStreamTextureGL.hpp"
// Including type: Valve.VR.EVRTrackedCameraError
#include "Valve/VR/EVRTrackedCameraError.hpp"
// Including type: Valve.VR.EVRTrackedCameraFrameType
#include "Valve/VR/EVRTrackedCameraFrameType.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL..ctor
Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL* Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_GetVideoStreamTextureGL*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRTrackedCamera/_GetVideoStreamTextureGL", object, method));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL.Invoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::Invoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "Invoke", hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL.BeginInvoke
System::IAsyncResult* Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::BeginInvoke(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize, callback, object));
}
// Autogenerated method: Valve.VR.IVRTrackedCamera/_GetVideoStreamTextureGL.EndInvoke
Valve::VR::EVRTrackedCameraError Valve::VR::IVRTrackedCamera::_GetVideoStreamTextureGL::EndInvoke(uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRTrackedCameraError>(this, "EndInvoke", pglTextureId, pFrameHeader, result));
}