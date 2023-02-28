// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1);
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<>c__DisplayClass10_1");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> taskComplitionSource
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::TaskCompletionSource_1<bool>* taskComplitionSource;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // public OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> taskComplitionSource
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& dyn_taskComplitionSource();
    // Get instance field reference: public OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_0 CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*& dyn_CS$$$8__locals1();
    // public System.Void .ctor()
    // Offset: 0x1388624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*, creationType>()));
    }
    // System.Void <SendWebRequestAsync>b__0(UnityEngine.AsyncOperation asyncOperation2)
    // Offset: 0x138862C
    void $SendWebRequestAsync$b__0(::UnityEngine::AsyncOperation* asyncOperation2);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<>c__DisplayClass10_1
  #pragma pack(pop)
  static check_size<sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1), 24 + sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_0*)> __OnlineServices_API_HTTPLeaderboardsOathHelper_$$c__DisplayClass10_1SizeCheck;
  static_assert(sizeof(HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1::$SendWebRequestAsync$b__0
// Il2CppName: <SendWebRequestAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1::*)(::UnityEngine::AsyncOperation*)>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1::$SendWebRequestAsync$b__0)> {
  static const MethodInfo* get() {
    static auto* asyncOperation2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$$c__DisplayClass10_1*), "<SendWebRequestAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOperation2});
  }
};
