// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
// Including type: BGNet.Core.Messages.IHandshakeClientToServerMessage
#include "BGNet/Core/Messages/IHandshakeClientToServerMessage.hpp"
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
  // Forward declaring type: ClientHelloWithCookieRequest
  class ClientHelloWithCookieRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ClientHelloWithCookieRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ClientHelloWithCookieRequest*, "BGNet.Core.Messages", "ClientHelloWithCookieRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ClientHelloWithCookieRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientHelloWithCookieRequest : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::BGNet::Core::Messages::IHandshakeClientToServerMessage*/ {
    public:
    public:
    // public System.UInt32 certificateResponseId
    // Size: 0x4
    // Offset: 0x14
    uint certificateResponseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage
    operator ::BGNet::Core::Messages::IHandshakeClientToServerMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeClientToServerMessage
    inline ::BGNet::Core::Messages::IHandshakeClientToServerMessage* i_IHandshakeClientToServerMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeClientToServerMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: public System.UInt32 certificateResponseId
    [[deprecated("Use field access instead!")]] uint& dyn_certificateResponseId();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable cookie
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_cookie();
    // static public PacketPool`1<BGNet.Core.Messages.ClientHelloWithCookieRequest> get_pool()
    // Offset: 0x15E8010
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloWithCookieRequest*>* get_pool();
    // public BGNet.Core.Messages.ClientHelloWithCookieRequest Init(System.UInt32 certificateResponseId, System.Byte[] random, System.Byte[] cookie)
    // Offset: 0x15EA7E4
    ::BGNet::Core::Messages::ClientHelloWithCookieRequest* Init(uint certificateResponseId, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> cookie);
    // public System.Void .ctor()
    // Offset: 0x15F0334
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientHelloWithCookieRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ClientHelloWithCookieRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientHelloWithCookieRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15EFEC4
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15F0038
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x15F02B8
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // BGNet.Core.Messages.ClientHelloWithCookieRequest
  #pragma pack(pop)
  static check_size<sizeof(ClientHelloWithCookieRequest), 32 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __BGNet_Core_Messages_ClientHelloWithCookieRequestSizeCheck;
  static_assert(sizeof(ClientHelloWithCookieRequest) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ClientHelloWithCookieRequest*>* (*)()>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloWithCookieRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ClientHelloWithCookieRequest* (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(uint, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Init)> {
  static const MethodInfo* get() {
    static auto* certificateResponseId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* cookie = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloWithCookieRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificateResponseId, random, cookie});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloWithCookieRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloWithCookieRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ClientHelloWithCookieRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ClientHelloWithCookieRequest::*)()>(&BGNet::Core::Messages::ClientHelloWithCookieRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ClientHelloWithCookieRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
