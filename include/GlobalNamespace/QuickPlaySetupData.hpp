// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuickPlaySetupData
  class QuickPlaySetupData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData*, "", "QuickPlaySetupData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupData
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class QuickPlaySetupData : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride
    class QuickPlaySongPacksOverride;
    public:
    // public QuickPlaySetupData/QuickPlaySongPacksOverride quickPlayAvailablePacksOverride
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride* quickPlayAvailablePacksOverride;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*
    constexpr operator ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*() const noexcept {
      return quickPlayAvailablePacksOverride;
    }
    // Get instance field reference: public QuickPlaySetupData/QuickPlaySongPacksOverride quickPlayAvailablePacksOverride
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*& dyn_quickPlayAvailablePacksOverride();
    // public System.Boolean get_hasOverride()
    // Offset: 0x142A288
    bool get_hasOverride();
    // public System.Void .ctor()
    // Offset: 0x142A30C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupData*, creationType>()));
    }
  }; // QuickPlaySetupData
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupData), 16 + sizeof(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride*)> __GlobalNamespace_QuickPlaySetupDataSizeCheck;
  static_assert(sizeof(QuickPlaySetupData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::get_hasOverride
// Il2CppName: get_hasOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySetupData::*)()>(&GlobalNamespace::QuickPlaySetupData::get_hasOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySetupData*), "get_hasOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
