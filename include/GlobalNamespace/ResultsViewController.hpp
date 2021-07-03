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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: FireworksController
  class FireworksController;
  // Forward declaring type: SongPreviewPlayer
  class SongPreviewPlayer;
  // Forward declaring type: ResultsEnvironmentManager
  class ResultsEnvironmentManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x112
  #pragma pack(push, 1)
  // Autogenerated type: ResultsViewController
  class ResultsViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::ResultsViewController::$StartFireworksAfterDelay$d__31
    class $StartFireworksAfterDelay$d__31;
    // private UnityEngine.UI.Button _restartButton
    // Size: 0x8
    // Offset: 0x70
    UnityEngine::UI::Button* restartButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _continueButton
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::UI::Button* continueButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26818
    // private UnityEngine.GameObject _clearedPanel
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* clearedPanel;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _scoreText
    // Size: 0x8
    // Offset: 0x88
    TMPro::TextMeshProUGUI* scoreText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.GameObject _newHighScoreText
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::GameObject* newHighScoreText;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private TMPro.TextMeshProUGUI _rankText
    // Size: 0x8
    // Offset: 0x98
    TMPro::TextMeshProUGUI* rankText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _goodCutsPercentageText
    // Size: 0x8
    // Offset: 0xA0
    TMPro::TextMeshProUGUI* goodCutsPercentageText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0xA8
    TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xE268A0
    // private UnityEngine.GameObject _clearedBannerGo
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::GameObject* clearedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _failedBannerGo
    // Size: 0x8
    // Offset: 0xB8
    UnityEngine::GameObject* failedBannerGo;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [SpaceAttribute] Offset: 0xE268E8
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0xC0
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // [SpaceAttribute] Offset: 0xE26920
    // private UnityEngine.AudioClip _levelClearedAudioClip
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::AudioClip* levelClearedAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectAttribute] Offset: 0xE26958
    // private readonly FireworksController _fireworksController
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::FireworksController* fireworksController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworksController*) == 0x8);
    // [InjectAttribute] Offset: 0xE26968
    // private readonly SongPreviewPlayer _songPreviewPlayer
    // Size: 0x8
    // Offset: 0xD8
    GlobalNamespace::SongPreviewPlayer* songPreviewPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPreviewPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0xE26978
    // private readonly ResultsEnvironmentManager _resultsEnvironmentManager
    // Size: 0x8
    // Offset: 0xE0
    GlobalNamespace::ResultsEnvironmentManager* resultsEnvironmentManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsEnvironmentManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26988
    // private System.Action`1<ResultsViewController> continueButtonPressedEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action_1<GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ResultsViewController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE26998
    // private System.Action`1<ResultsViewController> restartButtonPressedEvent
    // Size: 0x8
    // Offset: 0xF0
    System::Action_1<GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::ResultsViewController*>*) == 0x8);
    // private LevelCompletionResults _levelCompletionResults
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCompletionResults*) == 0x8);
    // private IDifficultyBeatmap _difficultyBeatmap
    // Size: 0x8
    // Offset: 0x100
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IDifficultyBeatmap*) == 0x8);
    // private UnityEngine.Coroutine _startFireworksAfterDelayCoroutine
    // Size: 0x8
    // Offset: 0x108
    UnityEngine::Coroutine* startFireworksAfterDelayCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // private System.Boolean _newHighScore
    // Size: 0x1
    // Offset: 0x110
    bool newHighScore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _practice
    // Size: 0x1
    // Offset: 0x111
    bool practice;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ResultsViewController
    ResultsViewController(UnityEngine::UI::Button* restartButton_ = {}, UnityEngine::UI::Button* continueButton_ = {}, UnityEngine::GameObject* clearedPanel_ = {}, TMPro::TextMeshProUGUI* scoreText_ = {}, UnityEngine::GameObject* newHighScoreText_ = {}, TMPro::TextMeshProUGUI* rankText_ = {}, TMPro::TextMeshProUGUI* goodCutsPercentageText_ = {}, TMPro::TextMeshProUGUI* comboText_ = {}, UnityEngine::GameObject* clearedBannerGo_ = {}, UnityEngine::GameObject* failedBannerGo_ = {}, GlobalNamespace::LevelBar* levelBar_ = {}, UnityEngine::AudioClip* levelClearedAudioClip_ = {}, GlobalNamespace::FireworksController* fireworksController_ = {}, GlobalNamespace::SongPreviewPlayer* songPreviewPlayer_ = {}, GlobalNamespace::ResultsEnvironmentManager* resultsEnvironmentManager_ = {}, System::Action_1<GlobalNamespace::ResultsViewController*>* continueButtonPressedEvent_ = {}, System::Action_1<GlobalNamespace::ResultsViewController*>* restartButtonPressedEvent_ = {}, GlobalNamespace::LevelCompletionResults* levelCompletionResults_ = {}, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap_ = {}, UnityEngine::Coroutine* startFireworksAfterDelayCoroutine_ = {}, bool newHighScore_ = {}, bool practice_ = {}) noexcept : restartButton{restartButton_}, continueButton{continueButton_}, clearedPanel{clearedPanel_}, scoreText{scoreText_}, newHighScoreText{newHighScoreText_}, rankText{rankText_}, goodCutsPercentageText{goodCutsPercentageText_}, comboText{comboText_}, clearedBannerGo{clearedBannerGo_}, failedBannerGo{failedBannerGo_}, levelBar{levelBar_}, levelClearedAudioClip{levelClearedAudioClip_}, fireworksController{fireworksController_}, songPreviewPlayer{songPreviewPlayer_}, resultsEnvironmentManager{resultsEnvironmentManager_}, continueButtonPressedEvent{continueButtonPressedEvent_}, restartButtonPressedEvent{restartButtonPressedEvent_}, levelCompletionResults{levelCompletionResults_}, difficultyBeatmap{difficultyBeatmap_}, startFireworksAfterDelayCoroutine{startFireworksAfterDelayCoroutine_}, newHighScore{newHighScore_}, practice{practice_} {}
    // public System.Void add_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10B0400
    void add_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_continueButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10B04A4
    void remove_continueButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void add_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10B0548
    void add_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Void remove_restartButtonPressedEvent(System.Action`1<ResultsViewController> value)
    // Offset: 0x10B05EC
    void remove_restartButtonPressedEvent(System::Action_1<GlobalNamespace::ResultsViewController*>* value);
    // public System.Boolean get_practice()
    // Offset: 0x10B0690
    bool get_practice();
    // public System.Void Init(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap, System.Boolean practice, System.Boolean newHighScore)
    // Offset: 0x10B0698
    void Init(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore);
    // private System.Collections.IEnumerator StartFireworksAfterDelay(System.Single delay)
    // Offset: 0x10B1144
    System::Collections::IEnumerator* StartFireworksAfterDelay(float delay);
    // private System.Void SetDataToUI()
    // Offset: 0x10B0850
    void SetDataToUI();
    // private System.Void EnableResultsEnvironmentController()
    // Offset: 0x10B0D94
    void EnableResultsEnvironmentController();
    // private System.Void DisableResultEnvironmentController()
    // Offset: 0x10B12A0
    void DisableResultEnvironmentController();
    // private System.Void ContinueButtonPressed()
    // Offset: 0x10B1594
    void ContinueButtonPressed();
    // private System.Void RestartButtonPressed()
    // Offset: 0x10B1600
    void RestartButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x10B06B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x10B11C4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x10B166C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsViewController*, creationType>()));
    }
  }; // ResultsViewController
  #pragma pack(pop)
  static check_size<sizeof(ResultsViewController), 273 + sizeof(bool)> __GlobalNamespace_ResultsViewControllerSizeCheck;
  static_assert(sizeof(ResultsViewController) == 0x112);
  // Writing MetadataGetter for method: ResultsViewController::add_continueButtonPressedEvent
  // Il2CppName: add_continueButtonPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(System::Action_1<GlobalNamespace::ResultsViewController*>*)>(&ResultsViewController::add_continueButtonPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "add_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::ResultsViewController*>*>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::remove_continueButtonPressedEvent
  // Il2CppName: remove_continueButtonPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(System::Action_1<GlobalNamespace::ResultsViewController*>*)>(&ResultsViewController::remove_continueButtonPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "remove_continueButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::ResultsViewController*>*>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::add_restartButtonPressedEvent
  // Il2CppName: add_restartButtonPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(System::Action_1<GlobalNamespace::ResultsViewController*>*)>(&ResultsViewController::add_restartButtonPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "add_restartButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::ResultsViewController*>*>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::remove_restartButtonPressedEvent
  // Il2CppName: remove_restartButtonPressedEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(System::Action_1<GlobalNamespace::ResultsViewController*>*)>(&ResultsViewController::remove_restartButtonPressedEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "remove_restartButtonPressedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::ResultsViewController*>*>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::get_practice
  // Il2CppName: get_practice
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ResultsViewController::*)()>(&ResultsViewController::get_practice)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "get_practice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::Init
  // Il2CppName: Init
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(GlobalNamespace::LevelCompletionResults*, GlobalNamespace::IDifficultyBeatmap*, bool, bool)>(&ResultsViewController::Init)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::LevelCompletionResults*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IDifficultyBeatmap*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::StartFireworksAfterDelay
  // Il2CppName: StartFireworksAfterDelay
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator* (ResultsViewController::*)(float)>(&ResultsViewController::StartFireworksAfterDelay)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "StartFireworksAfterDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::SetDataToUI
  // Il2CppName: SetDataToUI
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::SetDataToUI)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "SetDataToUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::EnableResultsEnvironmentController
  // Il2CppName: EnableResultsEnvironmentController
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::EnableResultsEnvironmentController)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "EnableResultsEnvironmentController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::DisableResultEnvironmentController
  // Il2CppName: DisableResultEnvironmentController
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::DisableResultEnvironmentController)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "DisableResultEnvironmentController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::ContinueButtonPressed
  // Il2CppName: ContinueButtonPressed
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::ContinueButtonPressed)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "ContinueButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::RestartButtonPressed
  // Il2CppName: RestartButtonPressed
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::RestartButtonPressed)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "RestartButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::DidActivate
  // Il2CppName: DidActivate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(bool, bool, bool)>(&ResultsViewController::DidActivate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "DidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::DidDeactivate
  // Il2CppName: DidDeactivate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)(bool, bool)>(&ResultsViewController::DidDeactivate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), "DidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
    }
  };
  // Writing MetadataGetter for method: ResultsViewController::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ResultsViewController::*)()>(&ResultsViewController::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ResultsViewController*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsViewController*, "", "ResultsViewController");
