// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedAuthenticateRequest
#include "BGNet/Core/Messages/IUnconnectedAuthenticateRequest.hpp"
// Including type: MasterServer.IUserMasterServerMessage
#include "MasterServer/IUserMasterServerMessage.hpp"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: AuthenticateUserMasterServerRequest
  class AuthenticateUserMasterServerRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::AuthenticateUserMasterServerRequest);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::AuthenticateUserMasterServerRequest*, "MasterServer", "AuthenticateUserMasterServerRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateUserMasterServerRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthenticateUserMasterServerRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest, public ::MasterServer::IUserMasterServerMessage*/ {
    public:
    public:
    // public AuthenticationToken authenticationToken
    // Size: 0x20
    // Offset: 0x18
    ::GlobalNamespace::AuthenticationToken authenticationToken;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AuthenticationToken) == 0x20);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest
    operator ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedAuthenticateRequest
    inline ::BGNet::Core::Messages::IUnconnectedAuthenticateRequest* i_IUnconnectedAuthenticateRequest() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedAuthenticateRequest*>(this);
    }
    // Creating interface conversion operator: operator ::MasterServer::IUserMasterServerMessage
    operator ::MasterServer::IUserMasterServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IUserMasterServerMessage
    inline ::MasterServer::IUserMasterServerMessage* i_IUserMasterServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::AuthenticationToken
    constexpr operator ::GlobalNamespace::AuthenticationToken() const noexcept {
      return authenticationToken;
    }
    // Get instance field reference: public AuthenticationToken authenticationToken
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AuthenticationToken& dyn_authenticationToken();
    // static public PacketPool`1<MasterServer.AuthenticateUserMasterServerRequest> get_pool()
    // Offset: 0x16D97A4
    static ::GlobalNamespace::PacketPool_1<::MasterServer::AuthenticateUserMasterServerRequest*>* get_pool();
    // public MasterServer.AuthenticateUserMasterServerRequest Init(AuthenticationToken authenticationToken)
    // Offset: 0x16D97EC
    ::MasterServer::AuthenticateUserMasterServerRequest* Init(::GlobalNamespace::AuthenticationToken authenticationToken);
    // public System.Void .ctor()
    // Offset: 0x16D98D8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateUserMasterServerRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::AuthenticateUserMasterServerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateUserMasterServerRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16D97FC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16D9830
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16D987C
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.AuthenticateUserMasterServerRequest
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateUserMasterServerRequest), 24 + sizeof(::GlobalNamespace::AuthenticationToken)> __MasterServer_AuthenticateUserMasterServerRequestSizeCheck;
  static_assert(sizeof(AuthenticateUserMasterServerRequest) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::AuthenticateUserMasterServerRequest*>* (*)()>(&MasterServer::AuthenticateUserMasterServerRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserMasterServerRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::AuthenticateUserMasterServerRequest* (MasterServer::AuthenticateUserMasterServerRequest::*)(::GlobalNamespace::AuthenticationToken)>(&MasterServer::AuthenticateUserMasterServerRequest::Init)> {
  static const MethodInfo* get() {
    static auto* authenticationToken = &::il2cpp_utils::GetClassFromName("", "AuthenticationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserMasterServerRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{authenticationToken});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserMasterServerRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::AuthenticateUserMasterServerRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserMasterServerRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserMasterServerRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::AuthenticateUserMasterServerRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserMasterServerRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::AuthenticateUserMasterServerRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::AuthenticateUserMasterServerRequest::*)()>(&MasterServer::AuthenticateUserMasterServerRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::AuthenticateUserMasterServerRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
