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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IUnconnectedMessageSender
  class IUnconnectedMessageSender;
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
  // Forward declaring type: ICertificateValidator
  class ICertificateValidator;
}
// Forward declaring namespace: BGNet::Core
namespace BGNet::Core {
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
  // Forward declaring type: IAnalyticsManager
  class IAnalyticsManager;
}
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IUnconnectedMessage
  class IUnconnectedMessage;
  // Forward declaring type: IUnconnectedAuthenticateRequest
  class IUnconnectedAuthenticateRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameLiftClientMessageHandler
  class GameLiftClientMessageHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameLiftClientMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientMessageHandler*, "", "GameLiftClientMessageHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: GameLiftClientMessageHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftClientMessageHandler : public ::BGNet::Core::Messages::BaseClientUnconnectedMessageHandler {
    public:
    public:
    // private System.String _userId
    // Size: 0x8
    // Offset: 0xB0
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _userName
    // Size: 0x8
    // Offset: 0xB8
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _playerSessionId
    // Size: 0x8
    // Offset: 0xC0
    ::StringW playerSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userId();
    // Get instance field reference: private System.String _userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__userName();
    // Get instance field reference: private System.String _playerSessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__playerSessionId();
    // private System.Void RegisterGameLiftMessages()
    // Offset: 0x16CF9C8
    void RegisterGameLiftMessages();
    // public System.Threading.Tasks.Task AuthenticateWithGameLiftServer(System.String userId, System.String userName, System.String playerSessionId)
    // Offset: 0x16CFF0C
    ::System::Threading::Tasks::Task* AuthenticateWithGameLiftServer(::StringW userId, ::StringW userName, ::StringW playerSessionId);
    // public System.Void .ctor(IUnconnectedMessageSender sender, DnsEndPoint endPoint, BGNet.Core.ITimeProvider timeProvider, ICertificateValidator certificateValidator, BGNet.Core.IAnalyticsManager analytics)
    // Offset: 0x16CF9A0
    // Implemented from: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
    // Base method: System.Void BaseClientUnconnectedMessageHandler::.ctor(IUnconnectedMessageSender sender, DnsEndPoint endPoint, BGNet.Core.ITimeProvider timeProvider, ICertificateValidator certificateValidator, BGNet.Core.IAnalyticsManager analytics)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftClientMessageHandler* New_ctor(::GlobalNamespace::IUnconnectedMessageSender* sender, ::GlobalNamespace::DnsEndPoint* endPoint, ::BGNet::Core::ITimeProvider* timeProvider, ::GlobalNamespace::ICertificateValidator* certificateValidator, ::BGNet::Core::IAnalyticsManager* analytics) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameLiftClientMessageHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftClientMessageHandler*, creationType>(sender, endPoint, timeProvider, certificateValidator, analytics)));
    }
    // protected override System.Boolean ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    // Offset: 0x16CFD24
    // Implemented from: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
    // Base method: System.Boolean BaseClientUnconnectedMessageHandler::ShouldHandleMessage(BGNet.Core.Messages.IUnconnectedMessage packet, BGNet.Core.Messages.UnconnectedMessageHandler/BGNet.Core.Messages.MessageOrigin origin)
    bool ShouldHandleMessage(::BGNet::Core::Messages::IUnconnectedMessage* packet, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin origin);
    // protected override System.UInt32 GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    // Offset: 0x16CFDE4
    // Implemented from: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
    // Base method: System.UInt32 BaseClientUnconnectedMessageHandler::GetMessageType(BGNet.Core.Messages.IUnconnectedMessage message)
    uint GetMessageType(::BGNet::Core::Messages::IUnconnectedMessage* message);
    // protected override System.Threading.Tasks.Task`1<BGNet.Core.Messages.IUnconnectedAuthenticateRequest> GetAuthenticationRequest()
    // Offset: 0x16CFE68
    // Implemented from: BGNet.Core.Messages.BaseClientUnconnectedMessageHandler
    // Base method: System.Threading.Tasks.Task`1<BGNet.Core.Messages.IUnconnectedAuthenticateRequest> BaseClientUnconnectedMessageHandler::GetAuthenticationRequest()
    ::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* GetAuthenticationRequest();
  }; // GameLiftClientMessageHandler
  #pragma pack(pop)
  static check_size<sizeof(GameLiftClientMessageHandler), 192 + sizeof(::StringW)> __GlobalNamespace_GameLiftClientMessageHandlerSizeCheck;
  static_assert(sizeof(GameLiftClientMessageHandler) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages
// Il2CppName: RegisterGameLiftMessages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftClientMessageHandler::*)()>(&GlobalNamespace::GameLiftClientMessageHandler::RegisterGameLiftMessages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientMessageHandler*), "RegisterGameLiftMessages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer
// Il2CppName: AuthenticateWithGameLiftServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::GameLiftClientMessageHandler::*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::GameLiftClientMessageHandler::AuthenticateWithGameLiftServer)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playerSessionId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientMessageHandler*), "AuthenticateWithGameLiftServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, playerSessionId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage
// Il2CppName: ShouldHandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftClientMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*, ::BGNet::Core::Messages::UnconnectedMessageHandler::MessageOrigin)>(&GlobalNamespace::GameLiftClientMessageHandler::ShouldHandleMessage)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "UnconnectedMessageHandler/MessageOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientMessageHandler*), "ShouldHandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet, origin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::GetMessageType
// Il2CppName: GetMessageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::GameLiftClientMessageHandler::*)(::BGNet::Core::Messages::IUnconnectedMessage*)>(&GlobalNamespace::GameLiftClientMessageHandler::GetMessageType)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("BGNet.Core.Messages", "IUnconnectedMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientMessageHandler*), "GetMessageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest
// Il2CppName: GetAuthenticationRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>* (GlobalNamespace::GameLiftClientMessageHandler::*)()>(&GlobalNamespace::GameLiftClientMessageHandler::GetAuthenticationRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientMessageHandler*), "GetAuthenticationRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};