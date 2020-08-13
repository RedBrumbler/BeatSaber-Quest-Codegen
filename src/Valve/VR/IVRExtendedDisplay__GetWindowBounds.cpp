// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay/_GetWindowBounds
#include "Valve/VR/IVRExtendedDisplay__GetWindowBounds.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetWindowBounds..ctor
Valve::VR::IVRExtendedDisplay::_GetWindowBounds* Valve::VR::IVRExtendedDisplay::_GetWindowBounds::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRExtendedDisplay::_GetWindowBounds*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRExtendedDisplay/_GetWindowBounds", object, method));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetWindowBounds.Invoke
void Valve::VR::IVRExtendedDisplay::_GetWindowBounds::Invoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", pnX, pnY, pnWidth, pnHeight));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetWindowBounds.BeginInvoke
System::IAsyncResult* Valve::VR::IVRExtendedDisplay::_GetWindowBounds::BeginInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", pnX, pnY, pnWidth, pnHeight, callback, object));
}
// Autogenerated method: Valve.VR.IVRExtendedDisplay/_GetWindowBounds.EndInvoke
void Valve::VR::IVRExtendedDisplay::_GetWindowBounds::EndInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", pnX, pnY, pnWidth, pnHeight, result));
}
