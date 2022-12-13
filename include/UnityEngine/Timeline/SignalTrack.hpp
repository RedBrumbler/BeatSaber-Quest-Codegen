// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.MarkerTrack
#include "UnityEngine/Timeline/MarkerTrack.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: SignalTrack
  class SignalTrack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::SignalTrack);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalTrack*, "UnityEngine.Timeline", "SignalTrack");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Timeline.SignalTrack
  // [TokenAttribute] Offset: FFFFFFFF
  // [TrackBindingTypeAttribute] Offset: 10DA060
  // [TrackColorAttribute] Offset: 10DA060
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class SignalTrack : public ::UnityEngine::Timeline::MarkerTrack {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E768A0
    // Implemented from: UnityEngine.Timeline.MarkerTrack
    // Base method: System.Void MarkerTrack::.ctor()
    // Base method: System.Void TrackAsset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalTrack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::SignalTrack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalTrack*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalTrack
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::SignalTrack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
