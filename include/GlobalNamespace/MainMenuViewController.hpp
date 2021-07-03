// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MusicPackPromoBanner
  class MusicPackPromoBanner;
  // Forward declaring type: DlcPromoExperimentModel
  class DlcPromoExperimentModel;
  // Forward declaring type: AppStaticSettingsSO
  class AppStaticSettingsSO;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Skipping declaration: MenuButton because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  #pragma pack(push, 1)
  // Autogenerated type: MainMenuViewController
  class MainMenuViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MainMenuViewController::MenuButton
    struct MenuButton;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MainMenuViewController/MenuButton
    struct MenuButton/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MainMenuViewController/MenuButton SoloFreePlay
      static constexpr const int SoloFreePlay = 0;
      // Get static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloFreePlay();
      // Set static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static void _set_SoloFreePlay(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Party
      static constexpr const int Party = 1;
      // Get static field: static public MainMenuViewController/MenuButton Party
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Party();
      // Set static field: static public MainMenuViewController/MenuButton Party
      static void _set_Party(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton BeatmapEditor
      static constexpr const int BeatmapEditor = 2;
      // Get static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static GlobalNamespace::MainMenuViewController::MenuButton _get_BeatmapEditor();
      // Set static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static void _set_BeatmapEditor(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton SoloCampaign
      static constexpr const int SoloCampaign = 3;
      // Get static field: static public MainMenuViewController/MenuButton SoloCampaign
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloCampaign();
      // Set static field: static public MainMenuViewController/MenuButton SoloCampaign
      static void _set_SoloCampaign(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton FloorAdjust
      static constexpr const int FloorAdjust = 4;
      // Get static field: static public MainMenuViewController/MenuButton FloorAdjust
      static GlobalNamespace::MainMenuViewController::MenuButton _get_FloorAdjust();
      // Set static field: static public MainMenuViewController/MenuButton FloorAdjust
      static void _set_FloorAdjust(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Quit
      static constexpr const int Quit = 5;
      // Get static field: static public MainMenuViewController/MenuButton Quit
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Quit();
      // Set static field: static public MainMenuViewController/MenuButton Quit
      static void _set_Quit(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Multiplayer
      static constexpr const int Multiplayer = 6;
      // Get static field: static public MainMenuViewController/MenuButton Multiplayer
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Multiplayer();
      // Set static field: static public MainMenuViewController/MenuButton Multiplayer
      static void _set_Multiplayer(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Options
      static constexpr const int Options = 7;
      // Get static field: static public MainMenuViewController/MenuButton Options
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Options();
      // Set static field: static public MainMenuViewController/MenuButton Options
      static void _set_Options(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton HowToPlay
      static constexpr const int HowToPlay = 8;
      // Get static field: static public MainMenuViewController/MenuButton HowToPlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_HowToPlay();
      // Set static field: static public MainMenuViewController/MenuButton HowToPlay
      static void _set_HowToPlay(GlobalNamespace::MainMenuViewController::MenuButton value);
    }; // MainMenuViewController/MenuButton
    #pragma pack(pop)
    static check_size<sizeof(MainMenuViewController::MenuButton), 0 + sizeof(int)> __GlobalNamespace_MainMenuViewController_MenuButtonSizeCheck;
    static_assert(sizeof(MainMenuViewController::MenuButton) == 0x4);
    // private UnityEngine.UI.Button _soloButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* soloButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _partyButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* partyButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _campaignButton
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::UI::Button* campaignButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _quitButton
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::UI::Button* quitButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _howToPlayButton
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::UI::Button* howToPlayButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _beatmapEditorButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Button* beatmapEditorButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _multiplayerButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Button* multiplayerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _optionsButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* optionsButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _musicPackPromoButton
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::UI::Button* musicPackPromoButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private MusicPackPromoBanner _musicPackPromoBanner
    // Size: 0x8
    // Offset: 0xB8
    GlobalNamespace::MusicPackPromoBanner* musicPackPromoBanner;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MusicPackPromoBanner*) == 0x8);
    // [InjectAttribute] Offset: 0xE25664
    // private readonly DlcPromoExperimentModel _dlcPromoExperimentModel
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE25674
    // private readonly AppStaticSettingsSO _appStaticSettings
    // Size: 0x8
    // Offset: 0xC8
    GlobalNamespace::AppStaticSettingsSO* appStaticSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AppStaticSettingsSO*) == 0x8);
    // [InjectAttribute] Offset: 0xE25684
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE25694
    // private System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> didFinishEvent
    // Size: 0x8
    // Offset: 0xD8
    System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE256A4
    // private System.Action`1<IBeatmapLevelPack> musicPackPromoButtonWasPressedEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_1<GlobalNamespace::IBeatmapLevelPack*>* musicPackPromoButtonWasPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // Creating value type constructor for type: MainMenuViewController
    MainMenuViewController(UnityEngine::UI::Button* soloButton_ = {}, UnityEngine::UI::Button* partyButton_ = {}, UnityEngine::UI::Button* campaignButton_ = {}, UnityEngine::UI::Button* quitButton_ = {}, UnityEngine::UI::Button* howToPlayButton_ = {}, UnityEngine::UI::Button* beatmapEditorButton_ = {}, UnityEngine::UI::Button* multiplayerButton_ = {}, UnityEngine::UI::Button* optionsButton_ = {}, UnityEngine::UI::Button* musicPackPromoButton_ = {}, GlobalNamespace::MusicPackPromoBanner* musicPackPromoBanner_ = {}, GlobalNamespace::DlcPromoExperimentModel* dlcPromoExperimentModel_ = {}, GlobalNamespace::AppStaticSettingsSO* appStaticSettings_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent_ = {}, System::Action_1<GlobalNamespace::IBeatmapLevelPack*>* musicPackPromoButtonWasPressedEvent_ = {}) noexcept : soloButton{soloButton_}, partyButton{partyButton_}, campaignButton{campaignButton_}, quitButton{quitButton_}, howToPlayButton{howToPlayButton_}, beatmapEditorButton{beatmapEditorButton_}, multiplayerButton{multiplayerButton_}, optionsButton{optionsButton_}, musicPackPromoButton{musicPackPromoButton_}, musicPackPromoBanner{musicPackPromoBanner_}, dlcPromoExperimentModel{dlcPromoExperimentModel_}, appStaticSettings{appStaticSettings_}, analyticsModel{analyticsModel_}, didFinishEvent{didFinishEvent_}, musicPackPromoButtonWasPressedEvent{musicPackPromoButtonWasPressedEvent_} {}
    // public System.Void add_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x2400734
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x2400FE4
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void add_musicPackPromoButtonWasPressedEvent(System.Action`1<IBeatmapLevelPack> value)
    // Offset: 0x24007D8
    void add_musicPackPromoButtonWasPressedEvent(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>* value);
    // public System.Void remove_musicPackPromoButtonWasPressedEvent(System.Action`1<IBeatmapLevelPack> value)
    // Offset: 0x2401088
    void remove_musicPackPromoButtonWasPressedEvent(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>* value);
    // private System.Void PackPromoButtonWasPressed()
    // Offset: 0x2403654
    void PackPromoButtonWasPressed();
    // private System.Void HandleMenuButton(MainMenuViewController/MenuButton menuButton)
    // Offset: 0x2403700
    void HandleMenuButton(GlobalNamespace::MainMenuViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__20_0()
    // Offset: 0x2403780
    void $DidActivate$b__20_0();
    // private System.Void <DidActivate>b__20_1()
    // Offset: 0x2403788
    void $DidActivate$b__20_1();
    // private System.Void <DidActivate>b__20_2()
    // Offset: 0x2403790
    void $DidActivate$b__20_2();
    // private System.Void <DidActivate>b__20_3()
    // Offset: 0x2403798
    void $DidActivate$b__20_3();
    // private System.Void <DidActivate>b__20_4()
    // Offset: 0x24037A0
    void $DidActivate$b__20_4();
    // private System.Void <DidActivate>b__20_5()
    // Offset: 0x24037A8
    void $DidActivate$b__20_5();
    // private System.Void <DidActivate>b__20_6()
    // Offset: 0x24037B0
    void $DidActivate$b__20_6();
    // private System.Void <DidActivate>b__20_7()
    // Offset: 0x24037B8
    void $DidActivate$b__20_7();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x24031E8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x2403778
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainMenuViewController*, creationType>()));
    }
  }; // MainMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(MainMenuViewController), 224 + sizeof(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*)> __GlobalNamespace_MainMenuViewControllerSizeCheck;
  static_assert(sizeof(MainMenuViewController) == 0xE8);
  // Writing MetadataGetter for method: MainMenuViewController::add_didFinishEvent
  // Il2CppName: add_didFinishEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*)>(&MainMenuViewController::add_didFinishEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::remove_didFinishEvent
  // Il2CppName: remove_didFinishEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*)>(&MainMenuViewController::remove_didFinishEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>*>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::add_musicPackPromoButtonWasPressedEvent
  // Il2CppName: add_musicPackPromoButtonWasPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*)>(&MainMenuViewController::add_musicPackPromoButtonWasPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "add_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent
  // Il2CppName: remove_musicPackPromoButtonWasPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*)>(&MainMenuViewController::remove_musicPackPromoButtonWasPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "remove_musicPackPromoButtonWasPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::IBeatmapLevelPack*>*>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::PackPromoButtonWasPressed
  // Il2CppName: PackPromoButtonWasPressed
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::PackPromoButtonWasPressed)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "PackPromoButtonWasPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::HandleMenuButton
  // Il2CppName: HandleMenuButton
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(GlobalNamespace::MainMenuViewController::MenuButton)>(&MainMenuViewController::HandleMenuButton)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "HandleMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::MainMenuViewController::MenuButton>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_0
  // Il2CppName: <DidActivate>b__20_0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_1
  // Il2CppName: <DidActivate>b__20_1
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_1)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_2
  // Il2CppName: <DidActivate>b__20_2
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_2)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_3
  // Il2CppName: <DidActivate>b__20_3
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_3)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_4
  // Il2CppName: <DidActivate>b__20_4
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_4)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_5
  // Il2CppName: <DidActivate>b__20_5
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_5)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_6
  // Il2CppName: <DidActivate>b__20_6
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_6)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_6", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::$DidActivate$b__20_7
  // Il2CppName: <DidActivate>b__20_7
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::$DidActivate$b__20_7)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "<DidActivate>b__20_7", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::DidActivate
  // Il2CppName: DidActivate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)(bool, bool, bool)>(&MainMenuViewController::DidActivate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: MainMenuViewController::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MainMenuViewController::*)()>(&MainMenuViewController::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(MainMenuViewController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController::MenuButton, "", "MainMenuViewController/MenuButton");
