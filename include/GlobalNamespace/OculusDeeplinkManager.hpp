// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IDeeplinkManager
#include "GlobalNamespace/IDeeplinkManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Deeplink
  class Deeplink;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: GroupPresenceJoinIntent
  class GroupPresenceJoinIntent;
  // Forward declaring type: LaunchDetails
  class LaunchDetails;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusDeeplinkManager
  class OculusDeeplinkManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusDeeplinkManager*, "", "OculusDeeplinkManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: OculusDeeplinkManager
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusDeeplinkManager : public ::Il2CppObject/*, public ::GlobalNamespace::IDeeplinkManager*/ {
    public:
    public:
    // private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::Deeplink*>*) == 0x8);
    // private Deeplink _currentDeeplink
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Deeplink* currentDeeplink;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Deeplink*) == 0x8);
    // private System.Boolean _oculusPlatformWasInitialized
    // Size: 0x1
    // Offset: 0x20
    bool oculusPlatformWasInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IDeeplinkManager
    operator ::GlobalNamespace::IDeeplinkManager() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IDeeplinkManager*>(this);
    }
    // Creating interface conversion operator: i_IDeeplinkManager
    inline ::GlobalNamespace::IDeeplinkManager* i_IDeeplinkManager() noexcept {
      return reinterpret_cast<::GlobalNamespace::IDeeplinkManager*>(this);
    }
    // Get instance field reference: private System.Action`1<Deeplink> didReceiveDeeplinkEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::Deeplink*>*& dyn_didReceiveDeeplinkEvent();
    // Get instance field reference: private Deeplink _currentDeeplink
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Deeplink*& dyn__currentDeeplink();
    // Get instance field reference: private System.Boolean _oculusPlatformWasInitialized
    [[deprecated("Use field access instead!")]] bool& dyn__oculusPlatformWasInitialized();
    // public Deeplink get_currentDeeplink()
    // Offset: 0x15BC6A0
    ::GlobalNamespace::Deeplink* get_currentDeeplink();
    // public System.Void add_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x15BC558
    void add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);
    // public System.Void remove_didReceiveDeeplinkEvent(System.Action`1<Deeplink> value)
    // Offset: 0x15BC5FC
    void remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);
    // public System.Void .ctor()
    // Offset: 0x15BCB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusDeeplinkManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusDeeplinkManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusDeeplinkManager*, creationType>()));
    }
    // public System.Void Init()
    // Offset: 0x15BC6A8
    void Init();
    // public System.Void OculusPlatformWasInitialized()
    // Offset: 0x15BC724
    void OculusPlatformWasInitialized();
    // private System.Void SetJoinIntentReceivedNotificationCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.GroupPresenceJoinIntent> message)
    // Offset: 0x15BC73C
    void SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message);
    // private System.Void UpdateDeeplinkMessage(Oculus.Platform.Models.GroupPresenceJoinIntent joinIntent, Oculus.Platform.Models.LaunchDetails launchDetails)
    // Offset: 0x15BC85C
    void UpdateDeeplinkMessage(::Oculus::Platform::Models::GroupPresenceJoinIntent* joinIntent, ::Oculus::Platform::Models::LaunchDetails* launchDetails);
    // private System.Boolean IsAtLeastOneFieldPopulated(Deeplink deeplink)
    // Offset: 0x15BCAB0
    bool IsAtLeastOneFieldPopulated(::GlobalNamespace::Deeplink* deeplink);
    // static public System.Void Log(System.String message)
    // Offset: 0x15BC7F4
    static void Log(::StringW message);
  }; // OculusDeeplinkManager
  #pragma pack(pop)
  static check_size<sizeof(OculusDeeplinkManager), 32 + sizeof(bool)> __GlobalNamespace_OculusDeeplinkManagerSizeCheck;
  static_assert(sizeof(OculusDeeplinkManager) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::get_currentDeeplink
// Il2CppName: get_currentDeeplink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Deeplink* (GlobalNamespace::OculusDeeplinkManager::*)()>(&GlobalNamespace::OculusDeeplinkManager::get_currentDeeplink)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "get_currentDeeplink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::add_didReceiveDeeplinkEvent
// Il2CppName: add_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::OculusDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "add_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::remove_didReceiveDeeplinkEvent
// Il2CppName: remove_didReceiveDeeplinkEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(&GlobalNamespace::OculusDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "Deeplink")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "remove_didReceiveDeeplinkEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)()>(&GlobalNamespace::OculusDeeplinkManager::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::OculusPlatformWasInitialized
// Il2CppName: OculusPlatformWasInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)()>(&GlobalNamespace::OculusDeeplinkManager::OculusPlatformWasInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "OculusPlatformWasInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::SetJoinIntentReceivedNotificationCallback
// Il2CppName: SetJoinIntentReceivedNotificationCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(&GlobalNamespace::OculusDeeplinkManager::SetJoinIntentReceivedNotificationCallback)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "GroupPresenceJoinIntent")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "SetJoinIntentReceivedNotificationCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::UpdateDeeplinkMessage
// Il2CppName: UpdateDeeplinkMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusDeeplinkManager::*)(::Oculus::Platform::Models::GroupPresenceJoinIntent*, ::Oculus::Platform::Models::LaunchDetails*)>(&GlobalNamespace::OculusDeeplinkManager::UpdateDeeplinkMessage)> {
  static const MethodInfo* get() {
    static auto* joinIntent = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "GroupPresenceJoinIntent")->byval_arg;
    static auto* launchDetails = &::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "LaunchDetails")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "UpdateDeeplinkMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{joinIntent, launchDetails});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::IsAtLeastOneFieldPopulated
// Il2CppName: IsAtLeastOneFieldPopulated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OculusDeeplinkManager::*)(::GlobalNamespace::Deeplink*)>(&GlobalNamespace::OculusDeeplinkManager::IsAtLeastOneFieldPopulated)> {
  static const MethodInfo* get() {
    static auto* deeplink = &::il2cpp_utils::GetClassFromName("", "Deeplink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "IsAtLeastOneFieldPopulated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deeplink});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeeplinkManager::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::OculusDeeplinkManager::Log)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeeplinkManager*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
