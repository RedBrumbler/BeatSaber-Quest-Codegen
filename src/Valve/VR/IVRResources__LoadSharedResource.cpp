// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRResources/_LoadSharedResource
#include "Valve/VR/IVRResources__LoadSharedResource.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRResources/_LoadSharedResource..ctor
Valve::VR::IVRResources::_LoadSharedResource* Valve::VR::IVRResources::_LoadSharedResource::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRResources::_LoadSharedResource*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRResources/_LoadSharedResource", object, method));
}
// Autogenerated method: Valve.VR.IVRResources/_LoadSharedResource.Invoke
uint Valve::VR::IVRResources::_LoadSharedResource::Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pchResourceName, pchBuffer, unBufferLen));
}
// Autogenerated method: Valve.VR.IVRResources/_LoadSharedResource.BeginInvoke
System::IAsyncResult* Valve::VR::IVRResources::_LoadSharedResource::BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchResourceName, pchBuffer, unBufferLen, callback, object));
}
// Autogenerated method: Valve.VR.IVRResources/_LoadSharedResource.EndInvoke
uint Valve::VR::IVRResources::_LoadSharedResource::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}