// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRScreenshots/_RequestScreenshot
#include "Valve/VR/IVRScreenshots__RequestScreenshot.hpp"
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
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot..ctor
Valve::VR::IVRScreenshots::_RequestScreenshot* Valve::VR::IVRScreenshots::_RequestScreenshot::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRScreenshots::_RequestScreenshot*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRScreenshots/_RequestScreenshot", object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::CsString* pchPreviewFilename, ::CsString* pchVRFilename, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", pOutScreenshotHandle, result));
}
