// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ParametersWithRandom
  class ParametersWithRandom;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithRandom");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
  // [TokenAttribute] Offset: FFFFFFFF
  class ParametersWithRandom : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private readonly Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::ICipherParameters
    operator ::Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Creating interface conversion operator: i_ICipherParameters
    inline ::Org::BouncyCastle::Crypto::ICipherParameters* i_ICipherParameters() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::ICipherParameters*& dyn_parameters();
    // Get instance field reference: private readonly Org.BouncyCastle.Security.SecureRandom random
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // public Org.BouncyCastle.Security.SecureRandom get_Random()
    // Offset: 0x166C9AC
    ::Org::BouncyCastle::Security::SecureRandom* get_Random();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x166C9B4
    ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
  #pragma pack(pop)
  static check_size<sizeof(ParametersWithRandom), 24 + sizeof(::Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithRandomSizeCheck;
  static_assert(sizeof(ParametersWithRandom) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random
// Il2CppName: get_Random
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Security::SecureRandom* (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Random)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*), "get_Random", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::*)()>(&Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
