// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnlineServices.API.HTTPLeaderboardsOathHelper
#include "OnlineServices/API/HTTPLeaderboardsOathHelper.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5, "OnlineServices.API", "HTTPLeaderboardsOathHelper/<SendWebRequestWithOathAsync>d__5");
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<SendWebRequestWithOathAsync>d__5
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder;
    // public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this;
    // Field size check
    static_assert(sizeof(::OnlineServices::API::HTTPLeaderboardsOathHelper*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x28
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.String path
    // Size: 0x8
    // Offset: 0x30
    ::StringW path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Object objectToSendAsJson
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* objectToSendAsJson;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String method
    // Size: 0x8
    // Offset: 0x40
    ::StringW method;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <uri>5__2
    // Size: 0x8
    // Offset: 0x48
    ::StringW $uri$5__2;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <bodyData>5__3
    // Size: 0x8
    // Offset: 0x50
    ::StringW $bodyData$5__3;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x58
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x60
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__2;
    public:
    // Creating value type constructor for type: $SendWebRequestWithOathAsync$d__5
    constexpr $SendWebRequestWithOathAsync$d__5(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> $$t__builder_ = {}, ::OnlineServices::API::HTTPLeaderboardsOathHelper* $$4__this_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::StringW path_ = {}, ::Il2CppObject* objectToSendAsJson_ = {}, ::StringW method_ = {}, ::StringW $uri$5__2_ = {}, ::StringW $bodyData$5__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, path{path_}, objectToSendAsJson{objectToSendAsJson_}, method{method_}, $uri$5__2{$uri$5__2_}, $bodyData$5__3{$bodyData$5__3_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Creating interface conversion operator: i_IAsyncStateMachine
    inline ::System::Runtime::CompilerServices::IAsyncStateMachine* i_IAsyncStateMachine() noexcept {
      return reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>& dyn_$$t__builder();
    // Get instance field reference: public OnlineServices.API.HTTPLeaderboardsOathHelper <>4__this
    [[deprecated("Use field access instead!")]] ::OnlineServices::API::HTTPLeaderboardsOathHelper*& dyn_$$4__this();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: public System.String path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
    // Get instance field reference: public System.Object objectToSendAsJson
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_objectToSendAsJson();
    // Get instance field reference: public System.String method
    [[deprecated("Use field access instead!")]] ::StringW& dyn_method();
    // Get instance field reference: private System.String <uri>5__2
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$uri$5__2();
    // Get instance field reference: private System.String <bodyData>5__3
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$bodyData$5__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>& dyn_$$u__2();
    // private System.Void MoveNext()
    // Offset: 0x13898B4
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1389D70
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPLeaderboardsOathHelper/OnlineServices.API.<SendWebRequestWithOathAsync>d__5
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::*)()>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OnlineServices::API::HTTPLeaderboardsOathHelper::$SendWebRequestWithOathAsync$d__5), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
