// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData::VersionCheck);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData::VersionCheck*, "", "StandardLevelInfoSaveData/VersionCheck");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData/VersionCheck
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData::VersionCheck : public ::Il2CppObject {
    public:
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return version;
    }
    // Get instance field reference: private System.String _version
    [[deprecated("Use field access instead!")]] ::StringW& dyn__version();
    // public System.String get_version()
    // Offset: 0x1397498
    ::StringW get_version();
    // public System.Void .ctor()
    // Offset: 0x13974A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData::VersionCheck* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData::VersionCheck*, creationType>()));
    }
  }; // StandardLevelInfoSaveData/VersionCheck
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData::VersionCheck), 16 + sizeof(::StringW)> __GlobalNamespace_StandardLevelInfoSaveData_VersionCheckSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData::VersionCheck) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::VersionCheck*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
