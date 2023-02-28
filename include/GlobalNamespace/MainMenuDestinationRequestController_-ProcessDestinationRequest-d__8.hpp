// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainMenuDestinationRequestController
#include "GlobalNamespace/MainMenuDestinationRequestController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8, "", "MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$t__builder
    char __padding0[0x4] = {};
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public MenuDestination menuDestination
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MenuDestination* menuDestination;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuDestination*) == 0x8);
    // public MainMenuDestinationRequestController <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MainMenuDestinationRequestController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainMenuDestinationRequestController*) == 0x8);
    // private MainMenuDestinationRequestController/<>c__DisplayClass8_0 <>8__1
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0* $$8__1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x48
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $ProcessDestinationRequest$d__8
    constexpr $ProcessDestinationRequest$d__8(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::GlobalNamespace::MenuDestination* menuDestination_ = {}, ::GlobalNamespace::MainMenuDestinationRequestController* $$4__this_ = {}, ::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0* $$8__1_ = {}, ::System::Threading::CancellationToken $cancellationToken$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, menuDestination{menuDestination_}, $$4__this{$$4__this_}, $$8__1{$$8__1_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public MenuDestination menuDestination
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuDestination*& dyn_menuDestination();
    // Get instance field reference: public MainMenuDestinationRequestController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainMenuDestinationRequestController*& dyn_$$4__this();
    // Get instance field reference: private MainMenuDestinationRequestController/<>c__DisplayClass8_0 <>8__1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainMenuDestinationRequestController::$$c__DisplayClass8_0*& dyn_$$8__1();
    // Get instance field reference: private System.Threading.CancellationToken <cancellationToken>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_$cancellationToken$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x1373DC0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x13742A0
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8
  #pragma pack(pop)
  static check_size<sizeof(MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8), 72 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __GlobalNamespace_MainMenuDestinationRequestController_$ProcessDestinationRequest$d__8SizeCheck;
  static_assert(sizeof(MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::*)()>(&GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainMenuDestinationRequestController::$ProcessDestinationRequest$d__8), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
