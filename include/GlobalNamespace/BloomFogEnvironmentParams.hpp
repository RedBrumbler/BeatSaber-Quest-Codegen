// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomFogEnvironmentParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogEnvironmentParams
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomFogEnvironmentParams : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // public System.Single attenuation
    // Size: 0x4
    // Offset: 0x18
    float attenuation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x1C
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightFogStartY
    // Size: 0x4
    // Offset: 0x20
    float heightFogStartY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightFogHeight
    // Size: 0x4
    // Offset: 0x24
    float heightFogHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1109CF0
    // public System.Single autoExposureLimit
    // Size: 0x4
    // Offset: 0x28
    float autoExposureLimit;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x1109D28
    // public System.Single noteSpawnIntensity
    // Size: 0x4
    // Offset: 0x2C
    float noteSpawnIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single attenuation
    [[deprecated("Use field access instead!")]] float& dyn_attenuation();
    // Get instance field reference: public System.Single offset
    [[deprecated("Use field access instead!")]] float& dyn_offset();
    // Get instance field reference: public System.Single heightFogStartY
    [[deprecated("Use field access instead!")]] float& dyn_heightFogStartY();
    // Get instance field reference: public System.Single heightFogHeight
    [[deprecated("Use field access instead!")]] float& dyn_heightFogHeight();
    // Get instance field reference: public System.Single autoExposureLimit
    [[deprecated("Use field access instead!")]] float& dyn_autoExposureLimit();
    // Get instance field reference: public System.Single noteSpawnIntensity
    [[deprecated("Use field access instead!")]] float& dyn_noteSpawnIntensity();
    // public System.Void .ctor()
    // Offset: 0x1CDFB0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogEnvironmentParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomFogEnvironmentParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogEnvironmentParams*, creationType>()));
    }
  }; // BloomFogEnvironmentParams
  #pragma pack(pop)
  static check_size<sizeof(BloomFogEnvironmentParams), 44 + sizeof(float)> __GlobalNamespace_BloomFogEnvironmentParamsSizeCheck;
  static_assert(sizeof(BloomFogEnvironmentParams) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogEnvironmentParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
