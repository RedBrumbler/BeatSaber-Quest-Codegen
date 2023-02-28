// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelStartController
#include "GlobalNamespace/ILevelStartController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialSongController
  class TutorialSongController;
  // Forward declaring type: IntroTutorialController
  class IntroTutorialController;
  // Forward declaring type: AudioFading
  class AudioFading;
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
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
  // Forward declaring type: TutorialController
  class TutorialController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialController*, "", "TutorialController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: TutorialController
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::ILevelStartController*/ {
    public:
    // Nested type: ::GlobalNamespace::TutorialController::$OutroCoroutine$d__19
    class $OutroCoroutine$d__19;
    public:
    // private TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialSongController*) == 0x8);
    // private IntroTutorialController _introTutorialController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IntroTutorialController* introTutorialController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IntroTutorialController*) == 0x8);
    // private AudioFading _audioFading
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AudioFading* audioFading;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioFading*) == 0x8);
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x112A2A4
    // [SignalSenderAttribute] Offset: 0x112A2A4
    // private Signal _tutorialIntroStartedSignal
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::Signal* tutorialIntroStartedSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // [SignalSenderAttribute] Offset: 0x112A2EC
    // private Signal _tutorialFinishedSignal
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::Signal* tutorialFinishedSignal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // [InjectAttribute] Offset: 0x112A324
    // private readonly PauseController _pauseController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PauseController*) == 0x8);
    // private System.Action levelWillStartIntroEvent
    // Size: 0x8
    // Offset: 0x50
    ::System::Action* levelWillStartIntroEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action levelDidStartEvent
    // Size: 0x8
    // Offset: 0x58
    ::System::Action* levelDidStartEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x60
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _doingOutroTransition
    // Size: 0x1
    // Offset: 0x61
    bool doingOutroTransition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::ILevelStartController
    operator ::GlobalNamespace::ILevelStartController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::ILevelStartController*>(this);
    }
    // Creating interface conversion operator: i_ILevelStartController
    inline ::GlobalNamespace::ILevelStartController* i_ILevelStartController() noexcept {
      return reinterpret_cast<::GlobalNamespace::ILevelStartController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TutorialSongController _tutorialSongController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialSongController*& dyn__tutorialSongController();
    // Get instance field reference: private IntroTutorialController _introTutorialController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IntroTutorialController*& dyn__introTutorialController();
    // Get instance field reference: private AudioFading _audioFading
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioFading*& dyn__audioFading();
    // Get instance field reference: private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& dyn__tutorialSceneSetupData();
    // Get instance field reference: private Signal _tutorialIntroStartedSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Signal*& dyn__tutorialIntroStartedSignal();
    // Get instance field reference: private Signal _tutorialFinishedSignal
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Signal*& dyn__tutorialFinishedSignal();
    // Get instance field reference: private readonly PauseController _pauseController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PauseController*& dyn__pauseController();
    // Get instance field reference: private System.Action levelWillStartIntroEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_levelWillStartIntroEvent();
    // Get instance field reference: private System.Action levelDidStartEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_levelDidStartEvent();
    // Get instance field reference: private System.Boolean _paused
    [[deprecated("Use field access instead!")]] bool& dyn__paused();
    // Get instance field reference: private System.Boolean _doingOutroTransition
    [[deprecated("Use field access instead!")]] bool& dyn__doingOutroTransition();
    // public System.Void add_levelWillStartIntroEvent(System.Action value)
    // Offset: 0x13A3BD0
    void add_levelWillStartIntroEvent(::System::Action* value);
    // public System.Void remove_levelWillStartIntroEvent(System.Action value)
    // Offset: 0x13A3C74
    void remove_levelWillStartIntroEvent(::System::Action* value);
    // public System.Void add_levelDidStartEvent(System.Action value)
    // Offset: 0x13A3D18
    void add_levelDidStartEvent(::System::Action* value);
    // public System.Void remove_levelDidStartEvent(System.Action value)
    // Offset: 0x13A3DBC
    void remove_levelDidStartEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x13A4434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialController*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x13A3E60
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13A4048
    void OnDestroy();
    // private System.Void HandleIntroTutorialDidFinishEvent()
    // Offset: 0x13A428C
    void HandleIntroTutorialDidFinishEvent();
    // private System.Void HandleTutorialSongControllerSongDidFinishEvent()
    // Offset: 0x13A42AC
    void HandleTutorialSongControllerSongDidFinishEvent();
    // private System.Collections.IEnumerator OutroCoroutine()
    // Offset: 0x13A42F8
    ::System::Collections::IEnumerator* OutroCoroutine();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0x13A4394
    void HandlePauseControllerCanPause(::System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0x13A4420
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0x13A442C
    void HandlePauseControllerDidResume();
  }; // TutorialController
  #pragma pack(pop)
  static check_size<sizeof(TutorialController), 97 + sizeof(bool)> __GlobalNamespace_TutorialControllerSizeCheck;
  static_assert(sizeof(TutorialController) == 0x62);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::add_levelWillStartIntroEvent
// Il2CppName: add_levelWillStartIntroEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(::System::Action*)>(&GlobalNamespace::TutorialController::add_levelWillStartIntroEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "add_levelWillStartIntroEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::remove_levelWillStartIntroEvent
// Il2CppName: remove_levelWillStartIntroEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(::System::Action*)>(&GlobalNamespace::TutorialController::remove_levelWillStartIntroEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "remove_levelWillStartIntroEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::add_levelDidStartEvent
// Il2CppName: add_levelDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(::System::Action*)>(&GlobalNamespace::TutorialController::add_levelDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "add_levelDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::remove_levelDidStartEvent
// Il2CppName: remove_levelDidStartEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(::System::Action*)>(&GlobalNamespace::TutorialController::remove_levelDidStartEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "remove_levelDidStartEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandleIntroTutorialDidFinishEvent
// Il2CppName: HandleIntroTutorialDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandleIntroTutorialDidFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandleIntroTutorialDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandleTutorialSongControllerSongDidFinishEvent
// Il2CppName: HandleTutorialSongControllerSongDidFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandleTutorialSongControllerSongDidFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandleTutorialSongControllerSongDidFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::OutroCoroutine
// Il2CppName: OutroCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::OutroCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "OutroCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerCanPause
// Il2CppName: HandlePauseControllerCanPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)(::System::Action_1<bool>*)>(&GlobalNamespace::TutorialController::HandlePauseControllerCanPause)> {
  static const MethodInfo* get() {
    static auto* canPause = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerCanPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canPause});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerDidPause
// Il2CppName: HandlePauseControllerDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandlePauseControllerDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialController::HandlePauseControllerDidResume
// Il2CppName: HandlePauseControllerDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialController::*)()>(&GlobalNamespace::TutorialController::HandlePauseControllerDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialController*), "HandlePauseControllerDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
