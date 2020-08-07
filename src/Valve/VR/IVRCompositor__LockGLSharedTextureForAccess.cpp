// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess
#include "Valve/VR/IVRCompositor__LockGLSharedTextureForAccess.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess..ctor
Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess* Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVRCompositor::_LockGLSharedTextureForAccess*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRCompositor/_LockGLSharedTextureForAccess", object, method));
}
// Autogenerated method: Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess.Invoke
void Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess::Invoke(System::IntPtr glSharedTextureHandle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", glSharedTextureHandle));
}
// Autogenerated method: Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess.BeginInvoke
System::IAsyncResult* Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess::BeginInvoke(System::IntPtr glSharedTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", glSharedTextureHandle, callback, object));
}
// Autogenerated method: Valve.VR.IVRCompositor/_LockGLSharedTextureForAccess.EndInvoke
void Valve::VR::IVRCompositor::_LockGLSharedTextureForAccess::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}