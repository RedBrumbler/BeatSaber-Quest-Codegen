// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: Mono.Security.PKCS7
#include "Mono/Security/PKCS7.hpp"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RandomNumberGenerator
  class RandomNumberGenerator;
  // Forward declaring type: SymmetricAlgorithm
  class SymmetricAlgorithm;
  // Forward declaring type: DSAParameters
  struct DSAParameters;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: PKCS12
  class PKCS12;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::PKCS12);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.PKCS12
  // [TokenAttribute] Offset: FFFFFFFF
  class PKCS12 : public ::Il2CppObject/*, public ::System::ICloneable*/ {
    public:
    // Nested type: ::Mono::Security::X509::PKCS12::DeriveBytes
    class DeriveBytes;
    public:
    // private System.Byte[] _password
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> password;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Collections.ArrayList _keyBags
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* keyBags;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList _secretBags
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ArrayList* secretBags;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private Mono.Security.X509.X509CertificateCollection _certs
    // Size: 0x8
    // Offset: 0x28
    ::Mono::Security::X509::X509CertificateCollection* certs;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509CertificateCollection*) == 0x8);
    // private System.Boolean _keyBagsChanged
    // Size: 0x1
    // Offset: 0x30
    bool keyBagsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _secretBagsChanged
    // Size: 0x1
    // Offset: 0x31
    bool secretBagsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _certsChanged
    // Size: 0x1
    // Offset: 0x32
    bool certsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: certsChanged and: iterations
    char __padding6[0x1] = {};
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x34
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.ArrayList _safeBags
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::ArrayList* safeBags;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Security.Cryptography.RandomNumberGenerator _rng
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Cryptography::RandomNumberGenerator* rng;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RandomNumberGenerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Creating interface conversion operator: i_ICloneable
    inline ::System::ICloneable* i_ICloneable() noexcept {
      return reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get static field: static private System.Int32 password_max_length
    static int _get_password_max_length();
    // Set static field: static private System.Int32 password_max_length
    static void _set_password_max_length(int value);
    // Get instance field reference: private System.Byte[] _password
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__password();
    // Get instance field reference: private System.Collections.ArrayList _keyBags
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__keyBags();
    // Get instance field reference: private System.Collections.ArrayList _secretBags
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__secretBags();
    // Get instance field reference: private Mono.Security.X509.X509CertificateCollection _certs
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509CertificateCollection*& dyn__certs();
    // Get instance field reference: private System.Boolean _keyBagsChanged
    [[deprecated("Use field access instead!")]] bool& dyn__keyBagsChanged();
    // Get instance field reference: private System.Boolean _secretBagsChanged
    [[deprecated("Use field access instead!")]] bool& dyn__secretBagsChanged();
    // Get instance field reference: private System.Boolean _certsChanged
    [[deprecated("Use field access instead!")]] bool& dyn__certsChanged();
    // Get instance field reference: private System.Int32 _iterations
    [[deprecated("Use field access instead!")]] int& dyn__iterations();
    // Get instance field reference: private System.Collections.ArrayList _safeBags
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn__safeBags();
    // Get instance field reference: private System.Security.Cryptography.RandomNumberGenerator _rng
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RandomNumberGenerator*& dyn__rng();
    // public System.Void set_Password(System.String value)
    // Offset: 0x23D6E70
    void set_Password(::StringW value);
    // public System.Int32 get_IterationCount()
    // Offset: 0x23D7FC0
    int get_IterationCount();
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x23D7FC8
    void set_IterationCount(int value);
    // public System.Collections.ArrayList get_Keys()
    // Offset: 0x23D7FD0
    ::System::Collections::ArrayList* get_Keys();
    // public Mono.Security.X509.X509CertificateCollection get_Certificates()
    // Offset: 0x23D87A0
    ::Mono::Security::X509::X509CertificateCollection* get_Certificates();
    // System.Security.Cryptography.RandomNumberGenerator get_RNG()
    // Offset: 0x23D8B24
    ::System::Security::Cryptography::RandomNumberGenerator* get_RNG();
    // static public System.Int32 get_MaximumPasswordLength()
    // Offset: 0x23DCA18
    static int get_MaximumPasswordLength();
    // public System.Void .ctor()
    // Offset: 0x23D6D64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x23D6E38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>(data)));
    }
    // public System.Void .ctor(System.Byte[] data, System.String password)
    // Offset: 0x23D765C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS12* New_ctor(::ArrayW<uint8_t> data, ::StringW password) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::PKCS12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS12*, creationType>(data, password)));
    }
    // static private System.Void .cctor()
    // Offset: 0x23DCA80
    static void _cctor();
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x23D7050
    void Decode(::ArrayW<uint8_t> data);
    // private System.Boolean Compare(System.Byte[] expected, System.Byte[] actual)
    // Offset: 0x23D77F4
    bool Compare(::ArrayW<uint8_t> expected, ::ArrayW<uint8_t> actual);
    // private System.Security.Cryptography.SymmetricAlgorithm GetSymmetricAlgorithm(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount)
    // Offset: 0x23D8B50
    ::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int iterationCount);
    // public System.Byte[] Decrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] encryptedData)
    // Offset: 0x23D8618
    ::ArrayW<uint8_t> Decrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int iterationCount, ::ArrayW<uint8_t> encryptedData);
    // public System.Byte[] Decrypt(Mono.Security.PKCS7/Mono.Security.EncryptedData ed)
    // Offset: 0x23D7EA4
    ::ArrayW<uint8_t> Decrypt(::Mono::Security::PKCS7::EncryptedData* ed);
    // public System.Byte[] Encrypt(System.String algorithmOid, System.Byte[] salt, System.Int32 iterationCount, System.Byte[] data)
    // Offset: 0x23D9004
    ::ArrayW<uint8_t> Encrypt(::StringW algorithmOid, ::ArrayW<uint8_t> salt, int iterationCount, ::ArrayW<uint8_t> data);
    // private System.Security.Cryptography.DSAParameters GetExistingParameters(out System.Boolean found)
    // Offset: 0x23D91E0
    ::System::Security::Cryptography::DSAParameters GetExistingParameters(ByRef<bool> found);
    // private System.Void AddPrivateKey(Mono.Security.Cryptography.PKCS8/Mono.Security.Cryptography.PrivateKeyInfo pki)
    // Offset: 0x23D9414
    void AddPrivateKey(::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo* pki);
    // private System.Void ReadSafeBag(Mono.Security.ASN1 safeBag)
    // Offset: 0x23D7870
    void ReadSafeBag(::Mono::Security::ASN1* safeBag);
    // private Mono.Security.ASN1 CertificateSafeBag(Mono.Security.X509.X509Certificate x509, System.Collections.IDictionary attributes)
    // Offset: 0x23D9588
    ::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate* x509, ::System::Collections::IDictionary* attributes);
    // private System.Byte[] MAC(System.Byte[] password, System.Byte[] salt, System.Int32 iterations, System.Byte[] data)
    // Offset: 0x23D76A0
    ::ArrayW<uint8_t> MAC(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, int iterations, ::ArrayW<uint8_t> data);
    // public System.Byte[] GetBytes()
    // Offset: 0x23DA0B0
    ::ArrayW<uint8_t> GetBytes();
    // private Mono.Security.PKCS7/Mono.Security.ContentInfo EncryptedContentInfo(Mono.Security.ASN1 safeBags, System.String algorithmOid)
    // Offset: 0x23DBF5C
    ::Mono::Security::PKCS7::ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1* safeBags, ::StringW algorithmOid);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x23DBF54
    void AddCertificate(::Mono::Security::X509::X509Certificate* cert);
    // public System.Void AddCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attributes)
    // Offset: 0x23DC23C
    void AddCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attributes);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert)
    // Offset: 0x23DBF4C
    void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert);
    // public System.Void RemoveCertificate(Mono.Security.X509.X509Certificate cert, System.Collections.IDictionary attrs)
    // Offset: 0x23DC470
    void RemoveCertificate(::Mono::Security::X509::X509Certificate* cert, ::System::Collections::IDictionary* attrs);
    // public System.Object Clone()
    // Offset: 0x23DC940
    ::Il2CppObject* Clone();
    // protected override System.Void Finalize()
    // Offset: 0x23D7F40
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Mono.Security.X509.PKCS12
  #pragma pack(pop)
  static check_size<sizeof(PKCS12), 64 + sizeof(::System::Security::Cryptography::RandomNumberGenerator*)> __Mono_Security_X509_PKCS12SizeCheck;
  static_assert(sizeof(PKCS12) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::StringW)>(&Mono::Security::X509::PKCS12::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::get_IterationCount
// Il2CppName: get_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::get_IterationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "get_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::set_IterationCount
// Il2CppName: set_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(int)>(&Mono::Security::X509::PKCS12::set_IterationCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "set_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::get_Certificates
// Il2CppName: get_Certificates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::get_Certificates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "get_Certificates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::get_RNG
// Il2CppName: get_RNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::get_RNG)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "get_RNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::get_MaximumPasswordLength
// Il2CppName: get_MaximumPasswordLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Mono::Security::X509::PKCS12::get_MaximumPasswordLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "get_MaximumPasswordLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::X509::PKCS12::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::Decode)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::Compare)> {
  static const MethodInfo* get() {
    static auto* expected = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* actual = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::GetSymmetricAlgorithm
// Il2CppName: GetSymmetricAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int)>(&Mono::Security::X509::PKCS12::GetSymmetricAlgorithm)> {
  static const MethodInfo* get() {
    static auto* algorithmOid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterationCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "GetSymmetricAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithmOid, salt, iterationCount});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::Decrypt)> {
  static const MethodInfo* get() {
    static auto* algorithmOid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterationCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* encryptedData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithmOid, salt, iterationCount, encryptedData});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::*)(::Mono::Security::PKCS7::EncryptedData*)>(&Mono::Security::X509::PKCS12::Decrypt)> {
  static const MethodInfo* get() {
    static auto* ed = &::il2cpp_utils::GetClassFromName("Mono.Security", "PKCS7/EncryptedData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ed});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::*)(::StringW, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::Encrypt)> {
  static const MethodInfo* get() {
    static auto* algorithmOid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterationCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algorithmOid, salt, iterationCount, data});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::GetExistingParameters
// Il2CppName: GetExistingParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSAParameters (Mono::Security::X509::PKCS12::*)(ByRef<bool>)>(&Mono::Security::X509::PKCS12::GetExistingParameters)> {
  static const MethodInfo* get() {
    static auto* found = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "GetExistingParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{found});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::AddPrivateKey
// Il2CppName: AddPrivateKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::Cryptography::PKCS8::PrivateKeyInfo*)>(&Mono::Security::X509::PKCS12::AddPrivateKey)> {
  static const MethodInfo* get() {
    static auto* pki = &::il2cpp_utils::GetClassFromName("Mono.Security.Cryptography", "PKCS8/PrivateKeyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "AddPrivateKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pki});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::ReadSafeBag
// Il2CppName: ReadSafeBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*)>(&Mono::Security::X509::PKCS12::ReadSafeBag)> {
  static const MethodInfo* get() {
    static auto* safeBag = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "ReadSafeBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeBag});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::CertificateSafeBag
// Il2CppName: CertificateSafeBag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&Mono::Security::X509::PKCS12::CertificateSafeBag)> {
  static const MethodInfo* get() {
    static auto* x509 = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "CertificateSafeBag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x509, attributes});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::MAC
// Il2CppName: MAC
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>)>(&Mono::Security::X509::PKCS12::MAC)> {
  static const MethodInfo* get() {
    static auto* password = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* salt = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* iterations = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "MAC", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{password, salt, iterations, data});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::EncryptedContentInfo
// Il2CppName: EncryptedContentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::PKCS7::ContentInfo* (Mono::Security::X509::PKCS12::*)(::Mono::Security::ASN1*, ::StringW)>(&Mono::Security::X509::PKCS12::EncryptedContentInfo)> {
  static const MethodInfo* get() {
    static auto* safeBags = &::il2cpp_utils::GetClassFromName("Mono.Security", "ASN1")->byval_arg;
    static auto* algorithmOid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "EncryptedContentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{safeBags, algorithmOid});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::AddCertificate
// Il2CppName: AddCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(&Mono::Security::X509::PKCS12::AddCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "AddCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::AddCertificate
// Il2CppName: AddCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&Mono::Security::X509::PKCS12::AddCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    static auto* attributes = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "AddCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert, attributes});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::RemoveCertificate
// Il2CppName: RemoveCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*)>(&Mono::Security::X509::PKCS12::RemoveCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "RemoveCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::RemoveCertificate
// Il2CppName: RemoveCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)(::Mono::Security::X509::X509Certificate*, ::System::Collections::IDictionary*)>(&Mono::Security::X509::PKCS12::RemoveCertificate)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    static auto* attrs = &::il2cpp_utils::GetClassFromName("System.Collections", "IDictionary")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "RemoveCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert, attrs});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::PKCS12::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::PKCS12::*)()>(&Mono::Security::X509::PKCS12::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::PKCS12*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
