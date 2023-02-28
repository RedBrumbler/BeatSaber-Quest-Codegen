// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::PKCS7::ContentInfo);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::PKCS7::ContentInfo*, "Mono.Security", "PKCS7/ContentInfo");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.PKCS7/Mono.Security.ContentInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS7::ContentInfo : public ::Il2CppObject {
    public:
    public:
    // private System.String contentType
    // Size: 0x8
    // Offset: 0x10
    ::StringW contentType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Mono.Security.ASN1 content
    // Size: 0x8
    // Offset: 0x18
    ::Mono::Security::ASN1* content;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1*) == 0x8);
    public:
    // Get instance field reference: private System.String contentType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_contentType();
    // Get instance field reference: private Mono.Security.ASN1 content
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1*& dyn_content();
    // public Mono.Security.ASN1 get_ASN1()
    // Offset: 0x23D266C
    ::Mono::Security::ASN1* get_ASN1();
    // public Mono.Security.ASN1 get_Content()
    // Offset: 0x23D272C
    ::Mono::Security::ASN1* get_Content();
    // public System.Void set_Content(Mono.Security.ASN1 value)
    // Offset: 0x23D2734
    void set_Content(::Mono::Security::ASN1* value);
    // public System.String get_ContentType()
    // Offset: 0x23D273C
    ::StringW get_ContentType();
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x23D2744
    void set_ContentType(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x23D23C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>()));
    }
    // public System.Void .ctor(System.String oid)
    // Offset: 0x23D2438
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(::StringW oid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(oid)));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x23D2460
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(data)));
    }
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x23D24D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS7::ContentInfo* New_ctor(::Mono::Security::ASN1* asn1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::PKCS7::ContentInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS7::ContentInfo*, creationType>(asn1)));
    }
    // Mono.Security.ASN1 GetASN1()
    // Offset: 0x23D2670
    ::Mono::Security::ASN1* GetASN1();
  }; // Mono.Security.PKCS7/Mono.Security.ContentInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS7::ContentInfo), 24 + sizeof(::Mono::Security::ASN1*)> __Mono_Security_PKCS7_ContentInfoSizeCheck;
  static_assert(sizeof(PKCS7::ContentInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_ASN1
// Il2CppName: get_ASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_ASN1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_ASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_Content
// Il2CppName: get_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_Content)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::set_Content
// Il2CppName: set_Content
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::PKCS7::ContentInfo::*)(::Mono::Security::ASN1*)>(&Mono::Security::PKCS7::ContentInfo::set_Content)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "set_Content", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::get_ContentType
// Il2CppName: get_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::get_ContentType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "get_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::set_ContentType
// Il2CppName: set_ContentType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::PKCS7::ContentInfo::*)(::StringW)>(&Mono::Security::PKCS7::ContentInfo::set_ContentType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "set_ContentType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::PKCS7::ContentInfo::GetASN1
// Il2CppName: GetASN1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::PKCS7::ContentInfo::*)()>(&Mono::Security::PKCS7::ContentInfo::GetASN1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::PKCS7::ContentInfo*), "GetASN1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
