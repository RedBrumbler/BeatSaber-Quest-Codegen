// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RelativeSfxVolumePerLevelSO
  class RelativeSfxVolumePerLevelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RelativeSfxVolumePerLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RelativeSfxVolumePerLevelSO*, "", "RelativeSfxVolumePerLevelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RelativeSfxVolumePerLevelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class RelativeSfxVolumePerLevelSO : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair
    class RelativeSfxVolumePair;
    public:
    // private RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair[] _relativeSfxVolumePerLevel
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*> relativeSfxVolumePerLevel;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair[] _relativeSfxVolumePerLevel
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*>& dyn__relativeSfxVolumePerLevel();
    // public RelativeSfxVolumePerLevelSO/RelativeSfxVolumePair[] get_relativeSfxVolumePerLevel()
    // Offset: 0x14653C4
    ::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*> get_relativeSfxVolumePerLevel();
    // public System.Void .ctor()
    // Offset: 0x14653CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RelativeSfxVolumePerLevelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RelativeSfxVolumePerLevelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RelativeSfxVolumePerLevelSO*, creationType>()));
    }
  }; // RelativeSfxVolumePerLevelSO
  #pragma pack(pop)
  static check_size<sizeof(RelativeSfxVolumePerLevelSO), 24 + sizeof(::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*>)> __GlobalNamespace_RelativeSfxVolumePerLevelSOSizeCheck;
  static_assert(sizeof(RelativeSfxVolumePerLevelSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel
// Il2CppName: get_relativeSfxVolumePerLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::RelativeSfxVolumePerLevelSO::RelativeSfxVolumePair*> (GlobalNamespace::RelativeSfxVolumePerLevelSO::*)()>(&GlobalNamespace::RelativeSfxVolumePerLevelSO::get_relativeSfxVolumePerLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RelativeSfxVolumePerLevelSO*), "get_relativeSfxVolumePerLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RelativeSfxVolumePerLevelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
