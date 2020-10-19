// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Autogenerated type: Mono.Security.PKCS7/ContentInfo
  class PKCS7::ContentInfo : public ::Il2CppObject {
    public:
    // private System.String contentType
    // Offset: 0x10
    ::Il2CppString* contentType;
    // private Mono.Security.ASN1 content
    // Offset: 0x18
    Mono::Security::ASN1* content;
    // public System.Void .ctor(System.String oid)
    // Offset: 0x19296F0
    static PKCS7::ContentInfo* New_ctor(::Il2CppString* oid);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1929720
    static PKCS7::ContentInfo* New_ctor(::Array<uint8_t>* data);
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x1929790
    static PKCS7::ContentInfo* New_ctor(Mono::Security::ASN1* asn1);
    // public Mono.Security.ASN1 get_ASN1()
    // Offset: 0x1929950
    Mono::Security::ASN1* get_ASN1();
    // public Mono.Security.ASN1 get_Content()
    // Offset: 0x1929A1C
    Mono::Security::ASN1* get_Content();
    // public System.Void set_Content(Mono.Security.ASN1 value)
    // Offset: 0x1929A24
    void set_Content(Mono::Security::ASN1* value);
    // public System.String get_ContentType()
    // Offset: 0x1929A2C
    ::Il2CppString* get_ContentType();
    // public System.Void set_ContentType(System.String value)
    // Offset: 0x1929A34
    void set_ContentType(::Il2CppString* value);
    // Mono.Security.ASN1 GetASN1()
    // Offset: 0x1929954
    Mono::Security::ASN1* GetASN1();
    // public System.Void .ctor()
    // Offset: 0x1929664
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PKCS7::ContentInfo* New_ctor();
  }; // Mono.Security.PKCS7/ContentInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::PKCS7::ContentInfo*, "Mono.Security", "PKCS7/ContentInfo");
#pragma pack(pop)