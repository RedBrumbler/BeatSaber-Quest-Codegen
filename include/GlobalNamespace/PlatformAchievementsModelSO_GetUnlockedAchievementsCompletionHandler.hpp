// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler
  class PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetUnlockedAchievementsCompletionHandler
    GetUnlockedAchievementsCompletionHandler() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x105005C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] unlockedAchievementsIds)
    // Offset: 0x104FDC4
    void Invoke(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::Array<::Il2CppString*>* unlockedAchievementsIds);
    // public System.IAsyncResult BeginInvoke(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] unlockedAchievementsIds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x105006C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::Array<::Il2CppString*>* unlockedAchievementsIds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1050104
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*, "", "PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler");
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::*)(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult, ::Array<::Il2CppString*>*)>(&GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::Invoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsResult")->byval_arg;
    static auto* unlockedAchievementsIds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, unlockedAchievementsIds});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::*)(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult, ::Array<::Il2CppString*>*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("", "PlatformAchievementsModelSO/GetUnlockedAchievementsResult")->byval_arg;
    static auto* unlockedAchievementsIds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, unlockedAchievementsIds, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::*)(System::IAsyncResult*)>(&GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
