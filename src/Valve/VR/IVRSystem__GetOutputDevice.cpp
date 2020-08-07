// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetOutputDevice
#include "Valve/VR/IVRSystem__GetOutputDevice.hpp"
// Including type: Valve.VR.ETextureType
#include "Valve/VR/ETextureType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetOutputDevice..ctor
Valve::VR::IVRSystem::_GetOutputDevice* Valve::VR::IVRSystem::_GetOutputDevice::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRSystem::_GetOutputDevice*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetOutputDevice", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetOutputDevice.Invoke
void Valve::VR::IVRSystem::_GetOutputDevice::Invoke(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pnDevice, textureType, pInstance));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetOutputDevice.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetOutputDevice::BeginInvoke(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pnDevice, textureType, pInstance, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetOutputDevice.EndInvoke
void Valve::VR::IVRSystem::_GetOutputDevice::EndInvoke(uint64_t& pnDevice, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnDevice, result));
}