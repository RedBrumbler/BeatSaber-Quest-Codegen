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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WaypointsTestMenuViewController
  class WaypointsTestMenuViewController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WaypointsTestMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WaypointsTestMenuViewController*, "", "WaypointsTestMenuViewController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: WaypointsTestMenuViewController
  // [TokenAttribute] Offset: FFFFFFFF
  class WaypointsTestMenuViewController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::WaypointsTestMenuViewController::$CheckBeatmaps$d__13
    class $CheckBeatmaps$d__13;
    public:
    // private UnityEngine.UI.Button _btsButton
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Button* btsButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _cancelButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* cancelButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private TMPro.TextMeshProUGUI _progressText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* progressText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0x111C428
    // private StandardLevelScenesTransitionSetupDataSO _waypointsTestScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* waypointsTestScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapLevelSO> _levels
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* levels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*) == 0x8);
    // private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _characteristics
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>* characteristics;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*) == 0x8);
    // [InjectAttribute] Offset: 0x111C480
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x111C490
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0x58
    ::HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(::HMUI::ButtonBinder*) == 0x8);
    // private System.Boolean _isCancelled
    // Size: 0x1
    // Offset: 0x60
    bool isCancelled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _waitingForLevelFinish
    // Size: 0x1
    // Offset: 0x61
    bool waitingForLevelFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.UI.Button _btsButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__btsButton();
    // Get instance field reference: private UnityEngine.UI.Button _cancelButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__cancelButton();
    // Get instance field reference: private TMPro.TextMeshProUGUI _progressText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__progressText();
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _waypointsTestScenesTransitionSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__waypointsTestScenesTransitionSetupData();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapLevelSO> _levels
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*& dyn__levels();
    // Get instance field reference: private System.Collections.Generic.List`1<BeatmapCharacteristicSO> _characteristics
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& dyn__characteristics();
    // Get instance field reference: private readonly GameScenesManager _gameScenesManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private readonly PlayerDataModel _playerDataModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerDataModel*& dyn__playerDataModel();
    // Get instance field reference: private HMUI.ButtonBinder _buttonBinder
    [[deprecated("Use field access instead!")]] ::HMUI::ButtonBinder*& dyn__buttonBinder();
    // Get instance field reference: private System.Boolean _isCancelled
    [[deprecated("Use field access instead!")]] bool& dyn__isCancelled();
    // Get instance field reference: private System.Boolean _waitingForLevelFinish
    [[deprecated("Use field access instead!")]] bool& dyn__waitingForLevelFinish();
    // public System.Void .ctor()
    // Offset: 0x1544AFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WaypointsTestMenuViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WaypointsTestMenuViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WaypointsTestMenuViewController*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x15447A8
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x15448CC
    void OnDestroy();
    // private System.Collections.IEnumerator CheckBeatmaps(System.Collections.Generic.List`1<BeatmapLevelSO> levels)
    // Offset: 0x15449B8
    ::System::Collections::IEnumerator* CheckBeatmaps(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>* levels);
    // private System.Void HandleMainGameSceneDidFinish(StandardLevelScenesTransitionSetupDataSO data, LevelCompletionResults results)
    // Offset: 0x1544A60
    void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* data, ::GlobalNamespace::LevelCompletionResults* results);
    // private System.Void <Start>b__11_0()
    // Offset: 0x1544B04
    void $Start$b__11_0();
    // private System.Void <Start>b__11_1()
    // Offset: 0x1544B98
    void $Start$b__11_1();
    // private System.Void <HandleMainGameSceneDidFinish>b__14_0(Zenject.DiContainer container)
    // Offset: 0x1544BE8
    void $HandleMainGameSceneDidFinish$b__14_0(::Zenject::DiContainer* container);
  }; // WaypointsTestMenuViewController
  #pragma pack(pop)
  static check_size<sizeof(WaypointsTestMenuViewController), 97 + sizeof(bool)> __GlobalNamespace_WaypointsTestMenuViewControllerSizeCheck;
  static_assert(sizeof(WaypointsTestMenuViewController) == 0x62);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::CheckBeatmaps
// Il2CppName: CheckBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::WaypointsTestMenuViewController::*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO*>*)>(&GlobalNamespace::WaypointsTestMenuViewController::CheckBeatmaps)> {
  static const MethodInfo* get() {
    static auto* levels = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BeatmapLevelSO")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "CheckBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::HandleMainGameSceneDidFinish
// Il2CppName: HandleMainGameSceneDidFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, ::GlobalNamespace::LevelCompletionResults*)>(&GlobalNamespace::WaypointsTestMenuViewController::HandleMainGameSceneDidFinish)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "StandardLevelScenesTransitionSetupDataSO")->byval_arg;
    static auto* results = &::il2cpp_utils::GetClassFromName("", "LevelCompletionResults")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "HandleMainGameSceneDidFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, results});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_0
// Il2CppName: <Start>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "<Start>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_1
// Il2CppName: <Start>b__11_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)()>(&GlobalNamespace::WaypointsTestMenuViewController::$Start$b__11_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "<Start>b__11_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WaypointsTestMenuViewController::$HandleMainGameSceneDidFinish$b__14_0
// Il2CppName: <HandleMainGameSceneDidFinish>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WaypointsTestMenuViewController::*)(::Zenject::DiContainer*)>(&GlobalNamespace::WaypointsTestMenuViewController::$HandleMainGameSceneDidFinish$b__14_0)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WaypointsTestMenuViewController*), "<HandleMainGameSceneDidFinish>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container});
  }
};
