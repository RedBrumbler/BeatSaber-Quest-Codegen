// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: JumpDestinationMarker
  class JumpDestinationMarker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::JumpDestinationMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpDestinationMarker*, "", "JumpDestinationMarker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: JumpDestinationMarker
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: 10F8050
  class JumpDestinationMarker : public ::UnityEngine::Timeline::Marker {
    public:
    // public System.Void .ctor()
    // Offset: 0x162CD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JumpDestinationMarker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JumpDestinationMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JumpDestinationMarker*, creationType>()));
    }
  }; // JumpDestinationMarker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JumpDestinationMarker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
