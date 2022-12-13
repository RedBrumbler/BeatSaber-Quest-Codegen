// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarColorBehaviour
  class AvatarColorBehaviour;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AvatarColorAsset
  class AvatarColorAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AvatarColorAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarColorAsset*, "", "AvatarColorAsset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: AvatarColorAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarColorAsset : public ::UnityEngine::Playables::PlayableAsset/*, public ::UnityEngine::Timeline::ITimelineClipAsset*/ {
    public:
    public:
    // public AvatarColorBehaviour _template
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AvatarColorBehaviour* _template;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarColorBehaviour*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Timeline::ITimelineClipAsset
    operator ::UnityEngine::Timeline::ITimelineClipAsset() noexcept {
      return *reinterpret_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Creating interface conversion operator: i_ITimelineClipAsset
    inline ::UnityEngine::Timeline::ITimelineClipAsset* i_ITimelineClipAsset() noexcept {
      return reinterpret_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public AvatarColorBehaviour _template
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AvatarColorBehaviour*& dyn__template();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0x1549070
    ::UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public System.Void .ctor()
    // Offset: 0x1549118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarColorAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AvatarColorAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarColorAsset*, creationType>()));
    }
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0x1549078
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);
  }; // AvatarColorAsset
  #pragma pack(pop)
  static check_size<sizeof(AvatarColorAsset), 24 + sizeof(::GlobalNamespace::AvatarColorBehaviour*)> __GlobalNamespace_AvatarColorAssetSizeCheck;
  static_assert(sizeof(AvatarColorAsset) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorAsset::get_clipCaps
// Il2CppName: get_clipCaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (GlobalNamespace::AvatarColorAsset::*)()>(&GlobalNamespace::AvatarColorAsset::get_clipCaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorAsset*), "get_clipCaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorAsset::CreatePlayable
// Il2CppName: CreatePlayable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (GlobalNamespace::AvatarColorAsset::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&GlobalNamespace::AvatarColorAsset::CreatePlayable)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* go = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorAsset*), "CreatePlayable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, go});
  }
};
