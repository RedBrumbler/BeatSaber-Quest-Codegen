// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: TlsProtocols
  struct TlsProtocols;
  // Forward declaring type: AlertDescription
  struct AlertDescription;
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Forward declaring type: UnityTlsConversions
  class UnityTlsConversions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTlsConversions);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTlsConversions*, "Mono.Unity", "UnityTlsConversions");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTlsConversions
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTlsConversions : public ::Il2CppObject {
    public:
    // static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol GetMinProtocol(System.Security.Authentication.SslProtocols protocols)
    // Offset: 0x1E54608
    static ::Mono::Unity::UnityTls::unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols protocols);
    // static public Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol GetMaxProtocol(System.Security.Authentication.SslProtocols protocols)
    // Offset: 0x1E5472C
    static ::Mono::Unity::UnityTls::unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols protocols);
    // static public Mono.Security.Interface.TlsProtocols ConvertProtocolVersion(Mono.Unity.UnityTls/Mono.Unity.unitytls_protocol protocol)
    // Offset: 0x1E54850
    static ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::Mono::Unity::UnityTls::unitytls_protocol protocol);
    // static public Mono.Security.Interface.AlertDescription VerifyResultToAlertDescription(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result verifyResult, Mono.Security.Interface.AlertDescription defaultAlert)
    // Offset: 0x1E54870
    static ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult, ::Mono::Security::Interface::AlertDescription defaultAlert);
    // static public Mono.Security.Interface.MonoSslPolicyErrors VerifyResultToPolicyErrror(Mono.Unity.UnityTls/Mono.Unity.unitytls_x509verify_result verifyResult)
    // Offset: 0x1E54C48
    static ::Mono::Security::Interface::MonoSslPolicyErrors VerifyResultToPolicyErrror(::Mono::Unity::UnityTls::unitytls_x509verify_result verifyResult);
  }; // Mono.Unity.UnityTlsConversions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTlsConversions::GetMinProtocol
// Il2CppName: GetMinProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_protocol (*)(::System::Security::Authentication::SslProtocols)>(&Mono::Unity::UnityTlsConversions::GetMinProtocol)> {
  static const MethodInfo* get() {
    static auto* protocols = &::il2cpp_utils::GetClassFromName("System.Security.Authentication", "SslProtocols")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsConversions*), "GetMinProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocols});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsConversions::GetMaxProtocol
// Il2CppName: GetMaxProtocol
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::UnityTls::unitytls_protocol (*)(::System::Security::Authentication::SslProtocols)>(&Mono::Unity::UnityTlsConversions::GetMaxProtocol)> {
  static const MethodInfo* get() {
    static auto* protocols = &::il2cpp_utils::GetClassFromName("System.Security.Authentication", "SslProtocols")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsConversions*), "GetMaxProtocol", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocols});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsConversions::ConvertProtocolVersion
// Il2CppName: ConvertProtocolVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::TlsProtocols (*)(::Mono::Unity::UnityTls::unitytls_protocol)>(&Mono::Unity::UnityTlsConversions::ConvertProtocolVersion)> {
  static const MethodInfo* get() {
    static auto* protocol = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_protocol")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsConversions*), "ConvertProtocolVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{protocol});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription
// Il2CppName: VerifyResultToAlertDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::AlertDescription (*)(::Mono::Unity::UnityTls::unitytls_x509verify_result, ::Mono::Security::Interface::AlertDescription)>(&Mono::Unity::UnityTlsConversions::VerifyResultToAlertDescription)> {
  static const MethodInfo* get() {
    static auto* verifyResult = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_result")->byval_arg;
    static auto* defaultAlert = &::il2cpp_utils::GetClassFromName("Mono.Security.Interface", "AlertDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsConversions*), "VerifyResultToAlertDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verifyResult, defaultAlert});
  }
};
// Writing MetadataGetter for method: Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror
// Il2CppName: VerifyResultToPolicyErrror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoSslPolicyErrors (*)(::Mono::Unity::UnityTls::unitytls_x509verify_result)>(&Mono::Unity::UnityTlsConversions::VerifyResultToPolicyErrror)> {
  static const MethodInfo* get() {
    static auto* verifyResult = &::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_x509verify_result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTlsConversions*), "VerifyResultToPolicyErrror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{verifyResult});
  }
};
