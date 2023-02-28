// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: MenuTransitionsHelper
  class MenuTransitionsHelper;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SimpleLevelStarter
  class SimpleLevelStarter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleLevelStarter*, "", "SimpleLevelStarter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: SimpleLevelStarter
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleLevelStarter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private BeatmapLevelSO _level
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapLevelSO* level;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private BeatmapCharacteristicSO _beatmapCharacteristic
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // private BeatmapDifficulty _beatmapDifficulty
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficulty) == 0x4);
    // private System.Boolean _useTestNoteCutSoundEffects
    // Size: 0x1
    // Offset: 0x2C
    bool useTestNoteCutSoundEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _overrideStrobeFilterSettingsToAllEffects
    // Size: 0x1
    // Offset: 0x2D
    bool overrideStrobeFilterSettingsToAllEffects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideStrobeFilterSettingsToAllEffects and: recordingTextAsset
    char __padding4[0x2] = {};
    // [NullAllowed] Offset: 0x1134F54
    // private UnityEngine.TextAsset _recordingTextAsset
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::TextAsset* recordingTextAsset;
    // Field size check
    static_assert(sizeof(::UnityEngine::TextAsset*) == 0x8);
    // [NullAllowed] Offset: 0x1134F8C
    // private UnityEngine.Component[] _prefabBindings
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Component*> prefabBindings;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Component*>) == 0x8);
    // [SpaceAttribute] Offset: 0x1134FC4
    // private UnityEngine.UI.Button _button
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [InjectAttribute] Offset: 0x1134FFC
    // private readonly MenuTransitionsHelper _menuTransitionsHelper
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MenuTransitionsHelper* menuTransitionsHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper*) == 0x8);
    // [InjectAttribute] Offset: 0x113500C
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x113501C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x60
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private readonly GameplayModifiers _gameplayModifiers
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiers*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BeatmapLevelSO _level
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSO*& dyn__level();
    // Get instance field reference: private BeatmapCharacteristicSO _beatmapCharacteristic
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCharacteristicSO*& dyn__beatmapCharacteristic();
    // Get instance field reference: private BeatmapDifficulty _beatmapDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficulty& dyn__beatmapDifficulty();
    // Get instance field reference: private System.Boolean _useTestNoteCutSoundEffects
    [[deprecated("Use field access instead!")]] bool& dyn__useTestNoteCutSoundEffects();
    // Get instance field reference: private System.Boolean _overrideStrobeFilterSettingsToAllEffects
    [[deprecated("Use field access instead!")]] bool& dyn__overrideStrobeFilterSettingsToAllEffects();
    // Get instance field reference: private UnityEngine.TextAsset _recordingTextAsset
    [[deprecated("Use field access instead!")]] ::UnityEngine::TextAsset*& dyn__recordingTextAsset();
    // Get instance field reference: private UnityEngine.Component[] _prefabBindings
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Component*>& dyn__prefabBindings();
    // Get instance field reference: private UnityEngine.UI.Button _button
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__button();
    // Get instance field reference: private readonly MenuTransitionsHelper _menuTransitionsHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MenuTransitionsHelper*& dyn__menuTransitionsHelper();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private readonly GameplayModifiers _gameplayModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifiers*& dyn__gameplayModifiers();
    // public System.Void .ctor()
    // Offset: 0x1495974
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleLevelStarter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleLevelStarter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleLevelStarter*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x14954D0
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1495580
    void OnDestroy();
    // private System.Void StartLevel()
    // Offset: 0x149559C
    void StartLevel();
    // private System.Void InstallEarlyBindings(ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject.DiContainer container)
    // Offset: 0x149580C
    void InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, ::Zenject::DiContainer* container);
    // private System.Void ButtonPressed()
    // Offset: 0x149594C
    void ButtonPressed();
    // private System.Void HandleLevelDidFinish(StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, LevelCompletionResults levelCompletionResults)
    // Offset: 0x1495950
    void HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void <StartLevel>g__AfterSceneSwitchCallback|15_0(Zenject.DiContainer container)
    // Offset: 0x1495A50
    void $StartLevel$g__AfterSceneSwitchCallback_15_0(::Zenject::DiContainer* container);
  }; // SimpleLevelStarter
  #pragma pack(pop)
  static check_size<sizeof(SimpleLevelStarter), 104 + sizeof(::GlobalNamespace::GameplayModifiers*)> __GlobalNamespace_SimpleLevelStarterSizeCheck;
  static_assert(sizeof(SimpleLevelStarter) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)()>(&GlobalNamespace::SimpleLevelStarter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)()>(&GlobalNamespace::SimpleLevelStarter::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::StartLevel
// Il2CppName: StartLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)()>(&GlobalNamespace::SimpleLevelStarter::StartLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "StartLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::InstallEarlyBindings
// Il2CppName: InstallEarlyBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&GlobalNamespace::SimpleLevelStarter::InstallEarlyBindings)> {
  static const MethodInfo* get() {
    static auto* scenesTransitionSetupData = &::il2cpp_utils::GetClassFromName("", "ScenesTransitionSetupDataSO")->byval_arg;
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "InstallEarlyBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scenesTransitionSetupData, container});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::ButtonPressed
// Il2CppName: ButtonPressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)()>(&GlobalNamespace::SimpleLevelStarter::ButtonPressed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "ButtonPressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::HandleLevelDidFinish
// Il2CppName: HandleLevelDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::SimpleLevelStarter::HandleLevelDidFinish)> {
  static const MethodInfo* get() {
    static auto* standardLevelSceneSetupData = &::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* levelCompletionResults = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "HandleLevelDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{standardLevelSceneSetupData, levelCompletionResults});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleLevelStarter::$StartLevel$g__AfterSceneSwitchCallback_15_0
// Il2CppName: <StartLevel>g__AfterSceneSwitchCallback|15_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleLevelStarter::*)(::Zenject::DiContainer*)>(&GlobalNamespace::SimpleLevelStarter::$StartLevel$g__AfterSceneSwitchCallback_15_0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleLevelStarter*), "<StartLevel>g__AfterSceneSwitchCallback|15_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
