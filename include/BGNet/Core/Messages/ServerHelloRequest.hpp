// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IHandshakeServerToClientMessage
#include "BGNet/Core/Messages/IHandshakeServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
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
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ServerHelloRequest
  class ServerHelloRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ServerHelloRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerHelloRequest*, "BGNet.Core.Messages", "ServerHelloRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ServerHelloRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerHelloRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IHandshakeServerToClientMessage*/ {
    public:
    public:
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable signature
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::ByteArrayNetSerializable* signature;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage
    operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeServerToClientMessage
    inline ::BGNet::Core::Messages::IHandshakeServerToClientMessage* i_IHandshakeServerToClientMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // Get instance field reference: public readonly ByteArrayNetSerializable signature
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_signature();
    // static public PacketPool`1<BGNet.Core.Messages.ServerHelloRequest> get_pool()
    // Offset: 0x1608F60
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerHelloRequest*>* get_pool();
    // public BGNet.Core.Messages.ServerHelloRequest Init(System.Byte[] random, System.Byte[] publicKey, System.Byte[] signature)
    // Offset: 0x16107C8
    ::BGNet::Core::Messages::ServerHelloRequest* Init(::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey, ::ArrayW<uint8_t> signature);
    // public System.Void .ctor()
    // Offset: 0x16120E8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerHelloRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ServerHelloRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerHelloRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1611FC0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1612014
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1612068
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.ServerHelloRequest
  #pragma pack(pop)
  static check_size<sizeof(ServerHelloRequest), 40 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __BGNet_Core_Messages_ServerHelloRequestSizeCheck;
  static_assert(sizeof(ServerHelloRequest) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerHelloRequest*>* (*)()>(&BGNet::Core::Messages::ServerHelloRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerHelloRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ServerHelloRequest* (BGNet::Core::Messages::ServerHelloRequest::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ServerHelloRequest::Init)> {
  static const MethodInfo* get() {
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerHelloRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{random, publicKey, signature});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::ServerHelloRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerHelloRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::ServerHelloRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerHelloRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerHelloRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerHelloRequest::*)()>(&BGNet::Core::Messages::ServerHelloRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerHelloRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
