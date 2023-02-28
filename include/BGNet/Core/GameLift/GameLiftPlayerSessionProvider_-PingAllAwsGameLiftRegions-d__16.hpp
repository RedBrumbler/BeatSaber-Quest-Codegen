// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider
#include "BGNet/Core/GameLift/GameLiftPlayerSessionProvider.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.ValueTuple`2
#include "System/ValueTuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16, "BGNet.Core.GameLift", "GameLiftPlayerSessionProvider/<PingAllAwsGameLiftRegions>d__16");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<PingAllAwsGameLiftRegions>d__16
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public BGNet.Core.GameLift.GameLiftPlayerSessionProvider <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*) == 0x8);
    // [TupleElementNamesAttribute] Offset: 0x110511C
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.ValueTuple`2<System.String,System.Int64>[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x30
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>>> $$u__1;
    public:
    // Creating value type constructor for type: $PingAllAwsGameLiftRegions$d__16
    constexpr $PingAllAwsGameLiftRegions$d__16(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider* $$4__this_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>>> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public BGNet.Core.GameLift.GameLiftPlayerSessionProvider <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::GameLift::GameLiftPlayerSessionProvider*& dyn_$$4__this();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.ValueTuple`2<System.String,System.Int64>[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::System::ValueTuple_2<::StringW, int64_t>>>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x16075C0
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x16078C8
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.GameLift.GameLiftPlayerSessionProvider/BGNet.Core.GameLift.<PingAllAwsGameLiftRegions>d__16
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::*)()>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::GameLift::GameLiftPlayerSessionProvider::$PingAllAwsGameLiftRegions$d__16), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
