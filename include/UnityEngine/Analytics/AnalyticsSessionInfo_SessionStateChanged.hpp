// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo
#include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionState
  struct AnalyticsSessionState;
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
NEED_NO_BOX(::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/SessionStateChanged");
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.SessionStateChanged
  // [TokenAttribute] Offset: FFFFFFFF
  class AnalyticsSessionInfo::SessionStateChanged : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2BB2B08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnalyticsSessionInfo::SessionStateChanged* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnalyticsSessionInfo::SessionStateChanged*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged)
    // Offset: 0x2BB23F8
    void Invoke(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2BB2B18
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2BB2C00
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Analytics.AnalyticsSessionInfo/UnityEngine.Analytics.SessionStateChanged
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::Invoke)> {
  static const MethodInfo* get() {
    static auto* sessionState = &::il2cpp_utils::GetClassFromName("UnityEngine.Analytics", "AnalyticsSessionState")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionElapsedTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionState, sessionId, sessionElapsedTime, sessionChanged});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sessionState = &::il2cpp_utils::GetClassFromName("UnityEngine.Analytics", "AnalyticsSessionState")->byval_arg;
    static auto* sessionId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionElapsedTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* sessionChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sessionState, sessionId, sessionElapsedTime, sessionChanged, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::*)(::System::IAsyncResult*)>(&UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
