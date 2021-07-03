// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequest
#include "Org/BouncyCastle/Asn1/Pkcs/CertificationRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
  class Pkcs10CertificationRequest : public Org::BouncyCastle::Asn1::Pkcs::CertificationRequest {
    public:
    // Creating value type constructor for type: Pkcs10CertificationRequest
    Pkcs10CertificationRequest() noexcept {}
    // Get static field: static protected readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static protected readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary exParams
    static System::Collections::IDictionary* _get_exParams();
    // Set static field: static protected readonly System.Collections.IDictionary exParams
    static void _set_exParams(System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary keyAlgorithms
    static System::Collections::IDictionary* _get_keyAlgorithms();
    // Set static field: static protected readonly System.Collections.IDictionary keyAlgorithms
    static void _set_keyAlgorithms(System::Collections::IDictionary* value);
    // Get static field: static protected readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static protected readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // Get static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
    static Org::BouncyCastle::Utilities::Collections::ISet* _get_noParams();
    // Set static field: static protected readonly Org.BouncyCastle.Utilities.Collections.ISet noParams
    static void _set_noParams(Org::BouncyCastle::Utilities::Collections::ISet* value);
    // static private System.Void .cctor()
    // Offset: 0x134641C
    static void _cctor();
    // static private Org.BouncyCastle.Asn1.Pkcs.RsassaPssParameters CreatePssParams(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier hashAlgId, System.Int32 saltSize)
    // Offset: 0x13495D8
    static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* CreatePssParams(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgId, int saltSize);
    // public System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x1343DC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pkcs10CertificationRequest* New_ctor(::Array<uint8_t>* encoded) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pkcs10CertificationRequest*, creationType>(encoded)));
    }
  }; // Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
  #pragma pack(pop)
  // Writing MetadataGetter for method: Pkcs10CertificationRequest::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Pkcs10CertificationRequest::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Pkcs10CertificationRequest*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Pkcs10CertificationRequest::CreatePssParams
  // Il2CppName: CreatePssParams
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters* (*)(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, int)>(&Pkcs10CertificationRequest::CreatePssParams)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Pkcs10CertificationRequest*), "CreatePssParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Pkcs10CertificationRequest::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pkcs10CertificationRequest::*)(::Array<uint8_t>*)>(&Pkcs10CertificationRequest::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Pkcs10CertificationRequest*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pkcs10CertificationRequest::*)(::Array<uint8_t>*)>(&Pkcs10CertificationRequest::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Pkcs10CertificationRequest*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest*, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest");
