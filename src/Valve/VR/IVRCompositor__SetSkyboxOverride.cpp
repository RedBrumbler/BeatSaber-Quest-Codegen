// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_SetSkyboxOverride
#include "Valve/VR/IVRCompositor__SetSkyboxOverride.hpp"
// Including type: Valve.VR.EVRCompositorError
#include "Valve/VR/EVRCompositorError.hpp"
// Including type: Valve.VR.Texture_t
#include "Valve/VR/Texture_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_SetSkyboxOverride..ctor
Valve::VR::IVRCompositor::_SetSkyboxOverride* Valve::VR::IVRCompositor::_SetSkyboxOverride::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRCompositor::_SetSkyboxOverride*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_SetSkyboxOverride", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetSkyboxOverride.Invoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_SetSkyboxOverride::Invoke(::Array<Valve::VR::Texture_t>*& pTextures, uint unTextureCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "Invoke", pTextures, unTextureCount));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetSkyboxOverride.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_SetSkyboxOverride::BeginInvoke(::Array<Valve::VR::Texture_t>*& pTextures, uint unTextureCount, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pTextures, unTextureCount, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_SetSkyboxOverride.EndInvoke
Valve::VR::EVRCompositorError Valve::VR::IVRCompositor::_SetSkyboxOverride::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRCompositorError>(this, "EndInvoke", result));
}
