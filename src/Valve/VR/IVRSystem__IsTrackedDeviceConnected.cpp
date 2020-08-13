// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_IsTrackedDeviceConnected
#include "Valve/VR/IVRSystem__IsTrackedDeviceConnected.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_IsTrackedDeviceConnected..ctor
Valve::VR::IVRSystem::_IsTrackedDeviceConnected* Valve::VR::IVRSystem::_IsTrackedDeviceConnected::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSystem::_IsTrackedDeviceConnected*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_IsTrackedDeviceConnected", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_IsTrackedDeviceConnected.Invoke
bool Valve::VR::IVRSystem::_IsTrackedDeviceConnected::Invoke(uint unDeviceIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Invoke", unDeviceIndex));
}
// Autogenerated method: Valve.VR.IVRSystem/_IsTrackedDeviceConnected.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_IsTrackedDeviceConnected::BeginInvoke(uint unDeviceIndex, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unDeviceIndex, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_IsTrackedDeviceConnected.EndInvoke
bool Valve::VR::IVRSystem::_IsTrackedDeviceConnected::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EndInvoke", result));
}
