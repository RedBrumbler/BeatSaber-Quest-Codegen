// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.StandalonePlatform
#include "Oculus/Platform/StandalonePlatform.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::StandalonePlatform::UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatform::UnityLogDelegate*, "Oculus.Platform", "StandalonePlatform/UnityLogDelegate");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.StandalonePlatform/Oculus.Platform.UnityLogDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 110CD1C
  class StandalonePlatform::UnityLogDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2B1CE38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandalonePlatform::UnityLogDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::StandalonePlatform::UnityLogDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandalonePlatform::UnityLogDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IntPtr tag, System.IntPtr msg)
    // Offset: 0x2B1CE48
    void Invoke(::System::IntPtr tag, ::System::IntPtr msg);
    // public System.IAsyncResult BeginInvoke(System.IntPtr tag, System.IntPtr msg, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2B1D0C4
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr tag, ::System::IntPtr msg, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2B1D164
    void EndInvoke(::System::IAsyncResult* result);
  }; // Oculus.Platform.StandalonePlatform/Oculus.Platform.UnityLogDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::UnityLogDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::UnityLogDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::StandalonePlatform::UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr)>(&Oculus::Platform::StandalonePlatform::UnityLogDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatform::UnityLogDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, msg});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::UnityLogDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Oculus::Platform::StandalonePlatform::UnityLogDelegate::*)(::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&Oculus::Platform::StandalonePlatform::UnityLogDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatform::UnityLogDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, msg, callback, object});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatform::UnityLogDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::StandalonePlatform::UnityLogDelegate::*)(::System::IAsyncResult*)>(&Oculus::Platform::StandalonePlatform::UnityLogDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatform::UnityLogDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
