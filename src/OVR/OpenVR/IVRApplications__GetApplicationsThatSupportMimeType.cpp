// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType
#include "OVR/OpenVR/IVRApplications__GetApplicationsThatSupportMimeType.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType..ctor
OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType* OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationsThatSupportMimeType*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRApplications/_GetApplicationsThatSupportMimeType", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType.Invoke
uint OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType::Invoke(::CsString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType::BeginInvoke(::CsString* pchMimeType, System::Text::StringBuilder* pchAppKeysThatSupportBuffer, uint unAppKeysThatSupportBuffer, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchMimeType, pchAppKeysThatSupportBuffer, unAppKeysThatSupportBuffer, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRApplications/_GetApplicationsThatSupportMimeType.EndInvoke
uint OVR::OpenVR::IVRApplications::_GetApplicationsThatSupportMimeType::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}
