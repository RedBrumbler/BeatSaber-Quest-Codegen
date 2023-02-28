// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation*, "", "VRControllersRecorderSaveData/PositionAndRotation");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: VRControllersRecorderSaveData/PositionAndRotation
  // [TokenAttribute] Offset: FFFFFFFF
  class VRControllersRecorderSaveData::PositionAndRotation : public ::Il2CppObject {
    public:
    public:
    // public System.Single posX
    // Size: 0x4
    // Offset: 0x10
    float posX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posY
    // Size: 0x4
    // Offset: 0x14
    float posY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single posZ
    // Size: 0x4
    // Offset: 0x18
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotX
    // Size: 0x4
    // Offset: 0x1C
    float rotX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotY
    // Size: 0x4
    // Offset: 0x20
    float rotY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotZ
    // Size: 0x4
    // Offset: 0x24
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotW
    // Size: 0x4
    // Offset: 0x28
    float rotW;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single posX
    [[deprecated("Use field access instead!")]] float& dyn_posX();
    // Get instance field reference: public System.Single posY
    [[deprecated("Use field access instead!")]] float& dyn_posY();
    // Get instance field reference: public System.Single posZ
    [[deprecated("Use field access instead!")]] float& dyn_posZ();
    // Get instance field reference: public System.Single rotX
    [[deprecated("Use field access instead!")]] float& dyn_rotX();
    // Get instance field reference: public System.Single rotY
    [[deprecated("Use field access instead!")]] float& dyn_rotY();
    // Get instance field reference: public System.Single rotZ
    [[deprecated("Use field access instead!")]] float& dyn_rotZ();
    // Get instance field reference: public System.Single rotW
    [[deprecated("Use field access instead!")]] float& dyn_rotW();
    // public System.Void .ctor()
    // Offset: 0x153DD94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRControllersRecorderSaveData::PositionAndRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRControllersRecorderSaveData::PositionAndRotation*, creationType>()));
    }
  }; // VRControllersRecorderSaveData/PositionAndRotation
  #pragma pack(pop)
  static check_size<sizeof(VRControllersRecorderSaveData::PositionAndRotation), 40 + sizeof(float)> __GlobalNamespace_VRControllersRecorderSaveData_PositionAndRotationSizeCheck;
  static_assert(sizeof(VRControllersRecorderSaveData::PositionAndRotation) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VRControllersRecorderSaveData::PositionAndRotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
