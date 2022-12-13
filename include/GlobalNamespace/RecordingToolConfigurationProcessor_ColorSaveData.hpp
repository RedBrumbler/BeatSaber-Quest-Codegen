// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RecordingToolConfigurationProcessor
#include "GlobalNamespace/RecordingToolConfigurationProcessor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RecordingToolConfigurationProcessor::ColorSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolConfigurationProcessor::ColorSaveData*, "", "RecordingToolConfigurationProcessor/ColorSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: RecordingToolConfigurationProcessor/ColorSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class RecordingToolConfigurationProcessor::ColorSaveData : public ::Il2CppObject {
    public:
    public:
    // public System.Single r
    // Size: 0x4
    // Offset: 0x10
    float r;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single g
    // Size: 0x4
    // Offset: 0x14
    float g;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single b
    // Size: 0x4
    // Offset: 0x18
    float b;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single r
    [[deprecated("Use field access instead!")]] float& dyn_r();
    // Get instance field reference: public System.Single g
    [[deprecated("Use field access instead!")]] float& dyn_g();
    // Get instance field reference: public System.Single b
    [[deprecated("Use field access instead!")]] float& dyn_b();
    // public System.Void .ctor()
    // Offset: 0x142EF00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RecordingToolConfigurationProcessor::ColorSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RecordingToolConfigurationProcessor::ColorSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RecordingToolConfigurationProcessor::ColorSaveData*, creationType>()));
    }
  }; // RecordingToolConfigurationProcessor/ColorSaveData
  #pragma pack(pop)
  static check_size<sizeof(RecordingToolConfigurationProcessor::ColorSaveData), 24 + sizeof(float)> __GlobalNamespace_RecordingToolConfigurationProcessor_ColorSaveDataSizeCheck;
  static_assert(sizeof(RecordingToolConfigurationProcessor::ColorSaveData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RecordingToolConfigurationProcessor::ColorSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
