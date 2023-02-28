// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.GetRayIntersectionAllNonAllocCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F5B478
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(UnityEngine.Ray r, UnityEngine.RaycastHit2D[] results, System.Single f, System.Int32 i)
    // Offset: 0x1F5B488
    int Invoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D> results, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, UnityEngine.RaycastHit2D[] results, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F5B800
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Ray r, ::ArrayW<::UnityEngine::RaycastHit2D> results, float f, int i, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F5B8D8
    int EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.GetRayIntersectionAllNonAllocCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float, int)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, results, f, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, results, f, i, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::*)(::System::IAsyncResult*)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
