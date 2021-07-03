// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Extrapolation
#include "UnityEngine/Timeline/Extrapolation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.Extrapolation/<>c
  // [CompilerGeneratedAttribute] Offset: DD79B4
  class Extrapolation::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Timeline.Extrapolation/<>c <>9
    static UnityEngine::Timeline::Extrapolation::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.Extrapolation/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::Extrapolation::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* _get_$$9__2_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__2_0
    static void _set_$$9__2_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* value);
    // static private System.Void .cctor()
    // Offset: 0x17E25F4
    static void _cctor();
    // System.Int32 <SortClipsByStartTime>b__2_0(UnityEngine.Timeline.TimelineClip clip1, UnityEngine.Timeline.TimelineClip clip2)
    // Offset: 0x17E2660
    int $SortClipsByStartTime$b__2_0(UnityEngine::Timeline::TimelineClip* clip1, UnityEngine::Timeline::TimelineClip* clip2);
    // public System.Void .ctor()
    // Offset: 0x17E2658
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Extrapolation::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::Extrapolation::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Extrapolation::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.Extrapolation/<>c
  #pragma pack(pop)
  // Writing MetadataGetter for method: Extrapolation::$$c::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Extrapolation::$$c::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Extrapolation::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Extrapolation::$$c::$SortClipsByStartTime$b__2_0
  // Il2CppName: <SortClipsByStartTime>b__2_0
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Extrapolation::$$c::*)(UnityEngine::Timeline::TimelineClip*, UnityEngine::Timeline::TimelineClip*)>(&Extrapolation::$$c::$SortClipsByStartTime$b__2_0)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Extrapolation::$$c*), "<SortClipsByStartTime>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Timeline::TimelineClip*>()});
    }
  };
  // Writing MetadataGetter for method: Extrapolation::$$c::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Extrapolation::$$c::*)()>(&Extrapolation::$$c::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Extrapolation::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Extrapolation::$$c::*)()>(&Extrapolation::$$c::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Extrapolation::$$c*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Extrapolation::$$c*, "UnityEngine.Timeline", "Extrapolation/<>c");
