// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_GetApplicationLaunchArguments
#include "Valve/VR/IVRApplications__GetApplicationLaunchArguments.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationLaunchArguments..ctor
Valve::VR::IVRApplications::_GetApplicationLaunchArguments* Valve::VR::IVRApplications::_GetApplicationLaunchArguments::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_GetApplicationLaunchArguments*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRApplications/_GetApplicationLaunchArguments", object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationLaunchArguments.Invoke
uint Valve::VR::IVRApplications::_GetApplicationLaunchArguments::Invoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", unHandle, pchArgs, unArgs));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationLaunchArguments.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_GetApplicationLaunchArguments::BeginInvoke(uint unHandle, System::Text::StringBuilder* pchArgs, uint unArgs, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", unHandle, pchArgs, unArgs, callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_GetApplicationLaunchArguments.EndInvoke
uint Valve::VR::IVRApplications::_GetApplicationLaunchArguments::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}