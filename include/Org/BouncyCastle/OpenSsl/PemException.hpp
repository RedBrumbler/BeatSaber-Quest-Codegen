// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Forward declaring type: PemException
  class PemException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemException*, "Org.BouncyCastle.OpenSsl", "PemException");
// Type namespace: Org.BouncyCastle.OpenSsl
namespace Org::BouncyCastle::OpenSsl {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.OpenSsl.PemException
  // [TokenAttribute] Offset: FFFFFFFF
  class PemException : public ::System::IO::IOException {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0x18071DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::OpenSsl::PemException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.OpenSsl.PemException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::OpenSsl::PemException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
