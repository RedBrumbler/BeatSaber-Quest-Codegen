// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LoadingControl
  class LoadingControl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LoadingControl);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadingControl*, "", "LoadingControl");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: LoadingControl
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadingControl : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.GameObject _loadingContainer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* loadingContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _loadingText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* loadingText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0x1127250
    // private TMPro.TextMeshProUGUI _refreshText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* refreshText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _refreshButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* refreshButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.GameObject _refreshContainer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* refreshContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0x11272A8
    // private UnityEngine.GameObject _downloadingContainer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* downloadingContainer;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _downloadingText
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshProUGUI* downloadingText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _donwloadingProgressImage
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Image* donwloadingProgressImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Action didPressRefreshButtonEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action* didPressRefreshButtonEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _loadingContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__loadingContainer();
    // Get instance field reference: private TMPro.TextMeshProUGUI _loadingText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__loadingText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _refreshText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__refreshText();
    // Get instance field reference: private UnityEngine.UI.Button _refreshButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__refreshButton();
    // Get instance field reference: private UnityEngine.GameObject _refreshContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__refreshContainer();
    // Get instance field reference: private UnityEngine.GameObject _downloadingContainer
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__downloadingContainer();
    // Get instance field reference: private TMPro.TextMeshProUGUI _downloadingText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__downloadingText();
    // Get instance field reference: private UnityEngine.UI.Image _donwloadingProgressImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__donwloadingProgressImage();
    // Get instance field reference: private System.Action didPressRefreshButtonEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPressRefreshButtonEvent();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // public System.Boolean get_isLoading()
    // Offset: 0x15B3C18
    bool get_isLoading();
    // public System.Void add_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0x15B3AD0
    void add_didPressRefreshButtonEvent(::System::Action* value);
    // public System.Void remove_didPressRefreshButtonEvent(System.Action value)
    // Offset: 0x15B3B74
    void remove_didPressRefreshButtonEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x15B3F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadingControl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LoadingControl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadingControl*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x15B3C34
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x15B3CE4
    void OnDestroy();
    // public System.Void ShowLoading(System.String text)
    // Offset: 0x15B3D00
    void ShowLoading(::StringW text);
    // public System.Void ShowText(System.String text, System.Boolean showRefreshButton)
    // Offset: 0x15B3D88
    void ShowText(::StringW text, bool showRefreshButton);
    // public System.Void ShowDownloadingProgress(System.String text, System.Single downloadingProgress)
    // Offset: 0x15B3E3C
    void ShowDownloadingProgress(::StringW text, float downloadingProgress);
    // public System.Void Hide()
    // Offset: 0x15B3EE4
    void Hide();
    // private System.Void <Awake>b__14_0()
    // Offset: 0x15B3F14
    void $Awake$b__14_0();
  }; // LoadingControl
  #pragma pack(pop)
  static check_size<sizeof(LoadingControl), 96 + sizeof(::HMUI::ButtonBinder*)> __GlobalNamespace_LoadingControlSizeCheck;
  static_assert(sizeof(LoadingControl) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::get_isLoading
// Il2CppName: get_isLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::get_isLoading)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "get_isLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent
// Il2CppName: add_didPressRefreshButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::System::Action*)>(&GlobalNamespace::LoadingControl::add_didPressRefreshButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "add_didPressRefreshButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent
// Il2CppName: remove_didPressRefreshButtonEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::System::Action*)>(&GlobalNamespace::LoadingControl::remove_didPressRefreshButtonEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "remove_didPressRefreshButtonEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowLoading
// Il2CppName: ShowLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::StringW)>(&GlobalNamespace::LoadingControl::ShowLoading)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowText
// Il2CppName: ShowText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::StringW, bool)>(&GlobalNamespace::LoadingControl::ShowText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* showRefreshButton = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, showRefreshButton});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::ShowDownloadingProgress
// Il2CppName: ShowDownloadingProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)(::StringW, float)>(&GlobalNamespace::LoadingControl::ShowDownloadingProgress)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* downloadingProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "ShowDownloadingProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, downloadingProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::Hide
// Il2CppName: Hide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::Hide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "Hide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingControl::$Awake$b__14_0
// Il2CppName: <Awake>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LoadingControl::*)()>(&GlobalNamespace::LoadingControl::$Awake$b__14_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingControl*), "<Awake>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
