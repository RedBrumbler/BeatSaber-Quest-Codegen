// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Events::Event);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Events::Event*, "", "SteamVR_Events/Event");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Events/Event
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Events::Event : public ::UnityEngine::Events::UnityEvent {
    public:
    // public System.Void .ctor()
    // Offset: 0x18DAFA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Event* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Events::Event::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Event*, creationType>()));
    }
    // public System.Void Listen(UnityEngine.Events.UnityAction action)
    // Offset: 0x18DA334
    void Listen(::UnityEngine::Events::UnityAction* action);
    // public System.Void Remove(UnityEngine.Events.UnityAction action)
    // Offset: 0x18DA408
    void Remove(::UnityEngine::Events::UnityAction* action);
    // public System.Void Send()
    // Offset: 0x18DAFE4
    void Send();
  }; // SteamVR_Events/Event
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Event::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Event::Listen
// Il2CppName: Listen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::Event::*)(::UnityEngine::Events::UnityAction*)>(&GlobalNamespace::SteamVR_Events::Event::Listen)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::Event*), "Listen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Event::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::Event::*)(::UnityEngine::Events::UnityAction*)>(&GlobalNamespace::SteamVR_Events::Event::Remove)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::Event*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Events::Event::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Events::Event::*)()>(&GlobalNamespace::SteamVR_Events::Event::Send)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Events::Event*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
