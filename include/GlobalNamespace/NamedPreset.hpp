// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NamedPreset
  class NamedPreset : public ::Il2CppObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0xE17550
    // private System.String _presetNameLocalizationKey
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* presetNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: NamedPreset
    NamedPreset(::Il2CppString* presetNameLocalizationKey_ = {}) noexcept : presetNameLocalizationKey{presetNameLocalizationKey_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return presetNameLocalizationKey;
    }
    // public System.String get_presetNameLocalizationKey()
    // Offset: 0x10157C4
    ::Il2CppString* get_presetNameLocalizationKey();
    // public System.Void .ctor()
    // Offset: 0x10157CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedPreset*, creationType>()));
    }
  }; // NamedPreset
  #pragma pack(pop)
  static check_size<sizeof(NamedPreset), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_NamedPresetSizeCheck;
  static_assert(sizeof(NamedPreset) == 0x18);
  // Writing MetadataGetter for method: NamedPreset::get_presetNameLocalizationKey
  // Il2CppName: get_presetNameLocalizationKey
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (NamedPreset::*)()>(&NamedPreset::get_presetNameLocalizationKey)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NamedPreset*), "get_presetNameLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: NamedPreset::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NamedPreset::*)()>(&NamedPreset::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NamedPreset*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NamedPreset::*)()>(&NamedPreset::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(NamedPreset*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPreset*, "", "NamedPreset");
