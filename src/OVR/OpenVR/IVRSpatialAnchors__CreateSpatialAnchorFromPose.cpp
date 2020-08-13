// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose
#include "OVR/OpenVR/IVRSpatialAnchors__CreateSpatialAnchorFromPose.hpp"
// Including type: OVR.OpenVR.EVRSpatialAnchorError
#include "OVR/OpenVR/EVRSpatialAnchorError.hpp"
// Including type: OVR.OpenVR.ETrackingUniverseOrigin
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
// Including type: OVR.OpenVR.SpatialAnchorPose_t
#include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose..ctor
OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose* OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSpatialAnchors::_CreateSpatialAnchorFromPose*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromPose", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose.Invoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::Invoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "Invoke", unDeviceIndex, eOrigin, pPose, pHandleOut));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::BeginInvoke(uint unDeviceIndex, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, eOrigin, pPose, pHandleOut, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRSpatialAnchors/_CreateSpatialAnchorFromPose.EndInvoke
OVR::OpenVR::EVRSpatialAnchorError OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromPose::EndInvoke(OVR::OpenVR::SpatialAnchorPose_t& pPose, uint& pHandleOut, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRSpatialAnchorError>(this, "EndInvoke", pPose, pHandleOut, result));
}
