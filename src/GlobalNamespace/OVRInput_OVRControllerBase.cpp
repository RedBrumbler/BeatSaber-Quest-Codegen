// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/OVRControllerBase/VirtualButtonMap
#include "GlobalNamespace/OVRInput_OVRControllerBase_VirtualButtonMap.hpp"
// Including type: OVRInput/OVRControllerBase/VirtualTouchMap
#include "GlobalNamespace/OVRInput_OVRControllerBase_VirtualTouchMap.hpp"
// Including type: OVRInput/OVRControllerBase/VirtualNearTouchMap
#include "GlobalNamespace/OVRInput_OVRControllerBase_VirtualNearTouchMap.hpp"
// Including type: OVRInput/OVRControllerBase/VirtualAxis1DMap
#include "GlobalNamespace/OVRInput_OVRControllerBase_VirtualAxis1DMap.hpp"
// Including type: OVRInput/OVRControllerBase/VirtualAxis2DMap
#include "GlobalNamespace/OVRInput_OVRControllerBase_VirtualAxis2DMap.hpp"
// Including type: OVRInput/RawButton
#include "GlobalNamespace/OVRInput_RawButton.hpp"
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
// Including type: OVRInput/RawTouch
#include "GlobalNamespace/OVRInput_RawTouch.hpp"
// Including type: OVRInput/Touch
#include "GlobalNamespace/OVRInput_Touch.hpp"
// Including type: OVRInput/RawNearTouch
#include "GlobalNamespace/OVRInput_RawNearTouch.hpp"
// Including type: OVRInput/NearTouch
#include "GlobalNamespace/OVRInput_NearTouch.hpp"
// Including type: OVRInput/RawAxis1D
#include "GlobalNamespace/OVRInput_RawAxis1D.hpp"
// Including type: OVRInput/Axis1D
#include "GlobalNamespace/OVRInput_Axis1D.hpp"
// Including type: OVRInput/RawAxis2D
#include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
// Including type: OVRInput/Axis2D
#include "GlobalNamespace/OVRInput_Axis2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRInput/OVRControllerBase.Update
GlobalNamespace::OVRInput::Controller GlobalNamespace::OVRInput::OVRControllerBase::Update() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::Controller>(this, "Update"));
}
// Autogenerated method: OVRInput/OVRControllerBase.GetOpenVRControllerState
GlobalNamespace::OVRPlugin::ControllerState4 GlobalNamespace::OVRInput::OVRControllerBase::GetOpenVRControllerState(GlobalNamespace::OVRInput::Controller controllerType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::ControllerState4>(this, "GetOpenVRControllerState", controllerType));
}
// Autogenerated method: OVRInput/OVRControllerBase.SetControllerVibration
void GlobalNamespace::OVRInput::OVRControllerBase::SetControllerVibration(float frequency, float amplitude) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetControllerVibration", frequency, amplitude));
}
// Autogenerated method: OVRInput/OVRControllerBase.RecenterController
void GlobalNamespace::OVRInput::OVRControllerBase::RecenterController() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RecenterController"));
}
// Autogenerated method: OVRInput/OVRControllerBase.WasRecentered
bool GlobalNamespace::OVRInput::OVRControllerBase::WasRecentered() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "WasRecentered"));
}
// Autogenerated method: OVRInput/OVRControllerBase.GetRecenterCount
uint8_t GlobalNamespace::OVRInput::OVRControllerBase::GetRecenterCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "GetRecenterCount"));
}
// Autogenerated method: OVRInput/OVRControllerBase.GetBatteryPercentRemaining
uint8_t GlobalNamespace::OVRInput::OVRControllerBase::GetBatteryPercentRemaining() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "GetBatteryPercentRemaining"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ConfigureButtonMap
void GlobalNamespace::OVRInput::OVRControllerBase::ConfigureButtonMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureButtonMap"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ConfigureTouchMap
void GlobalNamespace::OVRInput::OVRControllerBase::ConfigureTouchMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureTouchMap"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ConfigureNearTouchMap
void GlobalNamespace::OVRInput::OVRControllerBase::ConfigureNearTouchMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureNearTouchMap"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ConfigureAxis1DMap
void GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis1DMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureAxis1DMap"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ConfigureAxis2DMap
void GlobalNamespace::OVRInput::OVRControllerBase::ConfigureAxis2DMap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConfigureAxis2DMap"));
}
// Autogenerated method: OVRInput/OVRControllerBase.ResolveToRawMask
GlobalNamespace::OVRInput::RawButton GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask(GlobalNamespace::OVRInput::Button virtualMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::RawButton>(this, "ResolveToRawMask", virtualMask));
}
// Autogenerated method: OVRInput/OVRControllerBase.ResolveToRawMask
GlobalNamespace::OVRInput::RawTouch GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask(GlobalNamespace::OVRInput::Touch virtualMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::RawTouch>(this, "ResolveToRawMask", virtualMask));
}
// Autogenerated method: OVRInput/OVRControllerBase.ResolveToRawMask
GlobalNamespace::OVRInput::RawNearTouch GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask(GlobalNamespace::OVRInput::NearTouch virtualMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::RawNearTouch>(this, "ResolveToRawMask", virtualMask));
}
// Autogenerated method: OVRInput/OVRControllerBase.ResolveToRawMask
GlobalNamespace::OVRInput::RawAxis1D GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask(GlobalNamespace::OVRInput::Axis1D virtualMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::RawAxis1D>(this, "ResolveToRawMask", virtualMask));
}
// Autogenerated method: OVRInput/OVRControllerBase.ResolveToRawMask
GlobalNamespace::OVRInput::RawAxis2D GlobalNamespace::OVRInput::OVRControllerBase::ResolveToRawMask(GlobalNamespace::OVRInput::Axis2D virtualMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRInput::RawAxis2D>(this, "ResolveToRawMask", virtualMask));
}
// Autogenerated method: OVRInput/OVRControllerBase..ctor
GlobalNamespace::OVRInput::OVRControllerBase* GlobalNamespace::OVRInput::OVRControllerBase::New_ctor() {
  return (OVRInput::OVRControllerBase*)THROW_UNLESS(il2cpp_utils::New("", "OVRInput/OVRControllerBase"));
}
