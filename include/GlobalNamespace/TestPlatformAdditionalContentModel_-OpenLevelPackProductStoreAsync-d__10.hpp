// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/OpenProductStoreResult
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10, "", "TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder;
    // public System.Threading.CancellationToken token
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::CancellationToken token;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // public System.String levelPackId
    // Size: 0x8
    // Offset: 0x28
    ::StringW levelPackId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter <>u__1
    // Size: 0x1
    // Offset: 0x30
    ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter) == 0x1);
    public:
    // Creating value type constructor for type: $OpenLevelPackProductStoreAsync$d__10
    constexpr $OpenLevelPackProductStoreAsync$d__10(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult> $$t__builder_ = {}, ::System::Threading::CancellationToken token_ = {}, ::StringW levelPackId_ = {}, ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, token{token_}, levelPackId{levelPackId_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/OpenProductStoreResult> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>& dyn_$$t__builder();
    // Get instance field reference: public System.Threading.CancellationToken token
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_token();
    // Get instance field reference: public System.String levelPackId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_levelPackId();
    // Get instance field reference: private System.Runtime.CompilerServices.YieldAwaitable/System.Runtime.CompilerServices.YieldAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x13C1F08
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13C211C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::*)()>(&GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestPlatformAdditionalContentModel::$OpenLevelPackProductStoreAsync$d__10), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
