// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSettings/_GetInt32
#include "Valve/VR/IVRSettings__GetInt32.hpp"
// Including type: Valve.VR.EVRSettingsError
#include "Valve/VR/EVRSettingsError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSettings/_GetInt32..ctor
Valve::VR::IVRSettings::_GetInt32* Valve::VR::IVRSettings::_GetInt32::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRSettings::_GetInt32*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSettings/_GetInt32", object, method));
}
// Autogenerated method: Valve.VR.IVRSettings/_GetInt32.Invoke
int Valve::VR::IVRSettings::_GetInt32::Invoke(::CsString* pchSection, ::CsString* pchSettingsKey, Valve::VR::EVRSettingsError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Invoke", pchSection, pchSettingsKey, peError));
}
// Autogenerated method: Valve.VR.IVRSettings/_GetInt32.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSettings::_GetInt32::BeginInvoke(::CsString* pchSection, ::CsString* pchSettingsKey, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pchSection, pchSettingsKey, peError, callback, object));
}
// Autogenerated method: Valve.VR.IVRSettings/_GetInt32.EndInvoke
int Valve::VR::IVRSettings::_GetInt32::EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndInvoke", peError, result));
}
