// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IUserMasterServerMessage
#include "MasterServer/IUserMasterServerMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IUserMasterServerClientToServerMessage
  class IUserMasterServerClientToServerMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::IUserMasterServerClientToServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::IUserMasterServerClientToServerMessage*, "MasterServer", "IUserMasterServerClientToServerMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IUserMasterServerClientToServerMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IUserMasterServerClientToServerMessage/*, public ::MasterServer::IUserMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator ::MasterServer::IUserMasterServerMessage
    operator ::MasterServer::IUserMasterServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IUserMasterServerMessage
    inline ::MasterServer::IUserMasterServerMessage* i_IUserMasterServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
    // public System.String get_userId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_userName();
  }; // MasterServer.IUserMasterServerClientToServerMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IUserMasterServerClientToServerMessage::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::IUserMasterServerClientToServerMessage::*)()>(&MasterServer::IUserMasterServerClientToServerMessage::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IUserMasterServerClientToServerMessage*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IUserMasterServerClientToServerMessage::get_userName
// Il2CppName: get_userName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::IUserMasterServerClientToServerMessage::*)()>(&MasterServer::IUserMasterServerClientToServerMessage::get_userName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IUserMasterServerClientToServerMessage*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
