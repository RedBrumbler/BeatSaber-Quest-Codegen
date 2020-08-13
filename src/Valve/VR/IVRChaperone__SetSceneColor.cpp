// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperone/_SetSceneColor
#include "Valve/VR/IVRChaperone__SetSceneColor.hpp"
// Including type: Valve.VR.HmdColor_t
#include "Valve/VR/HmdColor_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRChaperone/_SetSceneColor..ctor
Valve::VR::IVRChaperone::_SetSceneColor* Valve::VR::IVRChaperone::_SetSceneColor::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRChaperone::_SetSceneColor*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRChaperone/_SetSceneColor", object, method));
}
// Autogenerated method: Valve.VR.IVRChaperone/_SetSceneColor.Invoke
void Valve::VR::IVRChaperone::_SetSceneColor::Invoke(Valve::VR::HmdColor_t color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", color));
}
// Autogenerated method: Valve.VR.IVRChaperone/_SetSceneColor.BeginInvoke
System::IAsyncResult* Valve::VR::IVRChaperone::_SetSceneColor::BeginInvoke(Valve::VR::HmdColor_t color, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", color, callback, object));
}
// Autogenerated method: Valve.VR.IVRChaperone/_SetSceneColor.EndInvoke
void Valve::VR::IVRChaperone::_SetSceneColor::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
