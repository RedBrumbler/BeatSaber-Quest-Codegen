// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelListTableCell
#include "GlobalNamespace/LevelListTableCell.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: AdditionalContentModel because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22, "", "LevelListTableCell/<RefreshAvailabilityAsync>d__22");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LevelListTableCell/<RefreshAvailabilityAsync>d__22
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct LevelListTableCell::$RefreshAvailabilityAsync$d__22/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public LevelListTableCell <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::LevelListTableCell* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelListTableCell*) == 0x8);
    // public System.String levelID
    // Size: 0x8
    // Offset: 0x30
    ::StringW levelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public AdditionalContentModel contentModel
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::AdditionalContentModel* contentModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AdditionalContentModel*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    public:
    // Creating value type constructor for type: $RefreshAvailabilityAsync$d__22
    constexpr $RefreshAvailabilityAsync$d__22(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::LevelListTableCell* $$4__this_ = {}, ::StringW levelID_ = {}, ::GlobalNamespace::AdditionalContentModel* contentModel_ = {}, ::System::Threading::CancellationToken $cancellationToken$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelID{levelID_}, contentModel{contentModel_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public LevelListTableCell <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelListTableCell*& dyn_$$4__this();
    // Get instance field reference: public System.String levelID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_levelID();
    // Get instance field reference: public AdditionalContentModel contentModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AdditionalContentModel*& dyn_contentModel();
    // Get instance field reference: private System.Threading.CancellationToken <cancellationToken>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_$cancellationToken$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1515258
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x15155DC
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LevelListTableCell/<RefreshAvailabilityAsync>d__22
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::*)()>(&GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelListTableCell::$RefreshAvailabilityAsync$d__22), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
