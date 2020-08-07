// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HealthWarningViewController
  class HealthWarningViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _continueButton
    // Offset: 0x68
    UnityEngine::UI::Button* continueButton;
    // private UnityEngine.UI.Button _privacyPolicyButton
    // Offset: 0x70
    UnityEngine::UI::Button* privacyPolicyButton;
    // private UnityEngine.UI.Button _openDataPrivacyPageButton
    // Offset: 0x78
    UnityEngine::UI::Button* openDataPrivacyPageButton;
    // private UnityEngine.GameObject _privacyAgreeToPrivacyPolicyLabel
    // Offset: 0x80
    UnityEngine::GameObject* privacyAgreeToPrivacyPolicyLabel;
    // private IAnalyticsModel _analyticsModel
    // Offset: 0x88
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // private AppStaticSettingsSO _appStaticSettings
    // Offset: 0x90
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // private System.Action privacyPolicyButtonPressedEvent
    // Offset: 0x98
    System::Action* privacyPolicyButtonPressedEvent;
    // private System.Action openDataPrivacyPageButtonPressedEvent
    // Offset: 0xA0
    System::Action* openDataPrivacyPageButtonPressedEvent;
    // private System.Action didFinishEvent
    // Offset: 0xA8
    System::Action* didFinishEvent;
    // public System.Void add_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0xB42FF4
    void add_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void remove_privacyPolicyButtonPressedEvent(System.Action value)
    // Offset: 0xB43384
    void remove_privacyPolicyButtonPressedEvent(System::Action* value);
    // public System.Void add_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0xB43098
    void add_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void remove_openDataPrivacyPageButtonPressedEvent(System.Action value)
    // Offset: 0xB43428
    void remove_openDataPrivacyPageButtonPressedEvent(System::Action* value);
    // public System.Void add_didFinishEvent(System.Action value)
    // Offset: 0xB42F50
    void add_didFinishEvent(System::Action* value);
    // public System.Void remove_didFinishEvent(System.Action value)
    // Offset: 0xB432E0
    void remove_didFinishEvent(System::Action* value);
    // private System.Void <DidActivate>b__15_0()
    // Offset: 0xB43F58
    void $DidActivate$b__15_0();
    // private System.Void <DidActivate>b__15_1()
    // Offset: 0xB43F6C
    void $DidActivate$b__15_1();
    // private System.Void <DidActivate>b__15_2()
    // Offset: 0xB43F80
    void $DidActivate$b__15_2();
    // protected override System.Void DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    // Offset: 0xB43CB8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, HMUI.ViewController/ActivationType activationType)
    void DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType);
    // public System.Void .ctor()
    // Offset: 0xB43F50
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HealthWarningViewController* New_ctor();
  }; // HealthWarningViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HealthWarningViewController*, "", "HealthWarningViewController");
#pragma pack(pop)