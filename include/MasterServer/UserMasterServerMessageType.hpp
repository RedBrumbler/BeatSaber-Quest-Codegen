// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: UserMasterServerMessageType
  struct UserMasterServerMessageType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::UserMasterServerMessageType, "MasterServer", "UserMasterServerMessageType");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.UserMasterServerMessageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserMasterServerMessageType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UserMasterServerMessageType
    constexpr UserMasterServerMessageType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MasterServer.UserMasterServerMessageType AuthenticateUserRequest
    static constexpr const int AuthenticateUserRequest = 0;
    // Get static field: static public MasterServer.UserMasterServerMessageType AuthenticateUserRequest
    static ::MasterServer::UserMasterServerMessageType _get_AuthenticateUserRequest();
    // Set static field: static public MasterServer.UserMasterServerMessageType AuthenticateUserRequest
    static void _set_AuthenticateUserRequest(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType AuthenticateUserResponse
    static constexpr const int AuthenticateUserResponse = 1;
    // Get static field: static public MasterServer.UserMasterServerMessageType AuthenticateUserResponse
    static ::MasterServer::UserMasterServerMessageType _get_AuthenticateUserResponse();
    // Set static field: static public MasterServer.UserMasterServerMessageType AuthenticateUserResponse
    static void _set_AuthenticateUserResponse(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType ConnectToServerResponse
    static constexpr const int ConnectToServerResponse = 8;
    // Get static field: static public MasterServer.UserMasterServerMessageType ConnectToServerResponse
    static ::MasterServer::UserMasterServerMessageType _get_ConnectToServerResponse();
    // Set static field: static public MasterServer.UserMasterServerMessageType ConnectToServerResponse
    static void _set_ConnectToServerResponse(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType ConnectToServerRequest
    static constexpr const int ConnectToServerRequest = 9;
    // Get static field: static public MasterServer.UserMasterServerMessageType ConnectToServerRequest
    static ::MasterServer::UserMasterServerMessageType _get_ConnectToServerRequest();
    // Set static field: static public MasterServer.UserMasterServerMessageType ConnectToServerRequest
    static void _set_ConnectToServerRequest(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType MessageReceivedAcknowledge
    static constexpr const int MessageReceivedAcknowledge = 13;
    // Get static field: static public MasterServer.UserMasterServerMessageType MessageReceivedAcknowledge
    static ::MasterServer::UserMasterServerMessageType _get_MessageReceivedAcknowledge();
    // Set static field: static public MasterServer.UserMasterServerMessageType MessageReceivedAcknowledge
    static void _set_MessageReceivedAcknowledge(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType MultipartMessage
    static constexpr const int MultipartMessage = 14;
    // Get static field: static public MasterServer.UserMasterServerMessageType MultipartMessage
    static ::MasterServer::UserMasterServerMessageType _get_MultipartMessage();
    // Set static field: static public MasterServer.UserMasterServerMessageType MultipartMessage
    static void _set_MultipartMessage(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType SessionKeepaliveMessage
    static constexpr const int SessionKeepaliveMessage = 15;
    // Get static field: static public MasterServer.UserMasterServerMessageType SessionKeepaliveMessage
    static ::MasterServer::UserMasterServerMessageType _get_SessionKeepaliveMessage();
    // Set static field: static public MasterServer.UserMasterServerMessageType SessionKeepaliveMessage
    static void _set_SessionKeepaliveMessage(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType GetPublicServersRequest
    static constexpr const int GetPublicServersRequest = 16;
    // Get static field: static public MasterServer.UserMasterServerMessageType GetPublicServersRequest
    static ::MasterServer::UserMasterServerMessageType _get_GetPublicServersRequest();
    // Set static field: static public MasterServer.UserMasterServerMessageType GetPublicServersRequest
    static void _set_GetPublicServersRequest(::MasterServer::UserMasterServerMessageType value);
    // static field const value: static public MasterServer.UserMasterServerMessageType GetPublicServersResponse
    static constexpr const int GetPublicServersResponse = 17;
    // Get static field: static public MasterServer.UserMasterServerMessageType GetPublicServersResponse
    static ::MasterServer::UserMasterServerMessageType _get_GetPublicServersResponse();
    // Set static field: static public MasterServer.UserMasterServerMessageType GetPublicServersResponse
    static void _set_GetPublicServersResponse(::MasterServer::UserMasterServerMessageType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // MasterServer.UserMasterServerMessageType
  #pragma pack(pop)
  static check_size<sizeof(UserMasterServerMessageType), 0 + sizeof(int)> __MasterServer_UserMasterServerMessageTypeSizeCheck;
  static_assert(sizeof(UserMasterServerMessageType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
