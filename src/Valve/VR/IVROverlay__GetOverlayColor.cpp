// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_GetOverlayColor
#include "Valve/VR/IVROverlay__GetOverlayColor.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayColor..ctor
Valve::VR::IVROverlay::_GetOverlayColor* Valve::VR::IVROverlay::_GetOverlayColor::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVROverlay::_GetOverlayColor*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_GetOverlayColor", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayColor.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayColor::Invoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", ulOverlayHandle, pfRed, pfGreen, pfBlue));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayColor.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_GetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_GetOverlayColor.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_GetOverlayColor::EndInvoke(float& pfRed, float& pfGreen, float& pfBlue, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", pfRed, pfGreen, pfBlue, result));
}
