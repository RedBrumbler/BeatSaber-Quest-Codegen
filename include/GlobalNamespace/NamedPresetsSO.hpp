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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: NamedPresetsSO
  class NamedPresetsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NamedPresetsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedPresetsSO*, "", "NamedPresetsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NamedPresetsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class NamedPresetsSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // public NamedPreset[] get_namedPresets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::GlobalNamespace::NamedPreset*> get_namedPresets();
    // protected System.Void .ctor()
    // Offset: 0x1504EC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedPresetsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NamedPresetsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedPresetsSO*, creationType>()));
    }
  }; // NamedPresetsSO
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NamedPresetsSO::get_namedPresets
// Il2CppName: get_namedPresets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::NamedPreset*> (GlobalNamespace::NamedPresetsSO::*)()>(&GlobalNamespace::NamedPresetsSO::get_namedPresets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NamedPresetsSO*), "get_namedPresets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NamedPresetsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
