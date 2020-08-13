// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications/_CreateNotification
#include "Valve/VR/IVRNotifications__CreateNotification.hpp"
// Including type: Valve.VR.EVRNotificationError
#include "Valve/VR/EVRNotificationError.hpp"
// Including type: Valve.VR.EVRNotificationType
#include "Valve/VR/EVRNotificationType.hpp"
// Including type: Valve.VR.EVRNotificationStyle
#include "Valve/VR/EVRNotificationStyle.hpp"
// Including type: Valve.VR.NotificationBitmap_t
#include "Valve/VR/NotificationBitmap_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Valve.VR.IVRNotifications/_CreateNotification..ctor
Valve::VR::IVRNotifications::_CreateNotification* Valve::VR::IVRNotifications::_CreateNotification::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRNotifications::_CreateNotification*)THROW_UNLESS(il2cpp_utils::New("Valve.VR", "IVRNotifications/_CreateNotification", object, method));
}
// Autogenerated method: Valve.VR.IVRNotifications/_CreateNotification.Invoke
Valve::VR::EVRNotificationError Valve::VR::IVRNotifications::_CreateNotification::Invoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::CsString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRNotificationError>(this, "Invoke", ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId));
}
// Autogenerated method: Valve.VR.IVRNotifications/_CreateNotification.BeginInvoke
System::IAsyncResult* Valve::VR::IVRNotifications::_CreateNotification::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::CsString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object));
}
// Autogenerated method: Valve.VR.IVRNotifications/_CreateNotification.EndInvoke
Valve::VR::EVRNotificationError Valve::VR::IVRNotifications::_CreateNotification::EndInvoke(Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId, System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Valve::VR::EVRNotificationError>(this, "EndInvoke", pImage, pNotificationId, result));
}
