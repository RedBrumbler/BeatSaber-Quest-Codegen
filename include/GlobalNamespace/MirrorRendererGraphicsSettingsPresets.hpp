// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedPresetsSO
#include "GlobalNamespace/NamedPresetsSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NamedPreset
  class NamedPreset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MirrorRendererGraphicsSettingsPresets
  class MirrorRendererGraphicsSettingsPresets : public GlobalNamespace::NamedPresetsSO {
    public:
    // Nested type: GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset
    class Preset;
    // private MirrorRendererGraphicsSettingsPresets/Preset[] _presets
    // Offset: 0x18
    ::Array<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*>* presets;
    // public MirrorRendererGraphicsSettingsPresets/Preset[] get_presets()
    // Offset: 0xBEDFCC
    ::Array<GlobalNamespace::MirrorRendererGraphicsSettingsPresets::Preset*>* get_presets();
    // public override NamedPreset[] get_namedPresets()
    // Offset: 0xBEDFD4
    // Implemented from: NamedPresetsSO
    // Base method: NamedPreset[] NamedPresetsSO::get_namedPresets()
    ::Array<GlobalNamespace::NamedPreset*>* get_namedPresets();
    // public System.Void .ctor()
    // Offset: 0xBEDFDC
    // Implemented from: NamedPresetsSO
    // Base method: System.Void NamedPresetsSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MirrorRendererGraphicsSettingsPresets* New_ctor();
  }; // MirrorRendererGraphicsSettingsPresets
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirrorRendererGraphicsSettingsPresets*, "", "MirrorRendererGraphicsSettingsPresets");
#pragma pack(pop)