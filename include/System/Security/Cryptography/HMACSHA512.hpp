// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HMACSHA512
  class HMACSHA512;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA512);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA512*, "System.Security.Cryptography", "HMACSHA512");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HMACSHA512
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1076E8C
  class HMACSHA512 : public ::System::Security::Cryptography::HMAC {
    public:
    public:
    // private System.Boolean m_useLegacyBlockSize
    // Size: 0x1
    // Offset: 0x61
    bool m_useLegacyBlockSize;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean m_useLegacyBlockSize
    [[deprecated("Use field access instead!")]] bool& dyn_m_useLegacyBlockSize();
    // private System.Int32 get_BlockSize()
    // Offset: 0x24E0990
    int get_BlockSize();
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x24E07C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACSHA512* New_ctor(::ArrayW<uint8_t> key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HMACSHA512::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACSHA512*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x24E0798
    // Implemented from: System.Security.Cryptography.HMAC
    // Base method: System.Void HMAC::.ctor()
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACSHA512* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::HMACSHA512::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACSHA512*, creationType>()));
    }
  }; // System.Security.Cryptography.HMACSHA512
  #pragma pack(pop)
  static check_size<sizeof(HMACSHA512), 97 + sizeof(bool)> __System_Security_Cryptography_HMACSHA512SizeCheck;
  static_assert(sizeof(HMACSHA512) == 0x62);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::HMACSHA512::get_BlockSize
// Il2CppName: get_BlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::HMACSHA512::*)()>(&System::Security::Cryptography::HMACSHA512::get_BlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::HMACSHA512*), "get_BlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::HMACSHA512::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::HMACSHA512::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
