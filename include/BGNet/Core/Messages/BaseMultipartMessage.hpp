// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedMultipartMessage
#include "BGNet/Core/Messages/IUnconnectedMultipartMessage.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: BaseMultipartMessage
  class BaseMultipartMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::BaseMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BaseMultipartMessage*, "BGNet.Core.Messages", "BaseMultipartMessage");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.BaseMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseMultipartMessage : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::BGNet::Core::Messages::IUnconnectedMultipartMessage*/ {
    public:
    public:
    // private System.UInt32 <multipartMessageId>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    uint multipartMessageId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 <offset>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <length>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <totalLength>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int totalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalLength and: data
    char __padding3[0x4] = {};
    // private readonly System.Byte[] _data
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedMultipartMessage
    operator ::BGNet::Core::Messages::IUnconnectedMultipartMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMultipartMessage*>(this);
    }
    // Creating interface conversion operator: i_IUnconnectedMultipartMessage
    inline ::BGNet::Core::Messages::IUnconnectedMultipartMessage* i_IUnconnectedMultipartMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMultipartMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static field const value: static public System.Int32 kDataChunkSize
    static constexpr const int kDataChunkSize = 384;
    // Get static field: static public System.Int32 kDataChunkSize
    static int _get_kDataChunkSize();
    // Set static field: static public System.Int32 kDataChunkSize
    static void _set_kDataChunkSize(int value);
    // static field const value: static public System.Int32 kMaximumDataSize
    static constexpr const int kMaximumDataSize = 32767;
    // Get static field: static public System.Int32 kMaximumDataSize
    static int _get_kMaximumDataSize();
    // Set static field: static public System.Int32 kMaximumDataSize
    static void _set_kMaximumDataSize(int value);
    // Get instance field reference: private System.UInt32 <multipartMessageId>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$multipartMessageId$k__BackingField();
    // Get instance field reference: private System.Int32 <offset>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$offset$k__BackingField();
    // Get instance field reference: private System.Int32 <length>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$length$k__BackingField();
    // Get instance field reference: private System.Int32 <totalLength>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$totalLength$k__BackingField();
    // Get instance field reference: private readonly System.Byte[] _data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__data();
    // public System.UInt32 get_multipartMessageId()
    // Offset: 0x160CBC8
    uint get_multipartMessageId();
    // private System.Void set_multipartMessageId(System.UInt32 value)
    // Offset: 0x160CBD0
    void set_multipartMessageId(uint value);
    // public System.Int32 get_offset()
    // Offset: 0x160CBD8
    int get_offset();
    // private System.Void set_offset(System.Int32 value)
    // Offset: 0x160CBE0
    void set_offset(int value);
    // public System.Int32 get_length()
    // Offset: 0x160CBE8
    int get_length();
    // private System.Void set_length(System.Int32 value)
    // Offset: 0x160CBF0
    void set_length(int value);
    // public System.Int32 get_totalLength()
    // Offset: 0x160CBF8
    int get_totalLength();
    // private System.Void set_totalLength(System.Int32 value)
    // Offset: 0x160CC00
    void set_totalLength(int value);
    // public System.Byte[] get_data()
    // Offset: 0x160CC08
    ::ArrayW<uint8_t> get_data();
    // public BGNet.Core.Messages.BaseMultipartMessage Init(System.UInt32 multipartMessageId, System.Byte[] data, System.Int32 offset, System.Int32 length, System.Int32 totalLength)
    // Offset: 0x160CC10
    ::BGNet::Core::Messages::BaseMultipartMessage* Init(uint multipartMessageId, ::ArrayW<uint8_t> data, int offset, int length, int totalLength);
    // protected System.Void .ctor()
    // Offset: 0x160CEB8
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::BaseMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMultipartMessage*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x160CC6C
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x160CD1C
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // BGNet.Core.Messages.BaseMultipartMessage
  #pragma pack(pop)
  static check_size<sizeof(BaseMultipartMessage), 40 + sizeof(::ArrayW<uint8_t>)> __BGNet_Core_Messages_BaseMultipartMessageSizeCheck;
  static_assert(sizeof(BaseMultipartMessage) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::get_multipartMessageId
// Il2CppName: get_multipartMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (BGNet::Core::Messages::BaseMultipartMessage::*)()>(&BGNet::Core::Messages::BaseMultipartMessage::get_multipartMessageId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "get_multipartMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::set_multipartMessageId
// Il2CppName: set_multipartMessageId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(uint)>(&BGNet::Core::Messages::BaseMultipartMessage::set_multipartMessageId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "set_multipartMessageId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::get_offset
// Il2CppName: get_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BGNet::Core::Messages::BaseMultipartMessage::*)()>(&BGNet::Core::Messages::BaseMultipartMessage::get_offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "get_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::set_offset
// Il2CppName: set_offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(int)>(&BGNet::Core::Messages::BaseMultipartMessage::set_offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "set_offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BGNet::Core::Messages::BaseMultipartMessage::*)()>(&BGNet::Core::Messages::BaseMultipartMessage::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::set_length
// Il2CppName: set_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(int)>(&BGNet::Core::Messages::BaseMultipartMessage::set_length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "set_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::get_totalLength
// Il2CppName: get_totalLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BGNet::Core::Messages::BaseMultipartMessage::*)()>(&BGNet::Core::Messages::BaseMultipartMessage::get_totalLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "get_totalLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::set_totalLength
// Il2CppName: set_totalLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(int)>(&BGNet::Core::Messages::BaseMultipartMessage::set_totalLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "set_totalLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::get_data
// Il2CppName: get_data
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (BGNet::Core::Messages::BaseMultipartMessage::*)()>(&BGNet::Core::Messages::BaseMultipartMessage::get_data)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "get_data", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::BaseMultipartMessage* (BGNet::Core::Messages::BaseMultipartMessage::*)(uint, ::ArrayW<uint8_t>, int, int, int)>(&BGNet::Core::Messages::BaseMultipartMessage::Init)> {
  static const MethodInfo* get() {
    static auto* multipartMessageId = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* totalLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multipartMessageId, data, offset, length, totalLength});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::BaseMultipartMessage::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::BaseMultipartMessage::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::BaseMultipartMessage::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::BaseMultipartMessage::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::BaseMultipartMessage*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
