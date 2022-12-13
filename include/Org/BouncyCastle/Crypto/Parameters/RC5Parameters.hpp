// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RC5Parameters
  class RC5Parameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*, "Org.BouncyCastle.Crypto.Parameters", "RC5Parameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RC5Parameters
  // [TokenAttribute] Offset: FFFFFFFF
  class RC5Parameters : public ::Org::BouncyCastle::Crypto::Parameters::KeyParameter {
    public:
    public:
    // private readonly System.Int32 rounds
    // Size: 0x4
    // Offset: 0x18
    int rounds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::ArrayW<uint8_t>
    constexpr operator ::ArrayW<uint8_t>() const noexcept = delete;
    // Get instance field reference: private readonly System.Int32 rounds
    [[deprecated("Use field access instead!")]] int& dyn_rounds();
    // public System.Int32 get_Rounds()
    // Offset: 0x166CA70
    int get_Rounds();
  }; // Org.BouncyCastle.Crypto.Parameters.RC5Parameters
  #pragma pack(pop)
  static check_size<sizeof(RC5Parameters), 24 + sizeof(int)> __Org_BouncyCastle_Crypto_Parameters_RC5ParametersSizeCheck;
  static_assert(sizeof(RC5Parameters) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds
// Il2CppName: get_Rounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::RC5Parameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::RC5Parameters*), "get_Rounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
