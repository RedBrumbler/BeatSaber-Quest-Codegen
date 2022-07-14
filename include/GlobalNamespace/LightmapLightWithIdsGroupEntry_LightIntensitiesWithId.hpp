// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightmapLightWithIdsGroupEntry
#include "GlobalNamespace/LightmapLightWithIdsGroupEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*, "", "LightmapLightWithIdsGroupEntry/LightIntensitiesWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: LightmapLightWithIdsGroupEntry/LightIntensitiesWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class LightmapLightWithIdsGroupEntry::LightIntensitiesWithId : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 _lightId
    // Size: 0x4
    // Offset: 0x10
    int lightId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x14
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _probeHighlightsIntensityMultiplier
    // Size: 0x4
    // Offset: 0x18
    float probeHighlightsIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _lightId
    [[deprecated("Use field access instead!")]] int& dyn__lightId();
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // Get instance field reference: private System.Single _probeHighlightsIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__probeHighlightsIntensityMultiplier();
    // public System.Int32 get_lightId()
    // Offset: 0x1E826C4
    int get_lightId();
    // public System.Single get_intensity()
    // Offset: 0x1E826CC
    float get_intensity();
    // public System.Single get_probeHighlightsIntensityMultiplier()
    // Offset: 0x1E826D4
    float get_probeHighlightsIntensityMultiplier();
    // public System.Void .ctor()
    // Offset: 0x1E826DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightmapLightWithIdsGroupEntry::LightIntensitiesWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*, creationType>()));
    }
  }; // LightmapLightWithIdsGroupEntry/LightIntensitiesWithId
  #pragma pack(pop)
  static check_size<sizeof(LightmapLightWithIdsGroupEntry::LightIntensitiesWithId), 24 + sizeof(float)> __GlobalNamespace_LightmapLightWithIdsGroupEntry_LightIntensitiesWithIdSizeCheck;
  static_assert(sizeof(LightmapLightWithIdsGroupEntry::LightIntensitiesWithId) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_lightId
// Il2CppName: get_lightId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_lightId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*), "get_lightId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_intensity
// Il2CppName: get_intensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_intensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*), "get_intensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier
// Il2CppName: get_probeHighlightsIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::*)()>(&GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::get_probeHighlightsIntensityMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId*), "get_probeHighlightsIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LightmapLightWithIdsGroupEntry::LightIntensitiesWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!