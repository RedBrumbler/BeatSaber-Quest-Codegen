// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType
#include "Valve/VR/IVRApplications__LaunchApplicationFromMimeType.hpp"
// Including type: Valve.VR.EVRApplicationError
#include "Valve/VR/EVRApplicationError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType..ctor
Valve::VR::IVRApplications::_LaunchApplicationFromMimeType* Valve::VR::IVRApplications::_LaunchApplicationFromMimeType::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_LaunchApplicationFromMimeType*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRApplications/_LaunchApplicationFromMimeType", object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType.Invoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchApplicationFromMimeType::Invoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "Invoke", pchMimeType, pchArgs));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_LaunchApplicationFromMimeType::BeginInvoke(::Il2CppString* pchMimeType, ::Il2CppString* pchArgs, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchMimeType, pchArgs, callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchApplicationFromMimeType.EndInvoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchApplicationFromMimeType::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "EndInvoke", result));
}