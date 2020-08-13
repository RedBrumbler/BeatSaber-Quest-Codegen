// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_HookScreenshot
#include "Valve/VR/IVRScreenshots__HookScreenshot.hpp"
// Including type: Valve.VR.EVRScreenshotError
#include "Valve/VR/EVRScreenshotError.hpp"
// Including type: Valve.VR.EVRScreenshotType
#include "Valve/VR/EVRScreenshotType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_HookScreenshot..ctor
Valve::VR::IVRScreenshots::_HookScreenshot* Valve::VR::IVRScreenshots::_HookScreenshot::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_HookScreenshot*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRScreenshots/_HookScreenshot", object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_HookScreenshot.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_HookScreenshot::Invoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", pSupportedTypes, numTypes));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_HookScreenshot.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_HookScreenshot::BeginInvoke(::Array<Valve::VR::EVRScreenshotType>*& pSupportedTypes, int numTypes, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pSupportedTypes, numTypes, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_HookScreenshot.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_HookScreenshot::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", result));
}
