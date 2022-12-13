// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
#include "BGNet/Core/Messages/BaseClientUnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0*, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler/<>c__DisplayClass32_0");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass32_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0 : public ::Il2CppObject {
    public:
    public:
    // public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*) == 0x8);
    // public System.Byte[] serverPublicKey
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> serverPublicKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public BGNet.Core.Messages.BaseClientUnconnectedMessageHandler <>4__this
    [[deprecated("Use field access instead!")]] ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Byte[] serverPublicKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serverPublicKey();
    // public System.Void .ctor()
    // Offset: 0x15E8E9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0*, creationType>()));
    }
    // System.Threading.Tasks.Task`1<BGNet.Core.Messages.HelloVerifyRequest> <AuthenticateWithServerAsyncInternal>b__0(System.UInt32 protocolVersion, System.Net.IPEndPoint ep, BGNet.Core.Messages.IUnconnectedReliableRequest request, System.Threading.CancellationToken ct)
    // Offset: 0x15E8EA4
    ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::HelloVerifyRequest*>* $AuthenticateWithServerAsyncInternal$b__0(uint protocolVersion, ::System::Net::IPEndPoint* ep, ::BGNet::Core::Messages::IUnconnectedReliableRequest* request, ::System::Threading::CancellationToken ct);
    // System.Threading.Tasks.Task`1<System.Byte[]> <AuthenticateWithServerAsyncInternal>b__1(System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> result)
    // Offset: 0x15E8F5C
    ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* $AuthenticateWithServerAsyncInternal$b__1(::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>* result);
  }; // BGNet.Core.Messages.BaseClientUnconnectedMessageHandler/BGNet.Core.Messages.<>c__DisplayClass32_0
  #pragma pack(pop)
  static check_size<sizeof(BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0), 24 + sizeof(::ArrayW<uint8_t>)> __BGNet_Core_Messages_BaseClientUnconnectedMessageHandler_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::$AuthenticateWithServerAsyncInternal$b__0
// Il2CppName: <AuthenticateWithServerAsyncInternal>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::HelloVerifyRequest*>* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::*)(uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::$AuthenticateWithServerAsyncInternal$b__0)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ep = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    static auto* ct = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0*), "<AuthenticateWithServerAsyncInternal>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, ep, request, ct});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::$AuthenticateWithServerAsyncInternal$b__1
// Il2CppName: <AuthenticateWithServerAsyncInternal>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::IDiffieHellmanKeyPair*>*)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0::$AuthenticateWithServerAsyncInternal$b__1)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IDiffieHellmanKeyPair")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0*), "<AuthenticateWithServerAsyncInternal>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
