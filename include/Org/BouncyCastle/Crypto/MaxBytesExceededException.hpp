// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.CryptoException
#include "Org/BouncyCastle/Crypto/CryptoException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: MaxBytesExceededException
  class MaxBytesExceededException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::MaxBytesExceededException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::MaxBytesExceededException*, "Org.BouncyCastle.Crypto", "MaxBytesExceededException");
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.MaxBytesExceededException
  // [TokenAttribute] Offset: FFFFFFFF
  class MaxBytesExceededException : public ::Org::BouncyCastle::Crypto::CryptoException {
    public:
    // public System.Void .ctor()
    // Offset: 0x1ECE008
    // Implemented from: Org.BouncyCastle.Crypto.CryptoException
    // Base method: System.Void CryptoException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaxBytesExceededException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::MaxBytesExceededException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaxBytesExceededException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1ECE010
    // Implemented from: Org.BouncyCastle.Crypto.CryptoException
    // Base method: System.Void CryptoException::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaxBytesExceededException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::MaxBytesExceededException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaxBytesExceededException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Crypto.MaxBytesExceededException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::MaxBytesExceededException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::MaxBytesExceededException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
