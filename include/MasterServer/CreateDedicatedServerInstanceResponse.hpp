// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerClientToServerMessage
#include "MasterServer/IDedicatedServerMasterServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Forward declaring type: CreateDedicatedServerInstanceResponse
  class CreateDedicatedServerInstanceResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::CreateDedicatedServerInstanceResponse);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::CreateDedicatedServerInstanceResponse*, "MasterServer", "CreateDedicatedServerInstanceResponse");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateDedicatedServerInstanceResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateDedicatedServerInstanceResponse : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::MasterServer::IDedicatedServerMasterServerClientToServerMessage*/ {
    public:
    // Nested type: ::MasterServer::CreateDedicatedServerInstanceResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
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
      // static field const value: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result Success
      static ::MasterServer::CreateDedicatedServerInstanceResponse::Result _get_Success();
      // Set static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result Success
      static void _set_Success(::MasterServer::CreateDedicatedServerInstanceResponse::Result value);
      // static field const value: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result NoAvailableServerSlots
      static constexpr const int NoAvailableServerSlots = 1;
      // Get static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result NoAvailableServerSlots
      static ::MasterServer::CreateDedicatedServerInstanceResponse::Result _get_NoAvailableServerSlots();
      // Set static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result NoAvailableServerSlots
      static void _set_NoAvailableServerSlots(::MasterServer::CreateDedicatedServerInstanceResponse::Result value);
      // static field const value: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result UnknownError
      static ::MasterServer::CreateDedicatedServerInstanceResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(::MasterServer::CreateDedicatedServerInstanceResponse::Result value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(CreateDedicatedServerInstanceResponse::Result), 0 + sizeof(int)> __MasterServer_CreateDedicatedServerInstanceResponse_ResultSizeCheck;
    static_assert(sizeof(CreateDedicatedServerInstanceResponse::Result) == 0x4);
    public:
    // public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    ::MasterServer::CreateDedicatedServerInstanceResponse::Result result;
    // Field size check
    static_assert(sizeof(::MasterServer::CreateDedicatedServerInstanceResponse::Result) == 0x4);
    // Padding between fields: result and: dedicatedServerId
    char __padding0[0x4] = {};
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW dedicatedServerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x30
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x38
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x3C
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage
    operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerClientToServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IDedicatedServerMasterServerClientToServerMessage
    inline ::MasterServer::IDedicatedServerMasterServerClientToServerMessage* i_IDedicatedServerMasterServerClientToServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IDedicatedServerMasterServerClientToServerMessage*>(this);
    }
    // Get instance field reference: public MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result result
    [[deprecated("Use field access instead!")]] ::MasterServer::CreateDedicatedServerInstanceResponse::Result& dyn_result();
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$dedicatedServerCreationTime$k__BackingField();
    // Get instance field reference: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id();
    // Get instance field reference: public System.Int32 port
    [[deprecated("Use field access instead!")]] int& dyn_port();
    // Get instance field reference: public System.Int32 maxPlayerCount
    [[deprecated("Use field access instead!")]] int& dyn_maxPlayerCount();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // static public PacketPool`1<MasterServer.CreateDedicatedServerInstanceResponse> get_pool()
    // Offset: 0x16DA9F8
    static ::GlobalNamespace::PacketPool_1<::MasterServer::CreateDedicatedServerInstanceResponse*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x16DAAD8
    ::StringW get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x16DAAE0
    void set_dedicatedServerId(::StringW value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x16DAAE8
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x16DAAF0
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.CreateDedicatedServerInstanceResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.CreateDedicatedServerInstanceResponse/MasterServer.Result result)
    // Offset: 0x16DAD40
    ::MasterServer::CreateDedicatedServerInstanceResponse* InitForFailure(::StringW dedicatedServerId, int64_t dedicatedServerCreationTime, ::MasterServer::CreateDedicatedServerInstanceResponse::Result result);
    // public MasterServer.CreateDedicatedServerInstanceResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, System.String id, System.Int32 port, System.Byte[] random, System.Byte[] publicKey, System.Int32 maxPlayerCount)
    // Offset: 0x16DAD4C
    ::MasterServer::CreateDedicatedServerInstanceResponse* InitForSuccess(::StringW dedicatedServerId, int64_t dedicatedServerCreationTime, ::StringW id, int port, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey, int maxPlayerCount);
    // public override System.Byte get_resultCode()
    // Offset: 0x16DAA40
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Byte BaseReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x16DAA48
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.String BaseReliableResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x16DADAC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateDedicatedServerInstanceResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::CreateDedicatedServerInstanceResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateDedicatedServerInstanceResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x16DAAF8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x16DABF8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x16DACC4
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.CreateDedicatedServerInstanceResponse
  #pragma pack(pop)
  static check_size<sizeof(CreateDedicatedServerInstanceResponse), 72 + sizeof(::GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_CreateDedicatedServerInstanceResponseSizeCheck;
  static_assert(sizeof(CreateDedicatedServerInstanceResponse) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::CreateDedicatedServerInstanceResponse::Result, "MasterServer", "CreateDedicatedServerInstanceResponse/Result");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::CreateDedicatedServerInstanceResponse*>* (*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::CreateDedicatedServerInstanceResponse::*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceResponse::*)(::StringW)>(&MasterServer::CreateDedicatedServerInstanceResponse::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::CreateDedicatedServerInstanceResponse::*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceResponse::*)(int64_t)>(&MasterServer::CreateDedicatedServerInstanceResponse::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::CreateDedicatedServerInstanceResponse* (MasterServer::CreateDedicatedServerInstanceResponse::*)(::StringW, int64_t, ::MasterServer::CreateDedicatedServerInstanceResponse::Result)>(&MasterServer::CreateDedicatedServerInstanceResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "CreateDedicatedServerInstanceResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, result});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::CreateDedicatedServerInstanceResponse* (MasterServer::CreateDedicatedServerInstanceResponse::*)(::StringW, int64_t, ::StringW, int, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int)>(&MasterServer::CreateDedicatedServerInstanceResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* maxPlayerCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, id, port, random, publicKey, maxPlayerCount});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::CreateDedicatedServerInstanceResponse::*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::CreateDedicatedServerInstanceResponse::*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateDedicatedServerInstanceResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateDedicatedServerInstanceResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceResponse::*)()>(&MasterServer::CreateDedicatedServerInstanceResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
