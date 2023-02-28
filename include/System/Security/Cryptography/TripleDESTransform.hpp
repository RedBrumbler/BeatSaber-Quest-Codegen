// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Cryptography.SymmetricTransform
#include "Mono/Security/Cryptography/SymmetricTransform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DESTransform
  class DESTransform;
  // Forward declaring type: TripleDES
  class TripleDES;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: TripleDESTransform
  class TripleDESTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::TripleDESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDESTransform*, "System.Security.Cryptography", "TripleDESTransform");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.TripleDESTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
    public:
    public:
    // private System.Security.Cryptography.DESTransform E1
    // Size: 0x8
    // Offset: 0x58
    ::System::Security::Cryptography::DESTransform* E1;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D2
    // Size: 0x8
    // Offset: 0x60
    ::System::Security::Cryptography::DESTransform* D2;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform E3
    // Size: 0x8
    // Offset: 0x68
    ::System::Security::Cryptography::DESTransform* E3;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D1
    // Size: 0x8
    // Offset: 0x70
    ::System::Security::Cryptography::DESTransform* D1;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform E2
    // Size: 0x8
    // Offset: 0x78
    ::System::Security::Cryptography::DESTransform* E2;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    // private System.Security.Cryptography.DESTransform D3
    // Size: 0x8
    // Offset: 0x80
    ::System::Security::Cryptography::DESTransform* D3;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DESTransform*) == 0x8);
    public:
    // Get instance field reference: private System.Security.Cryptography.DESTransform E1
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_E1();
    // Get instance field reference: private System.Security.Cryptography.DESTransform D2
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_D2();
    // Get instance field reference: private System.Security.Cryptography.DESTransform E3
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_E3();
    // Get instance field reference: private System.Security.Cryptography.DESTransform D1
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_D1();
    // Get instance field reference: private System.Security.Cryptography.DESTransform E2
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_E2();
    // Get instance field reference: private System.Security.Cryptography.DESTransform D3
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DESTransform*& dyn_D3();
    // public System.Void .ctor(System.Security.Cryptography.TripleDES algo, System.Boolean encryption, System.Byte[] key, System.Byte[] iv)
    // Offset: 0x1C31FD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TripleDESTransform* New_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::TripleDESTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TripleDESTransform*, creationType>(algo, encryption, key, iv)));
    }
    // static System.Byte[] GetStrongKey()
    // Offset: 0x1C325D8
    static ::ArrayW<uint8_t> GetStrongKey();
    // protected override System.Void ECB(System.Byte[] input, System.Byte[] output)
    // Offset: 0x1C32690
    // Implemented from: Mono.Security.Cryptography.SymmetricTransform
    // Base method: System.Void SymmetricTransform::ECB(System.Byte[] input, System.Byte[] output)
    void ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output);
  }; // System.Security.Cryptography.TripleDESTransform
  #pragma pack(pop)
  static check_size<sizeof(TripleDESTransform), 128 + sizeof(::System::Security::Cryptography::DESTransform*)> __System_Security_Cryptography_TripleDESTransformSizeCheck;
  static_assert(sizeof(TripleDESTransform) == 0x88);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::GetStrongKey
// Il2CppName: GetStrongKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)()>(&System::Security::Cryptography::TripleDESTransform::GetStrongKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDESTransform*), "GetStrongKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::TripleDESTransform::ECB
// Il2CppName: ECB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::TripleDESTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::TripleDESTransform::ECB)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::TripleDESTransform*), "ECB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
