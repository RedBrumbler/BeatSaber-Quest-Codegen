// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: EnvironmentContext
#include "GlobalNamespace/EnvironmentContext.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
}
// Forward declaring namespace: UnityEngine::Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoPlayer
  class VideoPlayer;
  // Forward declaring type: VideoClip
  class VideoClip;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SongTimeSyncedVideoPlayer
  class SongTimeSyncedVideoPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongTimeSyncedVideoPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongTimeSyncedVideoPlayer*, "", "SongTimeSyncedVideoPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SongTimeSyncedVideoPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class SongTimeSyncedVideoPlayer : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // Nested type: ::GlobalNamespace::SongTimeSyncedVideoPlayer::$WaitForDependenciesAndPlay$d__17
    class $WaitForDependenciesAndPlay$d__17;
    public:
    // private UnityEngine.Video.VideoPlayer _videoPlayer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Video::VideoPlayer* videoPlayer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Video::VideoPlayer*) == 0x8);
    // [SpaceAttribute] Offset: 0x1133C9C
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [InjectAttribute] Offset: 0x1133CD4
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x1133CE4
    // private readonly EnvironmentContext _environmentContext
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::EnvironmentContext environmentContext;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentContext) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x4C
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: color and: waitForDependenciesAndPlayCoroutine
    char __padding4[0x4] = {};
    // private UnityEngine.Coroutine _waitForDependenciesAndPlayCoroutine
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::Coroutine* waitForDependenciesAndPlayCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1133CF4
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1133D04
    // Get static field: static private readonly System.Int32 _textureId
    static int _get__textureId();
    // Set static field: static private readonly System.Int32 _textureId
    static void _set__textureId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1133D14
    // Get static field: static private readonly System.Int32 _textureStId
    static int _get__textureStId();
    // Set static field: static private readonly System.Int32 _textureStId
    static void _set__textureStId(int value);
    // Get instance field reference: private UnityEngine.Video.VideoPlayer _videoPlayer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Video::VideoPlayer*& dyn__videoPlayer();
    // Get instance field reference: private MaterialPropertyBlockController _materialPropertyBlockController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MaterialPropertyBlockController*& dyn__materialPropertyBlockController();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly EnvironmentContext _environmentContext
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentContext& dyn__environmentContext();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private UnityEngine.Coroutine _waitForDependenciesAndPlayCoroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__waitForDependenciesAndPlayCoroutine();
    // public System.Void .ctor()
    // Offset: 0x1421020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongTimeSyncedVideoPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongTimeSyncedVideoPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongTimeSyncedVideoPlayer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1421054
    static void _cctor();
    // protected System.Void OnDestroy()
    // Offset: 0x14209FC
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1420A58
    void Update();
    // protected System.Void LateUpdate()
    // Offset: 0x1420BC8
    void LateUpdate();
    // public System.Void SetVideoClip(UnityEngine.Video.VideoClip videoClip)
    // Offset: 0x1420D50
    void SetVideoClip(::UnityEngine::Video::VideoClip* videoClip);
    // public System.Void SetSpriteAndStopVideo(UnityEngine.Sprite sprite)
    // Offset: 0x1420D6C
    void SetSpriteAndStopVideo(::UnityEngine::Sprite* sprite);
    // private System.Void StopVideoPlayer()
    // Offset: 0x1420A00
    void StopVideoPlayer();
    // private System.Collections.IEnumerator WaitForDependenciesAndPlay()
    // Offset: 0x142098C
    ::System::Collections::IEnumerator* WaitForDependenciesAndPlay();
    // private System.Boolean <WaitForDependenciesAndPlay>b__17_0()
    // Offset: 0x14210F8
    bool $WaitForDependenciesAndPlay$b__17_0();
    // protected override System.Void Start()
    // Offset: 0x1420920
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::Start()
    void Start();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1420D48
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // SongTimeSyncedVideoPlayer
  #pragma pack(pop)
  static check_size<sizeof(SongTimeSyncedVideoPlayer), 96 + sizeof(::UnityEngine::Coroutine*)> __GlobalNamespace_SongTimeSyncedVideoPlayerSizeCheck;
  static_assert(sizeof(SongTimeSyncedVideoPlayer) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::SetVideoClip
// Il2CppName: SetVideoClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)(::UnityEngine::Video::VideoClip*)>(&GlobalNamespace::SongTimeSyncedVideoPlayer::SetVideoClip)> {
  static const MethodInfo* get() {
    static auto* videoClip = &::il2cpp_utils::GetClassFromName("UnityEngine.Video", "VideoClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "SetVideoClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{videoClip});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::SetSpriteAndStopVideo
// Il2CppName: SetSpriteAndStopVideo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)(::UnityEngine::Sprite*)>(&GlobalNamespace::SongTimeSyncedVideoPlayer::SetSpriteAndStopVideo)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "SetSpriteAndStopVideo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::StopVideoPlayer
// Il2CppName: StopVideoPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::StopVideoPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "StopVideoPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::WaitForDependenciesAndPlay
// Il2CppName: WaitForDependenciesAndPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::WaitForDependenciesAndPlay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "WaitForDependenciesAndPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::$WaitForDependenciesAndPlay$b__17_0
// Il2CppName: <WaitForDependenciesAndPlay>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::$WaitForDependenciesAndPlay$b__17_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "<WaitForDependenciesAndPlay>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)()>(&GlobalNamespace::SongTimeSyncedVideoPlayer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongTimeSyncedVideoPlayer::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongTimeSyncedVideoPlayer::*)(::UnityEngine::Color)>(&GlobalNamespace::SongTimeSyncedVideoPlayer::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongTimeSyncedVideoPlayer*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
