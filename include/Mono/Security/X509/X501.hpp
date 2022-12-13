// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X501
  class X501;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X501);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X501*, "Mono.Security.X509", "X501");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X501
  // [TokenAttribute] Offset: FFFFFFFF
  class X501 : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] countryName
    static ::ArrayW<uint8_t> _get_countryName();
    // Set static field: static private System.Byte[] countryName
    static void _set_countryName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] organizationName
    static ::ArrayW<uint8_t> _get_organizationName();
    // Set static field: static private System.Byte[] organizationName
    static void _set_organizationName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] organizationalUnitName
    static ::ArrayW<uint8_t> _get_organizationalUnitName();
    // Set static field: static private System.Byte[] organizationalUnitName
    static void _set_organizationalUnitName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] commonName
    static ::ArrayW<uint8_t> _get_commonName();
    // Set static field: static private System.Byte[] commonName
    static void _set_commonName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] localityName
    static ::ArrayW<uint8_t> _get_localityName();
    // Set static field: static private System.Byte[] localityName
    static void _set_localityName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] stateOrProvinceName
    static ::ArrayW<uint8_t> _get_stateOrProvinceName();
    // Set static field: static private System.Byte[] stateOrProvinceName
    static void _set_stateOrProvinceName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] streetAddress
    static ::ArrayW<uint8_t> _get_streetAddress();
    // Set static field: static private System.Byte[] streetAddress
    static void _set_streetAddress(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] domainComponent
    static ::ArrayW<uint8_t> _get_domainComponent();
    // Set static field: static private System.Byte[] domainComponent
    static void _set_domainComponent(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] userid
    static ::ArrayW<uint8_t> _get_userid();
    // Set static field: static private System.Byte[] userid
    static void _set_userid(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] email
    static ::ArrayW<uint8_t> _get_email();
    // Set static field: static private System.Byte[] email
    static void _set_email(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] dnQualifier
    static ::ArrayW<uint8_t> _get_dnQualifier();
    // Set static field: static private System.Byte[] dnQualifier
    static void _set_dnQualifier(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] title
    static ::ArrayW<uint8_t> _get_title();
    // Set static field: static private System.Byte[] title
    static void _set_title(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] surname
    static ::ArrayW<uint8_t> _get_surname();
    // Set static field: static private System.Byte[] surname
    static void _set_surname(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] givenName
    static ::ArrayW<uint8_t> _get_givenName();
    // Set static field: static private System.Byte[] givenName
    static void _set_givenName(::ArrayW<uint8_t> value);
    // Get static field: static private System.Byte[] initial
    static ::ArrayW<uint8_t> _get_initial();
    // Set static field: static private System.Byte[] initial
    static void _set_initial(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x2B4C7F0
    static void _cctor();
    // static public System.String ToString(Mono.Security.ASN1 seq)
    // Offset: 0x2B4BDD0
    static ::StringW ToString(::Mono::Security::ASN1* seq);
    // static public System.String ToString(Mono.Security.ASN1 seq, System.Boolean reversed, System.String separator, System.Boolean quotes)
    // Offset: 0x2B4C628
    static ::StringW ToString(::Mono::Security::ASN1* seq, bool reversed, ::StringW separator, bool quotes);
    // static private System.Void AppendEntry(System.Text.StringBuilder sb, Mono.Security.ASN1 entry, System.Boolean quotes)
    // Offset: 0x2B4BF00
    static void AppendEntry(::System::Text::StringBuilder* sb, ::Mono::Security::ASN1* entry, bool quotes);
  }; // Mono.Security.X509.X501
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X501::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::X509::X501::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X501*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X501::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::ASN1*)>(&Mono::Security::X509::X501::ToString)> {
  static const MethodInfo* get() {
    static auto* seq = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X501*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seq});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X501::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Mono::Security::ASN1*, bool, ::StringW, bool)>(&Mono::Security::X509::X501::ToString)> {
  static const MethodInfo* get() {
    static auto* seq = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    static auto* reversed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* separator = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* quotes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X501*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seq, reversed, separator, quotes});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X501::AppendEntry
// Il2CppName: AppendEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::Mono::Security::ASN1*, bool)>(&Mono::Security::X509::X501::AppendEntry)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* entry = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    static auto* quotes = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X501*), "AppendEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, entry, quotes});
  }
};
