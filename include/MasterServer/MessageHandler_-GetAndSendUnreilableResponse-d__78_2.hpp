// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerUnreliableMessage
  class IMasterServerUnreliableMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2, "MasterServer", "MessageHandler/<GetAndSendUnreilableResponse>d__78`2");
// Type namespace: MasterServer
namespace MasterServer {
  // WARNING Size may be invalid!
  // Autogenerated type: MasterServer.MessageHandler/MasterServer.<GetAndSendUnreilableResponse>d__78`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TRequest, typename TResponse>
  struct MessageHandler::$GetAndSendUnreilableResponse$d__78_2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
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
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public System.Func`3<TRequest,MasterServer.MessageHandler/MasterServer.MessageOrigin,System.Threading.Tasks.Task`1<TResponse>> tryGetResponse
    // Size: 0x8
    // Offset: 0x0
    System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse;
    // Field size check
    static_assert(sizeof(System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>*) == 0x8);
    // public TRequest request
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TRequest request;
    // public MasterServer.MessageHandler/MasterServer.MessageOrigin origin
    // Size: 0xC
    // Offset: 0x0
    MasterServer::MessageHandler::MessageOrigin origin;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler::MessageOrigin) == 0xC);
    // public System.Func`1<TResponse> getFailureResponse
    // Size: 0x8
    // Offset: 0x0
    System::Func_1<TResponse>* getFailureResponse;
    // Field size check
    static_assert(sizeof(System::Func_1<TResponse>*) == 0x8);
    // public MasterServer.MessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x0
    MasterServer::MessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::MessageHandler*) == 0x8);
    // private TResponse <response>5__2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    TResponse $response$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<TResponse> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> $$u__1;
    public:
    // Creating value type constructor for type: $GetAndSendUnreilableResponse$d__78_2
    constexpr $GetAndSendUnreilableResponse$d__78_2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>* tryGetResponse_ = {}, TRequest request_ = {}, MasterServer::MessageHandler::MessageOrigin origin_ = {}, System::Func_1<TResponse>* getFailureResponse_ = {}, MasterServer::MessageHandler* $$4__this_ = {}, TResponse $response$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<TResponse> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, tryGetResponse{tryGetResponse_}, request{request_}, origin{origin_}, getFailureResponse{getFailureResponse_}, $$4__this{$$4__this_}, $response$5__2{$response$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 <>1__state
    int& dyn_$$1__state() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_$$1__state");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>1__state"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder& dyn_$$t__builder() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_$$t__builder");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>t__builder"))->offset;
      return *reinterpret_cast<System::Runtime::CompilerServices::AsyncVoidMethodBuilder*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`3<TRequest,MasterServer.MessageHandler/MasterServer.MessageOrigin,System.Threading.Tasks.Task`1<TResponse>> tryGetResponse
    System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>*& dyn_tryGetResponse() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_tryGetResponse");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "tryGetResponse"))->offset;
      return *reinterpret_cast<System::Func_3<TRequest, MasterServer::MessageHandler::MessageOrigin, System::Threading::Tasks::Task_1<TResponse>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public TRequest request
    TRequest& dyn_request() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_request");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "request"))->offset;
      return *reinterpret_cast<TRequest*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.MessageHandler/MasterServer.MessageOrigin origin
    MasterServer::MessageHandler::MessageOrigin& dyn_origin() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_origin");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "origin"))->offset;
      return *reinterpret_cast<MasterServer::MessageHandler::MessageOrigin*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`1<TResponse> getFailureResponse
    System::Func_1<TResponse>*& dyn_getFailureResponse() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_getFailureResponse");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "getFailureResponse"))->offset;
      return *reinterpret_cast<System::Func_1<TResponse>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public MasterServer.MessageHandler <>4__this
    MasterServer::MessageHandler*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_$$4__this");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<MasterServer::MessageHandler**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private TResponse <response>5__2
    TResponse& dyn_$response$5__2() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_$response$5__2");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<response>5__2"))->offset;
      return *reinterpret_cast<TResponse*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Runtime.CompilerServices.TaskAwaiter`1<TResponse> <>u__1
    System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>& dyn_$$u__1() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::dyn_$$u__1");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>u__1"))->offset;
      return *reinterpret_cast<System::Runtime::CompilerServices::TaskAwaiter_1<TResponse>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    void MoveNext() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::MoveNext");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::$GetAndSendUnreilableResponse$d__78_2::SetStateMachine");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, stateMachine);
    }
  }; // MasterServer.MessageHandler/MasterServer.<GetAndSendUnreilableResponse>d__78`2
  // Could not write size check! Type: MasterServer.MessageHandler/MasterServer.<GetAndSendUnreilableResponse>d__78`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
