// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainImpl
#include "System/Security/Cryptography/X509Certificates/X509ChainImpl.hpp"
// Including type: System.Security.Cryptography.X509Certificates.StoreLocation
#include "System/Security/Cryptography/X509Certificates/StoreLocation.hpp"
// Including type: Mono.Security.X509.X509Crl
#include "Mono/Security/X509/X509Crl.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ChainElementCollection
  class X509ChainElementCollection;
  // Forward declaring type: X509ChainPolicy
  class X509ChainPolicy;
  // Forward declaring type: X509ChainStatus
  struct X509ChainStatus;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: X509ChainElement
  class X509ChainElement;
  // Forward declaring type: X509Certificate2Collection
  class X509Certificate2Collection;
  // Forward declaring type: X509Store
  class X509Store;
  // Forward declaring type: X509ChainStatusFlags
  struct X509ChainStatusFlags;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Extension
  class X509Extension;
  // Forward declaring type: X509Store
  class X509Store;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainImplMono
  class X509ChainImplMono : public System::Security::Cryptography::X509Certificates::X509ChainImpl {
    public:
    // private System.Security.Cryptography.X509Certificates.StoreLocation location
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::StoreLocation location;
    // private System.Security.Cryptography.X509Certificates.X509ChainElementCollection elements
    // Offset: 0x18
    System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements;
    // private System.Security.Cryptography.X509Certificates.X509ChainPolicy policy
    // Offset: 0x20
    System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy;
    // private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    // Offset: 0x28
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status;
    // private System.Int32 max_path_length
    // Offset: 0x30
    int max_path_length;
    // private System.Security.Cryptography.X509Certificates.X500DistinguishedName working_issuer_name
    // Offset: 0x38
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* working_issuer_name;
    // private System.Security.Cryptography.AsymmetricAlgorithm working_public_key
    // Offset: 0x40
    System::Security::Cryptography::AsymmetricAlgorithm* working_public_key;
    // private System.Security.Cryptography.X509Certificates.X509ChainElement bce_restriction
    // Offset: 0x48
    System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction;
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection roots
    // Offset: 0x50
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* roots;
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection cas
    // Offset: 0x58
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* cas;
    // private System.Security.Cryptography.X509Certificates.X509Store root_store
    // Offset: 0x60
    System::Security::Cryptography::X509Certificates::X509Store* root_store;
    // private System.Security.Cryptography.X509Certificates.X509Store ca_store
    // Offset: 0x68
    System::Security::Cryptography::X509Certificates::X509Store* ca_store;
    // private System.Security.Cryptography.X509Certificates.X509Store user_root_store
    // Offset: 0x70
    System::Security::Cryptography::X509Certificates::X509Store* user_root_store;
    // private System.Security.Cryptography.X509Certificates.X509Store user_ca_store
    // Offset: 0x78
    System::Security::Cryptography::X509Certificates::X509Store* user_ca_store;
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection collection
    // Offset: 0x80
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection;
    // Get static field: static private System.Security.Cryptography.X509Certificates.X509ChainStatus[] Empty
    static ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* _get_Empty();
    // Set static field: static private System.Security.Cryptography.X509Certificates.X509ChainStatus[] Empty
    static void _set_Empty(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* value);
    // public System.Void .ctor(System.Boolean useMachineContext)
    // Offset: 0x147C1A8
    static X509ChainImplMono* New_ctor(bool useMachineContext);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection get_Roots()
    // Offset: 0x147CC50
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Roots();
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection get_CertificateAuthorities()
    // Offset: 0x147CFBC
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateAuthorities();
    // private System.Security.Cryptography.X509Certificates.X509Store get_LMRootStore()
    // Offset: 0x147CD2C
    System::Security::Cryptography::X509Certificates::X509Store* get_LMRootStore();
    // private System.Security.Cryptography.X509Certificates.X509Store get_UserRootStore()
    // Offset: 0x147CE2C
    System::Security::Cryptography::X509Certificates::X509Store* get_UserRootStore();
    // private System.Security.Cryptography.X509Certificates.X509Store get_LMCAStore()
    // Offset: 0x147D098
    System::Security::Cryptography::X509Certificates::X509Store* get_LMCAStore();
    // private System.Security.Cryptography.X509Certificates.X509Store get_UserCAStore()
    // Offset: 0x147D198
    System::Security::Cryptography::X509Certificates::X509Store* get_UserCAStore();
    // private System.Security.Cryptography.X509Certificates.X509Certificate2Collection get_CertificateCollection()
    // Offset: 0x147D71C
    System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_CertificateCollection();
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147C85C
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags BuildChainFrom(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2 child, System.Security.Cryptography.X509Certificates.X509Certificate2Collection c)
    // Offset: 0x147DBC4
    System::Security::Cryptography::X509Certificates::X509Certificate2* SelectBestFromCollection(System::Security::Cryptography::X509Certificates::X509Certificate2* child, System::Security::Cryptography::X509Certificates::X509Certificate2Collection* c);
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147D9C8
    System::Security::Cryptography::X509Certificates::X509Certificate2* FindParent(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // private System.Boolean IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147DAEC
    bool IsChainComplete(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // private System.Boolean IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147DE9C
    bool IsSelfIssued(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // private System.Void ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flag)
    // Offset: 0x147C948
    void ValidateChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);
    // private System.Void Process(System.Int32 n)
    // Offset: 0x147DEE8
    void Process(int n);
    // private System.Void PrepareForNextCertificate(System.Int32 n)
    // Offset: 0x147E1B0
    void PrepareForNextCertificate(int n);
    // private System.Void WrapUp()
    // Offset: 0x147E5D0
    void WrapUp();
    // private System.Void ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement element)
    // Offset: 0x147E6AC
    void ProcessCertificateExtensions(System::Security::Cryptography::X509Certificates::X509ChainElement* element);
    // private System.Boolean IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2 signed, System.Security.Cryptography.AsymmetricAlgorithm pubkey)
    // Offset: 0x147E660
    bool IsSignedWith(System::Security::Cryptography::X509Certificates::X509Certificate2* _signed, System::Security::Cryptography::AsymmetricAlgorithm* pubkey);
    // private System.String GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147DDFC
    ::Il2CppString* GetSubjectKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // static private System.String GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147DD60
    static ::Il2CppString* GetAuthorityKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // static private System.String GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl crl)
    // Offset: 0x147EAF0
    static ::Il2CppString* GetAuthorityKeyIdentifier(Mono::Security::X509::X509Crl* crl);
    // static private System.String GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension ext)
    // Offset: 0x147E9A0
    static ::Il2CppString* GetAuthorityKeyIdentifier(Mono::Security::X509::X509Extension* ext);
    // private System.Void CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flag)
    // Offset: 0x147E3B8
    void CheckRevocationOnChain(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Int32 ca, System.Boolean online)
    // Offset: 0x147EB80
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, int ca, bool online);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Security.Cryptography.X509Certificates.X509Certificate2 ca_cert, System.Boolean online)
    // Offset: 0x147EC5C
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags CheckRevocation(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, System::Security::Cryptography::X509Certificates::X509Certificate2* ca_cert, bool online);
    // static private Mono.Security.X509.X509Crl CheckCrls(System.String subject, System.String ski, Mono.Security.X509.X509Store store)
    // Offset: 0x147F584
    static Mono::Security::X509::X509Crl* CheckCrls(::Il2CppString* subject, ::Il2CppString* ski, Mono::Security::X509::X509Store* store);
    // private Mono.Security.X509.X509Crl FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2 caCertificate)
    // Offset: 0x147EE34
    Mono::Security::X509::X509Crl* FindCrl(System::Security::Cryptography::X509Certificates::X509Certificate2* caCertificate);
    // private System.Boolean ProcessCrlExtensions(Mono.Security.X509.X509Crl crl)
    // Offset: 0x147F298
    bool ProcessCrlExtensions(Mono::Security::X509::X509Crl* crl);
    // private System.Boolean ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry entry)
    // Offset: 0x147EFD8
    bool ProcessCrlEntryExtensions(Mono::Security::X509::X509Crl::X509CrlEntry* entry);
    // static private System.Void .cctor()
    // Offset: 0x147F8C4
    static void _cctor();
    // public override System.Boolean get_IsValid()
    // Offset: 0x147C298
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Boolean X509ChainImpl::get_IsValid()
    bool get_IsValid();
    // public override System.Security.Cryptography.X509Certificates.X509ChainElementCollection get_ChainElements()
    // Offset: 0x147C2A0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection X509ChainImpl::get_ChainElements()
    System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();
    // public override System.Security.Cryptography.X509Certificates.X509ChainPolicy get_ChainPolicy()
    // Offset: 0x147C2A8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Security.Cryptography.X509Certificates.X509ChainPolicy X509ChainImpl::get_ChainPolicy()
    System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();
    // public override System.Void set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    // Offset: 0x147C2B0
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Void X509ChainImpl::set_ChainPolicy(System.Security.Cryptography.X509Certificates.X509ChainPolicy value)
    void set_ChainPolicy(System::Security::Cryptography::X509Certificates::X509ChainPolicy* value);
    // public override System.Boolean Build(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x147C2B8
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Boolean X509ChainImpl::Build(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    bool Build(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // public override System.Void Reset()
    // Offset: 0x147CABC
    // Implemented from: System.Security.Cryptography.X509Certificates.X509ChainImpl
    // Base method: System.Void X509ChainImpl::Reset()
    void Reset();
  }; // System.Security.Cryptography.X509Certificates.X509ChainImplMono
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainImplMono*, "System.Security.Cryptography.X509Certificates", "X509ChainImplMono");
#pragma pack(pop)