// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: X509CertificateUtility
#include "GlobalNamespace/X509CertificateUtility.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: X509CertificateParser
  class X509CertificateParser;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*, "", "X509CertificateUtility/<GetCertificateList>d__8");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: X509CertificateUtility/<GetCertificateList>d__8
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class X509CertificateUtility::$GetCertificateList$d__8 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>, public ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::System::Security::Cryptography::X509Certificates::X509Certificate2* $$2__current;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::X509Certificates::X509Certificate2*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: certificatePem
    char __padding2[0x4] = {};
    // private System.String certificatePem
    // Size: 0x8
    // Offset: 0x28
    ::StringW certificatePem;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__certificatePem
    // Size: 0x8
    // Offset: 0x30
    ::StringW $$3__certificatePem;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String certificateChainPem
    // Size: 0x8
    // Offset: 0x38
    ::StringW certificateChainPem;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String <>3__certificateChainPem
    // Size: 0x8
    // Offset: 0x40
    ::StringW $$3__certificateChainPem;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Org.BouncyCastle.X509.X509CertificateParser <x509CertificateParser>5__2
    // Size: 0x8
    // Offset: 0x48
    ::Org::BouncyCastle::X509::X509CertificateParser* $x509CertificateParser$5__2;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::X509::X509CertificateParser*) == 0x8);
    // private System.Collections.IEnumerator <>7__wrap2
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::IEnumerator* $$7__wrap2;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(this);
    }
    // Creating interface conversion operator: i_X509Certificate2
    inline ::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* i_X509Certificate2() noexcept {
      return reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Security.Cryptography.X509Certificates.X509Certificate2 <>2__current
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::X509Certificates::X509Certificate2*& dyn_$$2__current();
    // Get instance field reference: private System.Int32 <>l__initialThreadId
    [[deprecated("Use field access instead!")]] int& dyn_$$l__initialThreadId();
    // Get instance field reference: private System.String certificatePem
    [[deprecated("Use field access instead!")]] ::StringW& dyn_certificatePem();
    // Get instance field reference: public System.String <>3__certificatePem
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$$3__certificatePem();
    // Get instance field reference: private System.String certificateChainPem
    [[deprecated("Use field access instead!")]] ::StringW& dyn_certificateChainPem();
    // Get instance field reference: public System.String <>3__certificateChainPem
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$$3__certificateChainPem();
    // Get instance field reference: private Org.BouncyCastle.X509.X509CertificateParser <x509CertificateParser>5__2
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::X509::X509CertificateParser*& dyn_$x509CertificateParser$5__2();
    // Get instance field reference: private System.Collections.IEnumerator <>7__wrap2
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn_$$7__wrap2();
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current()
    // Offset: 0x26A8C68
    ::System::Security::Cryptography::X509Certificates::X509Certificate2* System_Collections_Generic_IEnumerator$System_Security_Cryptography_X509Certificates_X509Certificate2$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x26A8CD0
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x26A7718
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateUtility::$GetCertificateList$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateUtility::$GetCertificateList$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x26A86E0
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x26A87C8
    bool MoveNext();
    // private System.Void <>m__Finally1()
    // Offset: 0x26A86FC
    void $$m__Finally1();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x26A8C70
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.Generic.IEnumerator`1<System.Security.Cryptography.X509Certificates.X509Certificate2> System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator()
    // Offset: 0x26A8CD8
    ::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* System_Collections_Generic_IEnumerable$System_Security_Cryptography_X509Certificates_X509Certificate2$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x26A8D8C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // X509CertificateUtility/<GetCertificateList>d__8
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateUtility::$GetCertificateList$d__8), 80 + sizeof(::System::Collections::IEnumerator*)> __GlobalNamespace_X509CertificateUtility_$GetCertificateList$d__8SizeCheck;
  static_assert(sizeof(X509CertificateUtility::$GetCertificateList$d__8) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_Generic_IEnumerator$System_Security_Cryptography_X509Certificates_X509Certificate2$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_Generic_IEnumerator$System_Security_Cryptography_X509Certificates_X509Certificate2$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::$$m__Finally1
// Il2CppName: <>m__Finally1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::$$m__Finally1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "<>m__Finally1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_Generic_IEnumerable$System_Security_Cryptography_X509Certificates_X509Certificate2$_GetEnumerator
// Il2CppName: System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Security::Cryptography::X509Certificates::X509Certificate2*>* (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_Generic_IEnumerable$System_Security_Cryptography_X509Certificates_X509Certificate2$_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::*)()>(&GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::X509CertificateUtility::$GetCertificateList$d__8*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
