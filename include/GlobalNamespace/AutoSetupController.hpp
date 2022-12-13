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
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AutoSetupData
  class AutoSetupData;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AutoSetupController
  class AutoSetupController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AutoSetupController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutoSetupController*, "", "AutoSetupController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: AutoSetupController
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoSetupController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.UI.Button _closeButton
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Button* closeButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [HeaderAttribute] Offset: 0x1128FF0
    // private UnityEngine.UI.Toggle _selectBasedOnSuggestionsToggle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Toggle* selectBasedOnSuggestionsToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _autoStartWhenAllReadyToggle
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Toggle* autoStartWhenAllReadyToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _forceAutoStartAfterSongSelectionToggle
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Toggle* forceAutoStartAfterSongSelectionToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _randomSongIfNoneSuggestedToggle
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Toggle* randomSongIfNoneSuggestedToggle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Toggle*) == 0x8);
    // private System.Action`1<AutoSetupData> didFinishEvent
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::GlobalNamespace::AutoSetupData*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::AutoSetupData*>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x48
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x50
    ::HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ToggleBinder*) == 0x8);
    // private AutoSetupData _autoSetupData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::AutoSetupData* autoSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AutoSetupData*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _closeButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__closeButton();
    // Get instance field reference: private UnityEngine.UI.Toggle _selectBasedOnSuggestionsToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__selectBasedOnSuggestionsToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _autoStartWhenAllReadyToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__autoStartWhenAllReadyToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _forceAutoStartAfterSongSelectionToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__forceAutoStartAfterSongSelectionToggle();
    // Get instance field reference: private UnityEngine.UI.Toggle _randomSongIfNoneSuggestedToggle
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Toggle*& dyn__randomSongIfNoneSuggestedToggle();
    // Get instance field reference: private System.Action`1<AutoSetupData> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::AutoSetupData*>*& dyn_didFinishEvent();
    // Get instance field reference: private readonly HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private readonly HMUI.ToggleBinder _toggleBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ToggleBinder*& dyn__toggleBinder();
    // Get instance field reference: private AutoSetupData _autoSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AutoSetupData*& dyn__autoSetupData();
    // public System.Void add_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x15486E8
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<AutoSetupData> value)
    // Offset: 0x154878C
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::AutoSetupData*>* value);
    // public System.Void .ctor()
    // Offset: 0x1548A10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoSetupController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AutoSetupController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoSetupController*, creationType>()));
    }
    // public System.Void Setup(AutoSetupData autoSetupData)
    // Offset: 0x1548830
    void Setup(::GlobalNamespace::AutoSetupData* autoSetupData);
    // protected System.Void OnEnable()
    // Offset: 0x1548838
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x15489F4
    void OnDisable();
    // private System.Void <OnEnable>b__12_0()
    // Offset: 0x1548AC0
    void $OnEnable$b__12_0();
    // private System.Void <OnEnable>b__12_1(System.Boolean isOn)
    // Offset: 0x1548B24
    void $OnEnable$b__12_1(bool isOn);
    // private System.Void <OnEnable>b__12_2(System.Boolean isOn)
    // Offset: 0x1548B44
    void $OnEnable$b__12_2(bool isOn);
    // private System.Void <OnEnable>b__12_3(System.Boolean isOn)
    // Offset: 0x1548B64
    void $OnEnable$b__12_3(bool isOn);
    // private System.Void <OnEnable>b__12_4(System.Boolean isOn)
    // Offset: 0x1548B84
    void $OnEnable$b__12_4(bool isOn);
  }; // AutoSetupController
  #pragma pack(pop)
  static check_size<sizeof(AutoSetupController), 88 + sizeof(::GlobalNamespace::AutoSetupData*)> __GlobalNamespace_AutoSetupControllerSizeCheck;
  static_assert(sizeof(AutoSetupController) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(::System::Action_1<::GlobalNamespace::AutoSetupData*>*)>(&GlobalNamespace::AutoSetupController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AutoSetupData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(::System::Action_1<::GlobalNamespace::AutoSetupData*>*)>(&GlobalNamespace::AutoSetupController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AutoSetupData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(::GlobalNamespace::AutoSetupData*)>(&GlobalNamespace::AutoSetupController::Setup)> {
  static const MethodInfo* get() {
    static auto* autoSetupData = &::il2cpp_utils::GetClassFromName("", "AutoSetupData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{autoSetupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)()>(&GlobalNamespace::AutoSetupController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)()>(&GlobalNamespace::AutoSetupController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_0
// Il2CppName: <OnEnable>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)()>(&GlobalNamespace::AutoSetupController::$OnEnable$b__12_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "<OnEnable>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_1
// Il2CppName: <OnEnable>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(bool)>(&GlobalNamespace::AutoSetupController::$OnEnable$b__12_1)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "<OnEnable>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_2
// Il2CppName: <OnEnable>b__12_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(bool)>(&GlobalNamespace::AutoSetupController::$OnEnable$b__12_2)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "<OnEnable>b__12_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_3
// Il2CppName: <OnEnable>b__12_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(bool)>(&GlobalNamespace::AutoSetupController::$OnEnable$b__12_3)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "<OnEnable>b__12_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutoSetupController::$OnEnable$b__12_4
// Il2CppName: <OnEnable>b__12_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutoSetupController::*)(bool)>(&GlobalNamespace::AutoSetupController::$OnEnable$b__12_4)> {
  static const MethodInfo* get() {
    static auto* isOn = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutoSetupController*), "<OnEnable>b__12_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isOn});
  }
};
