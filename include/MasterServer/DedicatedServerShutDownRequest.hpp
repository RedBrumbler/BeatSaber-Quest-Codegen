// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedUnreliableMessage
#include "BGNet/Core/Messages/IUnconnectedUnreliableMessage.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerClientToServerMessage
#include "MasterServer/IDedicatedServerMasterServerClientToServerMessage.hpp"
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
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: DedicatedServerShutDownRequest
  class DedicatedServerShutDownRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::DedicatedServerShutDownRequest);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerShutDownRequest*, "MasterServer", "DedicatedServerShutDownRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerShutDownRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerShutDownRequest : public ::Il2CppObject/*, public ::BGNet::Core::Messages::IUnconnectedUnreliableMessage, public ::MasterServer::IDedicatedServerMasterServerClientToServerMessage*/ {
    public:
    public:
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW dedicatedServerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedUnreliableMessage
    operator ::BGNet::Core::Messages::IUnconnectedUnreliableMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedUnreliableMessage
    inline ::BGNet::Core::Messages::IUnconnectedUnreliableMessage* i_IUnconnectedUnreliableMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedUnreliableMessage*>(this);
    }
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage
    operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerClientToServerMessage
    inline ::MasterServer::IDedicatedServerMasterServerClientToServerMessage* i_IDedicatedServerMasterServerClientToServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerClientToServerMessage*>(this);
    }
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$dedicatedServerCreationTime$k__BackingField();
    // static public PacketPool`1<MasterServer.DedicatedServerShutDownRequest> get_pool()
    // Offset: 0x17556A0
    static ::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerShutDownRequest*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x17556E8
    ::StringW get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x17556F0
    void set_dedicatedServerId(::StringW value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x17556F8
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x1755700
    void set_dedicatedServerCreationTime(int64_t value);
    // public System.Void .ctor()
    // Offset: 0x17557F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerShutDownRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::DedicatedServerShutDownRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerShutDownRequest*, creationType>()));
    }
    // public MasterServer.DedicatedServerShutDownRequest Init(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime)
    // Offset: 0x1755708
    ::MasterServer::DedicatedServerShutDownRequest* Init(::StringW dedicatedServerId, int64_t dedicatedServerCreationTime);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1755710
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1755754
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x175579C
    void Release();
  }; // MasterServer.DedicatedServerShutDownRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerShutDownRequest), 24 + sizeof(int64_t)> __MasterServer_DedicatedServerShutDownRequestSizeCheck;
  static_assert(sizeof(DedicatedServerShutDownRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerShutDownRequest*>* (*)()>(&MasterServer::DedicatedServerShutDownRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(::StringW)>(&MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(int64_t)>(&MasterServer::DedicatedServerShutDownRequest::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::DedicatedServerShutDownRequest* (MasterServer::DedicatedServerShutDownRequest::*)(::StringW, int64_t)>(&MasterServer::DedicatedServerShutDownRequest::Init)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerShutDownRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerShutDownRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerShutDownRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerShutDownRequest::*)()>(&MasterServer::DedicatedServerShutDownRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerShutDownRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
