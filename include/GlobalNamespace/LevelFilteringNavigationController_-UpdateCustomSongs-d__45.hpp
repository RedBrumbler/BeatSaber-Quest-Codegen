// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: LevelFilteringNavigationController
#include "GlobalNamespace/LevelFilteringNavigationController.hpp"
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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPackCollection
  class IBeatmapLevelPackCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LevelFilteringNavigationController/<UpdateCustomSongs>d__45
  // [CompilerGeneratedAttribute] Offset: E127B8
  struct LevelFilteringNavigationController::$UpdateCustomSongs$d__45/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public LevelFilteringNavigationController <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::LevelFilteringNavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelFilteringNavigationController*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IBeatmapLevelPackCollection> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$u__1;
    // Creating value type constructor for type: $UpdateCustomSongs$d__45
    constexpr $UpdateCustomSongs$d__45(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, GlobalNamespace::LevelFilteringNavigationController* $$4__this_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IBeatmapLevelPackCollection*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE6620
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE6628
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // LevelFilteringNavigationController/<UpdateCustomSongs>d__45
  // WARNING Not writing size check since size may be invalid!
  // Writing MetadataGetter for method: LevelFilteringNavigationController::$UpdateCustomSongs$d__45::MoveNext
  // Il2CppName: MoveNext
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LevelFilteringNavigationController::$UpdateCustomSongs$d__45::*)()>(&LevelFilteringNavigationController::$UpdateCustomSongs$d__45::MoveNext)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LevelFilteringNavigationController::$UpdateCustomSongs$d__45), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: LevelFilteringNavigationController::$UpdateCustomSongs$d__45::SetStateMachine
  // Il2CppName: SetStateMachine
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LevelFilteringNavigationController::$UpdateCustomSongs$d__45::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&LevelFilteringNavigationController::$UpdateCustomSongs$d__45::SetStateMachine)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LevelFilteringNavigationController::$UpdateCustomSongs$d__45), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelFilteringNavigationController::$UpdateCustomSongs$d__45, "", "LevelFilteringNavigationController/<UpdateCustomSongs>d__45");
