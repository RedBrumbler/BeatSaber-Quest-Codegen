// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
#include "UnityEngine/UI/ReflectionMethodsCache_RaycastAllCallback.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback..ctor
UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback* UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (ReflectionMethodsCache::RaycastAllCallback*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback", object, method));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback.Invoke
::Array<UnityEngine::RaycastHit>* UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::Invoke(UnityEngine::Ray r, float f, int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit>*>(this, "Invoke", r, f, i));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback.BeginInvoke
System::IAsyncResult* UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", r, f, i, callback, object));
}
// Autogenerated method: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback.EndInvoke
::Array<UnityEngine::RaycastHit>* UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::RaycastHit>*>(this, "EndInvoke", result));
}