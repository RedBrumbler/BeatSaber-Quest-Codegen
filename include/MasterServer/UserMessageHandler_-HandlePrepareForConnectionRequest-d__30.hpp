// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: PrepareForConnectionRequest
  class PrepareForConnectionRequest;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.UserMessageHandler/<HandlePrepareForConnectionRequest>d__30
  // [CompilerGeneratedAttribute] Offset: DF0860
  struct UserMessageHandler::$HandlePrepareForConnectionRequest$d__30/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // public MasterServer.UserMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x28
    MasterServer::UserMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::UserMessageHandler*) == 0x8);
    // public MasterServer.PrepareForConnectionRequest packet
    // Size: 0x8
    // Offset: 0x30
    MasterServer::PrepareForConnectionRequest* packet;
    // Field size check
    static_assert(sizeof(MasterServer::PrepareForConnectionRequest*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<IDiffieHellmanKeyPair> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__2;
    // Creating value type constructor for type: $HandlePrepareForConnectionRequest$d__30
    constexpr $HandlePrepareForConnectionRequest$d__30(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, MasterServer::UserMessageHandler* $$4__this_ = {}, MasterServer::PrepareForConnectionRequest* packet_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::IDiffieHellmanKeyPair*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<uint8_t>*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, packet{packet_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE8890
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE8898
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // MasterServer.UserMessageHandler/<HandlePrepareForConnectionRequest>d__30
  // WARNING Not writing size check since size may be invalid!
  // Writing MetadataGetter for method: UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::MoveNext
  // Il2CppName: MoveNext
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::*)()>(&UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::MoveNext)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UserMessageHandler::$HandlePrepareForConnectionRequest$d__30), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::SetStateMachine
  // Il2CppName: SetStateMachine
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::*)(System::Runtime::CompilerServices::IAsyncStateMachine*)>(&UserMessageHandler::$HandlePrepareForConnectionRequest$d__30::SetStateMachine)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(UserMessageHandler::$HandlePrepareForConnectionRequest$d__30), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Runtime::CompilerServices::IAsyncStateMachine*>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::UserMessageHandler::$HandlePrepareForConnectionRequest$d__30, "MasterServer", "UserMessageHandler/<HandlePrepareForConnectionRequest>d__30");
