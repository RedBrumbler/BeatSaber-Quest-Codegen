// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_16_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_16_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/CameraDevice
#include "GlobalNamespace/OVRPlugin_CameraDevice.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Including type: OVRPlugin/ControllerState4
#include "GlobalNamespace/OVRPlugin_ControllerState4.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_16_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_16_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_16_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_16_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_UpdateCameraDevices
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_UpdateCameraDevices() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_UpdateCameraDevices"));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_IsCameraDeviceAvailable
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceAvailable(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_16_0", "ovrp_IsCameraDeviceAvailable", cameraDevice));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_SetCameraDevicePreferredColorFrameSize
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_SetCameraDevicePreferredColorFrameSize(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, GlobalNamespace::OVRPlugin::Sizei preferredColorFrameSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_SetCameraDevicePreferredColorFrameSize", cameraDevice, preferredColorFrameSize));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_OpenCameraDevice
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_OpenCameraDevice(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_OpenCameraDevice", cameraDevice));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_CloseCameraDevice
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_CloseCameraDevice(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_CloseCameraDevice", cameraDevice));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_HasCameraDeviceOpened
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_HasCameraDeviceOpened(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_16_0", "ovrp_HasCameraDeviceOpened", cameraDevice));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_IsCameraDeviceColorFrameAvailable
GlobalNamespace::OVRPlugin::Bool GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_IsCameraDeviceColorFrameAvailable(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Bool>("", "OVRPlugin/OVRP_1_16_0", "ovrp_IsCameraDeviceColorFrameAvailable", cameraDevice));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_GetCameraDeviceColorFrameSize
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameSize(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, GlobalNamespace::OVRPlugin::Sizei& colorFrameSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_GetCameraDeviceColorFrameSize", cameraDevice, colorFrameSize));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_GetCameraDeviceColorFrameBgraPixels
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetCameraDeviceColorFrameBgraPixels(GlobalNamespace::OVRPlugin::CameraDevice cameraDevice, System::IntPtr& colorFrameBgraPixels, int& colorFrameRowPitch) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_GetCameraDeviceColorFrameBgraPixels", cameraDevice, colorFrameBgraPixels, colorFrameRowPitch));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0.ovrp_GetControllerState4
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_16_0::ovrp_GetControllerState4(uint controllerMask, GlobalNamespace::OVRPlugin::ControllerState4& controllerState) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_16_0", "ovrp_GetControllerState4", controllerMask, controllerState));
}
// Autogenerated method: OVRPlugin/OVRP_1_16_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_16_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_16_0", ".cctor"));
}