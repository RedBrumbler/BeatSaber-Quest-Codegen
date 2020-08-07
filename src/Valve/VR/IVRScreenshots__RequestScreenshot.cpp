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
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot..ctor
Valve::VR::IVRScreenshots::_RequestScreenshot* Valve::VR::IVRScreenshots::_RequestScreenshot::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRScreenshots::_RequestScreenshot*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRScreenshots/_RequestScreenshot", object, method));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.Invoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_RequestScreenshot::Invoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "Invoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.BeginInvoke
System::IAsyncResult* Valve::VR::IVRScreenshots::_RequestScreenshot::BeginInvoke(uint& pOutScreenshotHandle, Valve::VR::EVRScreenshotType type, ::Il2CppString* pchPreviewFilename, ::Il2CppString* pchVRFilename, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pOutScreenshotHandle, type, pchPreviewFilename, pchVRFilename, callback, object));
}
// Autogenerated method: Valve.VR.IVRScreenshots/_RequestScreenshot.EndInvoke
Valve::VR::EVRScreenshotError Valve::VR::IVRScreenshots::_RequestScreenshot::EndInvoke(uint& pOutScreenshotHandle, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRScreenshotError>(this, "EndInvoke", pOutScreenshotHandle, result));
}