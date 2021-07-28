// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerLobbyPermissionConfigurationNetSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerLobbyPermissionConfigurationNetSerializable : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // private System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _isServerOwner
    // Size: 0x1
    // Offset: 0x18
    bool isServerOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasRecommendBeatmapsPermission
    // Size: 0x1
    // Offset: 0x19
    bool hasRecommendBeatmapsPermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasRecommendGameplayModifiersPermission
    // Size: 0x1
    // Offset: 0x1A
    bool hasRecommendGameplayModifiersPermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasKickVotePermission
    // Size: 0x1
    // Offset: 0x1B
    bool hasKickVotePermission;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerLobbyPermissionConfigurationNetSerializable
    PlayerLobbyPermissionConfigurationNetSerializable(::Il2CppString* userId_ = {}, bool isServerOwner_ = {}, bool hasRecommendBeatmapsPermission_ = {}, bool hasRecommendGameplayModifiersPermission_ = {}, bool hasKickVotePermission_ = {}) noexcept : userId{userId_}, isServerOwner{isServerOwner_}, hasRecommendBeatmapsPermission{hasRecommendBeatmapsPermission_}, hasRecommendGameplayModifiersPermission{hasRecommendGameplayModifiersPermission_}, hasKickVotePermission{hasKickVotePermission_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Get instance field: private System.String _userId
    ::Il2CppString* _get__userId();
    // Set instance field: private System.String _userId
    void _set__userId(::Il2CppString* value);
    // Get instance field: private System.Boolean _isServerOwner
    bool _get__isServerOwner();
    // Set instance field: private System.Boolean _isServerOwner
    void _set__isServerOwner(bool value);
    // Get instance field: private System.Boolean _hasRecommendBeatmapsPermission
    bool _get__hasRecommendBeatmapsPermission();
    // Set instance field: private System.Boolean _hasRecommendBeatmapsPermission
    void _set__hasRecommendBeatmapsPermission(bool value);
    // Get instance field: private System.Boolean _hasRecommendGameplayModifiersPermission
    bool _get__hasRecommendGameplayModifiersPermission();
    // Set instance field: private System.Boolean _hasRecommendGameplayModifiersPermission
    void _set__hasRecommendGameplayModifiersPermission(bool value);
    // Get instance field: private System.Boolean _hasKickVotePermission
    bool _get__hasKickVotePermission();
    // Set instance field: private System.Boolean _hasKickVotePermission
    void _set__hasKickVotePermission(bool value);
    // public System.String get_userId()
    // Offset: 0x23DC190
    ::Il2CppString* get_userId();
    // public System.Boolean get_isServerOwner()
    // Offset: 0x23DC198
    bool get_isServerOwner();
    // public System.Boolean get_hasRecommendBeatmapsPermission()
    // Offset: 0x23DC1A0
    bool get_hasRecommendBeatmapsPermission();
    // public System.Boolean get_hasRecommendGameplayModifiersPermission()
    // Offset: 0x23DC1A8
    bool get_hasRecommendGameplayModifiersPermission();
    // public System.Boolean get_hasKickVotePermission()
    // Offset: 0x23DC1B0
    bool get_hasKickVotePermission();
    // public System.Void .ctor(System.String userId, System.Boolean isServerOwner, System.Boolean hasRecommendBeatmapsPermission, System.Boolean hasRecommendGameplayModifiersPermission, System.Boolean hasKickVotePermission)
    // Offset: 0x23DC1B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLobbyPermissionConfigurationNetSerializable* New_ctor(::Il2CppString* userId, bool isServerOwner, bool hasRecommendBeatmapsPermission, bool hasRecommendGameplayModifiersPermission, bool hasKickVotePermission) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLobbyPermissionConfigurationNetSerializable*, creationType>(userId, isServerOwner, hasRecommendBeatmapsPermission, hasRecommendGameplayModifiersPermission, hasKickVotePermission)));
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x23DC22C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23DC2A0
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x23DC224
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerLobbyPermissionConfigurationNetSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerLobbyPermissionConfigurationNetSerializable*, creationType>()));
    }
  }; // PlayerLobbyPermissionConfigurationNetSerializable
  #pragma pack(pop)
  static check_size<sizeof(PlayerLobbyPermissionConfigurationNetSerializable), 27 + sizeof(bool)> __GlobalNamespace_PlayerLobbyPermissionConfigurationNetSerializableSizeCheck;
  static_assert(sizeof(PlayerLobbyPermissionConfigurationNetSerializable) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*, "", "PlayerLobbyPermissionConfigurationNetSerializable");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_userId
// Il2CppName: get_userId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_userId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "get_userId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_isServerOwner
// Il2CppName: get_isServerOwner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_isServerOwner)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "get_isServerOwner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendBeatmapsPermission
// Il2CppName: get_hasRecommendBeatmapsPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendBeatmapsPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "get_hasRecommendBeatmapsPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendGameplayModifiersPermission
// Il2CppName: get_hasRecommendGameplayModifiersPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasRecommendGameplayModifiersPermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "get_hasRecommendGameplayModifiersPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasKickVotePermission
// Il2CppName: get_hasKickVotePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)()>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::get_hasKickVotePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "get_hasKickVotePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)(LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::*)(LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!