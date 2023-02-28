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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolManager
  class RecordingToolManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RecordingToolSettingsViewController
  class RecordingToolSettingsViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsViewController*, "", "RecordingToolSettingsViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolSettingsViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolSettingsViewController : public ::HMUI::ViewController {
    public:
    public:
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private HMUI.TextPageScrollView _textPageScrollView
    // Size: 0x8
    // Offset: 0x78
    ::HMUI::TextPageScrollView* textPageScrollView;
    // Field size check
    static_assert(sizeof(::HMUI::TextPageScrollView*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0x113121C
    // private readonly RecordingToolManager _recordingToolManager
    // Size: 0x8
    // Offset: 0x80
    ::GlobalNamespace::RecordingToolManager* recordingToolManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RecordingToolManager*) == 0x8);
    // private System.Action didFinishEvent
    // Size: 0x8
    // Offset: 0x88
    ::System::Action* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UI.Button _continueButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__continueButton();
    // Get instance field reference: private HMUI.TextPageScrollView _textPageScrollView
    [[deprecated("Use field access instead!")]] ::HMUI::TextPageScrollView*& dyn__textPageScrollView();
    // Get instance field reference: private readonly RecordingToolManager _recordingToolManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RecordingToolManager*& dyn__recordingToolManager();
    // Get instance field reference: private System.Action didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didFinishEvent();
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0x14640F0
    void add_didFinishEvent(::System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0x1464234
    void remove_didFinishEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x14644B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolSettingsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolSettingsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolSettingsViewController*, creationType>()));
    }
    // private System.Void <DidActivate>b__6_0()
    // Offset: 0x14644B8
    void $DidActivate$b__6_0();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x14643B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
  }; // RecordingToolSettingsViewController
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolSettingsViewController), 136 + sizeof(::System::Action*)> __GlobalNamespace_RecordingToolSettingsViewControllerSizeCheck;
  static_assert(sizeof(RecordingToolSettingsViewController) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsViewController::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsViewController::*)(::System::Action*)>(&GlobalNamespace::RecordingToolSettingsViewController::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsViewController::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsViewController::*)(::System::Action*)>(&GlobalNamespace::RecordingToolSettingsViewController::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsViewController::$DidActivate$b__6_0
// Il2CppName: <DidActivate>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsViewController::*)()>(&GlobalNamespace::RecordingToolSettingsViewController::$DidActivate$b__6_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsViewController*), "<DidActivate>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolSettingsViewController::DidActivate
// Il2CppName: DidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RecordingToolSettingsViewController::*)(bool, bool, bool)>(&GlobalNamespace::RecordingToolSettingsViewController::DidActivate)> {
  static const MethodInfo* get() {
    static auto* firstActivation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* addedToHierarchy = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* screenSystemEnabling = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RecordingToolSettingsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{firstActivation, addedToHierarchy, screenSystemEnabling});
  }
};
