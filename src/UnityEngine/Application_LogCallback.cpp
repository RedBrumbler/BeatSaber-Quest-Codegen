// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Application/LogCallback
#include "UnityEngine/Application_LogCallback.hpp"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Application/LogCallback..ctor
UnityEngine::Application::LogCallback* UnityEngine::Application::LogCallback::New_ctor(::CsObject* object, System::IntPtr method) {
  return (Application::LogCallback*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Application/LogCallback", object, method));
}
// Autogenerated method: UnityEngine.Application/LogCallback.Invoke
void UnityEngine::Application::LogCallback::Invoke(::CsString* condition, ::CsString* stackTrace, UnityEngine::LogType type) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", condition, stackTrace, type));
}
// Autogenerated method: UnityEngine.Application/LogCallback.BeginInvoke
System::IAsyncResult* UnityEngine::Application::LogCallback::BeginInvoke(::CsString* condition, ::CsString* stackTrace, UnityEngine::LogType type, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", condition, stackTrace, type, callback, object));
}
// Autogenerated method: UnityEngine.Application/LogCallback.EndInvoke
void UnityEngine::Application::LogCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
