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
NEED_NO_BOX(::GlobalNamespace::ConnectedPlayerManager::PingPacket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectedPlayerManager::PingPacket*, "", "ConnectedPlayerManager/PingPacket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: ConnectedPlayerManager/PingPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectedPlayerManager::PingPacket : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket*/ {
    public:
    public:
    // public System.Single pingTime
    // Size: 0x4
    // Offset: 0x10
    float pingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
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
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return pingTime;
    }
    // Get instance field reference: public System.Single pingTime
    [[deprecated("Use field access instead!")]] float& dyn_pingTime();
    // static public PacketPool`1<ConnectedPlayerManager/PingPacket> get_pool()
    // Offset: 0x16BBAD0
    static ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PingPacket*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x16BBBD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectedPlayerManager::PingPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ConnectedPlayerManager::PingPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectedPlayerManager::PingPacket*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16BBB18
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16BBB38
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public ConnectedPlayerManager/PingPacket Init(System.Single pingTime)
    // Offset: 0x16BBB6C
    ::GlobalNamespace::ConnectedPlayerManager::PingPacket* Init(float pingTime);
    // public System.Void Release()
    // Offset: 0x16BBB74
    void Release();
  }; // ConnectedPlayerManager/PingPacket
  #pragma pack(pop)
  static check_size<sizeof(ConnectedPlayerManager::PingPacket), 16 + sizeof(float)> __GlobalNamespace_ConnectedPlayerManager_PingPacketSizeCheck;
  static_assert(sizeof(ConnectedPlayerManager::PingPacket) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager::PingPacket*>* (*)()>(&GlobalNamespace::ConnectedPlayerManager::PingPacket::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PingPacket*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PingPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::ConnectedPlayerManager::PingPacket::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PingPacket*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PingPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::ConnectedPlayerManager::PingPacket::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PingPacket*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager::PingPacket* (GlobalNamespace::ConnectedPlayerManager::PingPacket::*)(float)>(&GlobalNamespace::ConnectedPlayerManager::PingPacket::Init)> {
  static const MethodInfo* get() {
    static auto* pingTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PingPacket*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pingTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConnectedPlayerManager::PingPacket::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectedPlayerManager::PingPacket::*)()>(&GlobalNamespace::ConnectedPlayerManager::PingPacket::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConnectedPlayerManager::PingPacket*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
