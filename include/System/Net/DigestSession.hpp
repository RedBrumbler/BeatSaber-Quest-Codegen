// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: DigestHeaderParser
  class DigestHeaderParser;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DigestSession
  class DigestSession;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::DigestSession);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DigestSession*, "System.Net", "DigestSession");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestSession
  // [TokenAttribute] Offset: FFFFFFFF
  class DigestSession : public ::Il2CppObject {
    public:
    public:
    // private System.DateTime lastUse
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime lastUse;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Int32 _nc
    // Size: 0x4
    // Offset: 0x18
    int nc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nc and: hash
    char __padding1[0x4] = {};
    // private System.Security.Cryptography.HashAlgorithm hash
    // Size: 0x8
    // Offset: 0x20
    ::System::Security::Cryptography::HashAlgorithm* hash;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Net.DigestHeaderParser parser
    // Size: 0x8
    // Offset: 0x28
    ::System::Net::DigestHeaderParser* parser;
    // Field size check
    static_assert(sizeof(::System::Net::DigestHeaderParser*) == 0x8);
    // private System.String _cnonce
    // Size: 0x8
    // Offset: 0x30
    ::StringW cnonce;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static ::System::Security::Cryptography::RandomNumberGenerator* _get_rng();
    // Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
    static void _set_rng(::System::Security::Cryptography::RandomNumberGenerator* value);
    // Get instance field reference: private System.DateTime lastUse
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_lastUse();
    // Get instance field reference: private System.Int32 _nc
    [[deprecated("Use field access instead!")]] int& dyn__nc();
    // Get instance field reference: private System.Security.Cryptography.HashAlgorithm hash
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::HashAlgorithm*& dyn_hash();
    // Get instance field reference: private System.Net.DigestHeaderParser parser
    [[deprecated("Use field access instead!")]] ::System::Net::DigestHeaderParser*& dyn_parser();
    // Get instance field reference: private System.String _cnonce
    [[deprecated("Use field access instead!")]] ::StringW& dyn__cnonce();
    // public System.String get_Algorithm()
    // Offset: 0x1ABBA04
    ::StringW get_Algorithm();
    // public System.String get_Realm()
    // Offset: 0x1ABBA1C
    ::StringW get_Realm();
    // public System.String get_Nonce()
    // Offset: 0x1ABAA8C
    ::StringW get_Nonce();
    // public System.String get_Opaque()
    // Offset: 0x1ABBA34
    ::StringW get_Opaque();
    // public System.String get_QOP()
    // Offset: 0x1ABBA4C
    ::StringW get_QOP();
    // public System.String get_CNonce()
    // Offset: 0x1ABBA64
    ::StringW get_CNonce();
    // public System.DateTime get_LastUse()
    // Offset: 0x1ABBFFC
    ::System::DateTime get_LastUse();
    // static private System.Void .cctor()
    // Offset: 0x1ABB9AC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1ABA930
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestSession* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DigestSession::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestSession*, creationType>()));
    }
    // public System.Boolean Parse(System.String challenge)
    // Offset: 0x1ABA9B0
    bool Parse(::StringW challenge);
    // private System.String HashToHexString(System.String toBeHashed)
    // Offset: 0x1ABBB60
    ::StringW HashToHexString(::StringW toBeHashed);
    // private System.String HA1(System.String username, System.String password)
    // Offset: 0x1ABBCB8
    ::StringW HA1(::StringW username, ::StringW password);
    // private System.String HA2(System.Net.HttpWebRequest webRequest)
    // Offset: 0x1ABBDD8
    ::StringW HA2(::System::Net::HttpWebRequest* webRequest);
    // private System.String Response(System.String username, System.String password, System.Net.HttpWebRequest webRequest)
    // Offset: 0x1ABBEAC
    ::StringW Response(::StringW username, ::StringW password, ::System::Net::HttpWebRequest* webRequest);
    // public System.Net.Authorization Authenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1ABAAA4
    ::System::Net::Authorization* Authenticate(::System::Net::WebRequest* webRequest, ::System::Net::ICredentials* credentials);
  }; // System.Net.DigestSession
  #pragma pack(pop)
  static check_size<sizeof(DigestSession), 48 + sizeof(::StringW)> __System_Net_DigestSessionSizeCheck;
  static_assert(sizeof(DigestSession) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DigestSession::get_Algorithm
// Il2CppName: get_Algorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Algorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Algorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Realm
// Il2CppName: get_Realm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Realm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Realm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Nonce
// Il2CppName: get_Nonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Nonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Nonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_Opaque
// Il2CppName: get_Opaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_Opaque)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_Opaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_QOP
// Il2CppName: get_QOP
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_QOP)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_QOP", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_CNonce
// Il2CppName: get_CNonce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_CNonce)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_CNonce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::get_LastUse
// Il2CppName: get_LastUse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Net::DigestSession::*)()>(&System::Net::DigestSession::get_LastUse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "get_LastUse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::DigestSession::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DigestSession::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::DigestSession::*)(::StringW)>(&System::Net::DigestSession::Parse)> {
  static const MethodInfo* get() {
    static auto* challenge = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{challenge});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HashToHexString
// Il2CppName: HashToHexString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)(::StringW)>(&System::Net::DigestSession::HashToHexString)> {
  static const MethodInfo* get() {
    static auto* toBeHashed = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HashToHexString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toBeHashed});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HA1
// Il2CppName: HA1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)(::StringW, ::StringW)>(&System::Net::DigestSession::HA1)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HA1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::HA2
// Il2CppName: HA2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)(::System::Net::HttpWebRequest*)>(&System::Net::DigestSession::HA2)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "HA2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::Response
// Il2CppName: Response
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::DigestSession::*)(::StringW, ::StringW, ::System::Net::HttpWebRequest*)>(&System::Net::DigestSession::Response)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "HttpWebRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Response", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, password, webRequest});
  }
};
// Writing MetadataGetter for method: System::Net::DigestSession::Authenticate
// Il2CppName: Authenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Authorization* (System::Net::DigestSession::*)(::System::Net::WebRequest*, ::System::Net::ICredentials*)>(&System::Net::DigestSession::Authenticate)> {
  static const MethodInfo* get() {
    static auto* webRequest = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* credentials = &::il2cpp_utils::GetClassFromName("System.Net", "ICredentials")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DigestSession*), "Authenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webRequest, credentials});
  }
};
