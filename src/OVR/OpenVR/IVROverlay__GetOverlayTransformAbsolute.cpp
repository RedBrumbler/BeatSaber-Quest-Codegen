// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute
#include "OVR/OpenVR/IVROverlay__GetOverlayTransformAbsolute.hpp"
// Including type: OVR.OpenVR.EVROverlayError
#include "OVR/OpenVR/EVROverlayError.hpp"
// Including type: OVR.OpenVR.ETrackingUniverseOrigin
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute..ctor
OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute* OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayTransformAbsolute*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVROverlay/_GetOverlayTransformAbsolute", object, method));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute.Invoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin& peTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "Invoke", ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, OVR::OpenVR::ETrackingUniverseOrigin& peTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute.EndInvoke
OVR::OpenVR::EVROverlayError OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute::EndInvoke(OVR::OpenVR::ETrackingUniverseOrigin& peTrackingOrigin, OVR::OpenVR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVROverlayError>(this, "EndInvoke", peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result));
}
