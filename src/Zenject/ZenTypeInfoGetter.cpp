// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ZenTypeInfoGetter
#include "Zenject/ZenTypeInfoGetter.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.ZenTypeInfoGetter..ctor
Zenject::ZenTypeInfoGetter* Zenject::ZenTypeInfoGetter::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (ZenTypeInfoGetter*)THROW_UNLESS(il2cpp_utils::New("Zenject", "ZenTypeInfoGetter", object, method));
}
// Autogenerated method: Zenject.ZenTypeInfoGetter.Invoke
Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::Invoke() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::InjectTypeInfo*>(this, "Invoke"));
}
// Autogenerated method: Zenject.ZenTypeInfoGetter.BeginInvoke
System::IAsyncResult* Zenject::ZenTypeInfoGetter::BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: Zenject.ZenTypeInfoGetter.EndInvoke
Zenject::InjectTypeInfo* Zenject::ZenTypeInfoGetter::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::InjectTypeInfo*>(this, "EndInvoke", result));
}