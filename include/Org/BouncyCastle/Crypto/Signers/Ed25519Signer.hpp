// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed25519PrivateKeyParameters
  class Ed25519PrivateKeyParameters;
  // Forward declaring type: Ed25519PublicKeyParameters
  class Ed25519PublicKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed25519Signer
  class Ed25519Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer
    class Buffer;
    // private readonly Org.BouncyCastle.Crypto.Signers.Ed25519Signer/Buffer buffer
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer* buffer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x18
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: privateKey
    char __padding1[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PrivateKeyParameters privateKey
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed25519PublicKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*) == 0x8);
    // Creating value type constructor for type: Ed25519Signer
    Ed25519Signer(Org::BouncyCastle::Crypto::Signers::Ed25519Signer::Buffer* buffer_ = {}, bool forSigning_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* privateKey_ = {}, Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey_ = {}) noexcept : buffer{buffer_}, forSigning{forSigning_}, privateKey{privateKey_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x12621B0
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x1262268
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x126228C
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x1262480
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1262140
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed25519Signer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed25519Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed25519Signer*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.Ed25519Signer
  #pragma pack(pop)
  static check_size<sizeof(Ed25519Signer), 40 + sizeof(Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Signers_Ed25519SignerSizeCheck;
  static_assert(sizeof(Ed25519Signer) == 0x30);
  // Writing MetadataGetter for method: Ed25519Signer::Init
  // Il2CppName: Init
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ed25519Signer::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Ed25519Signer::Init)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
    }
  };
  // Writing MetadataGetter for method: Ed25519Signer::BlockUpdate
  // Il2CppName: BlockUpdate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ed25519Signer::*)(::Array<uint8_t>*, int, int)>(&Ed25519Signer::BlockUpdate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: Ed25519Signer::GenerateSignature
  // Il2CppName: GenerateSignature
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (Ed25519Signer::*)()>(&Ed25519Signer::GenerateSignature)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Ed25519Signer::Reset
  // Il2CppName: Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ed25519Signer::*)()>(&Ed25519Signer::Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Ed25519Signer::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ed25519Signer::*)()>(&Ed25519Signer::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ed25519Signer::*)()>(&Ed25519Signer::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Ed25519Signer*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed25519Signer*, "Org.BouncyCastle.Crypto.Signers", "Ed25519Signer");
