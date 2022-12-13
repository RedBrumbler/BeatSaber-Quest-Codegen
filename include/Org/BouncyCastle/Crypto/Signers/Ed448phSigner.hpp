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
  // Forward declaring type: IXof
  class IXof;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
  // Forward declaring type: Ed448PublicKeyParameters
  class Ed448PublicKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: Ed448phSigner
  class Ed448phSigner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Ed448phSigner);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Ed448phSigner*, "Org.BouncyCastle.Crypto.Signers", "Ed448phSigner");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448phSigner
  // [TokenAttribute] Offset: FFFFFFFF
  class Ed448phSigner : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IXof prehash
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IXof* prehash;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IXof*) == 0x8);
    // private readonly System.Byte[] context
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> context;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x20
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forSigning and: privateKey
    char __padding2[0x7] = {};
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters publicKey
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters* publicKey;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ISigner
    operator ::Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Creating interface conversion operator: i_ISigner
    inline ::Org::BouncyCastle::Crypto::ISigner* i_ISigner() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IXof prehash
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IXof*& dyn_prehash();
    // Get instance field reference: private readonly System.Byte[] context
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_context();
    // Get instance field reference: private System.Boolean forSigning
    [[deprecated("Use field access instead!")]] bool& dyn_forSigning();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters*& dyn_privateKey();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Ed448PublicKeyParameters publicKey
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*& dyn_publicKey();
    // public System.Void .ctor(System.Byte[] context)
    // Offset: 0x1672780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448phSigner* New_ctor(::ArrayW<uint8_t> context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::Ed448phSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448phSigner*, creationType>(context)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1672834
    void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x1672998
    void BlockUpdate(::ArrayW<uint8_t> buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x1672A74
    ::ArrayW<uint8_t> GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x16728E4
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Ed448phSigner
  #pragma pack(pop)
  static check_size<sizeof(Ed448phSigner), 48 + sizeof(::Org::BouncyCastle::Crypto::Parameters::Ed448PublicKeyParameters*)> __Org_BouncyCastle_Crypto_Signers_Ed448phSignerSizeCheck;
  static_assert(sizeof(Ed448phSigner) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::BlockUpdate
// Il2CppName: BlockUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::BlockUpdate)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* off = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "BlockUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf, off, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::GenerateSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Ed448phSigner::*)()>(&Org::BouncyCastle::Crypto::Signers::Ed448phSigner::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Ed448phSigner*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
