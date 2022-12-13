// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MainEffectGraphicsSettingsPresetsSO
#include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
// Including type: NamedPreset
#include "GlobalNamespace/NamedPreset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO/Preset
  // [TokenAttribute] Offset: FFFFFFFF
  class MainEffectGraphicsSettingsPresetsSO::Preset : public ::GlobalNamespace::NamedPreset {
    public:
    public:
    // public MainEffectSO mainEffect
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MainEffectSO* mainEffect;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainEffectSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: public MainEffectSO mainEffect
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainEffectSO*& dyn_mainEffect();
    // public System.Void .ctor()
    // Offset: 0x1344728
    // Implemented from: NamedPreset
    // Base method: System.Void NamedPreset::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectGraphicsSettingsPresetsSO::Preset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectGraphicsSettingsPresetsSO::Preset*, creationType>()));
    }
  }; // MainEffectGraphicsSettingsPresetsSO/Preset
  #pragma pack(pop)
  static check_size<sizeof(MainEffectGraphicsSettingsPresetsSO::Preset), 24 + sizeof(::GlobalNamespace::MainEffectSO*)> __GlobalNamespace_MainEffectGraphicsSettingsPresetsSO_PresetSizeCheck;
  static_assert(sizeof(MainEffectGraphicsSettingsPresetsSO::Preset) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
