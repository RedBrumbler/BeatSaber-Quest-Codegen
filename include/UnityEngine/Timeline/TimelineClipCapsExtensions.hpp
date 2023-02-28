// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClipCapsExtensions
  class TimelineClipCapsExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineClipCapsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineClipCapsExtensions*, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineClipCapsExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TimelineClipCapsExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean SupportsLooping(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2AD8CB8
    static bool SupportsLooping(::UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsExtrapolation(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2AD8CD4
    static bool SupportsExtrapolation(::UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsClipIn(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2AD8CF0
    static bool SupportsClipIn(::UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsSpeedMultiplier(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2AD8D0C
    static bool SupportsSpeedMultiplier(::UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsBlending(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x2AD8D28
    static bool SupportsBlending(::UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean HasAll(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x2AD8D44
    static bool HasAll(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags);
    // static public System.Boolean HasAny(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x2AD6A0C
    static bool HasAny(::UnityEngine::Timeline::ClipCaps caps, ::UnityEngine::Timeline::ClipCaps flags);
  }; // UnityEngine.Timeline.TimelineClipCapsExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping
// Il2CppName: SupportsLooping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsLooping)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsLooping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation
// Il2CppName: SupportsExtrapolation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsExtrapolation)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsExtrapolation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn
// Il2CppName: SupportsClipIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsClipIn)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsClipIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier
// Il2CppName: SupportsSpeedMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsSpeedMultiplier)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsSpeedMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending
// Il2CppName: SupportsBlending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::SupportsBlending)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "TimelineClip")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "SupportsBlending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll
// Il2CppName: HasAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::HasAll)> {
  static const MethodInfo* get() {
    static auto* caps = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ClipCaps")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ClipCaps")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "HasAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{caps, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny
// Il2CppName: HasAny
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::ClipCaps, ::UnityEngine::Timeline::ClipCaps)>(&UnityEngine::Timeline::TimelineClipCapsExtensions::HasAny)> {
  static const MethodInfo* get() {
    static auto* caps = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ClipCaps")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ClipCaps")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineClipCapsExtensions*), "HasAny", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{caps, flags});
  }
};
