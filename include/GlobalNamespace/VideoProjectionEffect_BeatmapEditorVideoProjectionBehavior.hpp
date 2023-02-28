// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VideoProjectionEffect
#include "GlobalNamespace/VideoProjectionEffect.hpp"
// Including type: VideoProjectionEffect/VideoProjectionBehavior
#include "GlobalNamespace/VideoProjectionEffect_VideoProjectionBehavior.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: VideoProjectionDataModelSO
  class VideoProjectionDataModelSO;
  // Forward declaring type: SongTimeSyncedVideoPlayer
  class SongTimeSyncedVideoPlayer;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*, "", "VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior : public ::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior {
    public:
    public:
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private readonly BeatmapDataCallbackWrapper _callbackWrapper
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::BeatmapDataCallbackWrapper* callbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private readonly BeatmapDataCallbackWrapper _callbackWrapper
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__callbackWrapper();
    // public System.Void .ctor(IReadonlyBeatmapData beatmapData, VideoProjectionDataModelSO dataModel, SongTimeSyncedVideoPlayer videoPlayer, BasicBeatmapEventType videoEventType, BeatmapCallbacksController beatmapCallbacksController, IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x1541934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior* New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*, creationType>(beatmapData, dataModel, videoPlayer, videoEventType, beatmapCallbacksController, previewBeatmapLevel)));
    }
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData data)
    // Offset: 0x1541F6C
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* data);
    // public override System.Void Dispose()
    // Offset: 0x1541E80
    // Implemented from: VideoProjectionEffect/VideoProjectionBehavior
    // Base method: System.Void VideoProjectionBehavior::Dispose()
    void Dispose();
  }; // VideoProjectionEffect/BeatmapEditorVideoProjectionBehavior
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::*)()>(&GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VideoProjectionEffect::BeatmapEditorVideoProjectionBehavior*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
