// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*, "", "ConnectedPlayerManager/PlayerConnectedPacket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PlayerConnectedPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PlayerConnectedPacket : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket*/ {
    public:
    public:
    // public System.Byte remoteConnectionId
    // Size: 0x1
    // Offset: 0x10
    uint8_t remoteConnectionId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: remoteConnectionId and: userId
    char __padding0[0x7] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isConnectionOwner
    // Size: 0x1
    // Offset: 0x28
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: i_INetSerializable
    inline ::LiteNetLib::Utils::INetSerializable* i_INetSerializable() noexcept {
      return reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IPoolablePacket
    operator ::GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Creating interface conversion operator: i_IPoolablePacket
    inline ::GlobalNamespace::IPoolablePacket* i_IPoolablePacket() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // Get instance field reference: public System.Byte remoteConnectionId
    [[deprecated("Use field access instead!")]] uint8_t& dyn_remoteConnectionId();
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userName();
    // Get instance field reference: public System.Boolean isConnectionOwner
    [[deprecated("Use field access instead!")]] bool& dyn_isConnectionOwner();
    // static public PacketPool`1<ConnectedPlayerManager/PlayerConnectedPacket> get_pool()
    // Offset: 0x16BB18C
    static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x16BBDB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PlayerConnectedPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PlayerConnectedPacket*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16BBC8C
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16BBCF0
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x16BBD5C
    void Release();
    // public ConnectedPlayerManager/PlayerConnectedPacket Init(System.Byte connectionId, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x16BB1D4
    ::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* Init(uint8_t connectionId, ::StringW userId, ::StringW userName, bool isConnectionOwner);
  }; // ConnectedPlayerManager/PlayerConnectedPacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PlayerConnectedPacket), 40 + sizeof(bool)> __GlobalNamespace_ConnectedPlayerManager_PlayerConnectedPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PlayerConnectedPacket) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket* (GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::*)(uint8_t, ::StringW, ::StringW, bool)>(&GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket::Init)> {
  static const MethodInfo* get() {
    static auto* connectionId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PlayerConnectedPacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectionId, userId, userName, isConnectionOwner});
  }
};
