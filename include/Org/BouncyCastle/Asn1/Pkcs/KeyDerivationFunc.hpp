// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Skipping declaration: Asn1Encodable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: KeyDerivationFunc
  class KeyDerivationFunc;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc*, "Org.BouncyCastle.Asn1.Pkcs", "KeyDerivationFunc");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyDerivationFunc : public ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier {
    public:
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1D84898
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyDerivationFunc*, creationType>(seq)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier id, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    // Offset: 0x1D848A0
    // Implemented from: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
    // Base method: System.Void AlgorithmIdentifier::.ctor(Org.BouncyCastle.Asn1.DerObjectIdentifier id, Org.BouncyCastle.Asn1.Asn1Encodable parameters)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyDerivationFunc* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* id, ::Org::BouncyCastle::Asn1::Asn1Encodable* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyDerivationFunc*, creationType>(id, parameters)));
    }
  }; // Org.BouncyCastle.Asn1.Pkcs.KeyDerivationFunc
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
