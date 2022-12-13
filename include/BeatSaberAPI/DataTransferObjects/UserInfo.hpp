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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserInfo
  class UserInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::UserInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::UserInfo*, "BeatSaberAPI.DataTransferObjects", "UserInfo");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class UserInfo : public ::Il2CppObject {
    public:
    public:
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x10
    ::StringW platformUserId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String publicPlatformDisplayName
    // Size: 0x8
    // Offset: 0x18
    ::StringW publicPlatformDisplayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String platformUserId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_platformUserId();
    // Get instance field reference: public System.String publicPlatformDisplayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_publicPlatformDisplayName();
    // public System.Void .ctor()
    // Offset: 0x13AEE50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatSaberAPI::DataTransferObjects::UserInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserInfo*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.UserInfo
  #pragma pack(pop)
  static check_size<sizeof(UserInfo), 24 + sizeof(::StringW)> __BeatSaberAPI_DataTransferObjects_UserInfoSizeCheck;
  static_assert(sizeof(UserInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::UserInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
