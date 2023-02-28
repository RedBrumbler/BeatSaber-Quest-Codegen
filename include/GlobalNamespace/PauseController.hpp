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
  // Forward declaring type: PauseMenuManager
  class PauseMenuManager;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: IMenuButtonTrigger
  class IMenuButtonTrigger;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ILevelRestartController
  class ILevelRestartController;
  // Forward declaring type: IReturnToMenuController
  class IReturnToMenuController;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: ILevelStartController
  class ILevelStartController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PauseController
  class PauseController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PauseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PauseController*, "", "PauseController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x82
  #pragma pack(push, 1)
  // Autogenerated type: PauseController
  // [TokenAttribute] Offset: FFFFFFFF
  class PauseController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PauseController::InitData
    class InitData;
    // Nested type: ::GlobalNamespace::PauseController::$$c__DisplayClass25_0
    class $$c__DisplayClass25_0;
    public:
    // [InjectAttribute] Offset: 0x1126CB0
    // private readonly PauseMenuManager _pauseMenuManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PauseMenuManager* pauseMenuManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PauseMenuManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1126CC0
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0x1126CD0
    // private readonly IMenuButtonTrigger _menuButtonTrigger
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IMenuButtonTrigger* menuButtonTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IMenuButtonTrigger*) == 0x8);
    // [InjectAttribute] Offset: 0x1126CE0
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0x1126CF0
    // private readonly ILevelRestartController _levelRestartController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ILevelRestartController* levelRestartController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILevelRestartController*) == 0x8);
    // [InjectAttribute] Offset: 0x1126D00
    // private readonly IReturnToMenuController _returnToMenuController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IReturnToMenuController* returnToMenuController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReturnToMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0x1126D10
    // private readonly IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0x1126D20
    // private readonly ILevelStartController _levelStartController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ILevelStartController* levelStartController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ILevelStartController*) == 0x8);
    // [InjectAttribute] Offset: 0x1126D30
    // private readonly PauseController/InitData _initData
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::PauseController::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PauseController::InitData*) == 0x8);
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x60
    ::System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x68
    ::System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action`1<System.Action`1<System.Boolean>> canPauseEvent
    // Size: 0x8
    // Offset: 0x70
    ::System::Action_1<::System::Action_1<bool>*>* canPauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::System::Action_1<bool>*>*) == 0x8);
    // private System.Action didReturnToMenuEvent
    // Size: 0x8
    // Offset: 0x78
    ::System::Action* didReturnToMenuEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _wantsToPause
    // Size: 0x1
    // Offset: 0x80
    bool wantsToPause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _paused
    // Size: 0x1
    // Offset: 0x81
    bool paused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private readonly PauseMenuManager _pauseMenuManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PauseMenuManager*& dyn__pauseMenuManager();
    // Get instance field reference: private readonly IGamePause _gamePause
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IGamePause*& dyn__gamePause();
    // Get instance field reference: private readonly IMenuButtonTrigger _menuButtonTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IMenuButtonTrigger*& dyn__menuButtonTrigger();
    // Get instance field reference: private readonly BeatmapObjectManager _beatmapObjectManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapObjectManager*& dyn__beatmapObjectManager();
    // Get instance field reference: private readonly ILevelRestartController _levelRestartController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILevelRestartController*& dyn__levelRestartController();
    // Get instance field reference: private readonly IReturnToMenuController _returnToMenuController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReturnToMenuController*& dyn__returnToMenuController();
    // Get instance field reference: private readonly IVRPlatformHelper _vrPlatformHelper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IVRPlatformHelper*& dyn__vrPlatformHelper();
    // Get instance field reference: private readonly ILevelStartController _levelStartController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ILevelStartController*& dyn__levelStartController();
    // Get instance field reference: private readonly PauseController/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PauseController::InitData*& dyn__initData();
    // Get instance field reference: private System.Action didPauseEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPauseEvent();
    // Get instance field reference: private System.Action didResumeEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didResumeEvent();
    // Get instance field reference: private System.Action`1<System.Action`1<System.Boolean>> canPauseEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::System::Action_1<bool>*>*& dyn_canPauseEvent();
    // Get instance field reference: private System.Action didReturnToMenuEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didReturnToMenuEvent();
    // Get instance field reference: private System.Boolean _wantsToPause
    [[deprecated("Use field access instead!")]] bool& dyn__wantsToPause();
    // Get instance field reference: private System.Boolean _paused
    [[deprecated("Use field access instead!")]] bool& dyn__paused();
    // public System.Boolean get_wantsToPause()
    // Offset: 0x159F5C0
    bool get_wantsToPause();
    // private System.Boolean get_canPause()
    // Offset: 0x159F5C8
    bool get_canPause();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x159F0A0
    void add_didPauseEvent(::System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x159F144
    void remove_didPauseEvent(::System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x159F1E8
    void add_didResumeEvent(::System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x159F28C
    void remove_didResumeEvent(::System::Action* value);
    // public System.Void add_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x159F330
    void add_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);
    // public System.Void remove_canPauseEvent(System.Action`1<System.Action`1<System.Boolean>> value)
    // Offset: 0x159F3D4
    void remove_canPauseEvent(::System::Action_1<::System::Action_1<bool>*>* value);
    // public System.Void add_didReturnToMenuEvent(System.Action value)
    // Offset: 0x159F478
    void add_didReturnToMenuEvent(::System::Action* value);
    // public System.Void remove_didReturnToMenuEvent(System.Action value)
    // Offset: 0x159F51C
    void remove_didReturnToMenuEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x15A0B24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PauseController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PauseController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PauseController*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x159F6B4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x159FE58
    void OnDestroy();
    // protected System.Void OnApplicationPause(System.Boolean pauseStatus)
    // Offset: 0x15A0580
    void OnApplicationPause(bool pauseStatus);
    // public System.Void Pause()
    // Offset: 0x15A058C
    void Pause();
    // private System.Void PauseGameOnStartupIfItShouldBePaused()
    // Offset: 0x15A0734
    void PauseGameOnStartupIfItShouldBePaused();
    // private System.Void HandleLevelDidStart()
    // Offset: 0x15A0790
    void HandleLevelDidStart();
    // private System.Void HandleLevelWillStartIntro()
    // Offset: 0x15A0794
    void HandleLevelWillStartIntro();
    // private System.Void HandleMenuButtonTriggered()
    // Offset: 0x15A0798
    void HandleMenuButtonTriggered();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0x15A079C
    void HandleInputFocusWasCaptured();
    // private System.Void HandleHMDUnmounted()
    // Offset: 0x15A07A0
    void HandleHMDUnmounted();
    // private System.Void HandlePauseMenuManagerDidFinishResumeAnimation()
    // Offset: 0x15A07A4
    void HandlePauseMenuManagerDidFinishResumeAnimation();
    // private System.Void HandlePauseMenuManagerDidPressContinueButton()
    // Offset: 0x15A0898
    void HandlePauseMenuManagerDidPressContinueButton();
    // private System.Void HandlePauseMenuManagerDidPressRestartButton()
    // Offset: 0x15A09B4
    void HandlePauseMenuManagerDidPressRestartButton();
    // private System.Void HandlePauseMenuManagerDidPressMenuButton()
    // Offset: 0x15A0A64
    void HandlePauseMenuManagerDidPressMenuButton();
    // private System.Boolean GetDefaultPausedState()
    // Offset: 0x159FD98
    bool GetDefaultPausedState();
  }; // PauseController
  #pragma pack(pop)
  static check_size<sizeof(PauseController), 129 + sizeof(bool)> __GlobalNamespace_PauseControllerSizeCheck;
  static_assert(sizeof(PauseController) == 0x82);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PauseController::get_wantsToPause
// Il2CppName: get_wantsToPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::get_wantsToPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "get_wantsToPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::get_canPause
// Il2CppName: get_canPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::get_canPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "get_canPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_canPauseEvent
// Il2CppName: add_canPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(&GlobalNamespace::PauseController::add_canPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_canPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_canPauseEvent
// Il2CppName: remove_canPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action_1<::System::Action_1<bool>*>*)>(&GlobalNamespace::PauseController::remove_canPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Boolean")})})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_canPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::add_didReturnToMenuEvent
// Il2CppName: add_didReturnToMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::add_didReturnToMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "add_didReturnToMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::remove_didReturnToMenuEvent
// Il2CppName: remove_didReturnToMenuEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(::System::Action*)>(&GlobalNamespace::PauseController::remove_didReturnToMenuEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "remove_didReturnToMenuEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PauseController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::OnApplicationPause
// Il2CppName: OnApplicationPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)(bool)>(&GlobalNamespace::PauseController::OnApplicationPause)> {
  static const MethodInfo* get() {
    static auto* pauseStatus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "OnApplicationPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pauseStatus});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused
// Il2CppName: PauseGameOnStartupIfItShouldBePaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::PauseGameOnStartupIfItShouldBePaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "PauseGameOnStartupIfItShouldBePaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleLevelDidStart
// Il2CppName: HandleLevelDidStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleLevelDidStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleLevelDidStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleLevelWillStartIntro
// Il2CppName: HandleLevelWillStartIntro
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleLevelWillStartIntro)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleLevelWillStartIntro", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleMenuButtonTriggered
// Il2CppName: HandleMenuButtonTriggered
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleMenuButtonTriggered)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleMenuButtonTriggered", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleInputFocusWasCaptured
// Il2CppName: HandleInputFocusWasCaptured
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleInputFocusWasCaptured)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleInputFocusWasCaptured", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandleHMDUnmounted
// Il2CppName: HandleHMDUnmounted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandleHMDUnmounted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandleHMDUnmounted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation
// Il2CppName: HandlePauseMenuManagerDidFinishResumeAnimation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidFinishResumeAnimation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidFinishResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton
// Il2CppName: HandlePauseMenuManagerDidPressContinueButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressContinueButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressContinueButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton
// Il2CppName: HandlePauseMenuManagerDidPressRestartButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressRestartButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressRestartButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton
// Il2CppName: HandlePauseMenuManagerDidPressMenuButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::HandlePauseMenuManagerDidPressMenuButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "HandlePauseMenuManagerDidPressMenuButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PauseController::GetDefaultPausedState
// Il2CppName: GetDefaultPausedState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::PauseController::*)()>(&GlobalNamespace::PauseController::GetDefaultPausedState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PauseController*), "GetDefaultPausedState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
