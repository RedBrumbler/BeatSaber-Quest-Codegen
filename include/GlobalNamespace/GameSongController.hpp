// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: AudioPitchGainEffect
  class AudioPitchGainEffect;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapCallbacksUpdater
  class BeatmapCallbacksUpdater;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameSongController
  class GameSongController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameSongController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameSongController*, "", "GameSongController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: GameSongController
  // [TokenAttribute] Offset: FFFFFFFF
  class GameSongController : public ::GlobalNamespace::SongController/*, public ::GlobalNamespace::IStartSeekSongController*/ {
    public:
    public:
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private AudioPitchGainEffect _failAudioPitchGainEffect
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AudioPitchGainEffect* failAudioPitchGainEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // [InjectAttribute] Offset: 0x112A060
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // [InjectAttribute] Offset: 0x112A070
    // private readonly BeatmapCallbacksUpdater _beatmapCallbacksUpdater
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BeatmapCallbacksUpdater* beatmapCallbacksUpdater;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksUpdater*) == 0x8);
    // private System.Boolean _songDidFinish
    // Size: 0x1
    // Offset: 0x40
    bool songDidFinish;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IStartSeekSongController
    operator ::GlobalNamespace::IStartSeekSongController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Creating interface conversion operator: i_IStartSeekSongController
    inline ::GlobalNamespace::IStartSeekSongController* i_IStartSeekSongController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IStartSeekSongController*>(this);
    }
    // Get instance field reference: private AudioTimeSyncController _audioTimeSyncController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioTimeSyncController*& dyn__audioTimeSyncController();
    // Get instance field reference: private AudioPitchGainEffect _failAudioPitchGainEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioPitchGainEffect*& dyn__failAudioPitchGainEffect();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly BeatmapCallbacksUpdater _beatmapCallbacksUpdater
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksUpdater*& dyn__beatmapCallbacksUpdater();
    // Get instance field reference: private System.Boolean _songDidFinish
    [[deprecated("Use field access instead!")]] bool& dyn__songDidFinish();
    // public System.Single get_songLength()
    // Offset: 0x1479B24
    float get_songLength();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0x1479B40
    ::UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // protected System.Void LateUpdate()
    // Offset: 0x1479B5C
    void LateUpdate();
    // public System.Void StartSong(System.Single songTimeOffset)
    // Offset: 0x1479BD4
    void StartSong(float songTimeOffset);
    // public System.Void FailStopSong()
    // Offset: 0x1479C8C
    void FailStopSong();
    // public System.Void SeekTo(System.Single songTime)
    // Offset: 0x1479D98
    void SeekTo(float songTime);
    // private System.Void <FailStopSong>b__14_0()
    // Offset: 0x1479DBC
    void $FailStopSong$b__14_0();
    // public System.Void .ctor()
    // Offset: 0x1479DB4
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameSongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameSongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameSongController*, creationType>()));
    }
    // public override System.Void StopSong()
    // Offset: 0x1479BF8
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0x1479C14
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0x1479C50
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
  }; // GameSongController
  #pragma pack(pop)
  static check_size<sizeof(GameSongController), 64 + sizeof(bool)> __GlobalNamespace_GameSongControllerSizeCheck;
  static_assert(sizeof(GameSongController) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::get_songLength
// Il2CppName: get_songLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::get_songLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "get_songLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong
// Il2CppName: get_waitUntilIsReadyToStartTheSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil* (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::get_waitUntilIsReadyToStartTheSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "get_waitUntilIsReadyToStartTheSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::StartSong
// Il2CppName: StartSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)(float)>(&GlobalNamespace::GameSongController::StartSong)> {
  static const MethodInfo* get() {
    static auto* songTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "StartSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTimeOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::FailStopSong
// Il2CppName: FailStopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::FailStopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "FailStopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::SeekTo
// Il2CppName: SeekTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)(float)>(&GlobalNamespace::GameSongController::SeekTo)> {
  static const MethodInfo* get() {
    static auto* songTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "SeekTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::$FailStopSong$b__14_0
// Il2CppName: <FailStopSong>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::$FailStopSong$b__14_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "<FailStopSong>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::StopSong
// Il2CppName: StopSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::StopSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "StopSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::PauseSong
// Il2CppName: PauseSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::PauseSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "PauseSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameSongController::ResumeSong
// Il2CppName: ResumeSong
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameSongController::*)()>(&GlobalNamespace::GameSongController::ResumeSong)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameSongController*), "ResumeSong", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
