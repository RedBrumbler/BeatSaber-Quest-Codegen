// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerHeightDetector
#include "GlobalNamespace/PlayerHeightDetector.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: PlayerHeightDetector/InitData
  class PlayerHeightDetector::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single headPosToPlayerHeightOffset
    // Size: 0x4
    // Offset: 0x10
    float headPosToPlayerHeightOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: InitData
    InitData(float headPosToPlayerHeightOffset_ = {}) noexcept : headPosToPlayerHeightOffset{headPosToPlayerHeightOffset_} {}
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return headPosToPlayerHeightOffset;
    }
    // public System.Void .ctor(System.Single headPosToPlayerHeightOffset)
    // Offset: 0x104CC4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerHeightDetector::InitData* New_ctor(float headPosToPlayerHeightOffset) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerHeightDetector::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerHeightDetector::InitData*, creationType>(headPosToPlayerHeightOffset)));
    }
  }; // PlayerHeightDetector/InitData
  #pragma pack(pop)
  static check_size<sizeof(PlayerHeightDetector::InitData), 16 + sizeof(float)> __GlobalNamespace_PlayerHeightDetector_InitDataSizeCheck;
  static_assert(sizeof(PlayerHeightDetector::InitData) == 0x14);
  // Writing MetadataGetter for method: PlayerHeightDetector::InitData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayerHeightDetector::InitData::*)(float)>(&PlayerHeightDetector::InitData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlayerHeightDetector::InitData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayerHeightDetector::InitData::*)(float)>(&PlayerHeightDetector::InitData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlayerHeightDetector::InitData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerHeightDetector::InitData*, "", "PlayerHeightDetector/InitData");
