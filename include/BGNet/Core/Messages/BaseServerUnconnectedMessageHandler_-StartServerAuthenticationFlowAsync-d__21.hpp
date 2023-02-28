// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseServerUnconnectedMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: EncryptionUtility
#include "GlobalNamespace/EncryptionUtility.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ClientKeyExchangeRequest
  class ClientKeyExchangeRequest;
  // Forward declaring type: IUnconnectedAuthenticateRequest
  class IUnconnectedAuthenticateRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21, "BGNet.Core.Messages", "BaseServerUnconnectedMessageHandler/<StartServerAuthenticationFlowAsync>d__21");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // WARNING Size may be invalid!
  // Autogenerated type: BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<StartServerAuthenticationFlowAsync>d__21
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder;
    // public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*) == 0x8);
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> clientRandom;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public System.UInt32 protocolVersion
    // Size: 0x4
    // Offset: 0x30
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x38
    ::System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public System.UInt32 certificateResponseId
    // Size: 0x4
    // Offset: 0x40
    uint certificateResponseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 requestId
    // Size: 0x4
    // Offset: 0x44
    uint requestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Byte[] <serverRandom>5__2
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> $serverRandom$5__2;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private IDiffieHellmanKeyPair <serverKeys>5__3
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::IDiffieHellmanKeyPair* $serverKeys$5__3;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IDiffieHellmanKeyPair*) == 0x8);
    // private System.UInt32 <responseId>5__4
    // Size: 0x4
    // Offset: 0x58
    uint $responseId$5__4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private EncryptionUtility/IEncryptionState <encryptionState>5__5
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::EncryptionUtility::IEncryptionState* $encryptionState$5__5;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EncryptionUtility::IEncryptionState*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x68
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.Messages.ClientKeyExchangeRequest> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x70
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__3
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__3;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.Messages.IUnconnectedAuthenticateRequest> <>u__4
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> $$u__4;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__5
    // Size: 0x8
    // Offset: 0x88
    ::System::Runtime::CompilerServices::TaskAwaiter $$u__5;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    public:
    // Creating value type constructor for type: $StartServerAuthenticationFlowAsync$d__21
    constexpr $StartServerAuthenticationFlowAsync$d__21(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder $$t__builder_ = {}, ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler* $$4__this_ = {}, ::ArrayW<uint8_t> clientRandom_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint protocolVersion_ = {}, ::System::Net::IPEndPoint* endPoint_ = {}, uint certificateResponseId_ = {}, uint requestId_ = {}, ::ArrayW<uint8_t> $serverRandom$5__2_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), ::GlobalNamespace::IDiffieHellmanKeyPair* $serverKeys$5__3_ = {}, uint $responseId$5__4_ = {}, ::GlobalNamespace::EncryptionUtility::IEncryptionState* $encryptionState$5__5_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>> $$u__1_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*> $$u__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*> $$u__3_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*> $$u__4_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter $$u__5_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, clientRandom{clientRandom_}, protocolVersion{protocolVersion_}, endPoint{endPoint_}, certificateResponseId{certificateResponseId_}, requestId{requestId_}, $serverRandom$5__2{$serverRandom$5__2_}, $serverKeys$5__3{$serverKeys$5__3_}, $responseId$5__4{$responseId$5__4_}, $encryptionState$5__5{$encryptionState$5__5_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_}, $$u__4{$$u__4_}, $$u__5{$$u__5_} {}
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
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& dyn_$$t__builder();
    // Get instance field reference: public BGNet.Core.Messages.BaseServerUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseServerUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] clientRandom
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_clientRandom();
    // Get instance field reference: public System.UInt32 protocolVersion
    [[deprecated("Use field access instead!")]] uint& dyn_protocolVersion();
    // Get instance field reference: public System.Net.IPEndPoint endPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_endPoint();
    // Get instance field reference: public System.UInt32 certificateResponseId
    [[deprecated("Use field access instead!")]] uint& dyn_certificateResponseId();
    // Get instance field reference: public System.UInt32 requestId
    [[deprecated("Use field access instead!")]] uint& dyn_requestId();
    // Get instance field reference: private System.Byte[] <serverRandom>5__2
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$serverRandom$5__2();
    // Get instance field reference: private IDiffieHellmanKeyPair <serverKeys>5__3
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IDiffieHellmanKeyPair*& dyn_$serverKeys$5__3();
    // Get instance field reference: private System.UInt32 <responseId>5__4
    [[deprecated("Use field access instead!")]] uint& dyn_$responseId$5__4();
    // Get instance field reference: private EncryptionUtility/IEncryptionState <encryptionState>5__5
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EncryptionUtility::IEncryptionState*& dyn_$encryptionState$5__5();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Byte[]> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t>>& dyn_$$u__1();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.Messages.ClientKeyExchangeRequest> <>u__2
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::ClientKeyExchangeRequest*>& dyn_$$u__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<EncryptionUtility/IEncryptionState> <>u__3
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility::IEncryptionState*>& dyn_$$u__3();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<BGNet.Core.Messages.IUnconnectedAuthenticateRequest> <>u__4
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>& dyn_$$u__4();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter <>u__5
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter& dyn_$$u__5();
    // private System.Void MoveNext()
    // Offset: 0x160F98C
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x1610828
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BGNet.Core.Messages.BaseServerUnconnectedMessageHandler/BGNet.Core.Messages.<StartServerAuthenticationFlowAsync>d__21
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::*)()>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseServerUnconnectedMessageHandler::$StartServerAuthenticationFlowAsync$d__21), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
