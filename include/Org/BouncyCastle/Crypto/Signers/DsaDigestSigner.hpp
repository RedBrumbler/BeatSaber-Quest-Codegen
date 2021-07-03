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
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDsa
  class IDsa;
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IDsaExt
  class IDsaExt;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaEncoding
  class IDsaEncoding;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
  class DsaDigestSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IDsa dsa
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDsa* dsa;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDsa*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaEncoding*) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x28
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DsaDigestSigner
    DsaDigestSigner(Org::BouncyCastle::Crypto::IDsa* dsa_ = {}, Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding_ = {}, bool forSigning_ = {}) noexcept : dsa{dsa_}, digest{digest_}, encoding{encoding_}, forSigning{forSigning_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsa dsa, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x125F57C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDsa* dsa, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaDigestSigner*, creationType>(dsa, digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsaExt dsa, Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding)
    // Offset: 0x125F60C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaDigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDsaExt* dsa, Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaDigestSigner*, creationType>(dsa, digest, encoding)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x125F64C
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x125F854
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x125F930
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x125FCA0
    void Reset();
    // protected Org.BouncyCastle.Math.BigInteger GetOrder()
    // Offset: 0x125FD54
    Org::BouncyCastle::Math::BigInteger* GetOrder();
  }; // Org.BouncyCastle.Crypto.Signers.DsaDigestSigner
  #pragma pack(pop)
  static check_size<sizeof(DsaDigestSigner), 40 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_DsaDigestSignerSizeCheck;
  static_assert(sizeof(DsaDigestSigner) == 0x29);
  // Writing MetadataGetter for method: DsaDigestSigner::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(Org::BouncyCastle::Crypto::IDsa*, Org::BouncyCastle::Crypto::IDigest*)>(&DsaDigestSigner::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDsa*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(Org::BouncyCastle::Crypto::IDsa*, Org::BouncyCastle::Crypto::IDigest*)>(&DsaDigestSigner::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDsa*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>()});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(Org::BouncyCastle::Crypto::IDsaExt*, Org::BouncyCastle::Crypto::IDigest*, Org::BouncyCastle::Crypto::Signers::IDsaEncoding*)>(&DsaDigestSigner::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDsaExt*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(Org::BouncyCastle::Crypto::IDsaExt*, Org::BouncyCastle::Crypto::IDigest*, Org::BouncyCastle::Crypto::Signers::IDsaEncoding*)>(&DsaDigestSigner::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDsaExt*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::IDigest*>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>()});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::Init
  // Il2CppName: Init
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&DsaDigestSigner::Init)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<Org::BouncyCastle::Crypto::ICipherParameters*>()});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::BlockUpdate
  // Il2CppName: BlockUpdate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)(::Array<uint8_t>*, int, int)>(&DsaDigestSigner::BlockUpdate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::GenerateSignature
  // Il2CppName: GenerateSignature
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<uint8_t>* (DsaDigestSigner::*)()>(&DsaDigestSigner::GenerateSignature)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::Reset
  // Il2CppName: Reset
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DsaDigestSigner::*)()>(&DsaDigestSigner::Reset)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: DsaDigestSigner::GetOrder
  // Il2CppName: GetOrder
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (DsaDigestSigner::*)()>(&DsaDigestSigner::GetOrder)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(DsaDigestSigner*), "GetOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*, "Org.BouncyCastle.Crypto.Signers", "DsaDigestSigner");
