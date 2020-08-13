// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
#include "OVR/OpenVR/IVRChaperoneSetup__SetWorkingPlayAreaSize.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize..ctor
OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize* OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperoneSetup::_SetWorkingPlayAreaSize*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize.Invoke
void OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::Invoke(float sizeX, float sizeZ) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", sizeX, sizeZ));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::BeginInvoke(float sizeX, float sizeZ, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", sizeX, sizeZ, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize.EndInvoke
void OVR::OpenVR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
