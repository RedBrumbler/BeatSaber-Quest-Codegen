// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot
#include "OVR/OpenVR/IVRScreenshots__TakeStereoScreenshot.hpp"
// Including type: OVR.OpenVR.EVRScreenshotError
#include "OVR/OpenVR/EVRScreenshotError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot..ctor
OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot* OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRScreenshots::_TakeStereoScreenshot*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot.Invoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::Invoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "Invoke", pOutScreenshotHandle, pchPreviewFilename, pchVRFilename));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::BeginInvoke(uint& pOutScreenshotHandle, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pOutScreenshotHandle, pchPreviewFilename, pchVRFilename, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot.EndInvoke
OVR::OpenVR::EVRScreenshotError OVR::OpenVR::IVRScreenshots::_TakeStereoScreenshot::EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRScreenshotError>(this, "EndInvoke", pOutScreenshotHandle, result));
}