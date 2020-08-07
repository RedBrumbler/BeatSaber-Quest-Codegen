// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay/_ShowKeyboard
#include "Valve/VR/IVROverlay__ShowKeyboard.hpp"
// Including type: Valve.VR.EVROverlayError
#include "Valve/VR/EVROverlayError.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVROverlay/_ShowKeyboard..ctor
Valve::VR::IVROverlay::_ShowKeyboard* Valve::VR::IVROverlay::_ShowKeyboard::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (IVROverlay::_ShowKeyboard*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVROverlay/_ShowKeyboard", object, method));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowKeyboard.Invoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_ShowKeyboard::Invoke(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "Invoke", eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowKeyboard.BeginInvoke
System::IAsyncResult* Valve::VR::IVROverlay::_ShowKeyboard::BeginInvoke(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode, uUserValue, callback, object));
}
// Autogenerated method: Valve.VR.IVROverlay/_ShowKeyboard.EndInvoke
Valve::VR::EVROverlayError Valve::VR::IVROverlay::_ShowKeyboard::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVROverlayError>(this, "EndInvoke", result));
}