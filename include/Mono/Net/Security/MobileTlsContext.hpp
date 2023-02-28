// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Authentication.SslProtocols
#include "System/Security/Authentication/SslProtocols.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: ICertificateValidator2
  class ICertificateValidator2;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileTlsContext
  class MobileTlsContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::Security::MobileTlsContext);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::MobileTlsContext*, "Mono.Net.Security", "MobileTlsContext");
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MobileTlsContext
  // [TokenAttribute] Offset: FFFFFFFF
  class MobileTlsContext : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private Mono.Net.Security.MobileAuthenticatedStream parent
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Net::Security::MobileAuthenticatedStream* parent;
    // Field size check
    static_assert(sizeof(::Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // private System.Boolean serverMode
    // Size: 0x1
    // Offset: 0x18
    bool serverMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: serverMode and: targetHost
    char __padding1[0x7] = {};
    // private System.String targetHost
    // Size: 0x8
    // Offset: 0x20
    ::StringW targetHost;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String serverName
    // Size: 0x8
    // Offset: 0x28
    ::StringW serverName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.Authentication.SslProtocols enabledProtocols
    // Size: 0x4
    // Offset: 0x30
    ::System::Security::Authentication::SslProtocols enabledProtocols;
    // Field size check
    static_assert(sizeof(::System::Security::Authentication::SslProtocols) == 0x4);
    // Padding between fields: enabledProtocols and: serverCertificate
    char __padding4[0x4] = {};
    // private System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    // Size: 0x8
    // Offset: 0x38
    ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*) == 0x8);
    // private System.Boolean askForClientCert
    // Size: 0x1
    // Offset: 0x48
    bool askForClientCert;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: askForClientCert and: certificateValidator
    char __padding7[0x7] = {};
    // private Mono.Security.Interface.ICertificateValidator2 certificateValidator
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Security::Interface::ICertificateValidator2* certificateValidator;
    // Field size check
    static_assert(sizeof(::Mono::Security::Interface::ICertificateValidator2*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private Mono.Net.Security.MobileAuthenticatedStream parent
    [[deprecated("Use field access instead!")]] ::Mono::Net::Security::MobileAuthenticatedStream*& dyn_parent();
    // Get instance field reference: private System.Boolean serverMode
    [[deprecated("Use field access instead!")]] bool& dyn_serverMode();
    // Get instance field reference: private System.String targetHost
    [[deprecated("Use field access instead!")]] ::StringW& dyn_targetHost();
    // Get instance field reference: private System.String serverName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_serverName();
    // Get instance field reference: private System.Security.Authentication.SslProtocols enabledProtocols
    [[deprecated("Use field access instead!")]] ::System::Security::Authentication::SslProtocols& dyn_enabledProtocols();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate*& dyn_serverCertificate();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*& dyn_clientCertificates();
    // Get instance field reference: private System.Boolean askForClientCert
    [[deprecated("Use field access instead!")]] bool& dyn_askForClientCert();
    // Get instance field reference: private Mono.Security.Interface.ICertificateValidator2 certificateValidator
    [[deprecated("Use field access instead!")]] ::Mono::Security::Interface::ICertificateValidator2*& dyn_certificateValidator();
    // Mono.Net.Security.MobileAuthenticatedStream get_Parent()
    // Offset: 0x1B2AF68
    ::Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
    // public Mono.Security.Interface.MonoTlsSettings get_Settings()
    // Offset: 0x1B2AF70
    ::Mono::Security::Interface::MonoTlsSettings* get_Settings();
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsAuthenticated();
    // public System.Boolean get_IsServer()
    // Offset: 0x1B2AF8C
    bool get_IsServer();
    // protected System.String get_TargetHost()
    // Offset: 0x1B2AF94
    ::StringW get_TargetHost();
    // protected System.String get_ServerName()
    // Offset: 0x1B2AF9C
    ::StringW get_ServerName();
    // protected System.Security.Cryptography.X509Certificates.X509CertificateCollection get_ClientCertificates()
    // Offset: 0x1B2AFA4
    ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* get_ClientCertificates();
    // System.Security.Cryptography.X509Certificates.X509Certificate get_LocalServerCertificate()
    // Offset: 0x1B2AFAC
    ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalServerCertificate();
    // System.Security.Cryptography.X509Certificates.X509Certificate get_LocalClientCertificate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::X509Certificates::X509Certificate* get_LocalClientCertificate();
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    // Offset: 0x1B2AE38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MobileTlsContext* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool serverMode, ::StringW targetHost, ::System::Security::Authentication::SslProtocols enabledProtocols, ::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::Security::MobileTlsContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MobileTlsContext*, creationType>(parent, serverMode, targetHost, enabledProtocols, serverCertificate, clientCertificates, askForClientCert)));
    }
    // public System.Void StartHandshake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void StartHandshake();
    // public System.Boolean ProcessHandshake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ProcessHandshake();
    // public System.Void FinishHandshake()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void FinishHandshake();
    // public System.ValueTuple`2<System.Int32,System.Boolean> Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ValueTuple_2<int, bool> Read(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.ValueTuple`2<System.Int32,System.Boolean> Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ValueTuple_2<int, bool> Write(::ArrayW<uint8_t> buffer, int offset, int count);
    // public System.Void Shutdown()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Shutdown();
    // protected System.Boolean ValidateCertificate(System.Security.Cryptography.X509Certificates.X509Certificate leaf, System.Security.Cryptography.X509Certificates.X509Chain chain)
    // Offset: 0x1B2AFB4
    bool ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* leaf, ::System::Security::Cryptography::X509Certificates::X509Chain* chain);
    // protected System.Boolean ValidateCertificate(System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates)
    // Offset: 0x1B2B0BC
    bool ValidateCertificate(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates);
    // protected System.Security.Cryptography.X509Certificates.X509Certificate SelectClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.String[] acceptableIssuers)
    // Offset: 0x1B2B1B8
    ::System::Security::Cryptography::X509Certificates::X509Certificate* SelectClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, ::ArrayW<::StringW> acceptableIssuers);
    // public System.Void Dispose()
    // Offset: 0x1B29368
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1B2B334
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0x1B2B338
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Net.Security.MobileTlsContext
  #pragma pack(pop)
  static check_size<sizeof(MobileTlsContext), 80 + sizeof(::Mono::Security::Interface::ICertificateValidator2*)> __Mono_Net_Security_MobileTlsContextSizeCheck;
  static_assert(sizeof(MobileTlsContext) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_Parent
// Il2CppName: get_Parent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::Security::MobileAuthenticatedStream* (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_Parent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_Parent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_Settings
// Il2CppName: get_Settings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_Settings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_Settings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_IsAuthenticated
// Il2CppName: get_IsAuthenticated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_IsAuthenticated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_IsAuthenticated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_IsServer
// Il2CppName: get_IsServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_IsServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_IsServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_TargetHost
// Il2CppName: get_TargetHost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_TargetHost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_TargetHost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_ServerName
// Il2CppName: get_ServerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_ServerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_ServerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_ClientCertificates
// Il2CppName: get_ClientCertificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_ClientCertificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_ClientCertificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_LocalServerCertificate
// Il2CppName: get_LocalServerCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_LocalServerCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_LocalServerCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::get_LocalClientCertificate
// Il2CppName: get_LocalClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::get_LocalClientCertificate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "get_LocalClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::StartHandshake
// Il2CppName: StartHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::StartHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "StartHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::ProcessHandshake
// Il2CppName: ProcessHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::ProcessHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "ProcessHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::FinishHandshake
// Il2CppName: FinishHandshake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::FinishHandshake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "FinishHandshake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int, bool> (Mono::Net::Security::MobileTlsContext::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Net::Security::MobileTlsContext::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ValueTuple_2<int, bool> (Mono::Net::Security::MobileTlsContext::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Net::Security::MobileTlsContext::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::Shutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsContext::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*)>(&Mono::Net::Security::MobileTlsContext::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* leaf = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* chain = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Chain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leaf, chain});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::ValidateCertificate
// Il2CppName: ValidateCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Net::Security::MobileTlsContext::*)(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*)>(&Mono::Net::Security::MobileTlsContext::ValidateCertificate)> {
  static const MethodInfo* get() {
    static auto* certificates = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "ValidateCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificates});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::SelectClientCertificate
// Il2CppName: SelectClientCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (Mono::Net::Security::MobileTlsContext::*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(&Mono::Net::Security::MobileTlsContext::SelectClientCertificate)> {
  static const MethodInfo* get() {
    static auto* serverCertificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* acceptableIssuers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "SelectClientCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverCertificate, acceptableIssuers});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)(bool)>(&Mono::Net::Security::MobileTlsContext::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Mono::Net::Security::MobileTlsContext::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Net::Security::MobileTlsContext::*)()>(&Mono::Net::Security::MobileTlsContext::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::Security::MobileTlsContext*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
