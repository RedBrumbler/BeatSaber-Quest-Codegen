// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.UnconnectedMessageHandler
#include "BGNet/Core/Messages/UnconnectedMessageHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
  // Forward declaring type: IUnconnectedReliableRequest
  class IUnconnectedReliableRequest;
  // Forward declaring type: IUnconnectedReliableResponse
  class IUnconnectedReliableResponse;
  // Forward declaring type: IUnconnectedAuthenticateRequest
  class IUnconnectedAuthenticateRequest;
  // Forward declaring type: IUnconnectedMessage
  class IUnconnectedMessage;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
  // Forward declaring type: IUnconnectedMessageSender
  class IUnconnectedMessageSender;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: AuthenticationException
  class AuthenticationException;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: IAnalyticsManager
  class IAnalyticsManager;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: BaseClientUnconnectedMessageHandler
  class BaseClientUnconnectedMessageHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*, "BGNet.Core.Messages", "BaseClientUnconnectedMessageHandler");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseClientUnconnectedMessageHandler : public ::BGNet::Core::Messages::UnconnectedMessageHandler {
    public:
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequest$d__21
    struct $SendOrderedAuthenticatedRequest$d__21;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendOrderedAuthenticatedRequestAsync$d__22
    struct $SendOrderedAuthenticatedRequestAsync$d__22;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__23_1<T>
    template<typename T>
    struct $SendAuthenticatedRequestAsync$d__23_1;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$SendAuthenticatedRequestAsync$d__24
    struct $SendAuthenticatedRequestAsync$d__24;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailed$d__25
    struct $OnSendFailed$d__25;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$OnSendFailedAwaitResponse$d__26_1<T>
    template<typename T>
    struct $OnSendFailedAwaitResponse$d__26_1;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$ReauthenticateWithServer$d__27
    struct $ReauthenticateWithServer$d__27;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$AuthenticateWithServer$d__30
    struct $AuthenticateWithServer$d__30;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$AuthenticateWithServerAsyncInternalVerbose$d__31
    struct $AuthenticateWithServerAsyncInternalVerbose$d__31;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$AuthenticateWithServerAsyncInternal$d__32
    struct $AuthenticateWithServerAsyncInternal$d__32;
    // Nested type: ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    public:
    // private readonly DnsEndPoint _endPoint
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::DnsEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DnsEndPoint*) == 0x8);
    // private readonly ICertificateValidator _certificateValidator
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::ICertificateValidator* certificateValidator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ICertificateValidator*) == 0x8);
    // private System.Threading.Tasks.Task _authenticationTask
    // Size: 0x8
    // Offset: 0x90
    ::System::Threading::Tasks::Task* authenticationTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // private System.Security.Authentication.AuthenticationException _authenticationException
    // Size: 0x8
    // Offset: 0x98
    ::System::Security::Authentication::AuthenticationException* authenticationException;
    // Field size check
    static_assert(sizeof(::System::Security::Authentication::AuthenticationException*) == 0x8);
    // private System.Boolean _disposed
    // Size: 0x1
    // Offset: 0xA0
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: orderedRequests
    char __padding4[0x7] = {};
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task> _orderedRequests
    // Size: 0x8
    // Offset: 0xA8
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>* orderedRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>*) == 0x8);
    public:
    // Get static field: static private LiteNetLib.Utils.NetDataWriter _authenticationDataWriter
    static ::LiteNetLib::Utils::NetDataWriter* _get__authenticationDataWriter();
    // Set static field: static private LiteNetLib.Utils.NetDataWriter _authenticationDataWriter
    static void _set__authenticationDataWriter(::LiteNetLib::Utils::NetDataWriter* value);
    // Get instance field reference: private readonly DnsEndPoint _endPoint
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DnsEndPoint*& dyn__endPoint();
    // Get instance field reference: private readonly ICertificateValidator _certificateValidator
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ICertificateValidator*& dyn__certificateValidator();
    // Get instance field reference: private System.Threading.Tasks.Task _authenticationTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn__authenticationTask();
    // Get instance field reference: private System.Security.Authentication.AuthenticationException _authenticationException
    [[deprecated("Use field access instead!")]] ::System::Security::Authentication::AuthenticationException*& dyn__authenticationException();
    // Get instance field reference: private System.Boolean _disposed
    [[deprecated("Use field access instead!")]] bool& dyn__disposed();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Threading.Tasks.Task> _orderedRequests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>*& dyn__orderedRequests();
    // public DnsEndPoint get_endPoint()
    // Offset: 0x154D06C
    ::GlobalNamespace::DnsEndPoint* get_endPoint();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x154D074
    bool get_isAuthenticated();
    // public System.Boolean get_isAuthenticating()
    // Offset: 0x154D18C
    bool get_isAuthenticating();
    // public System.Boolean get_hasAuthenticationFailed()
    // Offset: 0x154D1F4
    bool get_hasAuthenticationFailed();
    // protected System.Void .ctor(IUnconnectedMessageSender sender, DnsEndPoint endPoint, BGNet.Core.ITimeProvider timeProvider, ICertificateValidator certificateValidator, BGNet.Core.IAnalyticsManager analytics)
    // Offset: 0x154D204
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientUnconnectedMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint, ::BGNet::Core::ITimeProvider* timeProvider, ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientUnconnectedMessageHandler*, creationType>(sender, endPoint, timeProvider, certificateValidator, analytics)));
    }
    // private System.Void RegisterHandshakeMessageHandlers()
    // Offset: 0x154D5E8
    void RegisterHandshakeMessageHandlers();
    // private System.Void HandleHelloVerifyRequest(BGNet.Core.Messages.HelloVerifyRequest packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x154E404
    void HandleHelloVerifyRequest(::BGNet::Core::Messages::HelloVerifyRequest* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
    // protected System.Void SendOrderedAuthenticatedRequest(System.String queue, BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154E5D4
    void SendOrderedAuthenticatedRequest(::StringW queue, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task SendOrderedAuthenticatedRequestAsync(System.Threading.Tasks.Task previousTask, BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154E6AC
    ::System::Threading::Tasks::Task* SendOrderedAuthenticatedRequestAsync(::System::Threading::Tasks::Task* previousTask, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);
    // protected System.Threading.Tasks.Task`1<T> SendAuthenticatedRequestAsync(BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Threading::Tasks::Task_1<T>* SendAuthenticatedRequestAsync(::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::BGNet::Core::Messages::IUnconnectedReliableResponse>);
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SendAuthenticatedRequestAsync", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(cancellationToken)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___generic__method, message, cancellationToken);
    }
    // protected System.Threading.Tasks.Task SendAuthenticatedRequestAsync(BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154E7C4
    ::System::Threading::Tasks::Task* SendAuthenticatedRequestAsync(::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task OnSendFailed(System.UInt32 protocolVersion, System.Net.IPEndPoint remoteEndPoint, BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x154E8C8
    ::System::Threading::Tasks::Task* OnSendFailed(uint protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<T> OnSendFailedAwaitResponse(System.UInt32 protocolVersion, System.Net.IPEndPoint remoteEndPoint, BGNet.Core.Messages.IUnconnectedReliableRequest message, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    ::System::Threading::Tasks::Task_1<T>* OnSendFailedAwaitResponse(uint protocolVersion, ::System::Net::IPEndPoint* remoteEndPoint, ::BGNet::Core::Messages::IUnconnectedReliableRequest* message, ::System::Threading::CancellationToken cancellationToken) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::BGNet::Core::Messages::IUnconnectedReliableResponse>);
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailedAwaitResponse");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSendFailedAwaitResponse", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(protocolVersion), ::il2cpp_utils::ExtractType(remoteEndPoint), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(cancellationToken)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___generic__method, protocolVersion, remoteEndPoint, message, cancellationToken);
    }
    // private System.Threading.Tasks.Task ReauthenticateWithServer()
    // Offset: 0x154E9F0
    ::System::Threading::Tasks::Task* ReauthenticateWithServer();
    // protected System.Void UnauthenticateWithServer()
    // Offset: 0x154EAE0
    void UnauthenticateWithServer();
    // protected System.Threading.Tasks.Task AuthenticateWithServerAsync()
    // Offset: 0x154EB58
    ::System::Threading::Tasks::Task* AuthenticateWithServerAsync();
    // protected System.Void AuthenticateWithServer()
    // Offset: 0x154ED14
    void AuthenticateWithServer();
    // private System.Threading.Tasks.Task AuthenticateWithServerAsyncInternalVerbose()
    // Offset: 0x154EDD4
    ::System::Threading::Tasks::Task* AuthenticateWithServerAsyncInternalVerbose();
    // private System.Threading.Tasks.Task AuthenticateWithServerAsyncInternal()
    // Offset: 0x154EC14
    ::System::Threading::Tasks::Task* AuthenticateWithServerAsyncInternal();
    // protected System.Threading.Tasks.Task`1<BGNet.Core.Messages.IUnconnectedAuthenticateRequest> GetAuthenticationRequest()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* GetAuthenticationRequest();
    // private System.Threading.Tasks.Task`1<System.Boolean> VerifySignature(System.Byte[] clientRandom, System.Byte[] serverRandom, System.Byte[] serverKey, System.Byte[] signature, System.Byte[][] certData)
    // Offset: 0x154EF08
    ::System::Threading::Tasks::Task_1<bool>* VerifySignature(::ArrayW<uint8_t> clientRandom, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> serverKey, ::ArrayW<uint8_t> signature, ::ArrayW<::ArrayW<uint8_t>> certData);
    // private System.Void HandshakeLog(System.String message)
    // Offset: 0x154F010
    void HandshakeLog(::StringW message);
    // public override System.Void Dispose()
    // Offset: 0x154DE8C
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.Void UnconnectedMessageHandler::Dispose()
    void Dispose();
    // protected override System.UInt32 GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    // Offset: 0x154DFC0
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.UInt32 UnconnectedMessageHandler::GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    uint GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);
    // protected override System.Boolean ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x154E0B0
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.Boolean UnconnectedMessageHandler::ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
    // protected override System.Boolean ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint endPoint)
    // Offset: 0x154EEC4
    // Implemented from: BGNet.Core.Messages.UnconnectedMessageHandler
    // Base method: System.Boolean UnconnectedMessageHandler::ShouldHandleMessageFromEndPoint(System.Net.IPEndPoint endPoint)
    bool ShouldHandleMessageFromEndPoint(::System::Net::IPEndPoint* endPoint);
  }; // BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(BaseClientUnconnectedMessageHandler), 168 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Threading::Tasks::Task*>*)> __BGNet_Core_Messages_BaseClientUnconnectedMessageHandlerSizeCheck;
  static_assert(sizeof(BaseClientUnconnectedMessageHandler) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_endPoint
// Il2CppName: get_endPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DnsEndPoint* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_endPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "get_endPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticated
// Il2CppName: get_isAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "get_isAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticating
// Il2CppName: get_isAuthenticating
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_isAuthenticating)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "get_isAuthenticating", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_hasAuthenticationFailed
// Il2CppName: get_hasAuthenticationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::get_hasAuthenticationFailed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "get_hasAuthenticationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::RegisterHandshakeMessageHandlers
// Il2CppName: RegisterHandshakeMessageHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::RegisterHandshakeMessageHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "RegisterHandshakeMessageHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandleHelloVerifyRequest
// Il2CppName: HandleHelloVerifyRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::BGNet::Core::Messages::HelloVerifyRequest*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandleHelloVerifyRequest)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "HelloVerifyRequest")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "HandleHelloVerifyRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequest
// Il2CppName: SendOrderedAuthenticatedRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::StringW, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequest)> {
  static const MethodInfo* get() {
    static auto* queue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "SendOrderedAuthenticatedRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{queue, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequestAsync
// Il2CppName: SendOrderedAuthenticatedRequestAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::System::Threading::Tasks::Task*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendOrderedAuthenticatedRequestAsync)> {
  static const MethodInfo* get() {
    static auto* previousTask = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "SendOrderedAuthenticatedRequestAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{previousTask, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync
// Il2CppName: SendAuthenticatedRequestAsync
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync
// Il2CppName: SendAuthenticatedRequestAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::SendAuthenticatedRequestAsync)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "SendAuthenticatedRequestAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, cancellationToken});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailed
// Il2CppName: OnSendFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(uint, ::System::Net::IPEndPoint*, ::BGNet::Core::Messages::IUnconnectedReliableRequest*, ::System::Threading::CancellationToken)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailed)> {
  static const MethodInfo* get() {
    static auto* protocolVersion = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedReliableRequest")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "OnSendFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocolVersion, remoteEndPoint, message, cancellationToken});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::OnSendFailedAwaitResponse
// Il2CppName: OnSendFailedAwaitResponse
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ReauthenticateWithServer
// Il2CppName: ReauthenticateWithServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ReauthenticateWithServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "ReauthenticateWithServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::UnauthenticateWithServer
// Il2CppName: UnauthenticateWithServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::UnauthenticateWithServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "UnauthenticateWithServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsync
// Il2CppName: AuthenticateWithServerAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "AuthenticateWithServerAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServer
// Il2CppName: AuthenticateWithServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "AuthenticateWithServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternalVerbose
// Il2CppName: AuthenticateWithServerAsyncInternalVerbose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternalVerbose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "AuthenticateWithServerAsyncInternalVerbose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternal
// Il2CppName: AuthenticateWithServerAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::AuthenticateWithServerAsyncInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "AuthenticateWithServerAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetAuthenticationRequest
// Il2CppName: GetAuthenticationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetAuthenticationRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "GetAuthenticationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<::ArrayW<uint8_t>>)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* clientRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* serverKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* certData = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientRandom, serverRandom, serverKey, signature, certData});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandshakeLog
// Il2CppName: HandshakeLog
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::StringW)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::HandshakeLog)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "HandshakeLog", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)()>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetMessageType
// Il2CppName: GetMessageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::GetMessageType)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "GetMessageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessage
// Il2CppName: ShouldHandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessage)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "ShouldHandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessageFromEndPoint
// Il2CppName: ShouldHandleMessageFromEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::*)(::System::Net::IPEndPoint*)>(&BGNet::Core::Messages::BaseClientUnconnectedMessageHandler::ShouldHandleMessageFromEndPoint)> {
  static const MethodInfo* get() {
    static auto* endPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseClientUnconnectedMessageHandler*), "ShouldHandleMessageFromEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{endPoint});
  }
};