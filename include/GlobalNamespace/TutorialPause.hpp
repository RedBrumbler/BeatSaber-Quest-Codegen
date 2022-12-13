// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
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
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioListenerController
  class AudioListenerController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialPause
  class TutorialPause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialPause*, "", "TutorialPause");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: TutorialPause
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialPause : public ::Il2CppObject/*, public ::GlobalNamespace::IGamePause*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x11255BC
    // private readonly TutorialSongController _tutorialSongController
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::TutorialSongController* tutorialSongController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialSongController*) == 0x8);
    // [InjectAttribute] Offset: 0x11255CC
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0x11255DC
    // private readonly AudioListenerController _audioListenerController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioListenerController* audioListenerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioListenerController*) == 0x8);
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x28
    ::System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _pause
    // Size: 0x1
    // Offset: 0x40
    bool pause;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IGamePause
    operator ::GlobalNamespace::IGamePause() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGamePause*>(this);
    }
    // Creating interface conversion operator: i_IGamePause
    inline ::GlobalNamespace::IGamePause* i_IGamePause() noexcept {
      return reinterpret_cast<::GlobalNamespace::IGamePause*>(this);
    }
    // Get instance field reference: private readonly TutorialSongController _tutorialSongController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialSongController*& dyn__tutorialSongController();
    // Get instance field reference: private readonly SaberManager _saberManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberManager*& dyn__saberManager();
    // Get instance field reference: private readonly AudioListenerController _audioListenerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioListenerController*& dyn__audioListenerController();
    // Get instance field reference: private System.Action didPauseEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didPauseEvent();
    // Get instance field reference: private System.Action willResumeEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_willResumeEvent();
    // Get instance field reference: private System.Action didResumeEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didResumeEvent();
    // Get instance field reference: private System.Boolean _pause
    [[deprecated("Use field access instead!")]] bool& dyn__pause();
    // public System.Boolean get_isPaused()
    // Offset: 0x13C90B8
    bool get_isPaused();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x13C90C0
    void add_didPauseEvent(::System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x13C9164
    void remove_didPauseEvent(::System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0x13C9208
    void add_willResumeEvent(::System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0x13C92AC
    void remove_willResumeEvent(::System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x13C9350
    void add_didResumeEvent(::System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x13C93F4
    void remove_didResumeEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x13C95A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialPause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialPause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialPause*, creationType>()));
    }
    // public System.Void Pause()
    // Offset: 0x13C9498
    void Pause();
    // public System.Void WillResume()
    // Offset: 0x13C9518
    void WillResume();
    // public System.Void Resume()
    // Offset: 0x13C952C
    void Resume();
  }; // TutorialPause
  #pragma pack(pop)
  static check_size<sizeof(TutorialPause), 64 + sizeof(bool)> __GlobalNamespace_TutorialPauseSizeCheck;
  static_assert(sizeof(TutorialPause) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::add_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::remove_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)(::System::Action*)>(&GlobalNamespace::TutorialPause::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::WillResume
// Il2CppName: WillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::WillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "WillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TutorialPause::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialPause::*)()>(&GlobalNamespace::TutorialPause::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialPause*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
