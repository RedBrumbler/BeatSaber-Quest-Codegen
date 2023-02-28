// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
#include "GlobalNamespace/LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LiteNetLibConnectionManager::StartServerParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LiteNetLibConnectionManager::StartServerParams*, "", "LiteNetLibConnectionManager/StartServerParams");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/StartServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::StartServerParams : public ::GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase {
    public:
    // Writing base type padding for base size: 0x24 to desired offset: 0x28
    char ___base_padding[0x4] = {};
    public:
    // public System.String userId
    // Size: 0x8
    // Offset: 0x28
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x30
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String userId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userName();
    // public System.Void .ctor()
    // Offset: 0x16D92E0
    // Implemented from: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
    // Base method: System.Void LiteNetLibConnectionParamsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::StartServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LiteNetLibConnectionManager::StartServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::StartServerParams*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/StartServerParams
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::StartServerParams), 48 + sizeof(::StringW)> __GlobalNamespace_LiteNetLibConnectionManager_StartServerParamsSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::StartServerParams) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::StartServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
