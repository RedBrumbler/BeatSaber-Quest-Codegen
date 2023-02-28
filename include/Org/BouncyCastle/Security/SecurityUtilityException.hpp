// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecurityUtilityException
  class SecurityUtilityException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Security::SecurityUtilityException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::SecurityUtilityException*, "Org.BouncyCastle.Security", "SecurityUtilityException");
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.SecurityUtilityException
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityUtilityException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x185E5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityUtilityException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::SecurityUtilityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityUtilityException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x184BB7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityUtilityException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Security::SecurityUtilityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityUtilityException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Security.SecurityUtilityException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecurityUtilityException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Security::SecurityUtilityException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
