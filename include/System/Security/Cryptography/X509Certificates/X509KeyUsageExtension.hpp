// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Extension
#include "System/Security/Cryptography/X509Certificates/X509Extension.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
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
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
  class X509KeyUsageExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x24
    char ___base_padding[0x3] = {};
    // private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags _keyUsages
    // Size: 0x4
    // Offset: 0x24
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags) == 0x4);
    // private System.Security.Cryptography.AsnDecodeStatus _status
    // Size: 0x4
    // Offset: 0x28
    System::Security::Cryptography::AsnDecodeStatus status;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::AsnDecodeStatus) == 0x4);
    // Creating value type constructor for type: X509KeyUsageExtension
    X509KeyUsageExtension(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages_ = {}, System::Security::Cryptography::AsnDecodeStatus status_ = {}) noexcept : keyUsages{keyUsages_}, status{status_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // static field const value: static System.String oid
    static constexpr const char* oid = "2.5.29.15";
    // Get static field: static System.String oid
    static ::Il2CppString* _get_oid();
    // Set static field: static System.String oid
    static void _set_oid(::Il2CppString* value);
    // static field const value: static System.String friendlyName
    static constexpr const char* friendlyName = "Key Usage";
    // Get static field: static System.String friendlyName
    static ::Il2CppString* _get_friendlyName();
    // Set static field: static System.String friendlyName
    static void _set_friendlyName(::Il2CppString* value);
    // static field const value: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static constexpr const int all = 33023;
    // Get static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_all();
    // Set static field: static System.Security.Cryptography.X509Certificates.X509KeyUsageFlags all
    static void _set_all(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // public System.Void .ctor(System.Security.Cryptography.AsnEncodedData encodedKeyUsage, System.Boolean critical)
    // Offset: 0x1851C54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509KeyUsageExtension* New_ctor(System::Security::Cryptography::AsnEncodedData* encodedKeyUsage, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509KeyUsageExtension*, creationType>(encodedKeyUsage, critical)));
    }
    // public System.Void .ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags keyUsages, System.Boolean critical)
    // Offset: 0x1852408
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509KeyUsageExtension* New_ctor(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509KeyUsageExtension*, creationType>(keyUsages, critical)));
    }
    // public System.Security.Cryptography.X509Certificates.X509KeyUsageFlags get_KeyUsages()
    // Offset: 0x18486F4
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages();
    // System.Security.Cryptography.X509Certificates.X509KeyUsageFlags GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags flags)
    // Offset: 0x18524D4
    System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags);
    // System.Security.Cryptography.AsnDecodeStatus Decode(System.Byte[] extension)
    // Offset: 0x1852234
    System::Security::Cryptography::AsnDecodeStatus Decode(::Array<uint8_t>* extension);
    // System.Byte[] Encode()
    // Offset: 0x18524E4
    ::Array<uint8_t>* Encode();
    // public System.Void .ctor()
    // Offset: 0x18521A4
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::.ctor()
    // Base method: System.Void AsnEncodedData::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509KeyUsageExtension* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509KeyUsageExtension*, creationType>()));
    }
    // public override System.Void CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    // Offset: 0x1852654
    // Implemented from: System.Security.Cryptography.X509Certificates.X509Extension
    // Base method: System.Void X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData asnEncodedData)
    void CopyFrom(System::Security::Cryptography::AsnEncodedData* asnEncodedData);
    // override System.String ToString(System.Boolean multiLine)
    // Offset: 0x18527F8
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::ToString(System.Boolean multiLine)
    ::Il2CppString* ToString(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
  #pragma pack(pop)
  static check_size<sizeof(X509KeyUsageExtension), 40 + sizeof(System::Security::Cryptography::AsnDecodeStatus)> __System_Security_Cryptography_X509Certificates_X509KeyUsageExtensionSizeCheck;
  static_assert(sizeof(X509KeyUsageExtension) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages
// Il2CppName: get_KeyUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::get_KeyUsages)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "get_KeyUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags
// Il2CppName: GetValidFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509KeyUsageFlags (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags)>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::GetValidFlags)> {
  const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "GetValidFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::AsnDecodeStatus (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(::Array<uint8_t>*)>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Decode)> {
  const MethodInfo* get() {
    static auto* extension = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{extension});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode
// Il2CppName: Encode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)()>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::Encode)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "Encode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(System::Security::Cryptography::AsnEncodedData*)>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::CopyFrom)> {
  const MethodInfo* get() {
    static auto* asnEncodedData = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsnEncodedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asnEncodedData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::*)(bool)>(&System::Security::Cryptography::X509Certificates::X509KeyUsageExtension::ToString)> {
  const MethodInfo* get() {
    static auto* multiLine = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509KeyUsageExtension*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiLine});
  }
};
