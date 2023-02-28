// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: CryptoConvert
  class CryptoConvert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.CryptoConvert
  // [TokenAttribute] Offset: FFFFFFFF
  class CryptoConvert : public ::Il2CppObject {
    public:
    // static private System.Int32 ToInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x23CC720
    static int ToInt32LE(::ArrayW<uint8_t> bytes, int offset);
    // static private System.UInt32 ToUInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x23CC7A0
    static uint ToUInt32LE(::ArrayW<uint8_t> bytes, int offset);
    // static private System.Byte[] Trim(System.Byte[] array)
    // Offset: 0x23CC820
    static ::ArrayW<uint8_t> Trim(::ArrayW<uint8_t> array);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob)
    // Offset: 0x23CB4DC
    static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob, System.Int32 offset)
    // Offset: 0x23CC8F0
    static ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob, int offset);
    // static public System.String ToHex(System.Byte[] input)
    // Offset: 0x23CD02C
    static ::StringW ToHex(::ArrayW<uint8_t> input);
  }; // Mono.Security.Cryptography.CryptoConvert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToInt32LE
// Il2CppName: ToInt32LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::ToInt32LE)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToInt32LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToUInt32LE
// Il2CppName: ToUInt32LE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::ToUInt32LE)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToUInt32LE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::Trim
// Il2CppName: Trim
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::Trim)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "Trim", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  static const MethodInfo* get() {
    static auto* blob = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromCapiPrivateKeyBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blob});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob
// Il2CppName: FromCapiPrivateKeyBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::Cryptography::CryptoConvert::FromCapiPrivateKeyBlob)> {
  static const MethodInfo* get() {
    static auto* blob = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "FromCapiPrivateKeyBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{blob, offset});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::CryptoConvert::ToHex
// Il2CppName: ToHex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::CryptoConvert::ToHex)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::CryptoConvert*), "ToHex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
