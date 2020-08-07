// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.OpenVRInterop
#include "Valve/VR/OpenVRInterop.hpp"
// Including type: Valve.VR.EVRInitError
#include "Valve/VR/EVRInitError.hpp"
// Including type: Valve.VR.EVRApplicationType
#include "Valve/VR/EVRApplicationType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.OpenVRInterop.InitInternal
uint Valve::VR::OpenVRInterop::InitInternal(Valve::VR::EVRInitError& peError, Valve::VR::EVRApplicationType eApplicationType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("Valve.VR", "OpenVRInterop", "InitInternal", peError, eApplicationType));
}
// Autogenerated method: Valve.VR.OpenVRInterop.ShutdownInternal
void Valve::VR::OpenVRInterop::ShutdownInternal() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Valve.VR", "OpenVRInterop", "ShutdownInternal"));
}
// Autogenerated method: Valve.VR.OpenVRInterop.IsHmdPresent
bool Valve::VR::OpenVRInterop::IsHmdPresent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Valve.VR", "OpenVRInterop", "IsHmdPresent"));
}
// Autogenerated method: Valve.VR.OpenVRInterop.IsRuntimeInstalled
bool Valve::VR::OpenVRInterop::IsRuntimeInstalled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Valve.VR", "OpenVRInterop", "IsRuntimeInstalled"));
}
// Autogenerated method: Valve.VR.OpenVRInterop.GetStringForHmdError
System::IntPtr Valve::VR::OpenVRInterop::GetStringForHmdError(Valve::VR::EVRInitError error) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Valve.VR", "OpenVRInterop", "GetStringForHmdError", error));
}
// Autogenerated method: Valve.VR.OpenVRInterop.GetGenericInterface
System::IntPtr Valve::VR::OpenVRInterop::GetGenericInterface(::Il2CppString*& pchInterfaceVersion, Valve::VR::EVRInitError& peError) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("Valve.VR", "OpenVRInterop", "GetGenericInterface", pchInterfaceVersion, peError));
}
// Autogenerated method: Valve.VR.OpenVRInterop.IsInterfaceVersionValid
bool Valve::VR::OpenVRInterop::IsInterfaceVersionValid(::Il2CppString*& pchInterfaceVersion) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Valve.VR", "OpenVRInterop", "IsInterfaceVersionValid", pchInterfaceVersion));
}
// Autogenerated method: Valve.VR.OpenVRInterop.GetInitToken
uint Valve::VR::OpenVRInterop::GetInitToken() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("Valve.VR", "OpenVRInterop", "GetInitToken"));
}
// Autogenerated method: Valve.VR.OpenVRInterop..ctor
Valve::VR::OpenVRInterop* Valve::VR::OpenVRInterop::New_ctor() {
  return (OpenVRInterop*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "OpenVRInterop"));
}