// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseClientUnconnectedMessageHandler.hpp"
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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<SendOrderedAuthenticatedRequest>d__21");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<SendOrderedAuthenticatedRequest>d__21
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*) == 0x8);
    // public System.String queue
    // Size: 0x8
    // Offset: 0x30
    ::StringW queue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BGNet.Core.Messages.IUnconnectedReliableRequest message
    // Size: 0x8
    // Offset: 0x38
    ::BGNet::Core::Messages::IUnconnectedReliableRequest* message;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::IUnconnectedReliableRequest*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x40
    ::System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(::System::Threading::CancellationToken) == 0x8);
    // private System.Threading.Tasks.Task <task>5__2
    // Size: 0x8
    // Offset: 0x48
    ::System::Threading::Tasks::Task* $task$5__2;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $SendOrderedAuthenticatedRequest$d__21
    constexpr $SendOrderedAuthenticatedRequest$d__21(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this_ = {}, ::StringW queue_ = {}, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message_ = {}, ::System::Threading::CancellationToken cancellationToken_ = {}, ::System::Threading::Tasks::Task* $task$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, queue{queue_}, message{message_}, cancellationToken{cancellationToken_}, $task$5__2{$task$5__2_}, $$u__1{$$u__1_} {}
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
    // Get instance field reference: public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.String queue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_queue();
    // Get instance field reference: public BGNet.Core.Messages.IUnconnectedReliableRequest message
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::IUnconnectedReliableRequest*& dyn_message();
    // Get instance field reference: public System.Threading.CancellationToken cancellationToken
    [[deprecated("Use field access instead!")]] ::System::Threading::CancellationToken& dyn_cancellationToken();
    // Get instance field reference: private System.Threading.Tasks.Task <task>5__2
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_$task$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x160C58C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x160C838
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<SendOrderedAuthenticatedRequest>d__21
  #pragma pack(pop)
  static check_size<sizeof(BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21), 80 + sizeof(::System::Runtime::CompilerServices::TaskAwaiter)> __BGNet_Core_Messages_BaseClientUnconnectedMessageHandler_$SendOrderedAuthenticatedRequest$d__21SizeCheck;
  static_assert(sizeof(BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
