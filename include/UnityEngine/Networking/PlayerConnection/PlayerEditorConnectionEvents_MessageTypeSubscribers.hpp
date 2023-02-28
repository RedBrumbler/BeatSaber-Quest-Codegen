// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
#include "UnityEngine/Networking/PlayerConnection/PlayerEditorConnectionEvents.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageTypeSubscribers
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerEditorConnectionEvents::MessageTypeSubscribers : public ::Il2CppObject {
    public:
    public:
    // private System.String m_messageTypeId
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_messageTypeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 subscriberCount
    // Size: 0x4
    // Offset: 0x18
    int subscriberCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: subscriberCount and: messageCallback
    char __padding1[0x4] = {};
    // public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageEvent messageCallback
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent* messageCallback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent*) == 0x8);
    public:
    // Get instance field reference: private System.String m_messageTypeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_messageTypeId();
    // Get instance field reference: public System.Int32 subscriberCount
    [[deprecated("Use field access instead!")]] int& dyn_subscriberCount();
    // Get instance field reference: public UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageEvent messageCallback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent*& dyn_messageCallback();
    // public System.Guid get_MessageTypeId()
    // Offset: 0x20FE388
    ::System::Guid get_MessageTypeId();
    // public System.Void set_MessageTypeId(System.Guid value)
    // Offset: 0x20FE4F0
    void set_MessageTypeId(::System::Guid value);
    // public System.Void .ctor()
    // Offset: 0x20FE488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerEditorConnectionEvents::MessageTypeSubscribers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerEditorConnectionEvents::MessageTypeSubscribers*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/UnityEngine.Networking.PlayerConnection.MessageTypeSubscribers
  #pragma pack(pop)
  static check_size<sizeof(PlayerEditorConnectionEvents::MessageTypeSubscribers), 32 + sizeof(::UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent*)> __UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_MessageTypeSubscribersSizeCheck;
  static_assert(sizeof(PlayerEditorConnectionEvents::MessageTypeSubscribers) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::get_MessageTypeId
// Il2CppName: get_MessageTypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::*)()>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::get_MessageTypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*), "get_MessageTypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::set_MessageTypeId
// Il2CppName: set_MessageTypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::*)(::System::Guid)>(&UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::set_MessageTypeId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers*), "set_MessageTypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageTypeSubscribers::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
