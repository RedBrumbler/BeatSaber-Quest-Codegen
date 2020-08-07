// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications/_LaunchTemplateApplication
#include "Valve/VR/IVRApplications__LaunchTemplateApplication.hpp"
// Including type: Valve.VR.EVRApplicationError
#include "Valve/VR/EVRApplicationError.hpp"
// Including type: Valve.VR.AppOverrideKeys_t
#include "Valve/VR/AppOverrideKeys_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRApplications/_LaunchTemplateApplication..ctor
Valve::VR::IVRApplications::_LaunchTemplateApplication* Valve::VR::IVRApplications::_LaunchTemplateApplication::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRApplications::_LaunchTemplateApplication*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRApplications/_LaunchTemplateApplication", object, method));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchTemplateApplication.Invoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchTemplateApplication::Invoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>*& pKeys, uint unKeys) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "Invoke", pchTemplateAppKey, pchNewAppKey, pKeys, unKeys));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchTemplateApplication.BeginInvoke
System::IAsyncResult* Valve::VR::IVRApplications::_LaunchTemplateApplication::BeginInvoke(::Il2CppString* pchTemplateAppKey, ::Il2CppString* pchNewAppKey, ::Array<Valve::VR::AppOverrideKeys_t>*& pKeys, uint unKeys, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchTemplateAppKey, pchNewAppKey, pKeys, unKeys, callback, object));
}
// Autogenerated method: Valve.VR.IVRApplications/_LaunchTemplateApplication.EndInvoke
Valve::VR::EVRApplicationError Valve::VR::IVRApplications::_LaunchTemplateApplication::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRApplicationError>(this, "EndInvoke", result));
}