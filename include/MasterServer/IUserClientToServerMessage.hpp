// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IUserClientToServerMessage
  class IUserClientToServerMessage/*, public MasterServer::IUserMessage*/ {
    public:
    // Creating value type constructor for type: IUserClientToServerMessage
    IUserClientToServerMessage() noexcept {}
    // Creating interface conversion operator: operator MasterServer::IUserMessage
    operator MasterServer::IUserMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserMessage*>(this);
    }
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
  }; // MasterServer.IUserClientToServerMessage
  #pragma pack(pop)
  // Writing MetadataGetter for method: IUserClientToServerMessage::get_userId
  // Il2CppName: get_userId
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (IUserClientToServerMessage::*)()>(&IUserClientToServerMessage::get_userId)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IUserClientToServerMessage*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IUserClientToServerMessage::get_userName
  // Il2CppName: get_userName
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (IUserClientToServerMessage::*)()>(&IUserClientToServerMessage::get_userName)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IUserClientToServerMessage*), "get_userName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::IUserClientToServerMessage*, "MasterServer", "IUserClientToServerMessage");
