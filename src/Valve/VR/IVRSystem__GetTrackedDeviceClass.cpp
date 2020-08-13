// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetTrackedDeviceClass
#include "Valve/VR/IVRSystem__GetTrackedDeviceClass.hpp"
// Including type: Valve.VR.ETrackedDeviceClass
#include "Valve/VR/ETrackedDeviceClass.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetTrackedDeviceClass..ctor
Valve::VR::IVRSystem::_GetTrackedDeviceClass* Valve::VR::IVRSystem::_GetTrackedDeviceClass::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_GetTrackedDeviceClass*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetTrackedDeviceClass", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetTrackedDeviceClass.Invoke
Valve::VR::ETrackedDeviceClass Valve::VR::IVRSystem::_GetTrackedDeviceClass::Invoke(uint unDeviceIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::ETrackedDeviceClass>(this, "Invoke", unDeviceIndex));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetTrackedDeviceClass.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetTrackedDeviceClass::BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetTrackedDeviceClass.EndInvoke
Valve::VR::ETrackedDeviceClass Valve::VR::IVRSystem::_GetTrackedDeviceClass::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::ETrackedDeviceClass>(this, "EndInvoke", result));
}
