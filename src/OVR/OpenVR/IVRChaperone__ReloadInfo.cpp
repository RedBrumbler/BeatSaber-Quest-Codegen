// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone/_ReloadInfo
#include "OVR/OpenVR/IVRChaperone__ReloadInfo.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperone/_ReloadInfo..ctor
OVR::OpenVR::IVRChaperone::_ReloadInfo* OVR::OpenVR::IVRChaperone::_ReloadInfo::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperone::_ReloadInfo*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperone/_ReloadInfo", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_ReloadInfo.Invoke
void OVR::OpenVR::IVRChaperone::_ReloadInfo::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_ReloadInfo.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperone::_ReloadInfo::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_ReloadInfo.EndInvoke
void OVR::OpenVR::IVRChaperone::_ReloadInfo::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
