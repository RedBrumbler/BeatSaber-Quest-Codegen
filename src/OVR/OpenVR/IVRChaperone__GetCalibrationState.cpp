// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone/_GetCalibrationState
#include "OVR/OpenVR/IVRChaperone__GetCalibrationState.hpp"
// Including type: OVR.OpenVR.ChaperoneCalibrationState
#include "OVR/OpenVR/ChaperoneCalibrationState.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRChaperone/_GetCalibrationState..ctor
OVR::OpenVR::IVRChaperone::_GetCalibrationState* OVR::OpenVR::IVRChaperone::_GetCalibrationState::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRChaperone::_GetCalibrationState*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRChaperone/_GetCalibrationState", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_GetCalibrationState.Invoke
OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone::_GetCalibrationState::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::ChaperoneCalibrationState>(this, "Invoke"));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_GetCalibrationState.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRChaperone::_GetCalibrationState::BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRChaperone/_GetCalibrationState.EndInvoke
OVR::OpenVR::ChaperoneCalibrationState OVR::OpenVR::IVRChaperone::_GetCalibrationState::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::ChaperoneCalibrationState>(this, "EndInvoke", result));
}