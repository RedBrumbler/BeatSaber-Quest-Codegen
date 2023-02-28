// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: X931Signer
  class X931Signer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::X931Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::X931Signer*, "Org.BouncyCastle.Crypto.Signers", "X931Signer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.X931Signer
  // [TokenAttribute] Offset: FFFFFFFF
  class X931Signer : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    public:
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters kParam
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* kParam;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // private System.Int32 trailer
    // Size: 0x4
    // Offset: 0x28
    int trailer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyBits
    // Size: 0x4
    // Offset: 0x2C
    int keyBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] block
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> block;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ISigner
    operator ::Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Creating interface conversion operator: i_ISigner
    inline ::Org::BouncyCastle::Crypto::ISigner* i_ISigner() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.IDigest digest
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IDigest*& dyn_digest();
    // Get instance field reference: private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*& dyn_cipher();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters kParam
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& dyn_kParam();
    // Get instance field reference: private System.Int32 trailer
    [[deprecated("Use field access instead!")]] int& dyn_trailer();
    // Get instance field reference: private System.Int32 keyBits
    [[deprecated("Use field access instead!")]] int& dyn_keyBits();
    // Get instance field reference: private System.Byte[] block
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_block();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Boolean isImplicit)
    // Offset: 0x1686A7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X931Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::X931Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X931Signer*, creationType>(cipher, digest, isImplicit)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x1686B8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X931Signer* New_ctor(::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, ::Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::X931Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X931Signer*, creationType>(cipher, digest)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1686B94
    void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0x1686CF4
    void ClearBlock(::ArrayW<uint8_t> block);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 off, System.Int32 len)
    // Offset: 0x1686D18
    void BlockUpdate(::ArrayW<uint8_t> input, int off, int len);
    // public System.Void Reset()
    // Offset: 0x1686DF4
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x1686EA8
    ::ArrayW<uint8_t> GenerateSignature();
    // private System.Void CreateSignatureBlock()
    // Offset: 0x168700C
    void CreateSignatureBlock();
  }; // Org.BouncyCastle.Crypto.Signers.X931Signer
  #pragma pack(pop)
  static check_size<sizeof(X931Signer), 48 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Crypto_Signers_X931SignerSizeCheck;
  static_assert(sizeof(X931Signer) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::X931Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::X931Signer::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::ClearBlock
// Il2CppName: ClearBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::X931Signer::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::X931Signer::ClearBlock)> {
  static const MethodInfo* get() {
    static auto* block = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "ClearBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{block});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::X931Signer::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::X931Signer::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::X931Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::X931Signer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::X931Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::X931Signer::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::X931Signer::CreateSignatureBlock
// Il2CppName: CreateSignatureBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::X931Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::X931Signer::CreateSignatureBlock)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::X931Signer*), "CreateSignatureBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
