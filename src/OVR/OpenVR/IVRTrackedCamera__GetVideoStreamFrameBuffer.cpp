// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer
#include "OVR/OpenVR/IVRTrackedCamera__GetVideoStreamFrameBuffer.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraError
#include "OVR/OpenVR/EVRTrackedCameraError.hpp"
// Including type: OVR.OpenVR.EVRTrackedCameraFrameType
#include "OVR/OpenVR/EVRTrackedCameraFrameType.hpp"
// Including type: OVR.OpenVR.CameraVideoStreamFrameHeader_t
#include "OVR/OpenVR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer..ctor
OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer* OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRTrackedCamera::_GetVideoStreamFrameBuffer*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRTrackedCamera/_GetVideoStreamFrameBuffer", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer.Invoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer::Invoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "Invoke", hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer::BeginInvoke(uint64_t hTrackedCamera, OVR::OpenVR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRTrackedCamera/_GetVideoStreamFrameBuffer.EndInvoke
OVR::OpenVR::EVRTrackedCameraError OVR::OpenVR::IVRTrackedCamera::_GetVideoStreamFrameBuffer::EndInvoke(OVR::OpenVR::CameraVideoStreamFrameHeader_t& pFrameHeader, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRTrackedCameraError>(this, "EndInvoke", pFrameHeader, result));
}
