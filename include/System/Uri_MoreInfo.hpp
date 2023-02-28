// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Uri::MoreInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri::MoreInfo*, "System", "Uri/MoreInfo");
// Type namespace: System
namespace System {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Uri/System.MoreInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class Uri::MoreInfo : public ::Il2CppObject {
    public:
    public:
    // public System.String Path
    // Size: 0x8
    // Offset: 0x10
    ::StringW Path;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Query
    // Size: 0x8
    // Offset: 0x18
    ::StringW Query;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Fragment
    // Size: 0x8
    // Offset: 0x20
    ::StringW Fragment;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AbsoluteUri
    // Size: 0x8
    // Offset: 0x28
    ::StringW AbsoluteUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Hash
    // Size: 0x4
    // Offset: 0x30
    int Hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Hash and: RemoteUrl
    char __padding4[0x4] = {};
    // public System.String RemoteUrl
    // Size: 0x8
    // Offset: 0x38
    ::StringW RemoteUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String Path
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Path();
    // Get instance field reference: public System.String Query
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Query();
    // Get instance field reference: public System.String Fragment
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Fragment();
    // Get instance field reference: public System.String AbsoluteUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AbsoluteUri();
    // Get instance field reference: public System.Int32 Hash
    [[deprecated("Use field access instead!")]] int& dyn_Hash();
    // Get instance field reference: public System.String RemoteUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_RemoteUrl();
    // public System.Void .ctor()
    // Offset: 0x2B7B69C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Uri::MoreInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Uri::MoreInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Uri::MoreInfo*, creationType>()));
    }
  }; // System.Uri/System.MoreInfo
  #pragma pack(pop)
  static check_size<sizeof(Uri::MoreInfo), 56 + sizeof(::StringW)> __System_Uri_MoreInfoSizeCheck;
  static_assert(sizeof(Uri::MoreInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Uri::MoreInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
