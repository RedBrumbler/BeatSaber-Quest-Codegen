// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MultiplayerSyncStateManager`5
#include "GlobalNamespace/MultiplayerSyncStateManager_5.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
// Including type: IScoreSyncStateManager
#include "GlobalNamespace/IScoreSyncStateManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
  // Forward declaring type: StandardScoreSyncStateDeltaNetSerializable
  class StandardScoreSyncStateDeltaNetSerializable;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Skipping declaration: MessageType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreSyncStateManager
  class ScoreSyncStateManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreSyncStateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreSyncStateManager*, "", "ScoreSyncStateManager");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ScoreSyncStateManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreSyncStateManager : public ::GlobalNamespace::MultiplayerSyncStateManager_5<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int, ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>/*, public ::GlobalNamespace::IScoreSyncStateManager*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IScoreSyncStateManager
    operator ::GlobalNamespace::IScoreSyncStateManager() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IScoreSyncStateManager*>(this);
    }
    // Creating interface conversion operator: i_IScoreSyncStateManager
    inline ::GlobalNamespace::IScoreSyncStateManager* i_IScoreSyncStateManager() noexcept {
      return reinterpret_cast<::GlobalNamespace::IScoreSyncStateManager*>(this);
    }
    // protected IPacketPool`1<StandardScoreSyncStateNetSerializable> get_serializablePool()
    // Offset: 0x148E96C
    ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_serializablePool();
    // protected IPacketPool`1<StandardScoreSyncStateDeltaNetSerializable> get_deltaSerializablePool()
    // Offset: 0x148E974
    ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* get_deltaSerializablePool();
    // protected System.Int32 Interpolate(System.Int32 prev, System.Single prevTime, System.Int32 curr, System.Single currTime, System.Single time)
    // Offset: 0x148E98C
    int Interpolate(int prev, float prevTime, int curr, float currTime, float time);
    // protected override System.Single get_deltaUpdateFrequency()
    // Offset: 0x148E948
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Single MultiplayerSyncStateManager_5::get_deltaUpdateFrequency()
    float get_deltaUpdateFrequency();
    // protected override System.Single get_fullStateUpdateFrequency()
    // Offset: 0x148E954
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Single MultiplayerSyncStateManager_5::get_fullStateUpdateFrequency()
    float get_fullStateUpdateFrequency();
    // protected override System.Int32 get_localBufferSize()
    // Offset: 0x148E95C
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Int32 MultiplayerSyncStateManager_5::get_localBufferSize()
    int get_localBufferSize();
    // protected override System.Int32 get_remoteBufferSize()
    // Offset: 0x148E964
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Int32 MultiplayerSyncStateManager_5::get_remoteBufferSize()
    int get_remoteBufferSize();
    // protected override MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0x148E97C
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: MultiplayerSessionManager/MessageType MultiplayerSyncStateManager_5::get_messageType()
    ::GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();
    // protected override MultiplayerSessionManager/MessageType get_deltaMessageType()
    // Offset: 0x148E984
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: MultiplayerSessionManager/MessageType MultiplayerSyncStateManager_5::get_deltaMessageType()
    ::GlobalNamespace::MultiplayerSessionManager_MessageType get_deltaMessageType();
    // public System.Void .ctor()
    // Offset: 0x148EAB8
    // Implemented from: MultiplayerSyncStateManager`5
    // Base method: System.Void MultiplayerSyncStateManager_5::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreSyncStateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreSyncStateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreSyncStateManager*, creationType>()));
    }
  }; // ScoreSyncStateManager
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_serializablePool
// Il2CppName: get_serializablePool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_serializablePool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_serializablePool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_deltaSerializablePool
// Il2CppName: get_deltaSerializablePool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::StandardScoreSyncStateDeltaNetSerializable*>* (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_deltaSerializablePool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_deltaSerializablePool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::Interpolate
// Il2CppName: Interpolate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreSyncStateManager::*)(int, float, int, float, float)>(&GlobalNamespace::ScoreSyncStateManager::Interpolate)> {
  static const MethodInfo* get() {
    static auto* prev = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* prevTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* currTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "Interpolate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prev, prevTime, curr, currTime, time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_deltaUpdateFrequency
// Il2CppName: get_deltaUpdateFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_deltaUpdateFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_deltaUpdateFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_fullStateUpdateFrequency
// Il2CppName: get_fullStateUpdateFrequency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_fullStateUpdateFrequency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_fullStateUpdateFrequency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_localBufferSize
// Il2CppName: get_localBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_localBufferSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_localBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_remoteBufferSize
// Il2CppName: get_remoteBufferSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_remoteBufferSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_remoteBufferSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_messageType
// Il2CppName: get_messageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerSessionManager_MessageType (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_messageType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_messageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::get_deltaMessageType
// Il2CppName: get_deltaMessageType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerSessionManager_MessageType (GlobalNamespace::ScoreSyncStateManager::*)()>(&GlobalNamespace::ScoreSyncStateManager::get_deltaMessageType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreSyncStateManager*), "get_deltaMessageType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreSyncStateManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
