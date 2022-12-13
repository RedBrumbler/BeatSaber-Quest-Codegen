// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
#include "Org/BouncyCastle/Asn1/Pkcs/CertificationRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Utilities::Collections
namespace Org::BouncyCastle::Utilities::Collections {
  // Forward declaring type: ISet
  class ISet;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: RsassaPssParameters
  class RsassaPssParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Forward declaring type: Pkcs10CertificationRequest
  class Pkcs10CertificationRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest");
// Type namespace: Org.BouncyCastle.Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class Pkcs10CertificationRequest : public ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequest {
    public:
    // Get static field: static protected readonly System.Collections.IDictionary algorithms
    static ::System::Collections::IDictionary* _get_algorithms();
    // Set static field: static protected readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(::System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary exParams
    static ::System::Collections::IDictionary* _get_exParams();
    // Set static field: static protected readonly System.Collections.IDictionary exParams
    static void _set_exParams(::System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary keyAlgorithms
    static ::System::Collections::IDictionary* _get_keyAlgorithms();
    // Set static field: static protected readonly System.Collections.IDictionary keyAlgorithms
    static void _set_keyAlgorithms(::System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary oids
    static ::System::Collections::IDictionary* _get_oids();
    // Set static field: static protected readonly System.Collections.IDictionary oids
    static void _set_oids(::System::Collections::IDictionary* value);
    // Get static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
    static ::Org::BouncyCastle::Utilities::Collections::ISet* _get_noParams();
    // Set static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
    static void _set_noParams(::Org::BouncyCastle::Utilities::Collections::ISet* value);
    // static private System.Void .cctor()
    // Offset: 0x17FB328
    static void _cctor();
    // public System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x17F8CCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs10CertificationRequest* New_ctor(::ArrayW<uint8_t> encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs10CertificationRequest*, creationType>(encoded)));
    }
    // static private Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters CreatePssParams(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgId, System.Int32 saltSize)
    // Offset: 0x17FE4E4
    static ::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int saltSize);
  }; // Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::CreatePssParams
// Il2CppName: CreatePssParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int)>(&Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::CreatePssParams)> {
  static const MethodInfo* get() {
    static auto* hashAlgId = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1.X509", "AlgorithmIdentifier")->byval_arg;
    static auto* saltSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*), "CreatePssParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashAlgId, saltSize});
  }
};
