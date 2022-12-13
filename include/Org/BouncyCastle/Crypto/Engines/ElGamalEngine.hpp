// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalKeyParameters
  class ElGamalKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ElGamalEngine
  class ElGamalEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ElGamalEngine*, "Org.BouncyCastle.Crypto.Engines", "ElGamalEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.ElGamalEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class ElGamalEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    public:
    // private Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters key
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters* key;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x20
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: bitSize
    char __padding2[0x3] = {};
    // private System.Int32 bitSize
    // Size: 0x4
    // Offset: 0x24
    int bitSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IAsymmetricBlockCipher
    inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i_IAsymmetricBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters key
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters*& dyn_key();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // Get instance field reference: private System.Boolean forEncryption
    [[deprecated("Use field access instead!")]] bool& dyn_forEncryption();
    // Get instance field reference: private System.Int32 bitSize
    [[deprecated("Use field access instead!")]] int& dyn_bitSize();
    // public System.Void .ctor()
    // Offset: 0x24047BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElGamalEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::ElGamalEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElGamalEngine*, creationType>()));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x2404030
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x2404260
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x24042A0
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x24042E0
    ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> input, int inOff, int length);
  }; // Org.BouncyCastle.Crypto.Engines.ElGamalEngine
  #pragma pack(pop)
  static check_size<sizeof(ElGamalEngine), 36 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_ElGamalEngineSizeCheck;
  static_assert(sizeof(ElGamalEngine) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ElGamalEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ElGamalEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::ElGamalEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::ElGamalEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ElGamalEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ElGamalEngine::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ElGamalEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ElGamalEngine::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ElGamalEngine*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ElGamalEngine::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::ElGamalEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::ElGamalEngine::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ElGamalEngine*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::ElGamalEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::ElGamalEngine::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Engines::ElGamalEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::ElGamalEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, length});
  }
};
