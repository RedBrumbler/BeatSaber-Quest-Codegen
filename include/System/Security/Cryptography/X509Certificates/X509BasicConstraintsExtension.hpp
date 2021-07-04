// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.AsnDecodeStatus
#include "System/Security/Cryptography/AsnDecodeStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Skipping declaration: AsnEncodedData because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
  class X509BasicConstraintsExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // private System.Boolean _certificateAuthority
    // Size: 0x1
    // Offset: 0x21
    bool certificateAuthority;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasPathLengthConstraint
    // Size: 0x1
    // Offset: 0x22
    bool hasPathLengthConstraint;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPathLengthConstraint and: pathLengthConstraint
    char __padding1[0x1] = {};
    // private System.Int32 _pathLengthConstraint
    // Size: 0x4
    // Offset: 0x24
    int pathLengthConstraint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Size: 0x4
    // Offset: 0x28
    System::Security::Cryptography::AsnDecodeStatus status;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::AsnDecodeStatus) == 0x4);
    // Creating value type constructor for type: X509BasicConstraintsExtension
    X509BasicConstraintsExtension(bool certificateAuthority_ = {}, bool hasPathLengthConstraint_ = {}, int pathLengthConstraint_ = {}, System::Security::Cryptography::AsnDecodeStatus status_ = {}) noexcept : certificateAuthority{certificateAuthority_}, hasPathLengthConstraint{hasPathLengthConstraint_}, pathLengthConstraint{pathLengthConstraint_}, status{status_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.19";
    // Get static field: static System.String oid
    static ::Il2CppString* _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::Il2CppString* value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Basic Constraints";
    // Get static field: static System.String friendlyName
    static ::Il2CppString* _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::Il2CppString* value);
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedBasicConstraints, System.Boolean critical)
    // Offset: 0x18452A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedBasicConstraints, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>(encodedBasicConstraints, critical)));
    }
    // public System.Void .ctor(System.Boolean certificateAuthority, System.Boolean hasPathLengthConstraint, System.Int32 pathLengthConstraint, System.Boolean critical)
    // Offset: 0x1845548
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor(bool certificateAuthority, bool hasPathLengthConstraint, int pathLengthConstraint, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>(certificateAuthority, hasPathLengthConstraint, pathLengthConstraint, critical)));
    }
    // public System.Boolean get_CertificateAuthority()
    // Offset: 0x18457D0
    bool get_CertificateAuthority();
    // public System.Boolean get_HasPathLengthConstraint()
    // Offset: 0x1845860
    bool get_HasPathLengthConstraint();
    // public System.Int32 get_PathLengthConstraint()
    // Offset: 0x18458F0
    int get_PathLengthConstraint();
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1845364
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // System.Byte[] Encode()
    // Offset: 0x1845664
    ::Array<uint8_t>* Encode();
    // public System.Void .ctor()
    // Offset: 0x1845208
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509BasicConstraintsExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509BasicConstraintsExtension*, creationType>()));
    }
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1845980
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x1845B24
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
  #pragma pack(pop)
  static check_size<sizeof(X509BasicConstraintsExtension), 40 + sizeof(System::Security::Cryptography::AsnDecodeStatus)> __System_Security_Cryptography_X509Certificates_X509BasicConstraintsExtensionSizeCheck;
  static_assert(sizeof(X509BasicConstraintsExtension) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority
// Il2CppName: get_CertificateAuthority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_CertificateAuthority)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_CertificateAuthority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint
// Il2CppName: get_HasPathLengthConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_HasPathLengthConstraint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_HasPathLengthConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint
// Il2CppName: get_PathLengthConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::get_PathLengthConstraint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "get_PathLengthConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsnDecodeStatus (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Decode)> {
  const MethodInfo* get() {
    static auto* extension = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::CopyFrom)> {
  const MethodInfo* get() {
    static auto* asnEncodedData = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsnEncodedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asnEncodedData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension::ToString)> {
  const MethodInfo* get() {
    static auto* multiLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiLine});
  }
};
