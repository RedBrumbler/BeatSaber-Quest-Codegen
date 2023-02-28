// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Including type: ISyncStateDeltaSerializable`1
#include "GlobalNamespace/ISyncStateDeltaSerializable_1.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardScoreSyncStateDeltaNetSerializable
  class StandardScoreSyncStateDeltaNetSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*, "", "StandardScoreSyncStateDeltaNetSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: StandardScoreSyncStateDeltaNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardScoreSyncStateDeltaNetSerializable : public ::Il2CppObject/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket, public ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*/ {
    public:
    public:
    // private StandardScoreSyncState _delta
    // Size: 0x14
    // Offset: 0x10
    ::GlobalNamespace::StandardScoreSyncState delta;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardScoreSyncState) == 0x14);
    // private SyncStateId <baseId>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    ::GlobalNamespace::SyncStateId baseId;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SyncStateId) == 0x1);
    // Padding between fields: baseId and: timeOffsetMs
    char __padding1[0x3] = {};
    // private System.Int32 <timeOffsetMs>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int timeOffsetMs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
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
    // Creating interface conversion operator: operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>
    operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Creating interface conversion operator: i_StandardScoreSyncState
    inline ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>* i_StandardScoreSyncState() noexcept {
      return reinterpret_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(this);
    }
    // Get instance field reference: private StandardScoreSyncState _delta
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardScoreSyncState& dyn__delta();
    // Get instance field reference: private SyncStateId <baseId>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SyncStateId& dyn_$baseId$k__BackingField();
    // Get instance field reference: private System.Int32 <timeOffsetMs>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$timeOffsetMs$k__BackingField();
    // static public IPacketPool`1<StandardScoreSyncStateDeltaNetSerializable> get_pool()
    // Offset: 0x26B8F60
    static ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* get_pool();
    // public SyncStateId get_baseId()
    // Offset: 0x26B8FA8
    ::GlobalNamespace::SyncStateId get_baseId();
    // public System.Void set_baseId(SyncStateId value)
    // Offset: 0x26B8FB0
    void set_baseId(::GlobalNamespace::SyncStateId value);
    // public System.Int32 get_timeOffsetMs()
    // Offset: 0x26B8FB8
    int get_timeOffsetMs();
    // public System.Void set_timeOffsetMs(System.Int32 value)
    // Offset: 0x26B8FC0
    void set_timeOffsetMs(int value);
    // public StandardScoreSyncState get_delta()
    // Offset: 0x26B8FC8
    ::GlobalNamespace::StandardScoreSyncState get_delta();
    // public System.Void set_delta(StandardScoreSyncState value)
    // Offset: 0x26B8FDC
    void set_delta(::GlobalNamespace::StandardScoreSyncState value);
    // public System.Void .ctor()
    // Offset: 0x26B9238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardScoreSyncStateDeltaNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardScoreSyncStateDeltaNetSerializable*, creationType>()));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x26B8FF0
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x26B90D8
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x26B917C
    void Release();
  }; // StandardScoreSyncStateDeltaNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(StandardScoreSyncStateDeltaNetSerializable), 40 + sizeof(int)> __GlobalNamespace_StandardScoreSyncStateDeltaNetSerializableSizeCheck;
  static_assert(sizeof(StandardScoreSyncStateDeltaNetSerializable) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* (*)()>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId
// Il2CppName: get_baseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_baseId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "get_baseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId
// Il2CppName: set_baseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::SyncStateId)>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_baseId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "SyncStateId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "set_baseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs
// Il2CppName: get_timeOffsetMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_timeOffsetMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "get_timeOffsetMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs
// Il2CppName: set_timeOffsetMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(int)>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_timeOffsetMs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "set_timeOffsetMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta
// Il2CppName: get_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::get_delta)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "get_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta
// Il2CppName: set_delta
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::GlobalNamespace::StandardScoreSyncState)>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::set_delta)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "StandardScoreSyncState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "set_delta", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::*)()>(&GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
