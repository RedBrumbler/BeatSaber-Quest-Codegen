// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapSelectionView
  class BeatmapSelectionView;
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
  // Forward declaring type: ILevelGameplaySetupData
  class ILevelGameplaySetupData;
  // Forward declaring type: ILobbyPlayerData
  class ILobbyPlayerData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BaseMultiplayerStartGameCountdownViewController
  class BaseMultiplayerStartGameCountdownViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*, "", "BaseMultiplayerStartGameCountdownViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: BaseMultiplayerStartGameCountdownViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseMultiplayerStartGameCountdownViewController : public ::HMUI::ViewController {
    public:
    public:
    // private BeatmapSelectionView _beatmapSelectionView
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::BeatmapSelectionView* beatmapSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapSelectionView*) == 0x8);
    // private ModifiersSelectionView _modifiersSelectionView
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::ModifiersSelectionView* modifiersSelectionView;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ModifiersSelectionView*) == 0x8);
    // protected UnityEngine.UI.Toggle _spectateToggle
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::UI::Toggle* spectateToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action_1<bool>* playerActiveStateChangedEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<bool>*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x90
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    public:
    // Get instance field reference: private BeatmapSelectionView _beatmapSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapSelectionView*& dyn__beatmapSelectionView();
    // Get instance field reference: private ModifiersSelectionView _modifiersSelectionView
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ModifiersSelectionView*& dyn__modifiersSelectionView();
    // Get instance field reference: protected UnityEngine.UI.Toggle _spectateToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__spectateToggle();
    // Get instance field reference: private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<bool>*& dyn_playerActiveStateChangedEvent();
    // Get instance field reference: private readonly HMUI.ToggleBinder _toggleBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // public System.Void add_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13AA5D0
    void add_playerActiveStateChangedEvent(::System::Action_1<bool>* value);
    // public System.Void remove_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x13AA674
    void remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value);
    // public System.Void .ctor()
    // Offset: 0x13AAA18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMultiplayerStartGameCountdownViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMultiplayerStartGameCountdownViewController*, creationType>()));
    }
    // public System.Void SetLevelGameplaySetupData(ILevelGameplaySetupData levelGameplaySetupData)
    // Offset: 0x13AA718
    void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);
    // public System.Void SetLobbyPlayerData(ILobbyPlayerData lobbyPlayerData)
    // Offset: 0x13AA86C
    void SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);
    // private System.Void <DidActivate>b__9_0(System.Boolean value)
    // Offset: 0x13AAA80
    void $DidActivate$b__9_0(bool value);
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x13AA944
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x13AA9E0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // protected override System.Void OnDestroy()
    // Offset: 0x13AA9FC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::OnDestroy()
    void OnDestroy();
  }; // BaseMultiplayerStartGameCountdownViewController
  #pragma pack(pop)
  static check_size<sizeof(BaseMultiplayerStartGameCountdownViewController), 144 + sizeof(::HMUI::ToggleBinder*)> __GlobalNamespace_BaseMultiplayerStartGameCountdownViewControllerSizeCheck;
  static_assert(sizeof(BaseMultiplayerStartGameCountdownViewController) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::add_playerActiveStateChangedEvent
// Il2CppName: add_playerActiveStateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::add_playerActiveStateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "add_playerActiveStateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::remove_playerActiveStateChangedEvent
// Il2CppName: remove_playerActiveStateChangedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::remove_playerActiveStateChangedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "remove_playerActiveStateChangedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLevelGameplaySetupData
// Il2CppName: SetLevelGameplaySetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLevelGameplaySetupData)> {
  static const MethodInfo* get() {
    static auto* levelGameplaySetupData = &::il2cpp_utils::GetClassFromName("", "ILevelGameplaySetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "SetLevelGameplaySetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelGameplaySetupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLobbyPlayerData
// Il2CppName: SetLobbyPlayerData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(::GlobalNamespace::ILobbyPlayerData*)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::SetLobbyPlayerData)> {
  static const MethodInfo* get() {
    static auto* lobbyPlayerData = &::il2cpp_utils::GetClassFromName("", "ILobbyPlayerData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "SetLobbyPlayerData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobbyPlayerData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::$DidActivate$b__9_0
// Il2CppName: <DidActivate>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::$DidActivate$b__9_0)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "<DidActivate>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool, bool, bool)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidDeactivate
// Il2CppName: DidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)(bool, bool)>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::DidDeactivate)> {
  static const MethodInfo* get() {
    static auto* removedFromHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemDisabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{removedFromHierarchy, screenSystemDisabling});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::*)()>(&GlobalNamespace::BaseMultiplayerStartGameCountdownViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
