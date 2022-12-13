// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderData
#include "GlobalNamespace/VRControllersRecorderData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderData::Keyframe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderData::Keyframe*, "", "VRControllersRecorderData/Keyframe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderData/Keyframe
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderData::Keyframe : public ::Il2CppObject {
    public:
    public:
    // public readonly VRControllersRecorderData/PositionAndRotation[] positionsAndRotations
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::VRControllersRecorderData::PositionAndRotation> positionsAndRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::VRControllersRecorderData::PositionAndRotation>) == 0x8);
    // public readonly System.Single time
    // Size: 0x4
    // Offset: 0x18
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly VRControllersRecorderData/PositionAndRotation[] positionsAndRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::VRControllersRecorderData::PositionAndRotation>& dyn_positionsAndRotations();
    // Get instance field reference: public readonly System.Single time
    [[deprecated("Use field access instead!")]] float& dyn_time();
    // public System.Void .ctor(VRControllersRecorderData/PositionAndRotation[] positionAndRotations, System.Single time)
    // Offset: 0x165A91C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderData::Keyframe* New_ctor(::ArrayW<::GlobalNamespace::VRControllersRecorderData::PositionAndRotation> positionAndRotations, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderData::Keyframe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderData::Keyframe*, creationType>(positionAndRotations, time)));
    }
  }; // VRControllersRecorderData/Keyframe
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderData::Keyframe), 24 + sizeof(float)> __GlobalNamespace_VRControllersRecorderData_KeyframeSizeCheck;
  static_assert(sizeof(VRControllersRecorderData::Keyframe) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderData::Keyframe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
