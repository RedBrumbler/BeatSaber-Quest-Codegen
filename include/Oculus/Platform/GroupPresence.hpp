// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: InviteOptions
  class InviteOptions;
  // Forward declaring type: RosterOptions
  class RosterOptions;
  // Forward declaring type: GroupPresenceOptions
  class GroupPresenceOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: InvitePanelResultInfo
  class InvitePanelResultInfo;
  // Forward declaring type: LaunchInvitePanelFlowResult
  class LaunchInvitePanelFlowResult;
  // Forward declaring type: GroupPresenceJoinIntent
  class GroupPresenceJoinIntent;
  // Forward declaring type: GroupPresenceLeaveIntent
  class GroupPresenceLeaveIntent;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: GroupPresence
  class GroupPresence;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::GroupPresence);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::GroupPresence*, "Oculus.Platform", "GroupPresence");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.GroupPresence
  // [TokenAttribute] Offset: FFFFFFFF
  class GroupPresence : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request Clear()
    // Offset: 0x1A33DCC
    static ::Oculus::Platform::Request* Clear();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.InvitePanelResultInfo> LaunchInvitePanel(Oculus.Platform.InviteOptions options)
    // Offset: 0x1A33ED0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* LaunchInvitePanel(::Oculus::Platform::InviteOptions* options);
    // static public Oculus.Platform.Request LaunchRosterPanel(Oculus.Platform.RosterOptions options)
    // Offset: 0x1A34068
    static ::Oculus::Platform::Request* LaunchRosterPanel(::Oculus::Platform::RosterOptions* options);
    // static public Oculus.Platform.Request Set(Oculus.Platform.GroupPresenceOptions groupPresenceOptions)
    // Offset: 0x1A34190
    static ::Oculus::Platform::Request* Set(::Oculus::Platform::GroupPresenceOptions* groupPresenceOptions);
    // static public Oculus.Platform.Request SetDestination(System.String api_name)
    // Offset: 0x1A34320
    static ::Oculus::Platform::Request* SetDestination(::StringW api_name);
    // static public Oculus.Platform.Request SetIsJoinable(System.Boolean is_joinable)
    // Offset: 0x1A34434
    static ::Oculus::Platform::Request* SetIsJoinable(bool is_joinable);
    // static public Oculus.Platform.Request SetLobbySession(System.String id)
    // Offset: 0x1A34548
    static ::Oculus::Platform::Request* SetLobbySession(::StringW id);
    // static public Oculus.Platform.Request SetMatchSession(System.String id)
    // Offset: 0x1A3465C
    static ::Oculus::Platform::Request* SetMatchSession(::StringW id);
    // static public System.Void SetInvitationsSentNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.LaunchInvitePanelFlowResult> callback)
    // Offset: 0x1A34770
    static void SetInvitationsSentNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchInvitePanelFlowResult*>::Callback* callback);
    // static public System.Void SetJoinIntentReceivedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.GroupPresenceJoinIntent> callback)
    // Offset: 0x1A347E8
    static void SetJoinIntentReceivedNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>::Callback* callback);
    // static public System.Void SetLeaveIntentReceivedNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.GroupPresenceLeaveIntent> callback)
    // Offset: 0x1A34860
    static void SetLeaveIntentReceivedNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceLeaveIntent*>::Callback* callback);
  }; // Oculus.Platform.GroupPresence
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&Oculus::Platform::GroupPresence::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::LaunchInvitePanel
// Il2CppName: LaunchInvitePanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::InvitePanelResultInfo*>* (*)(::Oculus::Platform::InviteOptions*)>(&Oculus::Platform::GroupPresence::LaunchInvitePanel)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "InviteOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "LaunchInvitePanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::LaunchRosterPanel
// Il2CppName: LaunchRosterPanel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::RosterOptions*)>(&Oculus::Platform::GroupPresence::LaunchRosterPanel)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RosterOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "LaunchRosterPanel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::GroupPresenceOptions*)>(&Oculus::Platform::GroupPresence::Set)> {
  static const MethodInfo* get() {
    static auto* groupPresenceOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "GroupPresenceOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupPresenceOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetDestination
// Il2CppName: SetDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&Oculus::Platform::GroupPresence::SetDestination)> {
  static const MethodInfo* get() {
    static auto* api_name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "SetDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{api_name});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetIsJoinable
// Il2CppName: SetIsJoinable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(bool)>(&Oculus::Platform::GroupPresence::SetIsJoinable)> {
  static const MethodInfo* get() {
    static auto* is_joinable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "SetIsJoinable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{is_joinable});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetLobbySession
// Il2CppName: SetLobbySession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&Oculus::Platform::GroupPresence::SetLobbySession)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "SetLobbySession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetMatchSession
// Il2CppName: SetMatchSession
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::StringW)>(&Oculus::Platform::GroupPresence::SetMatchSession)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::GroupPresence*), "SetMatchSession", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetInvitationsSentNotificationCallback
// Il2CppName: SetInvitationsSentNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetJoinIntentReceivedNotificationCallback
// Il2CppName: SetJoinIntentReceivedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::GroupPresence::SetLeaveIntentReceivedNotificationCallback
// Il2CppName: SetLeaveIntentReceivedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
