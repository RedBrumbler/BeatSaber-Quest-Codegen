// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerGamepadMac
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac.hpp"
// Including type: OVRInput/OVRControllerGamepadMac/AxisGPC
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac_AxisGPC.hpp"
// Including type: OVRInput/OVRControllerGamepadMac/ButtonGPC
#include "GlobalNamespace/OVRInput_OVRControllerGamepadMac_ButtonGPC.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String DllName
::Il2CppString* GlobalNamespace::OVRInput::OVRControllerGamepadMac::_get_DllName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "OVRInput/OVRControllerGamepadMac", "DllName"));
}
// Autogenerated static field setter
// Set static field: static private System.String DllName
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::_set_DllName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRInput/OVRControllerGamepadMac", "DllName", value));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Initialize
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Initialize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Initialize"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Destroy
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Destroy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Destroy"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_Update
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_Update() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_Update"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_GetAxis
float GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetAxis(int axis) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_GetAxis", axis));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_GetButton
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_GetButton(int button) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_GetButton", button));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.OVR_GamepadController_SetVibration
bool GlobalNamespace::OVRInput::OVRControllerGamepadMac::OVR_GamepadController_SetVibration(int node, float strength, float frequency) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "OVRInput/OVRControllerGamepadMac", "OVR_GamepadController_SetVibration", node, strength, frequency));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac..ctor
GlobalNamespace::OVRInput::OVRControllerGamepadMac* GlobalNamespace::OVRInput::OVRControllerGamepadMac::New_ctor() {
  return (OVRInput::OVRControllerGamepadMac*)THROW_UNLESS(il2cpp_utils::New("", "OVRInput/OVRControllerGamepadMac"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.Finalize
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::Finalize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Finalize"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.Update
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::OVRControllerGamepadMac::Update() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::Controller>(this, "Update"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureButtonMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureButtonMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureButtonMap"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureTouchMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureTouchMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureTouchMap"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureNearTouchMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureNearTouchMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureNearTouchMap"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureAxis1DMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis1DMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureAxis1DMap"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.ConfigureAxis2DMap
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::ConfigureAxis2DMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureAxis2DMap"));
}
// Autogenerated method: OVRInput/OVRControllerGamepadMac.SetControllerVibration
void GlobalNamespace::OVRInput::OVRControllerGamepadMac::SetControllerVibration(float frequency, float amplitude) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetControllerVibration", frequency, amplitude));
}