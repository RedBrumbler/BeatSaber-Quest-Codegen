// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.EventInfo/AddEventAdapter
#include "System/Reflection/EventInfo_AddEventAdapter.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.EventInfo/AddEventAdapter..ctor
System::Reflection::EventInfo::AddEventAdapter* System::Reflection::EventInfo::AddEventAdapter::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (EventInfo::AddEventAdapter*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "EventInfo/AddEventAdapter", object, method));
}
// Autogenerated method: System.Reflection.EventInfo/AddEventAdapter.Invoke
void System::Reflection::EventInfo::AddEventAdapter::Invoke(::Il2CppObject* _this, System::Delegate* dele) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", _this, dele));
}
// Autogenerated method: System.Reflection.EventInfo/AddEventAdapter.BeginInvoke
System::IAsyncResult* System::Reflection::EventInfo::AddEventAdapter::BeginInvoke(::Il2CppObject* _this, System::Delegate* dele, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", _this, dele, callback, object));
}
// Autogenerated method: System.Reflection.EventInfo/AddEventAdapter.EndInvoke
void System::Reflection::EventInfo::AddEventAdapter::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}