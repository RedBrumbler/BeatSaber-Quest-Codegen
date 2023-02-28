// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1_;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Forward declaring type: ASN1Convert
  class ASN1Convert_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::ASN1Convert_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::ASN1Convert_*, "Mono.Security", "ASN1Convert");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.ASN1Convert
  // [TokenAttribute] Offset: FFFFFFFF
  class ASN1Convert_ : public ::Il2CppObject {
    public:
    // static public Mono.Security.ASN1 FromInt32(System.Int32 value)
    // Offset: 0x1FF21B8
    static ::Mono::Security::ASN1_* FromInt32(int value);
    // static public Mono.Security.ASN1 FromOid(System.String oid)
    // Offset: 0x1FF234C
    static ::Mono::Security::ASN1_* FromOid(::StringW oid);
    // static public System.Int32 ToInt32(Mono.Security.ASN1 asn1)
    // Offset: 0x1FF2404
    static int ToInt32(::Mono::Security::ASN1_* asn1);
    // static public System.String ToOid(Mono.Security.ASN1 asn1)
    // Offset: 0x1FF253C
    static ::StringW ToOid(::Mono::Security::ASN1_* asn1);
    // static public System.DateTime ToDateTime(Mono.Security.ASN1 time)
    // Offset: 0x1FF27C8
    static ::System::DateTime ToDateTime(::Mono::Security::ASN1_* time);
  }; // Mono.Security.ASN1Convert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::ASN1Convert_::FromInt32
// Il2CppName: FromInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1_* (*)(int)>(&Mono::Security::ASN1Convert_::FromInt32)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1Convert_*), "FromInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1Convert_::FromOid
// Il2CppName: FromOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1_* (*)(::StringW)>(&Mono::Security::ASN1Convert_::FromOid)> {
  static const MethodInfo* get() {
    static auto* oid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1Convert_*), "FromOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oid});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1Convert_::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Mono::Security::ASN1_*)>(&Mono::Security::ASN1Convert_::ToInt32)> {
  static const MethodInfo* get() {
    static auto* asn1 = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1Convert_*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1Convert_::ToOid
// Il2CppName: ToOid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::ASN1_*)>(&Mono::Security::ASN1Convert_::ToOid)> {
  static const MethodInfo* get() {
    static auto* asn1 = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1Convert_*), "ToOid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asn1});
  }
};
// Writing MetadataGetter for method: Mono::Security::ASN1Convert_::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::Mono::Security::ASN1_*)>(&Mono::Security::ASN1Convert_::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::ASN1Convert_*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
