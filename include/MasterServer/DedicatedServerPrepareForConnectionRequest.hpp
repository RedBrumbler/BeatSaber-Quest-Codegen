// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerServerToClientMessage
#include "MasterServer/IDedicatedServerMasterServerServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
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
  // Forward declaring type: DedicatedServerPrepareForConnectionRequest
  class DedicatedServerPrepareForConnectionRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::DedicatedServerPrepareForConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerPrepareForConnectionRequest*, "MasterServer", "DedicatedServerPrepareForConnectionRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerPrepareForConnectionRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerPrepareForConnectionRequest : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::MasterServer::IDedicatedServerMasterServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    public:
    // public System.String id
    // Size: 0x8
    // Offset: 0x18
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x30
    ::System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage
    operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerServerToClientMessage
    inline ::MasterServer::IDedicatedServerMasterServerServerToClientMessage* i_IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userName();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    [[deprecated("Use field access instead!")]] ::System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // static public PacketPool`1<MasterServer.DedicatedServerPrepareForConnectionRequest> get_pool()
    // Offset: 0x16DB580
    static ::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerPrepareForConnectionRequest*>* get_pool();
    // public MasterServer.DedicatedServerPrepareForConnectionRequest Init(System.String id, System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x16DB5C8
    ::MasterServer::DedicatedServerPrepareForConnectionRequest* Init(::StringW id, ::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* remoteEndPoint, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey);
    // public System.Void .ctor()
    // Offset: 0x16DB7FC
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerPrepareForConnectionRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::DedicatedServerPrepareForConnectionRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerPrepareForConnectionRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16DB620
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16DB6E8
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16DB780
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // MasterServer.DedicatedServerPrepareForConnectionRequest
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerPrepareForConnectionRequest), 64 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_DedicatedServerPrepareForConnectionRequestSizeCheck;
  static_assert(sizeof(DedicatedServerPrepareForConnectionRequest) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerPrepareForConnectionRequest*>* (*)()>(&MasterServer::DedicatedServerPrepareForConnectionRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::DedicatedServerPrepareForConnectionRequest* (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(::StringW, ::StringW, ::StringW, ::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Init)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, userId, userName, remoteEndPoint, random, publicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionRequest::*)()>(&MasterServer::DedicatedServerPrepareForConnectionRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
