// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired
#include "Valve/VR/IVRCompositor__GetVulkanDeviceExtensionsRequired.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired..ctor
Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired* Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRCompositor::_GetVulkanDeviceExtensionsRequired*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired.Invoke
uint Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::Invoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "Invoke", pPhysicalDevice, pchValue, unBufferSize));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::BeginInvoke(System::IntPtr pPhysicalDevice, System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pPhysicalDevice, pchValue, unBufferSize, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_GetVulkanDeviceExtensionsRequired.EndInvoke
uint Valve::VR::IVRCompositor::_GetVulkanDeviceExtensionsRequired::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(this, "EndInvoke", result));
}