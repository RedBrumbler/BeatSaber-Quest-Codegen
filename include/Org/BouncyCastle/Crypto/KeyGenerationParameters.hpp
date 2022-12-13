// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: KeyGenerationParameters
  class KeyGenerationParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::KeyGenerationParameters*, "Org.BouncyCastle.Crypto", "KeyGenerationParameters");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.KeyGenerationParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyGenerationParameters : public ::Il2CppObject {
    public:
    public:
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    // private System.Int32 strength
    // Size: 0x4
    // Offset: 0x18
    int strength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // Get instance field reference: private System.Int32 strength
    [[deprecated("Use field access instead!")]] int& dyn_strength();
    // public Org.BouncyCastle.Security.SecureRandom get_Random()
    // Offset: 0x1EB6724
    ::Org::BouncyCastle::Security::SecureRandom* get_Random();
    // public System.Int32 get_Strength()
    // Offset: 0x1EB672C
    int get_Strength();
    // public System.Void .ctor(Org.BouncyCastle.Security.SecureRandom random, System.Int32 strength)
    // Offset: 0x1EB6640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyGenerationParameters* New_ctor(::Org::BouncyCastle::Security::SecureRandom* random, int strength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::KeyGenerationParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyGenerationParameters*, creationType>(random, strength)));
    }
  }; // Org.BouncyCastle.Crypto.KeyGenerationParameters
  #pragma pack(pop)
  static check_size<sizeof(KeyGenerationParameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_KeyGenerationParametersSizeCheck;
  static_assert(sizeof(KeyGenerationParameters) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random
// Il2CppName: get_Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Random)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::KeyGenerationParameters*), "get_Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength
// Il2CppName: get_Strength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::KeyGenerationParameters::*)()>(&Org::BouncyCastle::Crypto::KeyGenerationParameters::get_Strength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::KeyGenerationParameters*), "get_Strength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::KeyGenerationParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
