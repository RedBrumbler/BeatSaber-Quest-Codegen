// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem/_GetEyeToHeadTransform
#include "Valve/VR/IVRSystem__GetEyeToHeadTransform.hpp"
// Including type: Valve.VR.HmdMatrix34_t
#include "Valve/VR/HmdMatrix34_t.hpp"
// Including type: Valve.VR.EVREye
#include "Valve/VR/EVREye.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRSystem/_GetEyeToHeadTransform..ctor
Valve::VR::IVRSystem::_GetEyeToHeadTransform* Valve::VR::IVRSystem::_GetEyeToHeadTransform::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRSystem::_GetEyeToHeadTransform*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRSystem/_GetEyeToHeadTransform", object, method));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEyeToHeadTransform.Invoke
Valve::VR::HmdMatrix34_t Valve::VR::IVRSystem::_GetEyeToHeadTransform::Invoke(Valve::VR::EVREye eEye) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::HmdMatrix34_t>(this, "Invoke", eEye));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEyeToHeadTransform.BeginInvoke
System::IAsyncResult* Valve::VR::IVRSystem::_GetEyeToHeadTransform::BeginInvoke(Valve::VR::EVREye eEye, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eEye, callback, object));
}
// Autogenerated method: Valve.VR.IVRSystem/_GetEyeToHeadTransform.EndInvoke
Valve::VR::HmdMatrix34_t Valve::VR::IVRSystem::_GetEyeToHeadTransform::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::HmdMatrix34_t>(this, "EndInvoke", result));
}